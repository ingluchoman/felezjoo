/* WARNING: Restarted to delay deadcode elimination for space: mem */

void Reset(undefined2 R21R20,undefined2 R19R18,byte *R13R12,uint R11R10,byte *R9R8)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint *puVar5;
  uint uVar6;
  undefined uVar7;
  undefined uVar8;
  uint uVar9;
  undefined *puVar10;
  byte *pbVar11;
  byte **ppbVar12;
  bool bVar13;
  
  write_volatile_1(EEARH,0);
  write_volatile_1(MCUCR,1);
  write_volatile_1(MCUCR,0);
  watchdog_reset();
  bVar4 = read_volatile_1(MCUSR);
  write_volatile_1(MCUSR,bVar4 & 0xf7);
  write_volatile_1(DAT_mem_0060,0x18);
  write_volatile_1(DAT_mem_0060,0);
  Z = (byte *)0x51e;
  while( true ) {
    uVar9 = (uint)Z;
    puVar5 = (uint *)((uint)Z >> 1);
    uVar6 = (uint)Z & 1;
    Z = (byte *)((int)Z + 1);
    W = (undefined1 *)
        (*puVar5 >> uVar6 * 8 & 0xff | (*(uint *)((uint)Z >> 1) >> ((uint)Z & 1) * 8) << 8);
    Z = (byte *)(uVar9 + 2);
    if (W == (undefined1 *)0x0) break;
    puVar5 = (uint *)((uint)Z >> 1);
    uVar6 = (uint)Z & 1;
    Z = (byte *)(uVar9 + 3);
    X = (byte *)(*puVar5 >> uVar6 * 8 & 0xff | (*(uint *)((uint)Z >> 1) >> ((uint)Z & 1) * 8) << 8) ;
    Z = (byte *)(uVar9 + 4);
    puVar5 = (uint *)((uint)Z >> 1);
    uVar6 = (uint)Z & 1;
    Z = (byte *)(uVar9 + 5);
    R1R0 = *puVar5 >> uVar6 * 8 & 0xff | (*(uint *)((uint)Z >> 1) >> ((uint)Z & 1) * 8) << 8;
    Z = (byte *)(uVar9 + 6);
    R23R22 = (uint)Z;
    Z = (byte *)R1R0;
    do {
      puVar10 = X;
      uVar6 = *(uint *)((uint)Z >> 1) >> ((uint)Z & 1) * 8 & 0xff;
      R1R0 = R1R0 & 0xff00 | uVar6;
      Z = (byte *)((int)Z + 1);
      X = X + 1;
      R1R0._0_1_ = (byte)uVar6;
      *puVar10 = (byte)R1R0;
      W = (undefined1 *)((int)W - 1);
    } while (W != (undefined1 *)0x0);
    Z = (byte *)R23R22;
  }
  X = (byte *)0x0;
  Z = (byte *)0x122;
  DAT_mem_08ff = 0x25;
  DAT_mem_08fe = 0x10;
  FUN_code_294b();
  R19R18._1_1_ = '\0';
  R19R18._0_1_ = 0;
  R21R20._1_1_ = 0;
  R21R20._0_1_ = 0;
  X = (byte *)0x4;
  DAT_mem_08ff = 0x2d;
  DAT_mem_08fe = 0x10;
  FUN_code_290d();
  R13R12 = Z;
  bVar4 = read_volatile_1(ADCW);
  write_volatile_1(ADCW,bVar4 | 4);
  bVar4 = read_volatile_1(DAT_mem_0025);
  write_volatile_1(DAT_mem_0025,bVar4 | 4);
  X._0_1_ = 4;
  X._1_1_ = 0;
  DAT_mem_08ff = 0x34;
  DAT_mem_08fe = 0x10;
  FUN_code_290d();
  if (Z == (byte *)0x0) {
LAB_code_103a:
    X._0_1_ = 0;
    X._1_1_ = 0;
    DAT_mem_08ff = 0x3e;
    DAT_mem_08fe = 0x10;
    FUN_code_290d();
    pbVar11 = Z;
    Z = Z + -0x23;
    if (&DDRE < pbVar11) {
      X = (byte *)0x0;
      DAT_mem_08ff = 0x44;
      DAT_mem_08fe = 0x10;
      FUN_code_290d();
      if (Z._1_1_ < 3 || (byte)(Z._1_1_ - 3) < ((byte)Z < 0xe8)) goto LAB_code_1050;
    }
    X._0_1_ = 4;
    X._1_1_ = 0;
    Z = (byte *)0x7df;
    DAT_mem_08ff = 0x50;
    DAT_mem_08fe = 0x10;
    FUN_code_291d();
  }
  else if ((byte)Z == -1 && Z._1_1_ == (byte)(((byte)Z != -1) + -1)) goto LAB_code_103a;
