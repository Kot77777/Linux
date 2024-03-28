.PHONY: all clean install uninstall

all: paper.pdf

clean:
	rm*.o paper

install:
	install ./paper /usr/local/bin

uninstall:
	rm /usr/local/bin/paper

paper.pdf: paper.tex plot-data.png
	pdflatex paper.tex

plot-%.png: %.dat plot.py
	python3 plot.py -i $*.dat -o $@

