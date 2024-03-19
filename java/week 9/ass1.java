    public SquareThread(int begin, int end) {
        this.begin = begin;
        this.end = end;
    }

    @Override
    public synchronized void run() {
        if (begin <= end) {
            for (int i = begin; i <= end; i++) {
                System.out.println(i * i);
            }
        } else {
            for (int i = begin; i >= end; i--) {
                System.out.println (i * i);
            }
        }
    }