LAB_code_1050:
  X = (byte *)0x4;
  DAT_mem_08ff = 0x54;
  DAT_mem_08fe = 0x10;
  FUN_code_290d();
  DAT_mem_0549 = (byte)Z;
  DAT_mem_054a = Z._1_1_;
  X = (byte *)0x0;
  DAT_mem_08ff = 0x5c;
  DAT_mem_08fe = 0x10;
  FUN_code_290d();
  pbVar11 = Z;
  Z = Z + -0x23;
  if (&PORTE <= pbVar11) {
    Z._0_1_ = (byte)pbVar11;
    X._1_1_ = (byte)((uint)pbVar11 >> 8);
    Z = pbVar11;
    if (X._1_1_ < 3 || (byte)(X._1_1_ - 3) < ((byte)Z < 0xe8)) {
      X = (byte *)0x0;
      DAT_mem_08ff = 0x69;
      DAT_mem_08fe = 0x10;
      FUN_code_290d();
      R5R4 = Z;
      X = (byte *)0x2;
      DAT_mem_08ff = 0x6e;
      DAT_mem_08fe = 0x10;
      FUN_code_290d();
      if ((((byte)Z < 100) <= Z._1_1_) && (Z._1_1_ == 0 || (byte)(Z._1_1_ - 1) < ((byte)Z < 0xf5)) )
      {
        X = (byte *)0x2;
        DAT_mem_08ff = 0x7b;
        DAT_mem_08fe = 0x10;
        FUN_code_290d();
        R9R8 = Z;
      }
      X = (byte *)0x6;
      DAT_mem_08ff = 0x80;
      DAT_mem_08fe = 0x10;
      FUN_code_2911();
      if ((-1 < (char)(byte)Z) && ((char)(byte)Z < '\v')) {
        X = (byte *)0x6;
        DAT_mem_08ff = 0x89;
        DAT_mem_08fe = 0x10;
        FUN_code_2911();
        DAT_mem_063e = (byte)Z;
      }
      X = (byte *)0x7;
      DAT_mem_08ff = 0x8f;
      DAT_mem_08fe = 0x10;
      FUN_code_2911();
      if ((-1 < (char)(byte)Z) && ((char)(byte)Z < '\v')) {
        X = (byte *)0x7;
        DAT_mem_08ff = 0x98;
        DAT_mem_08fe = 0x10;
        FUN_code_2911();
        DAT_mem_063f = (byte)Z;
      }
      X = (byte *)0xf;
      DAT_mem_08ff = 0x9e;
      DAT_mem_08fe = 0x10;
      FUN_code_2911();
      if (((byte)Z != 0) && ((byte)Z < 0x15)) {
        X = (byte *)0xf;
        DAT_mem_08ff = 0xa7;
        DAT_mem_08fe = 0x10;
        FUN_code_2911();
        DAT_mem_0627 = (byte)Z;
      }
      X = (byte *)0x9;
      DAT_mem_08ff = 0xad;
      DAT_mem_08fe = 0x10;
      FUN_code_2911();
      R1R0 = R1R0 & 0xff | (int)Z << 8;
      if ((-1 < (char)(byte)Z) && ((char)(byte)Z < 'c')) {
        X = (byte *)0xb;
        DAT_mem_08ff = 0xb6;
        DAT_mem_08fe = 0x10;
        FUN_code_2911();
        uVar6 = R1R0 & 0xff00;
        uVar9 = (uint)Z & 0xff;
        R1R0 = uVar6 | uVar9;
        R1R0._1_1_ = (char)(uVar6 >> 8);
        bVar4 = 0x70 - R1R0._1_1_;
        Z = (byte *)((uint)Z & 0xff00 | (uint)bVar4);
        R1R0._0_1_ = (byte)uVar9;
        if ((bool)((char)((byte)R1R0 - bVar4) < '\0' ^ SBORROW1((byte)R1R0,bVar4))) {
          X = (byte *)0x9;
          DAT_mem_08ff = 0xc0;
          DAT_mem_08fe = 0x10;
          FUN_code_2911();
          DAT_mem_0641 = (byte)Z;
        }
      }
      X = (byte *)0xa;
      DAT_mem_08ff = 0xc6;
      DAT_mem_08fe = 0x10;
      FUN_code_2911();
      if (('\0' < (char)(byte)Z) && ((char)(byte)Z < '\r')) {
        X = (byte *)0xa;
        DAT_mem_08ff = 0xcf;
        DAT_mem_08fe = 0x10;
        FUN_code_2911();
        DAT_mem_0654 = (byte)Z;
      }
      X._0_1_ = 0xb;
      X._1_1_ = 0;
      DAT_mem_08ff = 0xd5;
      DAT_mem_08fe = 0x10;
      FUN_code_2911();
      if (('\t' < (char)(byte)Z) && ((char)(byte)Z < 'c')) {
        R1R0 = R1R0 & 0xff00 | (uint)Z & 0xff;
        X = (byte *)0x9;
        DAT_mem_08ff = 0xde;
        DAT_mem_08fe = 0x10;
        FUN_code_2911();
        X._0_1_ = 'p';
        DAT_mem_08ff = 0xe1;
        DAT_mem_08fe = 0x10;
        FUN_code_2909();
        Z._0_1_ = (byte)Z - (byte)X;
        Z = (byte *)((uint)Z & 0xff00 | (uint)(byte)Z);
        if ((bool)((char)((byte)R1R0 - (byte)Z) < '\0' ^ SBORROW1((byte)R1R0,(byte)Z))) {
          X._0_1_ = 0xb;
          X._1_1_ = 0;
          DAT_mem_08ff = 0xe9;
          DAT_mem_08fe = 0x10;
          FUN_code_2911();
          DAT_mem_0655 = (byte)Z;
        }
      }
      X = (byte *)0xc;
      DAT_mem_08ff = 0xef;
      DAT_mem_08fe = 0x10;
      FUN_code_2911();
      if ((-1 < (char)(byte)Z) && ((char)(byte)Z < '\v')) {
        X = (byte *)0xc;
        DAT_mem_08ff = 0xf8;
        DAT_mem_08fe = 0x10;
        FUN_code_2911();
        DAT_mem_0656 = (byte)Z;
      }
      X = (byte *)0xd;
      DAT_mem_08ff = 0xfe;
      DAT_mem_08fe = 0x10;
      FUN_code_2911();
      if (('\0' < (char)(byte)Z) && ((char)(byte)Z < '\v')) {
        X = (byte *)0xd;
        DAT_mem_08ff = 7;
        DAT_mem_08fe = 0x11;
        FUN_code_2911();
        DAT_mem_0657 = (byte)Z;
      }
      X = (byte *)0xe;
      DAT_mem_08ff = 0xd;
      DAT_mem_08fe = 0x11;
      FUN_code_2911();
      if ((-1 < (char)(byte)Z) && ((char)(byte)Z < '\x1f')) {
        X = (byte *)0xe;
        DAT_mem_08ff = 0x16;
        DAT_mem_08fe = 0x11;
        FUN_code_2911();
        DAT_mem_0642 = (byte)Z;
      }
    }
  }
  X = (byte *)0x0;
  DAT_mem_08ff = 0x1c;
  DAT_mem_08fe = 0x11;
  FUN_code_290d();
  if (Z < &PORTE) {
LAB_code_112d:
    Z = R5R4;
    X = (byte *)0x0;
    DAT_mem_08ff = 0x32;
    DAT_mem_08fe = 0x11;
    FUN_code_291d();
    Z = R9R8;
    X = (byte *)0x2;
    DAT_mem_08ff = 0x37;
    DAT_mem_08fe = 0x11;
    FUN_code_291d();
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_063e);
    X = (byte *)0x6;
    DAT_mem_08ff = 0x3d;
    DAT_mem_08fe = 0x11;
    FUN_code_2925();
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_063f);
    X = (byte *)0x7;
    DAT_mem_08ff = 0x43;
    DAT_mem_08fe = 0x11;
    FUN_code_2925();
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0627);
    X = (byte *)0xf;
    DAT_mem_08ff = 0x49;
    DAT_mem_08fe = 0x11;
    FUN_code_2925();
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0641);
    X = (byte *)0x9;
    DAT_mem_08ff = 0x4f;
    DAT_mem_08fe = 0x11;
    FUN_code_2925();
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0654);
    X = (byte *)0xa;
    DAT_mem_08ff = 0x55;
    DAT_mem_08fe = 0x11;
    FUN_code_2925();
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0655);
    X = (byte *)0xb;
    DAT_mem_08ff = 0x5b;
    DAT_mem_08fe = 0x11;
    FUN_code_2925();
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0656);
    X = (byte *)0xc;
    DAT_mem_08ff = 0x61;
    DAT_mem_08fe = 0x11;
    FUN_code_2925();
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0657);
    X = (byte *)0xd;
    DAT_mem_08ff = 0x67;
    DAT_mem_08fe = 0x11;
    FUN_code_2925();
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0642);
    X._0_1_ = 0xe;
    X._1_1_ = 0;
    DAT_mem_08ff = 0x6d;
    DAT_mem_08fe = 0x11;
    FUN_code_2925();
    DAT_mem_062b = 1;
  }
  else {
    X._1_1_ = (byte)((uint)Z >> 8);
    if (2 < X._1_1_ && ((byte)Z < 0xe8) <= (byte)(X._1_1_ - 3)) goto LAB_code_112d;
    X._0_1_ = DAT_mem_0549;
    X._1_1_ = DAT_mem_054a;
    if (DAT_mem_054a < 7 || (byte)(DAT_mem_054a - 7) < (DAT_mem_0549 < 0xe0)) goto LAB_code_112d;
  }
  R3R2._0_1_ = DAT_mem_0549;
  R3R2._1_1_ = DAT_mem_054a;
  Z = (byte *)CONCAT11(-((DAT_mem_0627 < 0xb4) + -1),DAT_mem_0627 + 0x4c);
  R17 = (byte)(*(uint *)((uint)Z >> 1) >> ((byte)(DAT_mem_0627 + 0x4c) & 1) * 8);
  DAT_mem_08ff = 0x7b;
  DAT_mem_08fe = 0x11;
  FUN_code_0ffc();
  R16 = (byte)Z;
  write_volatile_1(DAT_mem_007e,0);
  write_volatile_1(ETIFR,0x40);
  Z._0_1_ = 0;
  write_volatile_1(DAT_mem_007b,0);
  DAT_mem_0617 = (byte)R3R2;
  DAT_mem_0618 = R3R2._1_1_;
  bVar4 = read_volatile_1(UCSR0A);
  write_volatile_1(UCSR0A,bVar4 & 0xbf);
  bVar4 = read_volatile_1(UCSR0B);
  write_volatile_1(UCSR0B,bVar4 | 0x40);
  bVar4 = read_volatile_1(UCSR0A);
  write_volatile_1(UCSR0A,bVar4 & 0xdf);
  bVar4 = read_volatile_1(UCSR0B);
  write_volatile_1(UCSR0B,bVar4 | 0x20);
  bVar4 = read_volatile_1(DAT_mem_0025);
  write_volatile_1(DAT_mem_0025,bVar4 & 0xf7);
  bVar4 = read_volatile_1(ADCW);
  write_volatile_1(ADCW,bVar4 | 8);
  bVar4 = read_volatile_1(DAT_mem_0025);
  write_volatile_1(DAT_mem_0025,bVar4 | 0x20);
  bVar4 = read_volatile_1(ADCW);
  write_volatile_1(ADCW,bVar4 & 0xdf);
  bVar4 = read_volatile_1(ACSR);
  write_volatile_1(ACSR,bVar4 | 0x20);
  bVar4 = read_volatile_1(ADMUX);
  write_volatile_1(ADMUX,bVar4 & 0xdf);
  bVar4 = read_volatile_1(ACSR);
  write_volatile_1(ACSR,bVar4 | 8);
  bVar4 = read_volatile_1(ADMUX);
  write_volatile_1(ADMUX,bVar4 & 0xf7);
  bVar4 = read_volatile_1(ACSR);
  write_volatile_1(ACSR,bVar4 | 4);
  bVar4 = read_volatile_1(ADMUX);
  write_volatile_1(ADMUX,bVar4 & 0xfb);
  bVar4 = read_volatile_1(ACSR);
  write_volatile_1(ACSR,bVar4 | 0x10);
  bVar4 = read_volatile_1(ADMUX);
  write_volatile_1(ADMUX,bVar4 & 0xef);
  X._0_1_ = 0x10;
  DAT_mem_08ff = 0x9c;
  DAT_mem_08fe = 0x11;
  FUN_code_242c();
  DAT_mem_08ff = 0x9e;
  DAT_mem_08fe = 0x11;
  FUN_code_23d6();
  Z = (byte *)0x44;
  DAT_mem_0289 = 0;
  DAT_mem_0288 = 0x44;
  X = (byte *)0x0;
  DAT_mem_08ff = 0xa6;
  DAT_mem_08fe = 0x11;
  FUN_code_0788();
  Z = (byte *)0xc;
  DAT_mem_0287 = 0;
  DAT_mem_0286 = 0xc;
  X = (byte *)0x1;
  DAT_mem_08ff = 0xae;
  DAT_mem_08fe = 0x11;
  FUN_code_0788();
  Z = (byte *)0x14;
  DAT_mem_0285 = 0;
  DAT_mem_0284 = 0x14;
  X = (byte *)0x2;
  DAT_mem_08ff = 0xb6;
  DAT_mem_08fe = 0x11;
  FUN_code_0788();
  Z = (byte *)0x1c;
  DAT_mem_0283 = 0;
  DAT_mem_0282 = 0x1c;
  X = (byte *)0x3;
  DAT_mem_08ff = 0xbe;
  DAT_mem_08fe = 0x11;
  FUN_code_0788();
  Z = (byte *)0x24;
  DAT_mem_0281 = 0;
  DAT_mem_0280 = 0x24;
  X = (byte *)0x4;
  DAT_mem_08ff = 0xc6;
  DAT_mem_08fe = 0x11;
  FUN_code_0788();
  Z = (byte *)0x2c;
  DAT_mem_027f = 0;
  DAT_mem_027e = 0x2c;
  X = (byte *)0x5;
  DAT_mem_08ff = 0xce;
  DAT_mem_08fe = 0x11;
  FUN_code_0788();
  Z = (byte *)0x34;
  DAT_mem_027d = 0;
  DAT_mem_027c = 0x34;
  X = (byte *)0x6;
  DAT_mem_08ff = 0xd6;
  DAT_mem_08fe = 0x11;
  FUN_code_0788();
  Z = (byte *)0x3c;
  DAT_mem_027b = 0;
  Y = (undefined2 *)&DAT_mem_027a;
  DAT_mem_027a = 0x3c;
  X = (byte *)0x7;
  DAT_mem_08ff = 0xde;
  DAT_mem_08fe = 0x11;
  FUN_code_0788();
  write_volatile_1(TCNT2,0xa3);
  write_volatile_1(TCCR2,2);
  if ((char)DAT_mem_063e < '\x01') {
    cVar1 = '\0';
  }
  else {
    R1R0 = (char)DAT_mem_063e * 0xe;
    Z._0_1_ = (byte)R1R0;
    cVar1 = (byte)Z + 'r';
  }
  write_volatile_1(ICR1H,cVar1);
  DAT_mem_029a = 0;
  DAT_mem_029b = 0;
  DAT_mem_029c = 0;
  DAT_mem_029d = 0;
  R3R2 = (undefined *)0x0;
  while( true ) {
    if (0x7f < R3R2._1_1_ || (byte)(0x7f - R3R2._1_1_) < (0xfe < (byte)R3R2)) break;
    Z = (byte *)(*(uint *)((uint)R3R2 >> 1) >> ((uint)R3R2 & 1) * 8 & 0xff);
    X = *(byte **)((int)Y + 0x20);
    DAT_mem_08ff = 6;
    DAT_mem_08fe = 0x12;
    FUN_code_2862();
    *(byte *)((int)Y + 0x20) = (byte)Z;
    *(byte *)((int)Y + 0x21) = Z._1_1_;
    *(byte *)((int)Y + 0x22) = (byte)R23R22;
    *(byte *)((int)Y + 0x23) = R23R22._1_1_;
    Z = (byte *)((int)R3R2 + 1);
    R3R2 = Z;
  }
  X._0_1_ = *(byte *)((int)Y + 0x20);
  X._1_1_ = *(byte *)((int)Y + 0x21);
  W._0_1_ = *(byte *)((int)Y + 0x22);
  W._1_1_ = *(byte *)((int)Y + 0x23);
  if ((W._1_1_ < ((byte)W < 0x56 ||
                 (byte)((byte)W + 0xaa) <
                 (X._1_1_ < 0x49 || (byte)(X._1_1_ + 0xb7) < ((byte)X < 0xdd)))) ||
     (Z._1_1_ = 0x7f,
     ((byte)W < 0x56 ||
     (byte)((byte)W + 0xaa) < (X._1_1_ < 0x49 || (byte)(X._1_1_ + 0xb7) < ((byte)X < 0xe6))) <=
     W._1_1_)) {
    Z._1_1_ = 0x7f;
    Z._0_1_ = 0;
    X._0_1_ = 4;
    DAT_mem_08ff = 0x25;
    DAT_mem_08fe = 0x12;
    FUN_code_242c();
  }
  write_volatile_1(DAT_mem_00b6,0);
  Z = (byte *)CONCAT11(Z._1_1_,DAT_mem_063f);
  if (DAT_mem_063f != 0) {
    R1R0 = (char)(DAT_mem_063f - 1) * 5;
    Z._0_1_ = (byte)R1R0;
    DAT_mem_0625 = (byte)Z;
    write_volatile_1(DAT_mem_00b3,(byte)Z);
    write_volatile_1(DAT_mem_00b0,0x83);
    Z = (byte *)(R1R0 & 0xff00 | 4);
    write_volatile_1(DAT_mem_00b1,4);
    X._0_1_ = 0x32;
    X._1_1_ = 0;
    DAT_mem_08ff = 0x3e;
    DAT_mem_08fe = 0x12;
    FUN_code_269a();
    Z = (byte *)((uint)Z & 0xff00);
    write_volatile_1(DAT_mem_00b0,0);
    write_volatile_1(DAT_mem_00b1,0);
  }
  X = (byte *)0x4;
  DAT_mem_08ff = 0x47;
  DAT_mem_08fe = 0x12;
  FUN_code_290d();
  Z = (byte *)((int)Z + 1);
  DAT_mem_08ff = 0x4a;
  DAT_mem_08fe = 0x12;
  FUN_code_291d();
  X = (byte *)0x8;
  DAT_mem_08ff = 0x4e;
  DAT_mem_08fe = 0x12;
  FUN_code_2911();
  if ((((char)(byte)Z < '\0') || ('2' < (char)(byte)Z)) ||
     (Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_062b), DAT_mem_062b != 0)) {
    DAT_mem_08ff = 0x59;
    DAT_mem_08fe = 0x12;
    FUN_code_23d6();
    X._0_1_ = 0x55;
    X._1_1_ = 4;
    DAT_mem_08ff = 0x5d;
    DAT_mem_08fe = 0x12;
    FUN_code_2419();
    Z = (byte *)((uint)Z & 0xff00);
    DAT_mem_061f = 0;
    while (X._0_1_ = DAT_mem_061f, DAT_mem_061f < 0x65) {
      write_volatile_1(OCR1BL,DAT_mem_061f);
      Z._0_1_ = DAT_mem_061f >> 1;
      DAT_mem_0640 = (byte)Z;
      Z._0_1_ = 0x43;
      Y = (undefined2 *)((int)Y + -1);
      *(undefined *)Y = 6;
      Y = (undefined2 *)((int)Y + -1);
      *(byte *)Y = (byte)Z;
      Z._0_1_ = 0xde;
      Z._1_1_ = 3;
      Y = (undefined2 *)((int)Y + -1);
      *(undefined *)Y = 3;
      Y = (undefined2 *)((int)Y + -1);
      *(byte *)Y = (byte)Z;
      Z._0_1_ = DAT_mem_0640;
      DAT_mem_08ff = 0x76;
      DAT_mem_08fe = 0x12;
      FUN_code_2882();
      DAT_mem_08ff = 0x78;
      DAT_mem_08fe = 0x12;
      FUN_code_28f6();
      DAT_mem_08ff = 0x7b;
      DAT_mem_08fe = 0x12;
      FUN_code_25b4();
      Z._0_1_ = 7;
      Y = (undefined2 *)((int)Y + 7);
      *(undefined *)Y = 7;
      X._0_1_ = 1;
      DAT_mem_08ff = 0x81;
      DAT_mem_08fe = 0x12;
      FUN_code_23c5();
      X._0_1_ = 0x43;
      X._1_1_ = 6;
      DAT_mem_08ff = 0x85;
      DAT_mem_08fe = 0x12;
      FUN_code_240a();
      X = (byte *)0xfa;
      DAT_mem_08ff = 0x89;
      DAT_mem_08fe = 0x12;
      FUN_code_269a();
      if (DAT_mem_061f == 100) {
        DAT_mem_061f = 0;
      }
      bVar4 = read_volatile_1(PORTE);
      if ((bVar4 & 0x20) == 0) {
        DAT_mem_061f = 0x65;
      }
      DAT_mem_061f = DAT_mem_061f + 2;
      Z = (byte *)CONCAT11(Z._1_1_,DAT_mem_061f);
    }
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0640);
    X = (byte *)0x8;
    DAT_mem_08ff = 0xa1;
    DAT_mem_08fe = 0x12;
    FUN_code_2925();
  }
  else {
    X = (byte *)0x8;
    DAT_mem_08ff = 0xa6;
    DAT_mem_08fe = 0x12;
    FUN_code_2911();
    DAT_mem_0640 = (byte)Z;
  }
  Z._1_1_ = (byte)((uint)Z >> 8);
  write_volatile_1(OCR1BL,DAT_mem_0640 * '\x02');
  Z._0_1_ = 0x75;
  if (DAT_mem_054c < 0x75 || (byte)(DAT_mem_054c + 0x8b) < (DAT_mem_054b < 0x72)) {
LAB_code_238a:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  X._0_1_ = DAT_mem_0629;
  X._1_1_ = DAT_mem_054c;
  if (DAT_mem_0629 < 0x2e) goto LAB_code_238a;
  DAT_mem_08ff = 0xbc;
  DAT_mem_08fe = 0x12;
  FUN_code_23d6();
  R3R2._1_1_ = '\0';
  Z._0_1_ = 1;
  R3R2._0_1_ = 0;
  while (bVar4 = (byte)Z, (byte)Z < 0x11) {
    Z = (byte *)(uint)(byte)Z;
    R1R0 = (uint)Z;
    Z = (byte *)CONCAT11(-(((byte)Z < 0xa8) + -7),(byte)Z + 0x58);
    X._0_1_ = *Z;
    X._1_1_ = '\0';
    if (((byte)X & 0x80) != 0) {
      X._1_1_ = -1;
    }
    Z = (byte *)CONCAT11(-(((byte)Z < 0x97) + -7),(byte)Z + 0x69);
    Z._0_1_ = *Z;
    Z._1_1_ = '\0';
    if (((byte)Z & 0x80) != 0) {
      Z._1_1_ = -1;
    }
    bVar3 = (byte)Z + (byte)X;
    R3R2._1_1_ = R3R2._1_1_ + Z._1_1_ + X._1_1_ + CARRY1((byte)Z,(byte)X) + CARRY1((byte)R3R2,bVar 3)
    ;
    R3R2._0_1_ = (byte)R3R2 + bVar3;
    Z._0_1_ = bVar4 + 1;
  }
  bVar4 = (byte)R3R2 * '\x02';
  cVar1 = R3R2._1_1_ * '\x02' + CARRY1((byte)R3R2,(byte)R3R2);
  Z = (byte *)CONCAT11(cVar1,bVar4);
  if (bVar4 != 0xf6 || cVar1 != (char)((bVar4 < 0xf6) + '\x0e')) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  X = (byte *)0x4;
  DAT_mem_08ff = 0xec;
  DAT_mem_08fe = 0x12;
  DAT_mem_061f = (byte)Z;
  FUN_code_290d();
  uVar6 = (uint)Z;
  R1R0 = (uint)Z;
  Z = (byte *)((int)Z + 0x31);
  if (Z._1_1_ < 8 || (byte)(Z._1_1_ - 8) < ((byte)Z < 0x11)) {
LAB_code_1303:
    X._0_1_ = 0xef;
    X._1_1_ = 1;
    DAT_mem_08ff = 7;
    DAT_mem_08fe = 0x13;
    FUN_code_034c();
    X._0_1_ = 99;
    X._1_1_ = 4;
    DAT_mem_08ff = 0xb;
    DAT_mem_08fe = 0x13;
    FUN_code_2419();
    X._0_1_ = 0xe3;
    X._1_1_ = 1;
    DAT_mem_08ff = 0xf;
    DAT_mem_08fe = 0x13;
    FUN_code_034c();
    X = (byte *)0x4;
    Z = (byte *)0xc822;
    DAT_mem_08ff = 0x15;
    DAT_mem_08fe = 0x13;
    FUN_code_291d();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  Z._0_1_ = (byte)uVar6;
  cVar1 = (char)(uVar6 >> 8) - (((byte)Z < 0xbb) + '\a');
  Z = (byte *)CONCAT11(cVar1,(byte)Z + 0x45);
  if (cVar1 != '\0' && ((byte)((byte)Z + 0x45) < 0x51) <= (byte)(cVar1 - 1U)) goto LAB_code_1303;
  X = (byte *)(uVar6 - 1);
  Z = (byte *)CONCAT11(DAT_mem_0618,DAT_mem_0617);
  if (DAT_mem_0617 != (byte)X || DAT_mem_0618 != (byte)(X._1_1_ + (DAT_mem_0617 < (byte)X)))
  goto LAB_code_1303;
  if ((DAT_mem_054c < 0x75 || (byte)(DAT_mem_054c + 0x8b) < (DAT_mem_054b < 0x30)) ||
     (DAT_mem_0629 < 0x2d)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (DAT_mem_054a < 7 || (byte)(DAT_mem_054a - 7) < (DAT_mem_0549 < 0xd0)) goto LAB_code_238a;
  Z._0_1_ = 9;
  Z._1_1_ = DAT_mem_0618;
  if (8 < DAT_mem_054a && (DAT_mem_0549 < 0x11) <= (byte)(DAT_mem_054a - 9)) goto LAB_code_238a;
  X = (undefined1 *)0x10;
  DAT_mem_08ff = 0x35;
  DAT_mem_08fe = 0x13;
  FUN_code_2911();
  if (((byte)Z != 0) && ((byte)Z < 5)) {
    do {
      DAT_mem_08ff = 0x3c;
      DAT_mem_08fe = 0x13;
      FUN_code_23d6();
      Z._0_1_ = 7;
      Y = (undefined2 *)((int)Y + -1);
      *(undefined *)Y = 7;
      X = (byte *)((uint)X & 0xff00);
      DAT_mem_08ff = 0x41;
      DAT_mem_08fe = 0x13;
      FUN_code_23c5();
      X = &DAT_mem_0470;
      DAT_mem_08ff = 0x45;
      DAT_mem_08fe = 0x13;
      FUN_code_2419();
      DAT_mem_08ff = 0x47;
      DAT_mem_08fe = 0x13;
      FUN_code_06f4();
      DAT_mem_08ff = 0x49;
      DAT_mem_08fe = 0x13;
      FUN_code_0765();
    } while ((byte)Z == 0);
  }
  DAT_mem_08ff = 0x4d;
  DAT_mem_08fe = 0x13;
  FUN_code_23d6();
  X._0_1_ = 0x58;
  X._1_1_ = 6;
  DAT_mem_08ff = 0x51;
  DAT_mem_08fe = 0x13;
  FUN_code_240a();
  X = (byte *)0x25;
  DAT_mem_08ff = 0x55;
  DAT_mem_08fe = 0x13;
  FUN_code_269a();
  Z = R5R4;
  DAT_mem_08ff = 0x5a;
  DAT_mem_08fe = 0x13;
  FUN_code_2721();
  X._0_1_ = 0;
  X._1_1_ = 0x24;
  DAT_mem_08ff = 0x60;
  DAT_mem_08fe = 0x13;
  FUN_code_27f9();
  X = (byte *)0x0;
  DAT_mem_08ff = 0x66;
  DAT_mem_08fe = 0x13;
  FUN_code_275b();
  DAT_mem_08ff = 0x68;
  DAT_mem_08fe = 0x13;
  FUN_code_26e8();
  R7R6 = Z;
  X._0_1_ = 0x69;
  X._1_1_ = 6;
  DAT_mem_08ff = 0x6d;
  DAT_mem_08fe = 0x13;
  FUN_code_240a();
  X = &DAT_mem_03e4;
  DAT_mem_08ff = 0x71;
  DAT_mem_08fe = 0x13;
  FUN_code_269a();
  DAT_mem_08ff = 0x73;
  DAT_mem_08fe = 0x13;
  FUN_code_07e0();
  DAT_mem_061f = 0;
  while( true ) {
    Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0629);
    X = (byte *)((uint)X & 0xff00 | (uint)DAT_mem_061f);
    if (DAT_mem_0629 <= DAT_mem_061f) break;
    X = (byte *)CONCAT11(DAT_mem_054c,DAT_mem_054b);
    DAT_mem_08ff = 0x82;
    DAT_mem_08fe = 0x13;
    FUN_code_034c();
    DAT_mem_061f = DAT_mem_061f + 1;
  }
  DAT_mem_08ff = 0x8a;
  DAT_mem_08fe = 0x13;
  FUN_code_23d6();
  R3R2._1_1_ = '\0';
  Z._0_1_ = 1;
  R3R2._0_1_ = 0;
  while (DAT_mem_061f = (byte)Z, (byte)Z < 0x11) {
    X = (byte *)((int)Y + 2);
    X = (byte *)CONCAT11((char)((uint)X >> 8) + CARRY1((byte)X,(byte)Z),(byte)X + (byte)Z);
    Z._0_1_ = *X;
    Z._1_1_ = '\0';
    if (((byte)Z & 0x80) != 0) {
      Z._1_1_ = -1;
    }
    bVar4 = (byte)R3R2 + (byte)Z;
    R3R2._1_1_ = R3R2._1_1_ + Z._1_1_ + CARRY1((byte)R3R2,(byte)Z);
    R3R2._0_1_ = bVar4;
    Z._0_1_ = DAT_mem_061f + 1;
  }
  Z._0_1_ = (byte)R3R2;
  Z._1_1_ = R3R2._1_1_;
  X = (byte *)0x6;
  DAT_mem_08ff = 0xab;
  DAT_mem_08fe = 0x13;
  FUN_code_288d();
  if ((byte)Z != 0x86 || Z._1_1_ != (byte)(((byte)Z < 0x86) + '\x1f')) {
    Z._0_1_ = 0x23;
    DAT_mem_0622 = 0x23;
  }
  X = (byte *)((int)Y + 2);
  DAT_mem_08ff = 0xb6;
  DAT_mem_08fe = 0x13;
  FUN_code_240a();
  bVar4 = 0x36 - (DAT_mem_0617 + 0x2b);
  cVar1 = '\x01' - ((DAT_mem_0618 - ((DAT_mem_0617 < 0xd5) + '\a')) +
                   (0x36 < (byte)(DAT_mem_0617 + 0x2b)));
  Z = (byte *)CONCAT11(cVar1,bVar4);
  puVar10 = Z;
  R3R2 = Z;
  Z = (byte *)CONCAT11(cVar1 * '\x02' + CARRY1(bVar4,bVar4),bVar4 * '\x02');
  if (Z < 2) {
LAB_code_13cd:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  DAT_mem_08ff = 0xc9;
  DAT_mem_08fe = 0x13;
  Z = puVar10;
  FUN_code_2878();
  X._0_1_ = 4;
  if (3 < Z._1_1_ && ((byte)Z < 0xb1) <= (byte)(Z._1_1_ - 4)) goto LAB_code_13cd;
  Z._0_1_ = 0x43;
  Y = (undefined2 *)((int)Y + -1);
  *(undefined *)Y = 6;
  Y = (undefined2 *)((int)Y + -1);
  *(byte *)Y = (byte)Z;
  Z._0_1_ = 0xa5;
  Y = (undefined2 *)((int)Y + -1);
  *(undefined *)Y = 2;
  Y = (undefined2 *)((int)Y + -1);
  *(byte *)Y = (byte)Z;
  Z = R3R2;
  DAT_mem_08ff = 0xdb;
  DAT_mem_08fe = 0x13;
  FUN_code_28f6();
  DAT_mem_08ff = 0xde;
  DAT_mem_08fe = 0x13;
  FUN_code_25b4();
  Z._0_1_ = 7;
  Y = (undefined2 *)((int)Y + 7);
  *(char *)Y = '\a';
  X._0_1_ = 1;
  DAT_mem_08ff = 0xe4;
  DAT_mem_08fe = 0x13;
  FUN_code_23c5();
  X._0_1_ = 0x43;
  X._1_1_ = 6;
  DAT_mem_08ff = 0xe8;
  DAT_mem_08fe = 0x13;
  FUN_code_240a();
  X = (byte *)0x3df;
  DAT_mem_08ff = 0xec;
  DAT_mem_08fe = 0x13;
  FUN_code_269a();
  DAT_mem_08ff = 0xee;
  DAT_mem_08fe = 0x13;
  FUN_code_07a6();
  Z._0_1_ = 0;
  while( true ) {
    DAT_mem_061f = (byte)Z;
    Z._0_1_ = DAT_mem_0629;
    X = (byte *)((uint)X & 0xff00 | (uint)DAT_mem_061f);
    if (DAT_mem_0629 <= DAT_mem_061f) break;
    X = (byte *)CONCAT11(DAT_mem_054c,DAT_mem_054b);
    DAT_mem_08ff = 0xfd;
    DAT_mem_08fe = 0x13;
    FUN_code_034c();
    Z._0_1_ = DAT_mem_061f + 1;
  }
  Z = (byte *)0x0;
  if ((((byte)R3R2 == 0) <= R3R2._1_1_) &&
     (Z = (byte *)0x12e, R3R2._1_1_ < 2 && (0x2e < (byte)R3R2) <= (byte)(1 - R3R2._1_1_))) {
    Z = (byte *)CONCAT11(DAT_mem_0618,DAT_mem_0617);
    if ((DAT_mem_0617 == (byte)R13R12 &&
         DAT_mem_0618 == (byte)(R13R12._1_1_ + (DAT_mem_0617 < (byte)R13R12))) ||
       ((Z = (byte *)0xffff, (byte)R13R12 == 0xff && R13R12._1_1_ == -1 ||
        (R1R0 = R1R0 & 0xff00,
        (byte)R13R12 == 0 && (byte)(R13R12._1_1_ + ((byte)R13R12 != 0)) == '\0'))))
    goto LAB_code_1422;
  }
  Z = (byte *)CONCAT11(Z._1_1_,0x3c);
  DAT_mem_0622 = 0x3c;
LAB_code_1422:
  DAT_mem_08ff = 0x24;
  DAT_mem_08fe = 0x14;
  FUN_code_042c();
  do {
    Z._1_1_ = (byte)((uint)Z >> 8);
    if (DAT_mem_0628 == '\0') {
      for (DAT_mem_061f = 0; X = (byte *)((uint)X & 0xff00), DAT_mem_061f < 0xe;
          DAT_mem_061f = DAT_mem_061f + 1) {
        write_volatile_1(TCCR1C,0);
        DAT_mem_0621 = DAT_mem_061f + DAT_mem_0620;
        DAT_mem_0543 = -(char)R9R8 - 1;
        DAT_mem_0544 = 1 - R9R8._1_1_;
        bVar4 = read_volatile_1(UCSR0A);
        if ((bVar4 & 0x40) == 0) {
          bVar4 = read_volatile_1(UCSR0A);
          write_volatile_1(UCSR0A,bVar4 | 0x40);
        }
        else {
          bVar4 = read_volatile_1(UCSR0A);
          write_volatile_1(UCSR0A,bVar4 & 0xbf);
        }
        write_volatile_1(TCCR1C,0x85);
        Z._0_1_ = read_volatile_1(TCCR1C);
        Z._0_1_ = (byte)Z | 0x40;
        write_volatile_1(TCCR1C,(byte)Z);
        do {
          Z._0_1_ = read_volatile_1(TCCR1C);
          Z._0_1_ = (byte)Z & 0x40;
        } while ((byte)Z != 0);
        X = (byte *)CONCAT11(DAT_mem_0544,DAT_mem_0543);
        DAT_mem_08ff = 0x5b;
        DAT_mem_08fe = 0x14;
        Z._1_1_ = DAT_mem_0544;
        FUN_code_034c();
        bVar4 = read_volatile_1(DAT_mem_0025);
        write_volatile_1(DAT_mem_0025,bVar4 & 0xfb);
        X = R9R8;
        DAT_mem_08ff = 0x5f;
        DAT_mem_08fe = 0x14;
        FUN_code_034c();
        bVar4 = read_volatile_1(DAT_mem_0025);
        write_volatile_1(DAT_mem_0025,bVar4 | 4);
        W = (undefined1 *)0x5;
        do {
          W = (undefined1 *)((int)W + -1);
        } while (W != (undefined1 *)0x0);
        while (DAT_mem_0621 = DAT_mem_0621 + -1, DAT_mem_0621 != '\0') {
          W = (undefined1 *)0x5;
          do {
            W = (undefined1 *)((int)W + -1);
          } while (W != (undefined1 *)0x0);
        }
        write_volatile_1(TCNT2,0);
        write_volatile_1(TCCR2,0);
        Z._0_1_ = read_volatile_1(TCCR1C);
        Z._0_1_ = (byte)Z | 0x40;
        write_volatile_1(TCCR1C,(byte)Z);
        do {
          Z._0_1_ = read_volatile_1(TCCR1C);
          Z._0_1_ = (byte)Z & 0x40;
        } while ((byte)Z != 0);
        uVar7 = read_volatile_1(OCR1CL);
        uVar8 = read_volatile_1(OCR1CH);
        R13R12 = (byte *)CONCAT11(uVar8,uVar7);
        Z._0_1_ = read_volatile_1(TCCR1C);
        Z._0_1_ = (byte)Z | 0x40;
        write_volatile_1(TCCR1C,(byte)Z);
        do {
          Z._0_1_ = read_volatile_1(TCCR1C);
          Z._0_1_ = (byte)Z & 0x40;
        } while ((byte)Z != 0);
        DAT_mem_0537 = read_volatile_1(OCR1CL);
        DAT_mem_0538 = read_volatile_1(OCR1CH);
        Z._0_1_ = read_volatile_1(TCCR1C);
        Z._0_1_ = (byte)Z | 0x40;
        write_volatile_1(TCCR1C,(byte)Z);
        do {
          Z._0_1_ = read_volatile_1(TCCR1C);
          Z._0_1_ = (byte)Z & 0x40;
        } while ((byte)Z != 0);
        DAT_mem_0539 = read_volatile_1(OCR1CL);
        DAT_mem_053a = read_volatile_1(OCR1CH);
        Z._0_1_ = read_volatile_1(TCCR1C);
        Z._0_1_ = (byte)Z | 0x40;
        write_volatile_1(TCCR1C,(byte)Z);
        do {
          Z._0_1_ = read_volatile_1(TCCR1C);
          Z._0_1_ = (byte)Z & 0x40;
        } while ((byte)Z != 0);
        DAT_mem_053b = read_volatile_1(OCR1CL);
        DAT_mem_053c = read_volatile_1(OCR1CH);
        Z._0_1_ = read_volatile_1(TCCR1C);
        Z._0_1_ = (byte)Z | 0x40;
        write_volatile_1(TCCR1C,(byte)Z);
        do {
          Z._0_1_ = read_volatile_1(TCCR1C);
          Z._0_1_ = (byte)Z & 0x40;
        } while ((byte)Z != 0);
        DAT_mem_053d = read_volatile_1(OCR1CL);
        DAT_mem_053e = read_volatile_1(OCR1CH);
        write_volatile_1(TCNT2,0xa3);
        write_volatile_1(TCCR2,2);
        Z = (byte *)CONCAT11(CARRY1(DAT_mem_061f,DAT_mem_061f) + '\x04' +
                             (0x90 < (byte)(DAT_mem_061f * '\x02')),DAT_mem_061f * '\x02' + 0x6f);
        *Z = uVar7;
        Z[1] = R13R12._1_1_;
        bVar4 = DAT_mem_061f + 0xe;
        Z = (byte *)CONCAT11(CARRY1(bVar4,bVar4) + '\x04' + (0x90 < (byte)(bVar4 * '\x02')),
                             bVar4 * '\x02' + 0x6f);
        X._1_1_ = DAT_mem_0538;
        *Z = DAT_mem_0537;
        Z[1] = X._1_1_;
        bVar4 = DAT_mem_061f + 0x1c;
        Z = (byte *)CONCAT11(CARRY1(bVar4,bVar4) + '\x04' + (0x90 < (byte)(bVar4 * '\x02')),
                             bVar4 * '\x02' + 0x6f);
        X._1_1_ = DAT_mem_053a;
        *Z = DAT_mem_0539;
        Z[1] = X._1_1_;
        bVar4 = DAT_mem_061f + 0x2a;
        Z = (byte *)CONCAT11(CARRY1(bVar4,bVar4) + '\x04' + (0x90 < (byte)(bVar4 * '\x02')),
                             bVar4 * '\x02' + 0x6f);
        X._1_1_ = DAT_mem_053c;
        *Z = DAT_mem_053b;
        Z[1] = X._1_1_;
        bVar4 = DAT_mem_061f + 0x38;
        Z = (byte *)CONCAT11(CARRY1(bVar4,bVar4) + '\x04' + (0x90 < (byte)(bVar4 * '\x02')),
                             bVar4 * '\x02' + 0x6f);
        X._1_1_ = DAT_mem_053e;
        *Z = DAT_mem_053d;
        Z[1] = X._1_1_;
        X = (byte *)CONCAT11(X._1_1_,DAT_mem_061f);
        if (DAT_mem_061f < 0xd) {
          DAT_mem_0621 = ('s' - DAT_mem_0620) - DAT_mem_061f;
          W = (undefined1 *)0x5;
          do {
            W = (undefined1 *)((int)W + -1);
          } while (W != (undefined1 *)0x0);
          while (DAT_mem_0621 = DAT_mem_0621 + -1, DAT_mem_0621 != '\0') {
            W = (undefined1 *)0x5;
            do {
              W = (undefined1 *)((int)W + -1);
            } while (W != (undefined1 *)0x0);
          }
          Z = (byte *)CONCAT11(DAT_mem_0540,DAT_mem_053f);
          if ((Z == (byte *)0x0) ||
             ((((DAT_mem_0654 != 9 && (DAT_mem_0654 != 10)) ||
               (Z = (byte *)CONCAT11(DAT_mem_0540,DAT_mem_063f), DAT_mem_063f == 0)) ||
              (R19R18._1_1_ != '\0')))) {
            W._0_1_ = 'k';
            do {
              W._0_1_ = (byte)W + -1;
            } while ((byte)W != '\0');
            W = (undefined1 *)0x2;
            do {
              W = (undefined1 *)((int)W + -1);
            } while (W != (undefined1 *)0x0);
          }
          else {
            X = (byte *)*Y;
            Z = (byte *)(uint)(byte)(DAT_mem_061f + 1);
            DAT_mem_08ff = 0x52;
            DAT_mem_08fe = 0x15;
            FUN_code_289b();
            X = Z;
            Z = (byte *)0xe;
            DAT_mem_08ff = 0x57;
            DAT_mem_08fe = 0x15;
            FUN_code_28b3();
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x92) + -2),(byte)X + 0x6e);
            X._0_1_ = *X;
            Z = (byte *)((uint)Z & 0xff00 | (uint)(byte)((byte)Z + (byte)X));
            write_volatile_1(DAT_mem_00b3,(byte)Z + (byte)X);
          }
          X._0_1_ = (byte)R7R6;
          X = (byte *)CONCAT11((char)((uint)R7R6 >> 8) - (((byte)X < 0x68) + '\x03'),(byte)X + 0x9 8)
          ;
          DAT_mem_08ff = 0x6b;
          DAT_mem_08fe = 0x15;
          FUN_code_034c();
          W = (undefined1 *)0x1;
          do {
            W = (undefined1 *)((int)W + -1);
          } while (W != (undefined1 *)0x0);
        }
      }
      write_volatile_1(ETIFR,0x41);
      R3R2 = (undefined *)0x0;
      for (DAT_mem_061f = DAT_mem_062c; X = (byte *)((uint)X & 0xff00), DAT_mem_061f < DAT_mem_062 d;
          DAT_mem_061f = DAT_mem_061f + 1) {
        Z._0_1_ = DAT_mem_061f * '\x02';
        Z._1_1_ = CARRY1(DAT_mem_061f,DAT_mem_061f);
        X = (byte *)CONCAT11(Z._1_1_ + '\x04' + (0x90 < (byte)Z),(byte)Z + 0x6f);
        DAT_mem_08ff = 0x8f;
        DAT_mem_08fe = 0x15;
        FUN_code_28ee();
        R3R2 = (undefined *)
               CONCAT11((char)((uint)R3R2 >> 8) + Z._1_1_ + CARRY1((byte)R3R2,(byte)Z),
                        (byte)R3R2 + (byte)Z);
      }
      *(byte *)(Y + 0x15) = (byte)R3R2;
      *(byte *)((int)Y + 0x2b) = R3R2._1_1_;
      R1R0._0_1_ = (byte)R11R10 | R11R10._1_1_;
      R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
      if ((byte)R1R0 != 0) {
        X = (byte *)Y[0x15];
        Z = (byte *)Y[0x16];
        DAT_mem_08ff = 0xa6;
        DAT_mem_08fe = 0x15;
        FUN_code_2867();
        Z = X;
        DAT_mem_08ff = 0xaa;
        DAT_mem_08fe = 0x15;
        FUN_code_287d();
        R3R2 = Z;
      }
      Z._0_1_ = *(byte *)(Y + 0x15);
      Z._1_1_ = *(char *)((int)Y + 0x2b);
      *(byte *)(Y + 0x16) = (byte)Z;
      *(byte *)((int)Y + 0x2d) = Z._1_1_;
      DAT_mem_053f = false;
      DAT_mem_0540 = 0;
      R1R0._0_1_ = (byte)R11R10 | R11R10._1_1_;
      R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
      if ((byte)R1R0 == 0) {
        Z = (byte *)CONCAT11(DAT_mem_0550,DAT_mem_054f);
        if (Z == (byte *)0x0) {
          for (DAT_mem_061f = 0; X = (byte *)((uint)X & 0xff00), DAT_mem_061f < 0x1e;
              DAT_mem_061f = DAT_mem_061f + 1) {
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11(((char)((uint)Y >> 8) - (((byte)X < 0x4e) + -1)) +
                                 CARRY1(DAT_mem_061f,DAT_mem_061f) +
                                 CARRY1((byte)X + 0xb2,DAT_mem_061f * '\x02'),
                                 (byte)X + 0xb2 + DAT_mem_061f * '\x02');
            puVar10 = X;
            Z._1_1_ = 0;
            X = X + 1;
            *puVar10 = 0;
            *X = Z._1_1_;
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11(((char)((uint)Y >> 8) - (((byte)X < 0x8a) + -1)) +
                                 CARRY1(DAT_mem_061f,DAT_mem_061f) +
                                 CARRY1((byte)X + 0x76,DAT_mem_061f * '\x02'),
                                 (byte)X + 0x76 + DAT_mem_061f * '\x02');
            puVar10 = X;
            Z._1_1_ = 0;
            X = X + 1;
            *puVar10 = 0;
            *X = Z._1_1_;
            X = (byte *)(Y + 0x1d);
            X = (byte *)CONCAT11((char)((uint)X >> 8) + CARRY1(DAT_mem_061f,DAT_mem_061f) +
                                 CARRY1((byte)X,DAT_mem_061f * '\x02'),
                                 (byte)X + DAT_mem_061f * '\x02');
            puVar10 = X;
            Z._1_1_ = 0;
            X = X + 1;
            *puVar10 = 0;
            *X = Z._1_1_;
          }
          R21R20._1_1_ = 0;
        }
        for (DAT_mem_061f = 1; X = (byte *)((uint)X & 0xff00), DAT_mem_061f < 6;
            DAT_mem_061f = DAT_mem_061f + 1) {
          bVar4 = DAT_mem_061f * '\x02';
          Z = (byte *)CONCAT11(CARRY1(DAT_mem_061f,DAT_mem_061f),bVar4);
          X = (byte *)CONCAT11(CARRY1(DAT_mem_061f,DAT_mem_061f) + '\x05' + (0xb2 < bVar4),
                               bVar4 + 0x4d);
          DAT_mem_08ff = 7;
          DAT_mem_08fe = 0x16;
          FUN_code_28ee();
          if (Z == (byte *)0x0) {
            X = (undefined *)0x54d;
            Z = (byte *)CONCAT11(CARRY1(DAT_mem_061f,DAT_mem_061f) + '\x05' +
                                 (0xb2 < (byte)(DAT_mem_061f * '\x02')),DAT_mem_061f * '\x02' + 0x 4d
                                );
            *Z = (byte)R3R2;
            Z[1] = R3R2._1_1_;
            DAT_mem_061f = 6;
          }
        }
        Z = (byte *)CONCAT11(DAT_mem_0558,DAT_mem_0557);
        if (Z != (byte *)0x0) {
          X = (byte *)CONCAT11(DAT_mem_0550,DAT_mem_054f);
          Z._0_1_ = DAT_mem_0551;
          Z._1_1_ = DAT_mem_0552;
          DAT_mem_08ff = 0x31;
          DAT_mem_08fe = 0x16;
          FUN_code_2867();
          Z._0_1_ = DAT_mem_0553;
          Z._1_1_ = DAT_mem_0554;
          DAT_mem_08ff = 0x39;
          DAT_mem_08fe = 0x16;
          FUN_code_2867();
          Z._0_1_ = DAT_mem_0555;
          Z._1_1_ = DAT_mem_0556;
          DAT_mem_08ff = 0x41;
          DAT_mem_08fe = 0x16;
          FUN_code_2867();
          Z._0_1_ = DAT_mem_0557;
          Z._1_1_ = DAT_mem_0558;
          DAT_mem_08ff = 0x49;
          DAT_mem_08fe = 0x16;
          FUN_code_2867();
          Z = (byte *)0x5;
          DAT_mem_08ff = 0x4f;
          DAT_mem_08fe = 0x16;
          FUN_code_28b8();
          Z = (byte *)((int)Z - 1);
          R11R10 = (uint)Z;
        }
        DAT_mem_062a = 4;
        Z = (byte *)((uint)Z & 0xff00);
        Y = (undefined2 *)((int)Y + -1);
        *(char *)Y = '\0';
        X._0_1_ = 1;
        DAT_mem_08ff = 0x59;
        DAT_mem_08fe = 0x16;
        FUN_code_23c5();
        X = &DAT_mem_0472;
        DAT_mem_08ff = 0x5d;
        DAT_mem_08fe = 0x16;
        FUN_code_2419();
      }
      else {
        bVar4 = R3R2._1_1_ + CARRY1(R17,(byte)R3R2);
        bVar13 = ((byte)R11R10 < (byte)(R17 + (byte)R3R2)) <= (byte)(R11R10._1_1_ - bVar4);
        DAT_mem_062b = bVar4 <= R11R10._1_1_ && bVar13;
        X = (byte *)CONCAT11(DAT_mem_061c,DAT_mem_061b);
        if (DAT_mem_061e < DAT_mem_061c ||
            (byte)(DAT_mem_061e - DAT_mem_061c) < (DAT_mem_061d < DAT_mem_061b)) {
LAB_code_1683:
          DAT_mem_053d = (byte)R11R10 - (byte)R3R2;
          DAT_mem_053e = R11R10._1_1_ - (R3R2._1_1_ + ((byte)R11R10 < (byte)R3R2));
          DAT_mem_053f = DAT_mem_062b;
        }
        else if (1 < X) {
          R1R0 = (uint)R17 * 3;
          Z._0_1_ = (byte)R1R0;
          Z._1_1_ = (byte)(R1R0 >> 8);
          bVar3 = (R3R2._1_1_ - (((byte)R3R2 < 0x6a) + -1)) + Z._1_1_ +
                  CARRY1((byte)R3R2 + 0x96,(byte)Z);
          if (bVar3 < R11R10._1_1_ ||
              (byte)(bVar3 - R11R10._1_1_) < ((byte)((byte)R3R2 + 0x96 + (byte)Z) < (byte)R11R10))
          goto LAB_code_1683;
        }
        DAT_mem_0540 = 0;
        if (bVar4 <= R11R10._1_1_ && bVar13) {
          Z = (byte *)CONCAT11(DAT_mem_061c,DAT_mem_061b);
          Z = (byte *)((int)Z + 1);
        }
        else {
          Z = (byte *)0x0;
        }
        DAT_mem_061b = (byte)Z;
        if (Z._1_1_ != 0 && ((byte)Z < 0x91) <= (byte)(Z._1_1_ - 1)) {
          DAT_mem_061b = 0x90;
          Z._1_1_ = 1;
        }
        Z = (byte *)CONCAT11(Z._1_1_,DAT_mem_061b);
        DAT_mem_061c = Z._1_1_;
        if (Z == (byte *)0x0) {
LAB_code_16c4:
          DAT_mem_061f = 0;
          while( true ) {
            X._0_1_ = (byte)Y;
            cVar1 = (char)((uint)Y >> 8);
            if (0x13 < DAT_mem_061f) break;
            X = (byte *)CONCAT11((cVar1 - (((byte)X < 0xc2) + -2)) +
                                 CARRY1(DAT_mem_061f,DAT_mem_061f) +
                                 CARRY1((byte)X + 0x3e,DAT_mem_061f * '\x02'),
                                 (byte)X + 0x3e + DAT_mem_061f * '\x02');
            puVar10 = X;
            Z._1_1_ = 0;
            X = X + 1;
            *puVar10 = 0;
            *X = Z._1_1_;
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11(((char)((uint)Y >> 8) - (((byte)X < 0xea) + -2)) +
                                 CARRY1(DAT_mem_061f,DAT_mem_061f) +
                                 CARRY1((byte)X + 0x16,DAT_mem_061f * '\x02'),
                                 (byte)X + 0x16 + DAT_mem_061f * '\x02');
            puVar10 = X;
            Z._1_1_ = 0;
            X = X + 1;
            *puVar10 = 0;
            *X = Z._1_1_;
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11(((char)((uint)Y >> 8) - (((byte)X < 0x12) + -1)) +
                                 CARRY1(DAT_mem_061f,DAT_mem_061f) +
                                 CARRY1((byte)X - 0x12,DAT_mem_061f * '\x02'),
                                 ((byte)X - 0x12) + DAT_mem_061f * '\x02');
            puVar10 = X;
            Z._1_1_ = 0;
            X = X + 1;
            *puVar10 = 0;
            *X = Z._1_1_;
            DAT_mem_061f = DAT_mem_061f + 1;
          }
          Z._0_1_ = 0;
          X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x90) + -2),(byte)X + 0x70);
          *X = 0;
          R19R18._1_1_ = '\0';
          R19R18._0_1_ = 0;
          X._0_1_ = (byte)Y;
          X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8c) + -2),(byte)X + 0x74);
          *X = (byte)Z;
          X._0_1_ = (byte)Y;
          X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x96) + -2),(byte)X + 0x6a);
          puVar10 = X;
          X = X + 1;
          *puVar10 = (byte)Z;
          *X = (byte)Z;
          X._0_1_ = (byte)Y;
          X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x98) + -2),(byte)X + 0x68);
          puVar10 = X;
          X = X + 1;
          *puVar10 = (byte)Z;
          *X = (byte)Z;
          X._0_1_ = (byte)Y;
          X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x9a) + -2),(byte)X + 0x66);
          puVar10 = X;
          X = X + 1;
          *puVar10 = (byte)Z;
          *X = (byte)Z;
          X._0_1_ = (byte)Y;
          X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8b) + -2),(byte)X + 0x75);
          *X = (byte)Z;
          X._0_1_ = (byte)Y;
          X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x91) + -2),(byte)X + 0x6f);
          *X = (byte)Z;
