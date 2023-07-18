from __future__ import with_statement     
from contextlib import contextmanager
from threading import Lock

# Описание менеджера контекста
@contextmanager
def locked(lock):
    lock.acquire()
    try:
        yield
    finally:
        lock.release()

# Определение блокировки
myLock = Lock()

# Применение оператора
with locked(myLock):
    #
    print 
    #
