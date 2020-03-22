import time

class AverageMeter(object):
    """Computes and stores the average and current value"""

    def __init__(self, record_len=200):
        self.val = 0 # the latest value
        self.avg = 0
        self.val_all = []
        self.count = 0
        self.record_len = record_len

    def reset(self):
        self.val = 0
        self.avg = 0
        self.val_all = []
        self.count = 0

    def update(self, val, n=1):
        self.val = val
        self.val_all.append(val)
        self.count += n
        self.avg = sum(self.val_all[-self.record_len:]) / len(self.val_all[-self.record_len:])
        return time.time()

    def __str__(self):
        return f'{self.avg}'