LAB_code_1a8b:
          Z._0_1_ = (byte)Y;
          bVar4 = (byte)Z;
          cVar1 = (char)((uint)Y >> 8);
          Z = (byte *)CONCAT11(cVar1 - (((byte)Z < 0x8e) + -2),(byte)Z + 0x72);
          Z._0_1_ = *Z;
          if (((byte)Z != '\0') && (DAT_mem_0626 == 0)) {
            X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x8f) + -2),bVar4 + 0x71);
            Z._0_1_ = *X;
            *X = (byte)Z + '\x01';
            X = R5R4;
            Z._0_1_ = 7;
            Z._1_1_ = 0;
            DAT_mem_08ff = 0xa2;
            DAT_mem_08fe = 0x1a;
            FUN_code_28a0();
            if (Z._1_1_ < ((byte)Z < (byte)R23R22)) {
              Z._0_1_ = 0;
              X._0_1_ = (byte)Y;
              X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8f) + -2),(byte)X + 0x71);
              *X = 0;
              X._0_1_ = (byte)Y;
              X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8e) + -2),(byte)X + 0x72);
              *X = (byte)Z;
              DAT_mem_08ff = 0xb2;
              DAT_mem_08fe = 0x1a;
              FUN_code_03c7();
            }
          }
        }
        else {
          X = R3R2 + 0x14;
          if (R11R10._1_1_ <= X._1_1_ && ((byte)X < (byte)R11R10) <= (byte)(X._1_1_ - R11R10._1_1_ ))
          goto LAB_code_16c4;
          X._0_1_ = (byte)Y;
          bVar4 = (byte)X;
          cVar1 = (char)((uint)Y >> 8);
          X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x94) + -2),(byte)X + 0x6c);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
          X._1_1_ = *X;
          if (X._1_1_ < ((byte)R1R0 < 0x91)) goto LAB_code_16c4;
          R13R12 = (byte *)0x0;
          DAT_mem_0537 = 0;
          DAT_mem_0538 = 0;
          DAT_mem_0539 = 0;
          DAT_mem_053a = 0;
          DAT_mem_0541 = 0;
          DAT_mem_0542 = 0;
          DAT_mem_0543 = 0;
          DAT_mem_0544 = 0;
          DAT_mem_0545 = 0;
          DAT_mem_0546 = 0;
          Z._0_1_ = 0;
          while (DAT_mem_061f = (byte)Z, (byte)Z < 0xc) {
            bVar3 = (byte)Z * '\x02';
            Z._1_1_ = CARRY1((byte)Z,(byte)Z);
            X._0_1_ = bVar3 + 0x6f;
            X._1_1_ = Z._1_1_ + '\x04' + (0x90 < bVar3);
            DAT_mem_08ff = 0xee;
            DAT_mem_08fe = 0x16;
            Z._0_1_ = bVar3;
            FUN_code_28ee();
            bVar3 = (byte)Z + DAT_mem_0541;
            DAT_mem_0542 = Z._1_1_ + DAT_mem_0542 + CARRY1((byte)Z,DAT_mem_0541);
            X._0_1_ = DAT_mem_061f * '\x02' + 0x93;
            X._1_1_ = CARRY1(DAT_mem_061f,DAT_mem_061f) -
                      (((byte)(DAT_mem_061f * '\x02') < 0x6d) + -5);
            DAT_mem_08ff = 1;
            DAT_mem_08fe = 0x17;
            DAT_mem_0541 = bVar3;
            Z._0_1_ = bVar3;
            Z._1_1_ = DAT_mem_0542;
            FUN_code_28ee();
            bVar3 = (byte)Z + DAT_mem_0543;
            DAT_mem_0544 = Z._1_1_ + DAT_mem_0544 + CARRY1((byte)Z,DAT_mem_0543);
            X._0_1_ = DAT_mem_061f * '\x02' + 0xb7;
            X._1_1_ = CARRY1(DAT_mem_061f,DAT_mem_061f) -
                      (((byte)(DAT_mem_061f * '\x02') < 0x49) + -5);
            DAT_mem_08ff = 0x14;
            DAT_mem_08fe = 0x17;
            DAT_mem_0543 = bVar3;
            Z._0_1_ = bVar3;
            Z._1_1_ = DAT_mem_0544;
            FUN_code_28ee();
            bVar3 = (byte)Z + DAT_mem_0545;
            DAT_mem_0546 = Z._1_1_ + DAT_mem_0546 + CARRY1((byte)Z,DAT_mem_0545);
            DAT_mem_0545 = bVar3;
            Z._0_1_ = DAT_mem_061f + 1;
          }
          X._0_1_ = *(byte *)(Y + 0x19);
          X._1_1_ = *(byte *)((int)Y + 0x33);
          if (DAT_mem_0542 < X._1_1_ || (byte)(DAT_mem_0542 - X._1_1_) < (DAT_mem_0541 < (byte)X))  {
            X._0_1_ = *(byte *)(Y + 0x18);
            X._1_1_ = *(byte *)((int)Y + 0x31);
            if (DAT_mem_0544 < X._1_1_ || (byte)(DAT_mem_0544 - X._1_1_) < (DAT_mem_0543 < (byte)X ))
            {
              X._0_1_ = *(byte *)(Y + 0x17);
              X._1_1_ = *(byte *)((int)Y + 0x2f);
              if (DAT_mem_0546 < X._1_1_ ||
                  (byte)(DAT_mem_0546 - X._1_1_) < (DAT_mem_0545 < (byte)X)) {
                Z._0_1_ = *(byte *)(Y + 0x19);
                Z._1_1_ = *(char *)((int)Y + 0x33);
                Z = (byte *)CONCAT11(Z._1_1_ - (DAT_mem_0542 + ((byte)Z < DAT_mem_0541)),
                                     (byte)Z - DAT_mem_0541);
                R13R12 = Z;
                Z._0_1_ = *(byte *)(Y + 0x18);
                Z._1_1_ = *(char *)((int)Y + 0x31);
                DAT_mem_0537 = (byte)Z - DAT_mem_0543;
                DAT_mem_0538 = Z._1_1_ - (DAT_mem_0544 + ((byte)Z < DAT_mem_0543));
                Z._0_1_ = *(byte *)(Y + 0x17);
                Z._1_1_ = *(char *)((int)Y + 0x2f);
                DAT_mem_0539 = (byte)Z - DAT_mem_0545;
                DAT_mem_053a = Z._1_1_ - (DAT_mem_0546 + ((byte)Z < DAT_mem_0545));
              }
            }
          }
          R1R0._0_1_ = (byte)R13R12 | R13R12._1_1_;
          R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
          if (((byte)R1R0 != 0) &&
             (R13R12._1_1_ < 5 || (byte)(R13R12._1_1_ - 5) < ((byte)R13R12 < 0xdc))) {
            bVar3 = bVar4 + 0x3e;
            Z = (byte *)CONCAT11(CARRY1((byte)R19R18,(byte)R19R18) + (cVar1 - ((bVar4 < 0xc2) + -2 ))
                                 + CARRY1((byte)R19R18 * '\x02',bVar3),(byte)R19R18 * '\x02' + bVa r3
                                );
            *Z = (byte)R13R12;
            Z[1] = R13R12._1_1_;
            X._0_1_ = (byte)Y;
            Z = (byte *)CONCAT11(CARRY1((byte)R19R18,(byte)R19R18) +
                                 ((char)((uint)Y >> 8) - (((byte)X < 0xea) + -2)) +
                                 CARRY1((byte)R19R18 * '\x02',(byte)X + 0x16),
                                 (byte)R19R18 * '\x02' + (byte)X + 0x16);
            X._1_1_ = DAT_mem_0538;
            *Z = DAT_mem_0537;
            Z[1] = X._1_1_;
            X._0_1_ = (byte)Y;
            Z = (byte *)CONCAT11(CARRY1((byte)R19R18,(byte)R19R18) +
                                 ((char)((uint)Y >> 8) - (((byte)X < 0x12) + -1)) +
                                 CARRY1((byte)R19R18 * '\x02',(byte)X - 0x12),
                                 (byte)R19R18 * '\x02' + ((byte)X - 0x12));
            X._1_1_ = DAT_mem_053a;
            *Z = DAT_mem_0539;
            Z[1] = X._1_1_;
            if ((byte)R19R18 < 0x13) {
              R19R18._0_1_ = (byte)R19R18 + 1;
            }
            else {
              R19R18._0_1_ = 0;
            }
            Z._0_1_ = 0;
            *(char *)(Y + 0x10) = '\0';
            *(byte *)((int)Y + 0x21) = (byte)Z;
            *(byte *)(Y + 0x11) = (byte)Z;
            *(byte *)((int)Y + 0x23) = (byte)Z;
            *(byte *)(Y + 0xe) = (byte)Z;
            *(byte *)((int)Y + 0x1d) = (byte)Z;
            *(byte *)(Y + 0xf) = (byte)Z;
            *(byte *)((int)Y + 0x1f) = (byte)Z;
            *(byte *)(Y + 0xc) = (byte)Z;
            *(byte *)((int)Y + 0x19) = (byte)Z;
            *(byte *)(Y + 0xd) = (byte)Z;
            *(byte *)((int)Y + 0x1b) = (byte)Z;
            DAT_mem_061f = (byte)Z;
            while( true ) {
              X._0_1_ = (byte)Y;
              cVar1 = (char)((uint)Y >> 8);
              if (0x13 < DAT_mem_061f) break;
              X = (byte *)CONCAT11((cVar1 - (((byte)X < 0xc2) + -2)) +
                                   CARRY1(DAT_mem_061f,DAT_mem_061f) +
                                   CARRY1((byte)X + 0x3e,DAT_mem_061f * '\x02'),
                                   (byte)X + 0x3e + DAT_mem_061f * '\x02');
              ppbVar12 = (byte **)X;
              X = (byte *)((int)X + 1);
              R13R12._0_1_ = *(byte *)ppbVar12;
              R13R12._1_1_ = *X;
              R13R12 = *ppbVar12;
              R1R0._0_1_ = (byte)R13R12 | R13R12._1_1_;
              R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
              if ((byte)R1R0 == 0) break;
              X = (byte *)Y[0x10];
              DAT_mem_08ff = 199;
              DAT_mem_08fe = 0x17;
              Z = R13R12;
              FUN_code_2862();
              *(byte *)(Y + 0x10) = (byte)Z;
              *(byte *)((int)Y + 0x21) = Z._1_1_;
              *(byte *)(Y + 0x11) = (byte)R23R22;
              *(byte *)((int)Y + 0x23) = R23R22._1_1_;
              X._0_1_ = (byte)Y;
              Z._0_1_ = DAT_mem_061f * '\x02';
              Z._1_1_ = CARRY1(DAT_mem_061f,DAT_mem_061f);
              X = (byte *)CONCAT11(((char)((uint)Y >> 8) - (((byte)X < 0xea) + -2)) + Z._1_1_ +
                                   CARRY1((byte)X + 0x16,(byte)Z),(byte)X + 0x16 + (byte)Z);
              DAT_mem_08ff = 0xd7;
              DAT_mem_08fe = 0x17;
              FUN_code_28ee();
              X = (byte *)Y[0xe];
              DAT_mem_08ff = 0xdf;
              DAT_mem_08fe = 0x17;
              FUN_code_2862();
              *(byte *)(Y + 0xe) = (byte)Z;
              *(byte *)((int)Y + 0x1d) = Z._1_1_;
              *(byte *)(Y + 0xf) = (byte)R23R22;
              *(byte *)((int)Y + 0x1f) = R23R22._1_1_;
              X._0_1_ = (byte)Y;
              Z._0_1_ = DAT_mem_061f * '\x02';
              Z._1_1_ = CARRY1(DAT_mem_061f,DAT_mem_061f);
              X = (byte *)CONCAT11(((char)((uint)Y >> 8) - (((byte)X < 0x12) + -1)) + Z._1_1_ +
                                   CARRY1((byte)X - 0x12,(byte)Z),((byte)X - 0x12) + (byte)Z);
              DAT_mem_08ff = 0xef;
              DAT_mem_08fe = 0x17;
              FUN_code_28ee();
              X._0_1_ = *(byte *)(Y + 0xc);
              X._1_1_ = *(char *)((int)Y + 0x19);
              DAT_mem_08ff = 0xf7;
              DAT_mem_08fe = 0x17;
              FUN_code_2862();
              *(byte *)(Y + 0xc) = (byte)Z;
              *(byte *)((int)Y + 0x19) = Z._1_1_;
              *(byte *)(Y + 0xd) = (byte)R23R22;
              *(byte *)((int)Y + 0x1b) = R23R22._1_1_;
              DAT_mem_061f = DAT_mem_061f + 1;
            }
            Z = (byte *)(uint)DAT_mem_061f;
            X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x8c) + -2),(byte)X + 0x74);
            *X = DAT_mem_061f;
            X = (byte *)Y[0x10];
            Z = (byte *)((uint)Z & 0xff);
            DAT_mem_08ff = 0x10;
            DAT_mem_08fe = 0x18;
            FUN_code_28b8();
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x96) + -2),(byte)X + 0x6a);
            puVar10 = X;
            X = X + 1;
            *puVar10 = (byte)Z;
            *X = Z._1_1_;
            Z = (byte *)(uint)DAT_mem_061f;
            X = (byte *)Y[0xe];
            DAT_mem_08ff = 0x20;
            DAT_mem_08fe = 0x18;
            FUN_code_28b8();
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x98) + -2),(byte)X + 0x68);
            puVar10 = X;
            X = X + 1;
            *puVar10 = (byte)Z;
            *X = Z._1_1_;
            X = (byte *)Y[0xc];
            Z._0_1_ = DAT_mem_061f;
            Z._1_1_ = 0;
            DAT_mem_08ff = 0x30;
            DAT_mem_08fe = 0x18;
            FUN_code_28b8();
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x9a) + -2),(byte)X + 0x66);
            pbVar11 = X;
            X = X + 1;
            *pbVar11 = (byte)Z;
            *X = Z._1_1_;
          }
          Z = (byte *)CONCAT11(DAT_mem_0540,DAT_mem_053f);
          X._0_1_ = (byte)Y;
          cVar1 = (char)((uint)Y >> 8);
          if (Z == (byte *)0x0) {
LAB_code_1853:
            Z._0_1_ = 0;
            X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x90) + -2),(byte)X + 0x70);
            *X = 0;
            R19R18._1_1_ = '\0';
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8b) + -2),(byte)X + 0x75);
            *X = (byte)Z;
            goto LAB_code_1a8b;
          }
          X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x96) + -2),(byte)X + 0x6a);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          uVar6 = R1R0 & 0xff00;
          R1R0 = uVar6 | (byte)R1R0;
          X._1_1_ = *X;
          X = (byte *)CONCAT11(X._1_1_,(byte)R1R0);
          if (X < 10) goto LAB_code_1853;
          X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x98) + -2),(byte)X + 0x68);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          R1R0 = uVar6 | (byte)R1R0;
          X._1_1_ = *X;
          X = (byte *)CONCAT11(X._1_1_,(byte)R1R0);
          if (X < 10) goto LAB_code_1853;
          X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x9a) + -2),(byte)X + 0x66);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          R1R0 = uVar6 | (byte)R1R0;
          X._1_1_ = *X;
          X = (byte *)CONCAT11(X._1_1_,(byte)R1R0);
          if (X < 10) goto LAB_code_1853;
          X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x8f) + -2),(byte)X + 0x71);
          *X = 0;
          X._0_1_ = (byte)Y;
          cVar1 = (char)((uint)Y >> 8);
          X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x96) + -2),(byte)X + 0x6a);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          uVar6 = R1R0 & 0xff00;
          R1R0 = uVar6 | (byte)R1R0;
          X._1_1_ = *X;
          X = (byte *)CONCAT11(X._1_1_,(byte)R1R0);
          if (X._1_1_ < 5 || (byte)(X._1_1_ - 5) < ((byte)R1R0 < 0xdc)) {
            Z = (byte *)CONCAT11(cVar1 - (((byte)X < 0x9a) + -2),(byte)X + 0x66);
            pbVar11 = Z;
            Z = Z + 1;
            R1R0._0_1_ = *pbVar11;
            R1R0 = uVar6 | (byte)R1R0;
            Z._1_1_ = *Z;
            Z = (byte *)CONCAT11(Z._1_1_,(byte)R1R0);
            DAT_mem_08ff = 0x6e;
            DAT_mem_08fe = 0x18;
            FUN_code_2721();
            X = Z;
            Z = (byte *)CONCAT11(cVar1 - (((byte)X < 0x98) + -2),(byte)X + 0x68);
            pbVar11 = Z;
            Z = Z + 1;
            R1R0._0_1_ = *pbVar11;
            R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
            Z._1_1_ = *Z;
            Z._0_1_ = (byte)R1R0;
            DAT_mem_08ff = 0x7a;
            DAT_mem_08fe = 0x18;
            FUN_code_2721();
            DAT_mem_08ff = 0x7c;
            DAT_mem_08fe = 0x18;
            FUN_code_27f9();
            *(byte *)(Y + 0x12) = (byte)Z;
            *(byte *)((int)Y + 0x25) = Z._1_1_;
            *(byte *)(Y + 0x13) = (byte)R23R22;
            *(byte *)((int)Y + 0x27) = R23R22._1_1_;
            X._0_1_ = *(byte *)(Y + 0x12);
            X._1_1_ = *(char *)((int)Y + 0x25);
            Z = (byte *)0x0;
            DAT_mem_08ff = 0x8a;
            DAT_mem_08fe = 0x18;
            FUN_code_27ab();
            X = &DAT_mem_0543;
            DAT_mem_08ff = 0x8e;
            DAT_mem_08fe = 0x18;
            FUN_code_26e8();
            pbVar11 = X;
            X = X + 1;
            *pbVar11 = (byte)Z;
            *X = Z._1_1_;
            if (DAT_mem_0544 < (DAT_mem_0543 < 100)) {
              Z._0_1_ = DAT_mem_0543;
            }
            else {
              Z._0_1_ = 99;
            }
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x91) + -2),(byte)X + 0x6f);
            *X = (byte)Z;
            X._0_1_ = (byte)Y;
            bVar4 = (byte)X;
            cVar2 = (char)((uint)Y >> 8);
            cVar1 = cVar2 - (((byte)X < 0x8c) + -2);
            X = (byte *)CONCAT11(cVar1,(byte)X + 0x74);
            X._0_1_ = *X;
            X = (byte *)CONCAT11(cVar1,(byte)X);
            if ((2 < (byte)X) && (DAT_mem_0626 == 0)) {
              X = (byte *)CONCAT11(cVar2 - ((bVar4 < 0x8b) + -2),bVar4 + 0x75);
              *X = 1;
              Z._0_1_ = (byte)Y;
              bVar4 = (byte)Z;
              cVar1 = (char)((uint)Y >> 8);
              Z._1_1_ = cVar1 - (((byte)Z < 0x8e) + -2);
              Z = (byte *)CONCAT11(Z._1_1_,(byte)Z + 0x72);
              Z._0_1_ = *Z;
              if ((byte)Z == '\0') {
                X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x8e) + -2),bVar4 + 0x72);
                *X = 1;
                Z = (byte *)((uint)Z._1_1_ << 8);
                Y = (undefined2 *)((int)Y + -1);
                *(char *)Y = '\0';
                X = (byte *)((uint)X & 0xff00);
                DAT_mem_08ff = 0xc0;
                DAT_mem_08fe = 0x18;
                FUN_code_23c5();
                X = (undefined *)0x404;
                DAT_mem_08ff = 0xc4;
                DAT_mem_08fe = 0x18;
                FUN_code_240a();
              }
              Z._0_1_ = 'C';
              Y = (undefined2 *)((int)Y + -1);
              *(char *)Y = '\x06';
              Y = (undefined2 *)((int)Y + -1);
              *(byte *)Y = (byte)Z;
              Z._0_1_ = -0x22;
              Y = (undefined2 *)((int)Y + -1);
              *(char *)Y = '\x03';
              Y = (undefined2 *)((int)Y + -1);
              *(byte *)Y = (byte)Z;
              Z._0_1_ = (byte)Y;
              Z = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)Z < 0x8d) + -2),(byte)Z + 0x73);
              Z._0_1_ = *Z;
              Z = (byte *)(uint)(byte)Z;
              DAT_mem_08ff = 0xd5;
              DAT_mem_08fe = 0x18;
              FUN_code_28f6();
              DAT_mem_08ff = 0xd8;
              DAT_mem_08fe = 0x18;
              FUN_code_25b4();
              Z._0_1_ = 3;
              Y = (undefined2 *)((int)Y + 7);
              *(char *)Y = '\x03';
              X = (byte *)((uint)X & 0xff00);
              DAT_mem_08ff = 0xde;
              DAT_mem_08fe = 0x18;
              FUN_code_23c5();
              X = (byte *)0x643;
              DAT_mem_08ff = 0xe2;
              DAT_mem_08fe = 0x18;
              FUN_code_240a();
              X._0_1_ = (byte)Y;
              cVar1 = (char)((uint)Y >> 8) - (((byte)X < 0x91) + -2);
              X = (byte *)CONCAT11(cVar1,(byte)X + 0x6f);
              X._0_1_ = *X;
              X = (byte *)CONCAT11(cVar1,(byte)X);
              if ((byte)X < 10) {
                X = (byte *)0x415;
                DAT_mem_08ff = 0xec;
                DAT_mem_08fe = 0x18;
                FUN_code_240a();
              }
            }
            Z._0_1_ = (byte)Y;
            bVar4 = (byte)Z;
            cVar1 = (char)((uint)Y >> 8);
            Z = (byte *)CONCAT11(cVar1 - (((byte)Z < 0x98) + -2),(byte)Z + 0x68);
            pbVar11 = Z;
            Z = Z + 1;
            R1R0._0_1_ = *pbVar11;
            R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
            Z._1_1_ = *Z;
            Z = (byte *)CONCAT11(Z._1_1_,(byte)R1R0);
            DAT_mem_08ff = 0xf6;
            DAT_mem_08fe = 0x18;
            FUN_code_2721();
            X = Z;
            Z._0_1_ = *(byte *)(Y + 0x19);
            Z._1_1_ = *(char *)((int)Y + 0x33);
            DAT_mem_08ff = 0xfe;
            DAT_mem_08fe = 0x18;
            FUN_code_2721();
            DAT_mem_08ff = 0;
            DAT_mem_08fe = 0x19;
            FUN_code_27ab();
            DAT_mem_08ff = R23R22._1_1_;
            DAT_mem_08fe = (byte)R23R22;
            DAT_mem_08fd = Z._1_1_;
            DAT_mem_08fc = (byte)Z;
            Z = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x96) + -2),bVar4 + 0x6a);
            pbVar11 = Z;
            Z = Z + 1;
            R1R0._0_1_ = *pbVar11;
            R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
            Z._1_1_ = *Z;
            Z = (byte *)CONCAT11(Z._1_1_,(byte)R1R0);
            DAT_mem_08fb = 0xe;
            DAT_mem_08fa = 0x19;
            FUN_code_2721();
            X = Z;
            Z._0_1_ = *(byte *)(Y + 0x18);
            Z._1_1_ = *(char *)((int)Y + 0x31);
            DAT_mem_08fb = 0x16;
            DAT_mem_08fa = 0x19;
            FUN_code_2721();
            DAT_mem_08fb = 0x18;
            DAT_mem_08fa = 0x19;
            FUN_code_27ab();
            X = (byte *)CONCAT11(DAT_mem_08fd,DAT_mem_08fc);
            DAT_mem_08ff = 0x1e;
            DAT_mem_08fe = 0x19;
            FUN_code_27f9();
            X._0_1_ = (byte)Z;
            X._1_1_ = Z._1_1_;
            DAT_mem_08ff = 0x22;
            DAT_mem_08fe = 0x19;
            FUN_code_25f0();
            X._0_1_ = 0x66;
            X._1_1_ = 0x66;
            DAT_mem_08ff = 0x28;
            DAT_mem_08fe = 0x19;
            FUN_code_275b();
            DAT_mem_08ff = R23R22._1_1_;
            DAT_mem_08fe = (byte)R23R22;
            DAT_mem_08fd = Z._1_1_;
            DAT_mem_08fc = (byte)Z;
            X._0_1_ = *(byte *)(Y + 0x12);
            X._1_1_ = *(char *)((int)Y + 0x25);
            DAT_mem_08fb = 0x32;
            DAT_mem_08fa = 0x19;
            FUN_code_25f0();
            X._0_1_ = 0x2f;
            X._1_1_ = 0xdd;
            DAT_mem_08fb = 0x38;
            DAT_mem_08fa = 0x19;
            FUN_code_27ab();
            X._0_1_ = DAT_mem_08fc;
            X._1_1_ = DAT_mem_08fd;
            DAT_mem_08ff = 0x3e;
            DAT_mem_08fe = 0x19;
            FUN_code_2900();
            DAT_mem_08ff = 0x40;
            DAT_mem_08fe = 0x19;
            FUN_code_2754();
            DAT_mem_08ff = R23R22._1_1_;
            DAT_mem_08fe = (byte)R23R22;
            DAT_mem_08fd = Z._1_1_;
            DAT_mem_08fc = (byte)Z;
            Z._0_1_ = DAT_mem_0642;
            DAT_mem_08fb = 0x48;
            DAT_mem_08fa = 0x19;
            FUN_code_2882();
            DAT_mem_08fb = 0x4a;
            DAT_mem_08fa = 0x19;
            FUN_code_2721();
            X._0_1_ = 0x8f;
            X._1_1_ = 0xc2;
            DAT_mem_08fb = 0x50;
            DAT_mem_08fa = 0x19;
            FUN_code_27ab();
            X._0_1_ = DAT_mem_08fc;
            X._1_1_ = DAT_mem_08fd;
            DAT_mem_08ff = 0x56;
            DAT_mem_08fe = 0x19;
            FUN_code_2900();
            DAT_mem_08ff = 0x58;
            DAT_mem_08fe = 0x19;
            FUN_code_2754();
            *(byte *)(Y + 0x12) = (byte)Z;
            *(byte *)((int)Y + 0x25) = Z._1_1_;
            *(byte *)(Y + 0x13) = (byte)R23R22;
            *(byte *)((int)Y + 0x27) = R23R22._1_1_;
            X._0_1_ = *(char *)((int)Y + 0x27);
            if ((char)(byte)X < '\0') {
              R19R18._1_1_ = '\x01';
              *(char *)((int)Y + 0x13) = '-';
              if (DAT_mem_0642 == 0) {
                Z = (byte *)0x0;
                R23R22 = 0;
              }
              else {
                Z = (byte *)Y[0x12];
                DAT_mem_08ff = 0x6c;
                DAT_mem_08fe = 0x19;
                FUN_code_26b5();
              }
              *(byte *)(Y + 0x12) = (byte)Z;
              *(byte *)((int)Y + 0x25) = Z._1_1_;
              *(byte *)(Y + 0x13) = (byte)R23R22;
              *(byte *)((int)Y + 0x27) = R23R22._1_1_;
            }
            else {
              R19R18._1_1_ = '\0';
              *(char *)((int)Y + 0x13) = '+';
            }
            X._0_1_ = (byte)Y;
            bVar4 = (byte)X;
            cVar1 = (char)((uint)Y >> 8);
            if (DAT_mem_0642 == 0) {
LAB_code_198a:
              bVar13 = false;
            }
            else {
              X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x91) + -2),(byte)X + 0x6f);
              X._0_1_ = *X;
              if ((((byte)X < 0x19) || (0x49 < (byte)X)) || (R19R18._1_1_ == '\0'))
              goto LAB_code_198a;
              bVar13 = true;
            }
            if (bVar13) {
              X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x90) + -2),bVar4 + 0x70);
              X._0_1_ = *X;
              if ((byte)X < 4) {
                Z = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x90) + -2),bVar4 + 0x70);
                Z._0_1_ = *Z;
                cVar2 = (byte)Z + '\x01';
              }
              else {
                cVar2 = '\x04';
              }
            }
            else {
              X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x90) + -2),bVar4 + 0x70);
              X._0_1_ = *X;
              if ((byte)X < 2) {
                cVar2 = '\0';
              }
              else {
                Z = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x90) + -2),bVar4 + 0x70);
                Z._0_1_ = *Z;
                cVar2 = (byte)Z + -2;
              }
            }
            X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x90) + -2),bVar4 + 0x70);
            *X = cVar2;
            X._0_1_ = (byte)Y;
            bVar4 = (byte)X;
            cVar1 = (char)((uint)Y >> 8);
            X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x8c) + -2),(byte)X + 0x74);
            X._0_1_ = *X;
            if ((byte)X < 3) {
LAB_code_19bc:
              Z._0_1_ = '\0';
            }
            else {
              X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x90) + -2),bVar4 + 0x70);
              X._0_1_ = *X;
              if ((byte)X < 3) goto LAB_code_19bc;
              Z._0_1_ = '\x01';
            }
            R19R18._1_1_ = (byte)Z;
            X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x8c) + -2),bVar4 + 0x74);
            X._0_1_ = *X;
            if ((2 < (byte)X) && (DAT_mem_0626 == 0)) {
              X._0_1_ = *(byte *)(Y + 0x12);
              X._1_1_ = *(char *)((int)Y + 0x25);
              Z = (byte *)0x0;
              DAT_mem_08ff = 0xd3;
              DAT_mem_08fe = 0x19;
              FUN_code_27ab();
              X = &DAT_mem_0543;
              DAT_mem_08ff = 0xd7;
              DAT_mem_08fe = 0x19;
              FUN_code_26e8();
              pbVar11 = X;
              X = X + 1;
              *pbVar11 = (byte)Z;
              *X = Z._1_1_;
              if (DAT_mem_0544 < (DAT_mem_0543 < 100)) {
                Z._0_1_ = DAT_mem_0543;
              }
              else {
                Z._0_1_ = 99;
              }
              DAT_mem_062b = (byte)Z;
              Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0642);
              if (DAT_mem_0642 == 0) {
                DAT_mem_062b = 99 - (byte)Z;
                Z = (byte *)CONCAT11(Z._1_1_,0x20);
                *(char *)((int)Y + 0x13) = ' ';
                X = (byte *)0x427;
                DAT_mem_08ff = 1;
                DAT_mem_08fe = 0x1a;
                FUN_code_240a();
              }
              else {
                if (R19R18._1_1_ == '\0') {
                  X._0_1_ = 0x1f;
                }
                else {
                  X._0_1_ = 0x17;
                }
                X = (byte *)CONCAT11(4,(byte)X);
                DAT_mem_08ff = 0xf4;
                DAT_mem_08fe = 0x19;
                FUN_code_240a();
              }
              Z._0_1_ = 'C';
              Y = (undefined2 *)((int)Y + -1);
              *(char *)Y = '\x06';
              Y = (undefined2 *)((int)Y + -1);
              *(byte *)Y = (byte)Z;
              Z._0_1_ = -0x59;
              Z._1_1_ = 4;
              Y = (undefined2 *)((int)Y + -1);
              *(char *)Y = '\x04';
              Y = (undefined2 *)((int)Y + -1);
              *(byte *)Y = (byte)Z;
              Z._0_1_ = *(char *)((int)Y + 0x17);
              DAT_mem_08ff = 0xc;
              DAT_mem_08fe = 0x1a;
              FUN_code_2882();
              DAT_mem_08ff = 0xe;
              DAT_mem_08fe = 0x1a;
              FUN_code_28f6();
              Z._1_1_ = 0;
              Z._0_1_ = DAT_mem_062b;
              DAT_mem_08ff = 0x15;
              DAT_mem_08fe = 0x1a;
              FUN_code_28f6();
              DAT_mem_08ff = 0x18;
              DAT_mem_08fe = 0x1a;
              FUN_code_25b4();
              Y = (undefined2 *)((int)Y + 0xc);
              X._0_1_ = 0x43;
              X._1_1_ = 6;
              DAT_mem_08ff = 0x1d;
              DAT_mem_08fe = 0x1a;
              FUN_code_240a();
              if (DAT_mem_062b < 10) {
                X = (byte *)0x42f;
                DAT_mem_08ff = 0x25;
                DAT_mem_08fe = 0x1a;
                FUN_code_240a();
              }
            }
          }
        }
        Z = (byte *)CONCAT11(DAT_mem_0540,DAT_mem_053f);
        X._0_1_ = (byte)Y;
        cVar1 = (char)((uint)Y >> 8);
        if (((Z == (byte *)0x0) || (R19R18._1_1_ != '\0')) ||
           (Z = (byte *)CONCAT11(DAT_mem_0540,DAT_mem_063f), DAT_mem_063f == 0)) {
LAB_code_1ac8:
          Z = (byte *)((uint)Z & 0xff00);
          write_volatile_1(DAT_mem_00b0,0);
          write_volatile_1(DAT_mem_00b1,0);
          X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x92) + -2),(byte)X + 0x6e);
          *X = 0;
        }
        else {
          X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x94) + -2),(byte)X + 0x6c);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
          X._1_1_ = *X;
          Z = (byte *)((uint)DAT_mem_0540 << 8);
          if (X._1_1_ < ((byte)R1R0 < 0x91)) goto LAB_code_1ac8;
          X = (byte *)CONCAT11(X._1_1_,DAT_mem_0654);
          if ((char)DAT_mem_0654 < '\t') {
            bVar4 = DAT_mem_053e - (DAT_mem_053d < R17);
            X = (byte *)CONCAT11(bVar4,DAT_mem_053d - R17);
            R13R12 = X;
            if (bVar4 < ((byte)(DAT_mem_053d - R17) < 0x96)) {
              Z = (byte *)0xa;
              DAT_mem_08ff = 0x6f;
              DAT_mem_08fe = 0x1b;
              FUN_code_28a0();
            }
            else {
              Z = (byte *)0xf;
            }
            X._1_1_ = (byte)((uint)X >> 8);
            DAT_mem_062b = (byte)Z + DAT_mem_0625;
            uVar6 = (uint)Z & 0xff00;
            Z = (byte *)(uVar6 | DAT_mem_062b);
            if (0x2c < DAT_mem_062b) {
              Z._1_1_ = (byte)(uVar6 >> 8);
              Z = (byte *)CONCAT11(Z._1_1_,0x2d);
            }
            write_volatile_1(DAT_mem_00b3,(byte)Z);
            write_volatile_1(DAT_mem_00b0,0x83);
            Z = (byte *)((uint)Z & 0xff00);
            Z._1_1_ = (byte)((uint)Z >> 8);
            if (DAT_mem_0654 == 8) {
              if (DAT_mem_053e < 5 || (byte)(DAT_mem_053e - 5) < (DAT_mem_053d < 0xdd)) {
                if (DAT_mem_053e < (DAT_mem_053d < 0x97)) {
                  Z = (byte *)CONCAT11(Z._1_1_,4);
                }
                else {
                  Z = (byte *)CONCAT11(Z._1_1_,5);
                }
              }
              else {
                Z = (byte *)((uint)Z | 6);
              }
              X._1_1_ = DAT_mem_053e;
              write_volatile_1(DAT_mem_00b1,(byte)Z);
            }
            else {
              if (DAT_mem_0654 == 1) {
LAB_code_1bd3:
                Z = (byte *)CONCAT11(Z._1_1_,4);
              }
              else if (DAT_mem_0654 == 2) {
                Z = (byte *)CONCAT11(Z._1_1_,5);
              }
              else if (DAT_mem_0654 == 3) {
                Z = (byte *)CONCAT11(Z._1_1_,6);
              }
              else if (DAT_mem_0654 == 4) {
                cVar1 = read_volatile_1(DAT_mem_00b1);
                if (cVar1 == '\x04') {
                  Z = (byte *)CONCAT11(Z._1_1_,5);
                }
                else {
                  Z = (byte *)CONCAT11(Z._1_1_,4);
                }
              }
              else if (DAT_mem_0654 == 5) {
                cVar1 = read_volatile_1(DAT_mem_00b1);
                if (cVar1 == '\x05') {
                  Z = (byte *)CONCAT11(Z._1_1_,6);
                }
                else {
                  Z = (byte *)CONCAT11(Z._1_1_,5);
                }
              }
              else if (DAT_mem_0654 == 6) {
                cVar1 = read_volatile_1(DAT_mem_00b1);
                if (cVar1 == '\x04') {
                  Z = (byte *)CONCAT11(Z._1_1_,6);
                }
                else {
                  Z = (byte *)CONCAT11(Z._1_1_,4);
                }
              }
              else {
                if (DAT_mem_0654 != 7) goto LAB_code_1be0;
                cVar1 = read_volatile_1(DAT_mem_00b1);
                if (cVar1 == '\x04') {
                  Z = (byte *)CONCAT11(Z._1_1_,5);
                }
                else {
                  cVar1 = read_volatile_1(DAT_mem_00b1);
                  if (cVar1 != '\x05') goto LAB_code_1bd3;
                  Z = (byte *)CONCAT11(Z._1_1_,6);
                }
              }
              write_volatile_1(DAT_mem_00b1,(byte)Z);
            }
          }
          else {
            write_volatile_1(DAT_mem_00b0,0x42);
            Z._1_1_ = DAT_mem_0540;
            write_volatile_1(DAT_mem_00b1,5);
            if ((DAT_mem_0654 == 10) || (DAT_mem_0654 == 9)) {
              X = (byte *)CONCAT11(DAT_mem_053e,DAT_mem_053d);
              Z._0_1_ = 3;
              Z._1_1_ = 0;
              DAT_mem_08ff = 0xe0;
              DAT_mem_08fe = 0x1a;
              FUN_code_28a0();
              DAT_mem_08ff = 0xe4;
              DAT_mem_08fe = 0x1a;
              FUN_code_2721();
              X._0_1_ = (byte)Z;
              X._1_1_ = Z._1_1_;
              DAT_mem_08ff = 0xe8;
              DAT_mem_08fe = 0x1a;
              FUN_code_25f0();
              X = (byte *)0x0;
              DAT_mem_08ff = 0xee;
              DAT_mem_08fe = 0x1a;
              FUN_code_27ab();
              X = &DAT_mem_062b;
              DAT_mem_08ff = 0xf2;
              DAT_mem_08fe = 0x1a;
              FUN_code_26e8();
              *X = (byte)Z;
            }
            Z = (byte *)CONCAT11(Z._1_1_,DAT_mem_0654);
            Z._0_1_ = (byte)Y;
            bVar4 = (byte)Z;
            cVar1 = (char)((uint)Y >> 8);
            if (DAT_mem_0654 == 10) {
              if (DAT_mem_062b < 0xbf) {
                Z = (byte *)CONCAT11(Z._1_1_,-1 - DAT_mem_062b);
              }
              else {
                Z = (byte *)CONCAT11(Z._1_1_,0x40);
              }
              DAT_mem_062b = (byte)Z;
            }
            else if (DAT_mem_0654 == 9) {
              if (DAT_mem_062b < 0xbf) {
                Z = (byte *)CONCAT11(Z._1_1_,DAT_mem_062b + 0x40);
              }
              else {
                Z = (byte *)CONCAT11(Z._1_1_,0xff);
              }
              DAT_mem_062b = (byte)Z;
            }
            else {
              if (DAT_mem_0654 == 0xb) {
                cVar2 = cVar1 - (((byte)Z < 0x91) + -2);
                Z = (byte *)CONCAT11(cVar2,(byte)Z + 0x6f);
                Z._0_1_ = *Z;
                if ((byte)Z == '\0') {
                  Z = (byte *)CONCAT11(cVar2,0x39);
                }
                else {
                  Z = (byte *)CONCAT11(cVar2,(byte)Z * '\x02' + '9');
                }
              }
              else {
                if (DAT_mem_0654 != 0xc) goto LAB_code_1b2e;
                cVar2 = cVar1 - (((byte)Z < 0x91) + -2);
                Z = (byte *)CONCAT11(cVar2,(byte)Z + 0x6f);
                Z._0_1_ = *Z;
                if ((byte)Z == '\0') {
                  Z = (byte *)CONCAT11(cVar2,0xff);
                }
                else {
                  Z = (byte *)CONCAT11(cVar2,(byte)Z * '\x02');
                  X = (byte *)CONCAT11(X._1_1_,0xff);
                  DAT_mem_08ff = 0x29;
                  DAT_mem_08fe = 0x1b;
                  FUN_code_2909();
                  Z = (byte *)((uint)Z & 0xff00 | (uint)(byte)((byte)Z - (byte)X));
                }
              }
              write_volatile_1(DAT_mem_00b3,(byte)Z);
            }
LAB_code_1b2e:
            if ((DAT_mem_0654 == 10) || (DAT_mem_0654 == 9)) {
              bVar3 = cVar1 - ((bVar4 < 0x92) + -2);
              Z = (byte *)CONCAT11(bVar3,bVar4 + 0x6e);
              Z._0_1_ = *Z;
              if ((byte)Z == '\0') {
                Z = (byte *)((uint)bVar3 << 8);
                *(char *)Y = '\0';
                *(byte *)((int)Y + 1) = (byte)Z;
              }
              else {
                bVar4 = read_volatile_1(DAT_mem_00b3);
                X._0_1_ = DAT_mem_062b - bVar4;
                X._1_1_ = -(DAT_mem_062b < bVar4);
                *(byte *)Y = (byte)X;
                *(byte *)((int)Y + 1) = X._1_1_;
                Z = (byte *)0xe;
                DAT_mem_08ff = 0x48;
                DAT_mem_08fe = 0x1b;
                FUN_code_28b3();
                cVar2 = (char)Z;
                cVar1 = read_volatile_1(DAT_mem_00b3);
                Z = (byte *)((uint)Z & 0xff00);
                DAT_mem_062b = cVar1 + cVar2;
              }
              Z = (byte *)((uint)Z & 0xff00);
              write_volatile_1(DAT_mem_00b3,DAT_mem_062b);
              X._0_1_ = (byte)Y;
              X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x92) + -2),(byte)X + 0x6e);
              *X = DAT_mem_062b;
            }
          }
        }
LAB_code_1be0:
        Z = (byte *)((uint)Z & 0xff00);
        Y = (undefined2 *)((int)Y + -1);
        *(char *)Y = '\0';
        X = (byte *)CONCAT11(X._1_1_,1);
        DAT_mem_08ff = 0xe5;
        DAT_mem_08fe = 0x1b;
        FUN_code_23c5();
        X._0_1_ = (byte)Y;
        cVar1 = (char)((uint)Y >> 8);
        X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x94) + -2),(byte)X + 0x6c);
        pbVar11 = X;
        X = X + 1;
        R1R0._0_1_ = *pbVar11;
        R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
        X._1_1_ = *X;
        X = (byte *)CONCAT11(X._1_1_,(byte)R1R0);
        Z = (byte *)((uint)Z & 0xff00);
        if (((byte)R1R0 < 0x91) <= X._1_1_) {
          Z = (byte *)CONCAT11(DAT_mem_0540,DAT_mem_053f);
          if (Z == (byte *)0x0) {
            if ((DAT_mem_063f == 0) && (DAT_mem_063e != 0)) {
              R1R0 = (char)DAT_mem_063e * 0xe;
              Z._0_1_ = (byte)R1R0;
              write_volatile_1(ICR1H,(byte)Z + 'r');
            }
            Z._0_1_ = '\0';
            *(char *)(Y + 0x1a) = '\0';
            *(byte *)((int)Y + 0x35) = (byte)Z;
            *(byte *)(Y + 0x1b) = (byte)Z;
            *(byte *)((int)Y + 0x37) = (byte)Z;
            *(byte *)(Y + 0x1c) = (byte)Z;
            *(byte *)((int)Y + 0x39) = (byte)Z;
            R21R20._0_1_ = 0;
            X._0_1_ = (byte)Y;
            X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8d) + -2),(byte)X + 0x73);
            *X = (byte)Z;
            Z._0_1_ = R16 + (byte)R11R10;
            Z._1_1_ = R11R10._1_1_ + CARRY1(R16,(byte)R11R10);
            if (Z._1_1_ < R3R2._1_1_ || (byte)(Z._1_1_ - R3R2._1_1_) < ((byte)Z < (byte)R3R2)) {
              Z._0_1_ = R17 + (byte)R11R10;
              Z._1_1_ = R11R10._1_1_ + CARRY1(R17,(byte)R11R10);
              if (R3R2._1_1_ <= Z._1_1_ && ((byte)Z < (byte)R3R2) <= (byte)(Z._1_1_ - R3R2._1_1_))  {
                X._0_1_ = 0x57;
                X._1_1_ = 4;
                DAT_mem_08ff = 0xcc;
                DAT_mem_08fe = 0x1d;
                FUN_code_240a();
                Z = (byte *)CONCAT11(DAT_mem_061a,DAT_mem_0619);
                Z = (byte *)((int)Z + 1);
                DAT_mem_061a = Z._1_1_;
                X = &DAT_mem_0619;
                DAT_mem_0619 = (byte)Z;
                goto LAB_code_1dd3;
              }
              Z = (byte *)CONCAT11(DAT_mem_061a,DAT_mem_0619);
              Z = (byte *)((int)Z + 1);
              DAT_mem_061a = Z._1_1_;
              DAT_mem_0619 = (byte)Z;
              X._0_1_ = *(byte *)(Y + 0x14);
              X._1_1_ = *(char *)((int)Y + 0x29);
              if (X._1_1_ == '\0' || (byte)(X._1_1_ - 1) < ((byte)X < 0x90)) {
                Z = (byte *)(Y[0x14] + 1);
              }
              else {
                Z = (byte *)0x190;
              }
              *(byte *)(Y + 0x14) = (byte)Z;
              *(byte *)((int)Y + 0x29) = Z._1_1_;
              Z = (byte *)CONCAT11(DAT_mem_061e,DAT_mem_061d);
              Z = (byte *)((int)Z + 2);
              X._0_1_ = *(byte *)(Y + 0x14);
              X._1_1_ = *(byte *)((int)Y + 0x29);
              if (Z._1_1_ < X._1_1_ || (byte)(Z._1_1_ - X._1_1_) < ((byte)Z < (byte)X)) {
                X._0_1_ = (byte)R3R2;
                X = (byte *)CONCAT11((char)((uint)R3R2 >> 8) -
                                     (R11R10._1_1_ + ((byte)X < (byte)R11R10)),
                                     (byte)X - (byte)R11R10);
                Z = (byte *)0x3;
                DAT_mem_08ff = 0x74;
                DAT_mem_08fe = 0x1d;
                FUN_code_28a0();
                DAT_mem_0547 = (byte)Z;
                X = Z;
                if (2 < Z._1_1_ && ((byte)Z < 0xe8) <= (byte)(Z._1_1_ - 3)) {
                  DAT_mem_0547 = 0xe7;
                  Z._1_1_ = 3;
                }
                Z._0_1_ = 'C';
                Y = (undefined2 *)((int)Y + -1);
                DAT_mem_0548 = Z._1_1_;
                *(char *)Y = '\x06';
                Y = (undefined2 *)((int)Y + -1);
                *(byte *)Y = (byte)Z;
                Z._0_1_ = -0x46;
                Y = (undefined2 *)((int)Y + -1);
                *(char *)Y = '\x04';
                Y = (undefined2 *)((int)Y + -1);
                *(byte *)Y = (byte)Z;
                Z._0_1_ = DAT_mem_0547;
                Z._1_1_ = DAT_mem_0548;
                DAT_mem_08ff = 0x96;
                DAT_mem_08fe = 0x1d;
                FUN_code_28f6();
                DAT_mem_08ff = 0x99;
                DAT_mem_08fe = 0x1d;
                FUN_code_25b4();
                Y = (undefined2 *)((int)Y + 8);
                X._0_1_ = 0x43;
                X._1_1_ = 6;
                DAT_mem_08ff = 0x9e;
                DAT_mem_08fe = 0x1d;
                FUN_code_240a();
                X = (byte *)CONCAT11(DAT_mem_0548,DAT_mem_0547);
                if (X < 10) {
                  X._0_1_ = 0x46;
LAB_code_1db1:
                  X = (byte *)CONCAT11(4,(byte)X);
                  DAT_mem_08ff = 0xb3;
                  DAT_mem_08fe = 0x1d;
                  FUN_code_240a();
                }
                else {
                  X = (byte *)CONCAT11(DAT_mem_0548,DAT_mem_0547);
                  Z._0_1_ = 0;
                  if (DAT_mem_0548 < (DAT_mem_0547 < 100)) {
                    X._0_1_ = 0x49;
                    goto LAB_code_1db1;
                  }
                }
                Z = (byte *)CONCAT11(Z._1_1_,DAT_mem_0656);
                if (DAT_mem_0656 == 0) {
                  Z = (byte *)CONCAT11(DAT_mem_061a,DAT_mem_0619);
                  Z = (byte *)((int)Z + 1);
                  DAT_mem_061a = Z._1_1_;
                  X = &DAT_mem_0619;
                  DAT_mem_0619 = (byte)Z;
                }
              }
              else {
                X = (undefined1 *)0x44b;
                DAT_mem_08ff = 0xc3;
                DAT_mem_08fe = 0x1d;
                FUN_code_240a();
                W = (undefined1 *)0x1f4;
                do {
                  W = (undefined1 *)((int)W + -1);
                } while (W != (undefined1 *)0x0);
              }
            }
            else {
              X = (byte *)0x43a;
              DAT_mem_08ff = 0x32;
              DAT_mem_08fe = 0x1d;
              FUN_code_240a();
              X._0_1_ = (byte)Y;
              X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x94) + -2),(byte)X + 0x6c);
              pbVar11 = X;
              X = X + 1;
              R1R0._0_1_ = *pbVar11;
              R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
              X._1_1_ = *X;
              X = (byte *)CONCAT11(X._1_1_,(byte)R1R0);
              if (((byte)R1R0 < 0x91) <= X._1_1_) {
                DAT_mem_0619 = 0;
                DAT_mem_061a = 0;
              }
              Z = (byte *)((uint)Z._1_1_ << 8);
              *(char *)(Y + 0x14) = '\0';
              *(byte *)((int)Y + 0x29) = (byte)Z;
LAB_code_1dd3:
              W = (undefined1 *)0x1f4;
              do {
                W = (undefined1 *)((int)W + -1);
              } while (W != (undefined1 *)0x0);
            }
            W = &DAT_mem_03e8;
            do {
              W = W + -1;
            } while (W != (undefined1 *)0x0);
          }
          else {
            if ((DAT_mem_063f == 0) && (DAT_mem_063e != 0)) {
              if (R19R18._1_1_ == '\0') {
                X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x8d) + -2),(byte)X + 0x73);
                Z._0_1_ = *X;
                *X = (byte)Z + '\x01';
                X = R5R4;
                Z = (byte *)0x96;
                DAT_mem_08ff = 0xe;
                DAT_mem_08fe = 0x1c;
                FUN_code_28a0();
                if (Z._1_1_ == '\0' && ((byte)R23R22 < (byte)Z) <= (byte)-Z._1_1_) {
                  cVar1 = read_volatile_1(ICR1H);
                  if (cVar1 == '\x7f') {
                    Z._0_1_ = 0xa9;
                  }
                  else {
                    Z._0_1_ = 0x7f;
                  }
                  write_volatile_1(ICR1H,(byte)Z);
                  X._0_1_ = (byte)Y;
                  X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8d) + -2),(byte)X + 0x 73
                                      );
                  *X = 0;
                }
              }
              else {
                R1R0 = (char)DAT_mem_063e * 0xe;
                Z._0_1_ = (byte)R1R0;
                write_volatile_1(ICR1H,(byte)Z + 'r');
              }
            }
            bVar4 = DAT_mem_053e - (DAT_mem_053d < R17);
            X = (byte *)CONCAT11(bVar4,DAT_mem_053d - R17);
            Z._1_1_ = bVar4 >> 1;
            Z._0_1_ = bVar4 * -0x80 | (byte)(DAT_mem_053d - R17) >> 1;
            Z = (byte *)((int)Z + 3);
            DAT_mem_08ff = 0x37;
            DAT_mem_08fe = 0x1c;
            FUN_code_2721();
            X = Z;
            DAT_mem_08ff = 0x3b;
            DAT_mem_08fe = 0x1c;
            FUN_code_25f0();
            X = &DAT_mem_062b;
            DAT_mem_08ff = 0x3f;
            DAT_mem_08fe = 0x1c;
            FUN_code_26e8();
            *X = (byte)Z;
            Z._0_1_ = 1;
            while( true ) {
              DAT_mem_061f = (byte)Z;
              Z._0_1_ = DAT_mem_062b;
              Z._0_1_ = DAT_mem_062b;
              if ((DAT_mem_062b < DAT_mem_061f) || (7 < DAT_mem_061f)) break;
              X = (byte *)((uint)X & 0xff00 | (uint)DAT_mem_061f);
              DAT_mem_08ff = 0x50;
              DAT_mem_08fe = 0x1c;
              FUN_code_23ea();
              Z._0_1_ = DAT_mem_061f + 1;
            }
            if (7 < DAT_mem_062b) {
              X = (byte *)0x431;
              DAT_mem_08ff = 0x5e;
              DAT_mem_08fe = 0x1c;
              FUN_code_240a();
            }
            DAT_mem_061f = 9 - DAT_mem_061f;
            while( true ) {
              Z._0_1_ = DAT_mem_061f;
              if (DAT_mem_061f == 0) break;
              X = (byte *)0x433;
              DAT_mem_08ff = 0x6f;
              DAT_mem_08fe = 0x1c;
              DAT_mem_061f = DAT_mem_061f - 1;
              FUN_code_240a();
            }
            X._0_1_ = DAT_mem_053d;
            X._1_1_ = DAT_mem_053e;
            Z = (byte *)0x3;
            DAT_mem_08ff = 0x78;
            DAT_mem_08fe = 0x1c;
            DAT_mem_061f = DAT_mem_061f - 1;
            FUN_code_28a0();
            DAT_mem_053d = (byte)Z;
            if (2 < Z._1_1_ && ((byte)Z < 0xe8) <= (byte)(Z._1_1_ - 3)) {
              DAT_mem_053d = 0xe7;
              Z._1_1_ = 3;
            }
            X = (byte *)(Y + 0x1a);
            Z = (byte *)CONCAT11(CARRY1((byte)R21R20,(byte)R21R20) + X._1_1_ +
                                 CARRY1((byte)R21R20 * '\x02',(byte)X),
                                 (byte)R21R20 * '\x02' + (byte)X);
            X._1_1_ = Z._1_1_;
            *Z = DAT_mem_053d;
            Z[1] = X._1_1_;
            DAT_mem_053d = 0;
            DAT_mem_053e = 0;
            for (DAT_mem_061f = 0; DAT_mem_061f < 3; DAT_mem_061f = DAT_mem_061f + 1) {
              X = (byte *)(Y + 0x1a);
              X = (byte *)CONCAT11((char)((uint)X >> 8) + CARRY1(DAT_mem_061f,DAT_mem_061f) +
                                   CARRY1((byte)X,DAT_mem_061f * '\x02'),
                                   (byte)X + DAT_mem_061f * '\x02');
              ppbVar12 = (byte **)X;
              X = (byte *)((int)X + 1);
              R13R12._0_1_ = *(byte *)ppbVar12;
              R13R12._1_1_ = *X;
              R13R12 = *ppbVar12;
              R1R0._0_1_ = (byte)R13R12 | R13R12._1_1_;
              R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
              if ((byte)R1R0 == 0) break;
              DAT_mem_053e = R13R12._1_1_ + DAT_mem_053e + CARRY1((byte)R13R12,DAT_mem_053d);
              DAT_mem_053d = (byte)R13R12 + DAT_mem_053d;
            }
            X._0_1_ = DAT_mem_053d;
            X._1_1_ = DAT_mem_053e;
            Z = (byte *)(uint)DAT_mem_061f;
            DAT_mem_08ff = 0xcd;
            DAT_mem_08fe = 0x1c;
            FUN_code_28a0();
            DAT_mem_053d = (byte)Z;
            DAT_mem_053e = Z._1_1_;
            Z._0_1_ = 'C';
            Y = (undefined2 *)((int)Y + -1);
            *(char *)Y = '\x06';
            Y = (undefined2 *)((int)Y + -1);
            *(byte *)Y = (byte)Z;
            Z._0_1_ = -0x5b;
            Y = (undefined2 *)((int)Y + -1);
            *(char *)Y = '\x02';
            Y = (undefined2 *)((int)Y + -1);
            *(byte *)Y = (byte)Z;
            Z._0_1_ = DAT_mem_053d;
            Z._1_1_ = DAT_mem_053e;
            DAT_mem_08ff = 0xe1;
            DAT_mem_08fe = 0x1c;
            FUN_code_28f6();
            DAT_mem_08ff = 0xe4;
            DAT_mem_08fe = 0x1c;
            FUN_code_25b4();
            Z._0_1_ = 8;
            Y = (undefined2 *)((int)Y + 7);
            *(char *)Y = '\b';
            X._0_1_ = 1;
            DAT_mem_08ff = 0xea;
            DAT_mem_08fe = 0x1c;
            FUN_code_23c5();
            X._0_1_ = 0x43;
            X._1_1_ = 6;
            DAT_mem_08ff = 0xee;
            DAT_mem_08fe = 0x1c;
            FUN_code_240a();
            X = (byte *)CONCAT11(DAT_mem_053e,DAT_mem_053d);
            if (X < 10) {
              X._0_1_ = 0x35;
LAB_code_1d01:
              X = (byte *)CONCAT11(4,(byte)X);
              DAT_mem_08ff = 3;
              DAT_mem_08fe = 0x1d;
              FUN_code_240a();
            }
            else {
              X = (byte *)CONCAT11(DAT_mem_053e,DAT_mem_053d);
              Z._0_1_ = 0;
              if (DAT_mem_053e < (DAT_mem_053d < 100)) {
                X._0_1_ = 0x38;
                goto LAB_code_1d01;
              }
            }
            if ((byte)R21R20 < 2) {
              R21R20._0_1_ = (byte)R21R20 + 1;
            }
            else {
              Z._0_1_ = 0;
              R21R20._0_1_ = (byte)Z;
            }
            Z = (byte *)CONCAT11(Z._1_1_,(byte)R21R20);
          }
        }
      }
      bVar4 = read_volatile_1(ADCSR);
      if ((bVar4 & 0x10) == 0) {
        write_volatile_1(DAT_mem_00b0,0);
        write_volatile_1(DAT_mem_00b1,0);
        X = (byte *)((uint)X & 0xff00 | (uint)DAT_mem_0626);
        if (DAT_mem_0626 < 2) {
          Z = (byte *)((uint)Z & 0xff00 | (uint)(byte)(DAT_mem_0626 + 1));
        }
        else {
          Z = (byte *)((uint)Z & 0xff00);
        }
        DAT_mem_0626 = (byte)Z;
        DAT_mem_08ff = 0xef;
        DAT_mem_08fe = 0x1d;
        FUN_code_03c7();
        Z = (byte *)((uint)Z & 0xff00);
        *(char *)(Y + 0x14) = '\0';
        *(byte *)((int)Y + 0x29) = (byte)Z;
        X._0_1_ = (byte)Y;
        X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8f) + -2),(byte)X + 0x71);
        *X = (byte)Z;
        X._0_1_ = (byte)Y;
        X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8e) + -2),(byte)X + 0x72);
        *X = (byte)Z;
        X = (undefined1 *)0xb4;
        DAT_mem_08ff = 0xfe;
        DAT_mem_08fe = 0x1d;
        FUN_code_269a();
      }
      if (DAT_mem_0626 != 0) {
        X = (byte *)((uint)X & 0xff00 | (uint)DAT_mem_0626);
        if (DAT_mem_0626 == 1) {
          Z._0_1_ = 'C';
          Y = (undefined2 *)((int)Y + -1);
          *(char *)Y = '\x06';
          Y = (undefined2 *)((int)Y + -1);
          *(byte *)Y = (byte)Z;
          Z._0_1_ = -0x5b;
          Y = (undefined2 *)((int)Y + -1);
          *(char *)Y = '\x02';
          Y = (undefined2 *)((int)Y + -1);
          *(byte *)Y = (byte)Z;
          Z = R3R2;
          DAT_mem_08ff = 0x14;
          DAT_mem_08fe = 0x1e;
          FUN_code_28f6();
          DAT_mem_08ff = 0x17;
          DAT_mem_08fe = 0x1e;
          FUN_code_25b4();
          Z._0_1_ = 2;
          Y = (undefined2 *)((int)Y + 7);
          *(char *)Y = '\x02';
          X = (byte *)((uint)X & 0xff00);
          DAT_mem_08ff = 0x1d;
          DAT_mem_08fe = 0x1e;
          FUN_code_23c5();
          X = (undefined1 *)0x643;
          DAT_mem_08ff = 0x21;
          DAT_mem_08fe = 0x1e;
          FUN_code_240a();
          Z._0_1_ = 0x10;
          Z._1_1_ = 0x27;
          if (R3R2._1_1_ < 0x27 || (byte)(R3R2._1_1_ - 0x27) < ((byte)R3R2 < 0x10)) {
            X = (undefined1 *)0x463;
            DAT_mem_08ff = 0x2a;
            DAT_mem_08fe = 0x1e;
            FUN_code_240a();
          }
          Z._0_1_ = 0xe8;
          Z._1_1_ = 3;
          if (R3R2._1_1_ < 3 || (byte)(R3R2._1_1_ - 3) < ((byte)R3R2 < 0xe8)) {
            X = (undefined1 *)0x465;
            DAT_mem_08ff = 0x33;
            DAT_mem_08fe = 0x1e;
            FUN_code_240a();
          }
          Z = (byte *)0x64;
          if (R3R2._1_1_ < ((byte)R3R2 < 100)) {
            X = (undefined1 *)0x467;
            DAT_mem_08ff = 0x3c;
            DAT_mem_08fe = 0x1e;
            FUN_code_240a();
          }
        }
        else {
          X._0_1_ = (byte)Y;
          X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x96) + -2),(byte)X + 0x6a);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
          X._1_1_ = *X;
          Z._0_1_ = *(byte *)(Y + 0x19);
          Z._1_1_ = *(char *)((int)Y + 0x33);
          Z = (byte *)CONCAT11(Z._1_1_ - (X._1_1_ + ((byte)Z < (byte)R1R0)),(byte)Z - (byte)R1R0);
          X = Z;
          Z = (byte *)0xd;
          DAT_mem_08ff = 0x4c;
          DAT_mem_08fe = 0x1e;
          FUN_code_28a0();
          DAT_mem_0543 = (byte)Z;
          DAT_mem_0544 = Z._1_1_;
          Z._0_1_ = 'C';
          Y = (undefined2 *)((int)Y + -1);
          *(char *)Y = '\x06';
          Y = (undefined2 *)((int)Y + -1);
          *(byte *)Y = (byte)Z;
          Z._0_1_ = -0x5b;
          Y = (undefined2 *)((int)Y + -1);
          *(char *)Y = '\x02';
          Y = (undefined2 *)((int)Y + -1);
          *(byte *)Y = (byte)Z;
          Z._0_1_ = DAT_mem_0543;
          Z._1_1_ = DAT_mem_0544;
          DAT_mem_08ff = 0x60;
          DAT_mem_08fe = 0x1e;
          FUN_code_28f6();
          DAT_mem_08ff = 99;
          DAT_mem_08fe = 0x1e;
          FUN_code_25b4();
          Z._0_1_ = 2;
          Y = (undefined2 *)((int)Y + 7);
          *(char *)Y = '\x02';
          X = (byte *)((uint)X & 0xff00);
          DAT_mem_08ff = 0x69;
          DAT_mem_08fe = 0x1e;
          FUN_code_23c5();
          X._0_1_ = 0x43;
          X._1_1_ = 6;
          DAT_mem_08ff = 0x6d;
          DAT_mem_08fe = 0x1e;
          FUN_code_240a();
          Z._0_1_ = 0;
          if (DAT_mem_0544 < (DAT_mem_0543 < 100)) {
            X = (byte *)0x469;
            DAT_mem_08ff = 0x79;
            DAT_mem_08fe = 0x1e;
            FUN_code_240a();
          }
          X._0_1_ = (byte)Y;
          X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x98) + -2),(byte)X + 0x68);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
          X._1_1_ = *X;
          Z._0_1_ = *(byte *)((int)Y + 0x30);
          Z._1_1_ = *(char *)((int)Y + 0x31);
          Z = (byte *)CONCAT11(Z._1_1_ - (X._1_1_ + ((byte)Z < (byte)R1R0)),(byte)Z - (byte)R1R0);
          X = Z;
          Z = (byte *)0xd;
          DAT_mem_08ff = 0x88;
          DAT_mem_08fe = 0x1e;
          FUN_code_28a0();
          DAT_mem_0543 = (byte)Z;
          DAT_mem_0544 = Z._1_1_;
          Z._0_1_ = 'C';
          Y = (undefined2 *)((int)Y + -1);
          *(char *)Y = '\x06';
          Y = (undefined2 *)((int)Y + -1);
          *(byte *)Y = (byte)Z;
          Z._0_1_ = -0x5b;
          Y = (undefined2 *)((int)Y + -1);
          *(char *)Y = '\x02';
          Y = (undefined2 *)((int)Y + -1);
          *(byte *)Y = (byte)Z;
          Z._0_1_ = DAT_mem_0543;
          Z._1_1_ = DAT_mem_0544;
          DAT_mem_08ff = 0x9c;
          DAT_mem_08fe = 0x1e;
          FUN_code_28f6();
          DAT_mem_08ff = 0x9f;
          DAT_mem_08fe = 0x1e;
          FUN_code_25b4();
          Z._0_1_ = 7;
          Y = (undefined2 *)((int)Y + 7);
          *(char *)Y = '\a';
          X = (byte *)((uint)X & 0xff00);
          DAT_mem_08ff = 0xa5;
          DAT_mem_08fe = 0x1e;
          FUN_code_23c5();
          X._0_1_ = 0x43;
          X._1_1_ = 6;
          DAT_mem_08ff = 0xa9;
          DAT_mem_08fe = 0x1e;
          FUN_code_240a();
          Z._0_1_ = 0;
          if (DAT_mem_0544 < (DAT_mem_0543 < 100)) {
            X = (byte *)0x46b;
            DAT_mem_08ff = 0xb5;
            DAT_mem_08fe = 0x1e;
            FUN_code_240a();
          }
          X._0_1_ = (byte)Y;
          X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x9a) + -2),(byte)X + 0x66);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
          X._1_1_ = *X;
          Z._0_1_ = *(byte *)((int)Y + 0x2e);
          Z._1_1_ = *(char *)((int)Y + 0x2f);
          Z = (byte *)CONCAT11(Z._1_1_ - (X._1_1_ + ((byte)Z < (byte)R1R0)),(byte)Z - (byte)R1R0);
          X = Z;
          Z = (byte *)0xd;
          DAT_mem_08ff = 0xc4;
          DAT_mem_08fe = 0x1e;
          FUN_code_28a0();
          DAT_mem_0543 = (byte)Z;
          DAT_mem_0544 = Z._1_1_;
          Z._0_1_ = 'C';
          Y = (undefined2 *)((int)Y + -1);
          *(char *)Y = '\x06';
          Y = (undefined2 *)((int)Y + -1);
          *(byte *)Y = (byte)Z;
          Z._0_1_ = -0x5b;
          Y = (undefined2 *)((int)Y + -1);
          *(char *)Y = '\x02';
          Y = (undefined2 *)((int)Y + -1);
          *(byte *)Y = (byte)Z;
          Z._0_1_ = DAT_mem_0543;
          Z._1_1_ = DAT_mem_0544;
          DAT_mem_08ff = 0xd8;
          DAT_mem_08fe = 0x1e;
          FUN_code_28f6();
          DAT_mem_08ff = 0xdb;
          DAT_mem_08fe = 0x1e;
          FUN_code_25b4();
          Z._0_1_ = 0xc;
          Y = (undefined2 *)((int)Y + 7);
          *(char *)Y = '\f';
          X = (byte *)((uint)X & 0xff00);
          DAT_mem_08ff = 0xe1;
          DAT_mem_08fe = 0x1e;
          FUN_code_23c5();
          X._0_1_ = 0x43;
          X._1_1_ = 6;
          DAT_mem_08ff = 0xe5;
          DAT_mem_08fe = 0x1e;
          FUN_code_240a();
          X = (byte *)CONCAT11(DAT_mem_0544,DAT_mem_0543);
          Z = (byte *)((uint)Z._1_1_ << 8);
          if (DAT_mem_0544 < (DAT_mem_0543 < 100)) {
            X = (undefined1 *)0x46d;
            DAT_mem_08ff = 0xf1;
            DAT_mem_08fe = 0x1e;
            FUN_code_240a();
          }
        }
      }
      Z._0_1_ = (byte)Y;
      bVar4 = (byte)Z;
      cVar1 = (char)((uint)Y >> 8);
      if ((DAT_mem_0656 == 0) ||
         ((Z = (byte *)CONCAT11(DAT_mem_061c,DAT_mem_061b), Z != (byte *)0x0 &&
          (Z = (byte *)CONCAT11(DAT_mem_0562,DAT_mem_0561), Z != (byte *)0x0)))) {
LAB_code_1f04:
        Z = (byte *)CONCAT11(cVar1 - (((byte)Z < 0x8b) + -2),(byte)Z + 0x75);
        Z._0_1_ = *Z;
        if ((byte)Z == '\0') {
          R1R0 = (uint)DAT_mem_0656 * 0x1f;
          Z = (byte *)(R1R0 + 0x26);
          X = Z;
          DAT_mem_08ff = 0x9c;
          DAT_mem_08fe = 0x1f;
          FUN_code_034c();
        }
      }
      else {
        R1R0._0_1_ = (byte)R11R10 | R11R10._1_1_;
        R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
        if ((byte)R1R0 == 0) goto LAB_code_1f04;
        R11R10._1_1_ = R11R10._1_1_ + CARRY1(R17,(byte)R11R10);
        if ((R3R2._1_1_ < R11R10._1_1_ ||
             (byte)(R3R2._1_1_ - R11R10._1_1_) < ((byte)R3R2 < (byte)(R17 + (byte)R11R10))) ||
           (DAT_mem_0624 == 4)) {
          R1R0 = (char)DAT_mem_0656 * 10;
          Z._0_1_ = (byte)R1R0;
          DAT_mem_062b = (byte)Z;
          if (DAT_mem_062a < (byte)Z) {
            DAT_mem_062a = DAT_mem_062a + 1;
          }
          else {
            DAT_mem_062a = 1;
          }
          X = (byte *)0x54d;
          Z = (byte *)CONCAT11(CARRY1(DAT_mem_062a,DAT_mem_062a) + '\x05' +
                               (0xb2 < (byte)(DAT_mem_062a * '\x02')),DAT_mem_062a * '\x02' + 0x4d );
          *Z = (byte)R3R2;
          Z[1] = R3R2._1_1_;
          Z._0_1_ = '\0';
          *(char *)(Y + 0x10) = '\0';
          *(byte *)((int)Y + 0x21) = (byte)Z;
          *(byte *)(Y + 0x11) = (byte)Z;
          *(byte *)((int)Y + 0x23) = (byte)Z;
          Z._0_1_ = 1;
          while (X = (byte *)((uint)X & 0xff00), DAT_mem_061f = (byte)Z, (byte)Z <= DAT_mem_062b)  {
            X = (byte *)CONCAT11(CARRY1((byte)Z,(byte)Z) + '\x05' +
                                 (0xb2 < (byte)((byte)Z * '\x02')),(byte)Z * '\x02' + 0x4d);
            ppbVar12 = (byte **)X;
            X = (byte *)((int)X + 1);
            R13R12._0_1_ = *(byte *)ppbVar12;
            R13R12._1_1_ = *X;
            R13R12 = *ppbVar12;
            R1R0._0_1_ = (byte)R13R12 | R13R12._1_1_;
            R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
            if ((byte)R1R0 == 0) break;
            X = (byte *)Y[0x10];
            DAT_mem_08ff = 0x51;
            DAT_mem_08fe = 0x1f;
            Z = R13R12;
            FUN_code_2862();
            *(byte *)(Y + 0x10) = (byte)Z;
            *(byte *)((int)Y + 0x21) = Z._1_1_;
            *(byte *)(Y + 0x11) = (byte)R23R22;
            *(byte *)((int)Y + 0x23) = R23R22._1_1_;
            Z._0_1_ = DAT_mem_061f + 1;
          }
          X = (byte *)((uint)X & 0xff00 | (uint)(byte)Z);
          if (5 < (byte)Z) {
            Z = (byte *)(uint)(byte)((byte)Z - 1);
            X = (byte *)Y[0x10];
            DAT_mem_08ff = 0x6d;
            DAT_mem_08fe = 0x1f;
            FUN_code_28b8();
            R11R10 = (uint)Z;
          }
          DAT_mem_0624 = 0;
        }
        else {
          X = (byte *)((uint)X & 0xff00 | (uint)DAT_mem_0624);
          if (DAT_mem_0624 < 4) {
            DAT_mem_0624 = DAT_mem_0624 + 1;
          }
          else {
            Z._0_1_ = 4;
            DAT_mem_0624 = (byte)Z;
          }
          Z = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x8b) + -2),bVar4 + 0x75);
          Z._0_1_ = *Z;
          if ((byte)Z == '\0') {
            R1R0 = (uint)DAT_mem_0656 * 0x1f;
            Z = (byte *)(R1R0 + 0x25);
            X = Z;
            DAT_mem_08ff = 0x8c;
            DAT_mem_08fe = 0x1f;
            FUN_code_034c();
          }
        }
      }
      Z = (byte *)CONCAT11(DAT_mem_061c,DAT_mem_061b);
      if ((Z == (byte *)0x0) && (DAT_mem_0624 == 0)) {
        R13R12 = (byte *)0x0;
        Z._0_1_ = 0;
        DAT_mem_0537 = 0;
        DAT_mem_0538 = 0;
        DAT_mem_0539 = 0;
        DAT_mem_053a = 0;
        *(char *)(Y + 0x10) = '\0';
        *(byte *)((int)Y + 0x21) = (byte)Z;
        *(byte *)(Y + 0x11) = (byte)Z;
        *(byte *)((int)Y + 0x23) = (byte)Z;
        *(byte *)(Y + 0xe) = (byte)Z;
        *(byte *)((int)Y + 0x1d) = (byte)Z;
        *(byte *)(Y + 0xf) = (byte)Z;
        *(byte *)((int)Y + 0x1f) = (byte)Z;
        *(byte *)(Y + 0xc) = (byte)Z;
        *(byte *)((int)Y + 0x19) = (byte)Z;
        *(byte *)(Y + 0xd) = (byte)Z;
        *(byte *)((int)Y + 0x1b) = (byte)Z;
        while ((byte)Z < 0xc) {
          bVar4 = (byte)Z * '\x02';
          Z._1_1_ = CARRY1((byte)Z,(byte)Z);
          X._0_1_ = bVar4 + 0x6f;
          X._1_1_ = Z._1_1_ + '\x04' + (0x90 < bVar4);
          DAT_mem_08ff = 0xcf;
          DAT_mem_08fe = 0x1f;
          DAT_mem_061f = (byte)Z;
          Z._0_1_ = bVar4;
          FUN_code_28ee();
          R13R12 = (byte *)CONCAT11((char)((uint)R13R12 >> 8) + Z._1_1_ +
                                    CARRY1((byte)R13R12,(byte)Z),(byte)R13R12 + (byte)Z);
          X._0_1_ = DAT_mem_061f * '\x02' + 0x93;
          X._1_1_ = CARRY1(DAT_mem_061f,DAT_mem_061f) -
                    (((byte)(DAT_mem_061f * '\x02') < 0x6d) + -5);
          DAT_mem_08ff = 0xda;
          DAT_mem_08fe = 0x1f;
          FUN_code_28ee();
          bVar4 = (byte)Z + DAT_mem_0537;
          DAT_mem_0538 = Z._1_1_ + DAT_mem_0538 + CARRY1((byte)Z,DAT_mem_0537);
          X._0_1_ = DAT_mem_061f * '\x02' + 0xb7;
          X._1_1_ = CARRY1(DAT_mem_061f,DAT_mem_061f) -
                    (((byte)(DAT_mem_061f * '\x02') < 0x49) + -5);
          DAT_mem_08ff = 0xed;
          DAT_mem_08fe = 0x1f;
          DAT_mem_0537 = bVar4;
          Z._0_1_ = bVar4;
          Z._1_1_ = DAT_mem_0538;
          FUN_code_28ee();
          bVar4 = (byte)Z + DAT_mem_0539;
          DAT_mem_053a = Z._1_1_ + DAT_mem_053a + CARRY1((byte)Z,DAT_mem_0539);
          DAT_mem_0539 = bVar4;
          Z._0_1_ = DAT_mem_061f + 1;
        }
        X._0_1_ = (byte)Y;
        Z = (byte *)CONCAT11(CARRY1(R21R20._1_1_,R21R20._1_1_) +
                             ((char)((uint)Y >> 8) - (((byte)X < 0x4e) + -1)) +
                             CARRY1(R21R20._1_1_ * '\x02',(byte)X + 0xb2),
                             R21R20._1_1_ * '\x02' + (byte)X + 0xb2);
        *Z = (byte)R13R12;
        Z[1] = R13R12._1_1_;
        X._0_1_ = (byte)Y;
        Z = (byte *)CONCAT11(CARRY1(R21R20._1_1_,R21R20._1_1_) +
                             ((char)((uint)Y >> 8) - (((byte)X < 0x8a) + -1)) +
                             CARRY1(R21R20._1_1_ * '\x02',(byte)X + 0x76),
                             R21R20._1_1_ * '\x02' + (byte)X + 0x76);
        X._1_1_ = DAT_mem_0538;
        *Z = DAT_mem_0537;
        Z[1] = X._1_1_;
        X = (byte *)(Y + 0x1d);
        Z = (byte *)CONCAT11(CARRY1(R21R20._1_1_,R21R20._1_1_) + X._1_1_ +
                             CARRY1(R21R20._1_1_ * '\x02',(byte)X),R21R20._1_1_ * '\x02' + (byte)X );
        X._1_1_ = DAT_mem_053a;
        *Z = DAT_mem_0539;
        Z[1] = X._1_1_;
        for (DAT_mem_061f = 0; DAT_mem_061f < 0x1e; DAT_mem_061f = DAT_mem_061f + 1) {
          X._0_1_ = (byte)Y;
          X = (byte *)CONCAT11(((char)((uint)Y >> 8) - (((byte)X < 0x4e) + -1)) +
                               CARRY1(DAT_mem_061f,DAT_mem_061f) +
                               CARRY1((byte)X + 0xb2,DAT_mem_061f * '\x02'),
                               (byte)X + 0xb2 + DAT_mem_061f * '\x02');
          ppbVar12 = (byte **)X;
          X = (byte *)((int)X + 1);
          R13R12._0_1_ = *(byte *)ppbVar12;
          R13R12._1_1_ = *X;
          R13R12 = *ppbVar12;
          R1R0._0_1_ = (byte)R13R12 | R13R12._1_1_;
          R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
          if ((byte)R1R0 == 0) break;
          X = (byte *)Y[0x10];
          DAT_mem_08ff = 0x46;
          DAT_mem_08fe = 0x20;
          Z = R13R12;
          FUN_code_2862();
          *(byte *)(Y + 0x10) = (byte)Z;
          *(byte *)((int)Y + 0x21) = Z._1_1_;
          *(byte *)(Y + 0x11) = (byte)R23R22;
          *(byte *)((int)Y + 0x23) = R23R22._1_1_;
          X._0_1_ = (byte)Y;
          Z._0_1_ = DAT_mem_061f * '\x02';
          Z._1_1_ = CARRY1(DAT_mem_061f,DAT_mem_061f);
          X = (byte *)CONCAT11(((char)((uint)Y >> 8) - (((byte)X < 0x8a) + -1)) + Z._1_1_ +
                               CARRY1((byte)X + 0x76,(byte)Z),(byte)X + 0x76 + (byte)Z);
          DAT_mem_08ff = 0x56;
          DAT_mem_08fe = 0x20;
          FUN_code_28ee();
          X = (byte *)Y[0xe];
          DAT_mem_08ff = 0x5e;
          DAT_mem_08fe = 0x20;
          FUN_code_2862();
          *(byte *)(Y + 0xe) = (byte)Z;
          *(byte *)((int)Y + 0x1d) = Z._1_1_;
          *(byte *)(Y + 0xf) = (byte)R23R22;
          *(byte *)((int)Y + 0x1f) = R23R22._1_1_;
          X = (byte *)(Y + 0x1d);
          Z._0_1_ = DAT_mem_061f * '\x02';
          Z._1_1_ = CARRY1(DAT_mem_061f,DAT_mem_061f);
          X = (byte *)CONCAT11((char)((uint)X >> 8) + Z._1_1_ + CARRY1((byte)X,(byte)Z),
                               (byte)X + (byte)Z);
          DAT_mem_08ff = 0x6d;
          DAT_mem_08fe = 0x20;
          FUN_code_28ee();
          X._0_1_ = *(byte *)(Y + 0xc);
          X._1_1_ = *(char *)((int)Y + 0x19);
          DAT_mem_08ff = 0x75;
          DAT_mem_08fe = 0x20;
          FUN_code_2862();
          *(byte *)(Y + 0xc) = (byte)Z;
          *(byte *)((int)Y + 0x19) = Z._1_1_;
          *(byte *)(Y + 0xd) = (byte)R23R22;
          *(byte *)((int)Y + 0x1b) = R23R22._1_1_;
        }
        Z = (byte *)(uint)DAT_mem_061f;
        X._0_1_ = *(byte *)(Y + 0x10);
        X._1_1_ = *(char *)((int)Y + 0x21);
        DAT_mem_08ff = 0x8a;
        DAT_mem_08fe = 0x20;
        FUN_code_28b8();
        *(byte *)(Y + 0x19) = (byte)Z;
        *(byte *)((int)Y + 0x33) = Z._1_1_;
        Z = (byte *)(uint)DAT_mem_061f;
        X._0_1_ = *(byte *)(Y + 0xe);
        X._1_1_ = *(char *)((int)Y + 0x1d);
        DAT_mem_08ff = 0x97;
        DAT_mem_08fe = 0x20;
        FUN_code_28b8();
        *(byte *)(Y + 0x18) = (byte)Z;
        *(byte *)((int)Y + 0x31) = Z._1_1_;
        Z = (byte *)(uint)DAT_mem_061f;
        X = (byte *)Y[0xc];
        DAT_mem_08ff = 0xa4;
        DAT_mem_08fe = 0x20;
        FUN_code_28b8();
        *(byte *)(Y + 0x17) = (byte)Z;
        *(byte *)((int)Y + 0x2f) = Z._1_1_;
        if (R21R20._1_1_ < 0x1d) {
          Z = (byte *)((uint)Z & 0xff00 | (uint)(byte)(R21R20._1_1_ + 1));
        }
        else {
          Z = (byte *)((uint)Z & 0xff00);
        }
        R21R20._1_1_ = (byte)Z;
      }
      else {
        Z._0_1_ = (byte)Y;
        cVar1 = (char)((uint)Y >> 8) - (((byte)Z < 0x8b) + -2);
        Z = (byte *)CONCAT11(cVar1,(byte)Z + 0x75);
        Z._0_1_ = *Z;
        Z = (byte *)CONCAT11(cVar1,(byte)Z);
        if ((byte)Z == '\0') {
          W = (undefined1 *)0x84d;
          do {
            W = (undefined1 *)((int)W + -1);
          } while (W != (undefined1 *)0x0);
        }
      }
      bVar4 = read_volatile_1(ADCSR);
      if (((bVar4 & 8) == 0) || (bVar4 = read_volatile_1(ADCSR), (bVar4 & 0x20) == 0)) {
        bVar4 = read_volatile_1(ADCSR);
        if ((bVar4 & 8) == 0) {
          Z = (byte *)CONCAT11(Z._1_1_,1);
LAB_code_20c3:
          DAT_mem_062b = (byte)Z;
        }
        else {
          bVar4 = read_volatile_1(ADCSR);
          if ((bVar4 & 0x20) == 0) {
            Z = (byte *)CONCAT11(Z._1_1_,2);
            goto LAB_code_20c3;
          }
        }
        Z = (byte *)((uint)Z & 0xff00);
        if (DAT_mem_063f == 0) {
          Z = (byte *)((uint)Z | (uint)DAT_mem_063e);
          if (DAT_mem_063e != 0) {
            X = (byte *)CONCAT11(X._1_1_,0xe);
            R1R0 = (char)DAT_mem_063e * 0xe;
            Z._0_1_ = (byte)R1R0;
            Z = (byte *)(R1R0 & 0xff00 | (uint)(byte)((byte)Z + 0x72));
            write_volatile_1(ICR1H,(byte)Z + 0x72);
          }
        }
        else {
          write_volatile_1(DAT_mem_00b0,0);
          write_volatile_1(DAT_mem_00b1,0);
        }
        DAT_mem_08ff = 0xda;
        DAT_mem_08fe = 0x20;
        FUN_code_23d6();
        X._0_1_ = 0xd1;
        X._1_1_ = 4;
        DAT_mem_08ff = 0xde;
        DAT_mem_08fe = 0x20;
        FUN_code_2419();
        X = (byte *)0x19;
        DAT_mem_08ff = 0xe2;
        DAT_mem_08fe = 0x20;
        FUN_code_269a();
        if ((DAT_mem_054c < 0x75 || (byte)(DAT_mem_054c + 0x8b) < (DAT_mem_054b < 0x3a)) ||
           (DAT_mem_0629 < 0x2f)) {
          DAT_mem_0622 = 0x32;
        }
        X = (byte *)CONCAT11(DAT_mem_0618,DAT_mem_0617);
        if (DAT_mem_0618 < 9 || (byte)(DAT_mem_0618 - 9) < (DAT_mem_0617 < 0xd)) {
          X = (byte *)((int)X + 0x31);
          if (X._1_1_ < 8 || (byte)(X._1_1_ - 8) < ((byte)X < 0x10)) goto LAB_code_210b;
          X._0_1_ = DAT_mem_0617;
          X._1_1_ = DAT_mem_0618;
          Z._0_1_ = 2;
          DAT_mem_08ff = 5;
          DAT_mem_08fe = 0x21;
          FUN_code_2895();
          Z._1_1_ = Z._1_1_ - (((byte)Z < 0xa0) + '\x0f');
          Z = (byte *)CONCAT11(Z._1_1_,(byte)Z + 0x60);
          X = (byte *)CONCAT11(X._1_1_,2);
          if (1 < Z._1_1_ && ((byte)((byte)Z + 0x60) < 0x77) <= (byte)(Z._1_1_ - 2))
          goto LAB_code_210b;
        }
        else {
LAB_code_210b:
          Z = (byte *)CONCAT11(Z._1_1_,0x67);
          DAT_mem_062c = 0x67;
        }
        Z = (byte *)((uint)Z & 0xff00);
        DAT_mem_061f = 0;
        while (X = (byte *)((uint)X & 0xff00), DAT_mem_061f < 9) {
          bVar4 = read_volatile_1(ADCSR);
          if ((((bVar4 & 8) == 0) || (DAT_mem_062b == 1)) && (DAT_mem_0627 < 0x14)) {
            DAT_mem_0627 = DAT_mem_0627 + 1;
            DAT_mem_061f = 1;
          }
          bVar4 = read_volatile_1(ADCSR);
          if ((((bVar4 & 0x20) == 0) ||
              (X = (byte *)((uint)X | (uint)DAT_mem_062b), DAT_mem_062b == 2)) &&
             (X = (byte *)((uint)X & 0xff00 | (uint)DAT_mem_0627), 1 < DAT_mem_0627)) {
            DAT_mem_0627 = DAT_mem_0627 - 1;
            DAT_mem_061f = 1;
          }
          Z._0_1_ = 'C';
          Y = (undefined2 *)((int)Y + -1);
          *(char *)Y = '\x06';
          Y = (undefined2 *)((int)Y + -1);
          *(byte *)Y = (byte)Z;
          Z._0_1_ = -0x22;
          Y = (undefined2 *)((int)Y + -1);
          *(char *)Y = '\x03';
          Y = (undefined2 *)((int)Y + -1);
          *(byte *)Y = (byte)Z;
          Z._0_1_ = DAT_mem_0627;
          Z._1_1_ = 0;
          DAT_mem_08ff = 0x4b;
          DAT_mem_08fe = 0x21;
          FUN_code_28f6();
          DAT_mem_08ff = 0x4e;
          DAT_mem_08fe = 0x21;
          FUN_code_25b4();
          Z._0_1_ = 7;
          Y = (undefined2 *)((int)Y + 7);
          *(char *)Y = '\a';
          X._0_1_ = 1;
          DAT_mem_08ff = 0x54;
          DAT_mem_08fe = 0x21;
          FUN_code_23c5();
          X._0_1_ = 0x43;
          X._1_1_ = 6;
          DAT_mem_08ff = 0x58;
          DAT_mem_08fe = 0x21;
          FUN_code_240a();
          X = (byte *)0xaf;
          DAT_mem_08ff = 0x5c;
          DAT_mem_08fe = 0x21;
          FUN_code_269a();
          DAT_mem_062b = 0;
          DAT_mem_061f = DAT_mem_061f + 1;
          Z = (byte *)CONCAT11(Z._1_1_,DAT_mem_061f);
        }
        X._0_1_ = 0xf;
        X._1_1_ = 0;
        DAT_mem_08ff = 0x69;
        DAT_mem_08fe = 0x21;
        FUN_code_2911();
        X._0_1_ = DAT_mem_0627;
        if ((byte)Z != DAT_mem_0627) {
          Z = (byte *)((uint)Z & 0xff00 | (uint)DAT_mem_0627);
          X._0_1_ = 0xf;
          X._1_1_ = 0;
          DAT_mem_08ff = 0x73;
          DAT_mem_08fe = 0x21;
          FUN_code_2925();
        }
        Z = (byte *)CONCAT11(-((DAT_mem_0627 < 0xb4) + -1),DAT_mem_0627 + 0x4c);
        R17 = (byte)(*(uint *)((uint)Z >> 1) >> ((byte)(DAT_mem_0627 + 0x4c) & 1) * 8);
        DAT_mem_08ff = 0x7b;
        DAT_mem_08fe = 0x21;
        FUN_code_0ffc();
        R16 = (byte)Z;
        R3R2 = (undefined *)0x0;
        Z._0_1_ = 1;
        while (bVar4 = (byte)Z, (byte)Z < 0x11) {
          Z = (byte *)(uint)(byte)Z;
          R1R0 = (uint)Z;
          Z = (byte *)CONCAT11(-(((byte)Z < 0xa8) + -7),(byte)Z + 0x58);
          X._0_1_ = *Z;
          X._1_1_ = '\0';
          if (((byte)X & 0x80) != 0) {
            X._1_1_ = -1;
          }
          Z = (byte *)CONCAT11(-(((byte)Z < 0x97) + -7),(byte)Z + 0x69);
          Z._0_1_ = *Z;
          Z._1_1_ = '\0';
          if (((byte)Z & 0x80) != 0) {
            Z._1_1_ = -1;
          }
          R3R2 = (undefined *)
                 CONCAT11((char)((uint)R3R2 >> 8) + Z._1_1_ + X._1_1_ + CARRY1((byte)Z,(byte)X) +
                          CARRY1((byte)R3R2,(byte)Z + (byte)X),(byte)R3R2 + (byte)Z + (byte)X);
          Z._0_1_ = bVar4 + 1;
        }
        Z = R3R2;
        X = (byte *)0x6;
        DAT_mem_08ff = 0xa5;
        DAT_mem_08fe = 0x21;
        DAT_mem_061f = (byte)Z;
        FUN_code_288d();
        if ((byte)Z != 0xe2 || Z._1_1_ != (byte)(((byte)Z < 0xe2) + 0x2cU)) {
          R17 = 0xfb;
        }
        Z = (byte *)((uint)Z._1_1_ << 8);
        DAT_mem_061b = 0;
        DAT_mem_061c = 0;
        *(char *)(Y + 0x14) = '\0';
        *(byte *)((int)Y + 0x29) = (byte)Z;
        DAT_mem_0624 = (byte)Z;
        X._0_1_ = (byte)Y;
        X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8b) + -2),(byte)X + 0x75);
        *X = (byte)Z;
        X._0_1_ = (byte)Y;
        X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8e) + -2),(byte)X + 0x72);
        *X = (byte)Z;
        DAT_mem_0619 = (byte)Z;
        DAT_mem_061a = (byte)Z;
        DAT_mem_08ff = 0xc1;
        DAT_mem_08fe = 0x21;
        FUN_code_23d6();
        DAT_mem_08ff = 0xc3;
        DAT_mem_08fe = 0x21;
        FUN_code_03c7();
      }
      X._0_1_ = (byte)Y;
      cVar1 = (char)((uint)Y >> 8);
      X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x94) + -2),(byte)X + 0x6c);
      pbVar11 = X;
      X = X + 1;
      R1R0._0_1_ = *pbVar11;
      R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
      X._1_1_ = *X;
      if (X._1_1_ < ((byte)R1R0 < 0x91)) {
        Z = (byte *)CONCAT11(DAT_mem_061a,DAT_mem_0619);
        Z = (byte *)((int)Z + 1);
        DAT_mem_061a = Z._1_1_;
        DAT_mem_0619 = (byte)Z;
      }
      X = (byte *)CONCAT11(DAT_mem_061a,DAT_mem_0619);
      Z._0_1_ = 4;
      DAT_mem_08ff = 0xdb;
      DAT_mem_08fe = 0x21;
      FUN_code_2895();
      if (R5R4._1_1_ < Z._1_1_ || (byte)(R5R4._1_1_ - Z._1_1_) < ((byte)R5R4 < (byte)Z)) {
        DAT_mem_08ff = 0xe0;
        DAT_mem_08fe = 0x21;
        FUN_code_0fa8();
      }
      R1R0 = (uint)DAT_mem_0656 * 0x1f;
      Z._0_1_ = (byte)R1R0;
      bVar3 = (byte)Z;
      bVar4 = (byte)Z - 2;
      Z._1_1_ = (byte)(R1R0 >> 8);
      cVar2 = Z._1_1_ + '\f' + (1 < (byte)Z);
      R13R12 = (byte *)CONCAT11(cVar2,bVar4);
      Z = (byte *)CONCAT11(cVar1 - (((byte)X < 0x8b) + -2),(byte)X + 0x75);
      Z._0_1_ = *Z;
      if ((byte)Z == '\0') {
        Z = (byte *)CONCAT11(DAT_mem_0540,DAT_mem_053f);
        if (Z != (byte *)0x0) {
          Z = (byte *)CONCAT11(cVar2 - ((bVar4 < 0x70) + -2),bVar3 + 0x8e);
          goto LAB_code_21fd;
        }
      }
      else {
        Z = (byte *)CONCAT11(cVar2 - ((bVar4 < 0x50) + -5),bVar3 + 0xae);
LAB_code_21fd:
        R13R12 = Z;
      }
      if (DAT_mem_0626 == 1) {
        Z._0_1_ = (byte)R13R12;
        Z = (byte *)CONCAT11((char)((uint)R13R12 >> 8) - (((byte)Z < 0x97) + -3),(byte)Z + 0x69);
        R13R12 = Z;
      }
      X = (byte *)((uint)X & 0xff00 | (uint)DAT_mem_0626);
      if (DAT_mem_0626 == 2) {
        Z._0_1_ = (byte)R13R12;
        Z = (byte *)CONCAT11((char)((uint)R13R12 >> 8) - (((byte)Z < 0xe6) + -6),(byte)Z + 0x1a);
        R13R12 = Z;
      }
      if (R13R12._1_1_ < R7R6._1_1_ ||
          (byte)(R13R12._1_1_ - R7R6._1_1_) < ((byte)R13R12 < (byte)R7R6)) {
        Z = (byte *)CONCAT11(R7R6._1_1_ - (R13R12._1_1_ + ((byte)R7R6 < (byte)R13R12)),
                             (byte)R7R6 - (byte)R13R12);
        Z = (byte *)((int)Z + 6);
        X = Z;
        DAT_mem_08ff = 0x18;
        DAT_mem_08fe = 0x22;
        FUN_code_034c();
      }
    }
    else {
      Z._0_1_ = 0x41;
      write_volatile_1(ETIFR,0x41);
      X = (byte *)0x96;
      DAT_mem_08ff = 0x20;
      DAT_mem_08fe = 0x22;
      FUN_code_269a();
      Z = (byte *)((uint)Z._1_1_ << 8);
      Y = (undefined2 *)((int)Y + -1);
      *(char *)Y = '\0';
      X._0_1_ = 1;
      DAT_mem_08ff = 0x24;
      DAT_mem_08fe = 0x22;
      FUN_code_23c5();
      X = &DAT_mem_04e0;
      DAT_mem_08ff = 0x28;
      DAT_mem_08fe = 0x22;
      FUN_code_2419();
    }
    bVar4 = read_volatile_1(PORTE);
    if ((bVar4 & 0x20) == 0) {
      DAT_mem_08ff = 0x2c;
      DAT_mem_08fe = 0x22;
      FUN_code_081a();
      Z = (byte *)((uint)Z & 0xff00);
      X._0_1_ = (byte)Y;
      X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8e) + -2),(byte)X + 0x72);
      *X = 0;
      *(byte *)(Y + 0x14) = (byte)Z;
      *(byte *)((int)Y + 0x29) = (byte)Z;
      X._0_1_ = (byte)Y;
      X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8b) + -2),(byte)X + 0x75);
      *X = (byte)Z;
      DAT_mem_0619 = (byte)Z;
      DAT_mem_061a = (byte)Z;
    }
    bVar4 = read_volatile_1(ADCSR);
    if ((bVar4 & 4) == 0) {
      DAT_mem_08ff = 0x3f;
      DAT_mem_08fe = 0x22;
      FUN_code_042c();
      Z._0_1_ = 0;
      *(char *)(Y + 0x14) = '\0';
      *(byte *)((int)Y + 0x29) = (byte)Z;
      X._0_1_ = (byte)Y;
      X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8e) + -2),(byte)X + 0x72);
      *X = (byte)Z;
      X._0_1_ = (byte)Y;
      X = (byte *)CONCAT11((char)((uint)Y >> 8) - (((byte)X < 0x8b) + -2),(byte)X + 0x75);
      *X = (byte)Z;
      DAT_mem_0619 = (byte)Z;
      DAT_mem_061a = (byte)Z;
    }
    write_volatile_1(ETIFR,0x41);
    Z._0_1_ = (byte)Y;
    bVar4 = (byte)Z;
    cVar1 = (char)((uint)Y >> 8);
    Z = (byte *)CONCAT11(cVar1 - (((byte)Z < 0x8b) + -2),(byte)Z + 0x75);
    Z._0_1_ = *Z;
    if ((byte)Z == '\0') {
LAB_code_2262:
      Z = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x94) + -2),bVar4 + 0x6c);
      pbVar11 = Z;
      Z = Z + 1;
      R1R0._0_1_ = *pbVar11;
      R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
      Z._1_1_ = *Z;
      DAT_mem_0543 = (byte)R1R0;
      DAT_mem_0544 = Z._1_1_;
      bVar3 = read_volatile_1(TCCR1C);
      write_volatile_1(TCCR1C,bVar3 | 0x40);
      do {
        bVar3 = read_volatile_1(TCCR1C);
      } while ((bVar3 & 0x40) != 0);
      Z._0_1_ = read_volatile_1(OCR1CL);
      Z._1_1_ = read_volatile_1(OCR1CH);
      DAT_mem_08ff = 0x7d;
      DAT_mem_08fe = 0x22;
      FUN_code_2721();
      X._0_1_ = 0xb2;
      X._1_1_ = 0x2e;
      DAT_mem_08ff = 0x83;
      DAT_mem_08fe = 0x22;
      FUN_code_27ab();
      X = (byte *)0x3333;
      DAT_mem_08ff = 0x89;
      DAT_mem_08fe = 0x22;
      FUN_code_275b();
      X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x94) + -2),bVar4 + 0x6c);
      DAT_mem_08ff = 0x8e;
      DAT_mem_08fe = 0x22;
      FUN_code_26e8();
      puVar10 = X;
      X = X + 1;
      *puVar10 = (byte)Z;
      *X = Z._1_1_;
      Z._0_1_ = 'C';
      Y = (undefined2 *)((int)Y + -1);
      *(char *)Y = '\x06';
      Y = (undefined2 *)((int)Y + -1);
      *(byte *)Y = (byte)Z;
      Z._0_1_ = -0x14;
      Y = (undefined2 *)((int)Y + -1);
      *(char *)Y = '\x04';
      Y = (undefined2 *)((int)Y + -1);
      *(byte *)Y = (byte)Z;
      X._0_1_ = (byte)Y;
      cVar1 = (char)((uint)Y >> 8);
      X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x90) + -2),(byte)X + 0x70);
      pbVar11 = X;
      X = X + 1;
      R1R0._0_1_ = *pbVar11;
      R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
      X._1_1_ = *X;
      X = (byte *)CONCAT11(X._1_1_,(byte)R1R0);
      Z = (byte *)0xa;
      DAT_mem_08ff = 0xa2;
      DAT_mem_08fe = 0x22;
      FUN_code_28a0();
      DAT_mem_08ff = 0xa6;
      DAT_mem_08fe = 0x22;
      FUN_code_28f6();
      X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x8c) + -2),(byte)X + 0x74);
      pbVar11 = X;
      X = X + 1;
      R1R0._0_1_ = *pbVar11;
      R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
      X._1_1_ = *X;
      X._0_1_ = (byte)R1R0;
      Z = (byte *)0xa;
      DAT_mem_08ff = 0xb0;
      DAT_mem_08fe = 0x22;
      FUN_code_28dd();
      DAT_mem_08ff = 0xb4;
      DAT_mem_08fe = 0x22;
      FUN_code_28f6();
      DAT_mem_08ff = 0xb7;
      DAT_mem_08fe = 0x22;
      FUN_code_25b4();
      Z._0_1_ = 0xc;
      Y = (undefined2 *)((int)Y + 0xb);
      *(char *)Y = '\f';
      X._0_1_ = 1;
      DAT_mem_08ff = 0xbc;
      DAT_mem_08fe = 0x22;
      FUN_code_23c5();
      X = (byte *)0x643;
      DAT_mem_08ff = 0xbf;
      DAT_mem_08fe = 0x22;
      FUN_code_240a();
      X._0_1_ = (byte)Y;
      cVar1 = (char)((uint)Y >> 8);
      X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x94) + -2),(byte)X + 0x6c);
      pbVar11 = X;
      X = X + 1;
      R1R0._0_1_ = *pbVar11;
      R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
      X._1_1_ = *X;
      Z._0_1_ = 0;
      if (X._1_1_ < ((byte)R1R0 < 100)) {
        X = &DAT_mem_02b7;
        DAT_mem_08ff = 0xcc;
        DAT_mem_08fe = 0x22;
        FUN_code_2419();
      }
      X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x94) + -2),(byte)X + 0x6c);
      pbVar11 = X;
      X = X + 1;
      R1R0._0_1_ = *pbVar11;
      R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
      X._1_1_ = *X;
      if (X._1_1_ < ((byte)R1R0 < 0x91)) {
        Z._0_1_ = 0;
        write_volatile_1(DAT_mem_00b0,0);
        write_volatile_1(DAT_mem_00b1,0);
        Y = (undefined2 *)((int)Y + -1);
        *(char *)Y = '\0';
        X = (byte *)CONCAT11(X._1_1_,1);
        DAT_mem_08ff = 0xdf;
        DAT_mem_08fe = 0x22;
        FUN_code_23c5();
        X._0_1_ = (byte)Y;
        bVar4 = (byte)X;
        cVar1 = (char)((uint)Y >> 8);
        X = (byte *)CONCAT11(cVar1 - (((byte)X < 0x94) + -2),(byte)X + 0x6c);
        pbVar11 = X;
        X = X + 1;
        R1R0._0_1_ = *pbVar11;
        uVar6 = R1R0 & 0xff00;
        R1R0 = uVar6 | (byte)R1R0;
        X._1_1_ = *X;
        X = (byte *)CONCAT11(X._1_1_,(byte)R1R0);
        X = (byte *)((int)X + 1);
        Z._0_1_ = DAT_mem_0543;
        if (DAT_mem_0544 <= X._1_1_ && ((byte)X < DAT_mem_0543) <= (byte)(X._1_1_ - DAT_mem_0544))  {
          X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x94) + -2),bVar4 + 0x6c);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          R1R0 = uVar6 | (byte)R1R0;
          X._1_1_ = *X;
          Z._0_1_ = 0;
          Z._1_1_ = DAT_mem_0544;
          if (((byte)R1R0 < 0x55) <= X._1_1_) {
            X = &DAT_mem_04fe;
            DAT_mem_08ff = 0x43;
            DAT_mem_08fe = 0x23;
            FUN_code_2419();
            goto LAB_code_2343;
          }
        }
        Z._1_1_ = DAT_mem_0544;
        X = (byte *)0x4f2;
        DAT_mem_08ff = 0xfb;
        DAT_mem_08fe = 0x22;
        FUN_code_2419();
        DAT_mem_0619 = 0;
        DAT_mem_061a = 0;
        Z._0_1_ = DAT_mem_063f;
        if (DAT_mem_063f != 0) {
          X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x94) + -2),bVar4 + 0x6c);
          pbVar11 = X;
          X = X + 1;
          R1R0._0_1_ = *pbVar11;
          R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
          X._1_1_ = *X;
          Z._0_1_ = 0;
          if (X._1_1_ < ((byte)R1R0 < 100)) {
            X._0_1_ = *(byte *)Y;
            X._1_1_ = *(char *)((int)Y + 1);
            Z._0_1_ = 1;
            if ((byte)X != 0x2c || X._1_1_ != (byte)(((byte)X < 0x2c) + '\x01')) {
              write_volatile_1(DAT_mem_00b3,DAT_mem_0625);
              write_volatile_1(DAT_mem_00b0,0x83);
              Z._0_1_ = 4;
              write_volatile_1(DAT_mem_00b1,4);
              X = (byte *)0x96;
              DAT_mem_08ff = 0x23;
              DAT_mem_08fe = 0x23;
              FUN_code_269a();
              Z._0_1_ = 5;
              write_volatile_1(DAT_mem_00b1,5);
              X = (byte *)0x96;
              DAT_mem_08ff = 0x2a;
              DAT_mem_08fe = 0x23;
              FUN_code_269a();
              Z._0_1_ = 6;
              write_volatile_1(DAT_mem_00b1,6);
              X = (byte *)0x96;
              DAT_mem_08ff = 0x31;
              DAT_mem_08fe = 0x23;
              FUN_code_269a();
              write_volatile_1(DAT_mem_00b0,0);
              write_volatile_1(DAT_mem_00b1,0);
              Z._1_1_ = '\x01';
              *(char *)Y = ',';
              *(byte *)((int)Y + 1) = Z._1_1_;
              goto LAB_code_2343;
            }
          }
        }
        X = (byte *)0x32;
        DAT_mem_08ff = 0x3f;
        DAT_mem_08fe = 0x23;
        FUN_code_269a();
      }
    }
    else {
      X = (byte *)CONCAT11(cVar1 - ((bVar4 < 0x94) + -2),bVar4 + 0x6c);
      pbVar11 = X;
      X = X + 1;
      R1R0._0_1_ = *pbVar11;
      R1R0 = R1R0 & 0xff00 | (uint)(byte)R1R0;
      X._1_1_ = *X;
      X = (byte *)CONCAT11(X._1_1_,(byte)R1R0);
      if (X._1_1_ < ((byte)R1R0 < 0x92)) goto LAB_code_2262;
    }
LAB_code_2343:
    write_volatile_1(ETIFR,0x40);
    Z._0_1_ = *(byte *)(Y + 10);
    Z._1_1_ = *(char *)((int)Y + 0x15);
    R23R22._0_1_ = *(byte *)(Y + 0xb);
    R23R22._1_1_ = *(char *)((int)Y + 0x17);
    bVar13 = Z._1_1_ != -1 || (byte)(Z._1_1_ + 1) < ((byte)Z != -1);
    R23R22._1_1_ = R23R22._1_1_ - (((byte)R23R22 != -1 || (byte)((byte)R23R22 + 1) < bVar13) + -1) ;
    Z._1_1_ = Z._1_1_ - (((byte)Z != -1) + -1);
    R23R22._0_1_ = (byte)R23R22 - (bVar13 + -1);
    *(byte *)(Y + 10) = (byte)Z + '\x01';
    *(byte *)((int)Y + 0x15) = Z._1_1_;
    *(byte *)(Y + 0xb) = (byte)R23R22;
    *(byte *)((int)Y + 0x17) = R23R22._1_1_;
    if (DAT_mem_0628 == '\0') {
      Z = R5R4;
    }
    else {
      Z = (byte *)0x5d;
    }
    R13R12 = Z;
    X._0_1_ = *(byte *)(Y + 10);
    X._1_1_ = *(byte *)((int)Y + 0x15);
    DAT_mem_08ff = 99;
    DAT_mem_08fe = 0x23;
    FUN_code_28b8();
    X = (byte *)((uint)X._1_1_ << 8);
    if (((byte)R23R22 < (Z._1_1_ < 3)) <= R23R22._1_1_) {
      X = (byte *)0x4;
      DAT_mem_08ff = 0x6f;
      DAT_mem_08fe = 0x23;
      FUN_code_290d();
      Z = Z + 1;
      DAT_mem_08ff = 0x72;
      DAT_mem_08fe = 0x23;
      FUN_code_291d();
      Z = (byte *)CONCAT11(DAT_mem_054a,DAT_mem_0549);
      Z = (byte *)((int)Z + 1);
      DAT_mem_054a = Z._1_1_;
      DAT_mem_0549 = (byte)Z;
      Z._0_1_ = '\0';
      *(char *)(Y + 10) = '\0';
      *(byte *)((int)Y + 0x15) = (byte)Z;
      *(byte *)(Y + 0xb) = (byte)Z;
      *(byte *)((int)Y + 0x17) = (byte)Z;
      Z = (byte *)CONCAT11(DAT_mem_0618,DAT_mem_0617);
      Z = (byte *)((int)Z + 1);
      DAT_mem_0618 = Z._1_1_;
      X = &DAT_mem_0617;
      DAT_mem_0617 = (byte)Z;
    }
  } while( true );
}
