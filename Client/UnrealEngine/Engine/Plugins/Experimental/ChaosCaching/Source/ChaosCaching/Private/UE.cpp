// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 62

// Construct<FTrailingEvent> @ 14dad9ea0

void __cdecl UE::CoreUObject::Private::Construct<FTrailingEvent>(void *param_1)

{
  double dVar1;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FTrailingEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x38) = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x48) = dVar1;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// ConstructForTests<FTrailingEvent> @ 14dad9f20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTrailingEvent>(void *param_1)

{
  double dVar1;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FTrailingEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x38) = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x48) = dVar1;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  return;
}

// Destruct<FTrailingEvent> @ 14dad9fa0

void __cdecl UE::CoreUObject::Private::Destruct<FTrailingEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCacheEventBase__6B_;
  return;
}

// Copy<FTrailingEvent> @ 14dad9fc0

bool __cdecl UE::CoreUObject::Private::Copy<FTrailingEvent>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
    *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xa0);
    *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_2 + 0x98);
    *(undefined8 *)((longlong)param_1 + 0xa0) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0xa8) = *(undefined8 *)((longlong)param_2 + 0xa8);
    param_1 = (void *)((longlong)param_1 + 0xb0);
    param_2 = (void *)((longlong)param_2 + 0xb0);
  }
  return true;
}

// Construct<FCollisionEvent> @ 14dada1f0

void __cdecl UE::CoreUObject::Private::Construct<FCollisionEvent>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FCollisionEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  return;
}

// ConstructForTests<FCollisionEvent> @ 14dada200

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCollisionEvent>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FCollisionEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  return;
}

// Destruct<FCollisionEvent> @ 14dada210

void __cdecl UE::CoreUObject::Private::Destruct<FCollisionEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCacheEventBase__6B_;
  return;
}

// Copy<FCollisionEvent> @ 14dada230

bool __cdecl
UE::CoreUObject::Private::Copy<FCollisionEvent>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
    *(undefined8 *)((longlong)param_1 + 0x88) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0x90);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xa0);
    *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_2 + 0x98);
    *(undefined8 *)((longlong)param_1 + 0xa0) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0xa8) = *(undefined8 *)((longlong)param_2 + 0xa8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xb8);
    *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
    *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0xc0);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xd0);
    *(undefined8 *)((longlong)param_1 + 200) = *(undefined8 *)((longlong)param_2 + 200);
    *(undefined8 *)((longlong)param_1 + 0xd0) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0xd8) = *(undefined8 *)((longlong)param_2 + 0xd8);
    *(undefined4 *)((longlong)param_1 + 0xe0) = *(undefined4 *)((longlong)param_2 + 0xe0);
    *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
    *(undefined4 *)((longlong)param_1 + 0xe8) = *(undefined4 *)((longlong)param_2 + 0xe8);
    param_1 = (void *)((longlong)param_1 + 0xf0);
    param_2 = (void *)((longlong)param_2 + 0xf0);
  }
  return true;
}

// Construct<FBreakingEvent> @ 14dada420

void __cdecl UE::CoreUObject::Private::Construct<FBreakingEvent>(void *param_1)

{
  double dVar1;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FBreakingEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x38) = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x48) = dVar1;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3f800000;
  return;
}

// ConstructForTests<FBreakingEvent> @ 14dada4b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBreakingEvent>(void *param_1)

{
  double dVar1;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FBreakingEvent__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TQuat<double>::Identity.X;
  *(double *)((longlong)param_1 + 0x38) = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TQuat<double>::Identity.Z;
  *(double *)((longlong)param_1 + 0x48) = dVar1;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3f800000;
  return;
}

// Destruct<FBreakingEvent> @ 14dada540

void __cdecl UE::CoreUObject::Private::Destruct<FBreakingEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCacheEventBase__6B_;
  return;
}

// Copy<FBreakingEvent> @ 14dada560

bool __cdecl UE::CoreUObject::Private::Copy<FBreakingEvent>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_1 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_1 + 0x58) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x60) = *(undefined8 *)((longlong)param_2 + 0x60);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x70);
    *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x68);
    *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined4 *)((longlong)param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x80);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x90);
    *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
    *(undefined8 *)((longlong)param_1 + 0x90) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_2 + 0x98);
    uVar1 = *(undefined8 *)((longlong)param_2 + 0xa8);
    *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
    *(undefined8 *)((longlong)param_1 + 0xa8) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)((longlong)param_2 + 0xb0);
    param_1 = (void *)((longlong)param_1 + 0xc0);
    param_2 = (void *)((longlong)param_2 + 0xc0);
  }
  return true;
}

// Construct<FEnableStateEvent> @ 14dada980

void __cdecl UE::CoreUObject::Private::Construct<FEnableStateEvent>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FEnableStateEvent__6B_;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// ConstructForTests<FEnableStateEvent> @ 14dada9a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEnableStateEvent>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined ***)param_1 = &___7FEnableStateEvent__6B_;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FEnableStateEvent> @ 14dada9c0

void __cdecl UE::CoreUObject::Private::Destruct<FEnableStateEvent>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCacheEventBase__6B_;
  return;
}

// Copy<FEnableStateEvent> @ 14dada9e0

bool __cdecl
UE::CoreUObject::Private::Copy<FEnableStateEvent>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0xc) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x10);
  }
  return true;
}

// Construct<FMovieSceneChaosCacheParams> @ 14dadb160

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneChaosCacheParams>(void *param_1)

{
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams(param_1);
  *(undefined ***)param_1 = &___7FMovieSceneChaosCacheParams__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMovieSceneChaosCacheParams> @ 14dadb190

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneChaosCacheParams>(void *param_1)

{
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams(param_1);
  *(undefined ***)param_1 = &___7FMovieSceneChaosCacheParams__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMovieSceneChaosCacheParams> @ 14dadb1c0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneChaosCacheParams>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMovieSceneBaseCacheParams__6B_;
  return;
}

// Copy<FMovieSceneChaosCacheParams> @ 14dadb1e0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneChaosCacheParams>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar2 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
    *(undefined4 *)((longlong)pvVar2 + 0xc) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x10) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x14) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(uint *)((longlong)pvVar2 + 0x18) =
         *(uint *)((longlong)pvVar2 + 0x18) ^
         (*(uint *)((longlong)pvVar2 + 0x18) ^
         *(uint *)((longlong)pvVar2 + (longlong)param_2 + (0x18 - (longlong)param_1))) & 1;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1)),
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(undefined8 *)((longlong)pvVar2 + 0x20) =
         *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x28);
  }
  return true;
}

// Construct<FCompressedRichCurves> @ 14dadb4d0

void __cdecl UE::CoreUObject::Private::Construct<FCompressedRichCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCompressedRichCurves> @ 14dadb4e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCompressedRichCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCompressedRichCurves> @ 14dadb4f0

void __cdecl UE::CoreUObject::Private::Destruct<FCompressedRichCurves>(void *param_1)

{
  DestructItems<FCompressedRichCurve,int>
            (*(FCompressedRichCurve **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCompressedRichCurves> @ 14dadb530

bool __cdecl
UE::CoreUObject::Private::Copy<FCompressedRichCurves>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FCompressedRichCurve *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FCompressedRichCurve,int>
                  ((FCompressedRichCurve *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FCompressedRichCurve *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FCompressedRichCurve,FCompressedRichCurve,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FRichCurves> @ 14dadb620

void __cdecl UE::CoreUObject::Private::Construct<FRichCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FRichCurves> @ 14dadb630

void __cdecl UE::CoreUObject::Private::ConstructForTests<FRichCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FRichCurves> @ 14dadb640

void __cdecl UE::CoreUObject::Private::Destruct<FRichCurves>(void *param_1)

{
  DestructItems<FRichCurve,int>(*(FRichCurve **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FRichCurves> @ 14dadb680

bool __cdecl UE::CoreUObject::Private::Copy<FRichCurves>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FRichCurve *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FRichCurve,int>((FRichCurve *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FRichCurve *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FRichCurve,FRichCurve,int>(pFVar6->Data,pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCacheSpawnableTemplate> @ 14dadb870

void __cdecl UE::CoreUObject::Private::Construct<FCacheSpawnableTemplate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xa0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xb0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xc0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// ConstructForTests<FCacheSpawnableTemplate> @ 14dadb920

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCacheSpawnableTemplate>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(double (*) [2])((longlong)param_1 + 0x10) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x20) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x30) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x40) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x50) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x60) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x70) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x80) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x90) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xa0) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xb0) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0xc0) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return;
}

// Destruct<FCacheSpawnableTemplate> @ 14dadb9d0

void __cdecl UE::CoreUObject::Private::Destruct<FCacheSpawnableTemplate>(void *param_1)

{
  return;
}

// Copy<FCacheSpawnableTemplate> @ 14dadb9e0

bool __cdecl
UE::CoreUObject::Private::Copy<FCacheSpawnableTemplate>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      uVar2 = puVar1[9];
      puVar3[8] = puVar1[8];
      puVar3[9] = uVar2;
      uVar2 = puVar1[0xb];
      puVar3[10] = puVar1[10];
      puVar3[0xb] = uVar2;
      uVar2 = puVar1[0xd];
      puVar3[0xc] = puVar1[0xc];
      puVar3[0xd] = uVar2;
      uVar2 = puVar1[0xf];
      puVar3[0xe] = puVar1[0xe];
      puVar3[0xf] = uVar2;
      uVar2 = puVar1[0x11];
      puVar3[0x10] = puVar1[0x10];
      puVar3[0x11] = uVar2;
      uVar2 = puVar1[0x13];
      puVar3[0x12] = puVar1[0x12];
      puVar3[0x13] = uVar2;
      uVar2 = puVar1[0x15];
      puVar3[0x14] = puVar1[0x14];
      puVar3[0x15] = uVar2;
      uVar2 = puVar1[0x17];
      puVar3[0x16] = puVar1[0x16];
      puVar3[0x17] = uVar2;
      uVar2 = puVar1[0x19];
      puVar3[0x18] = puVar1[0x18];
      puVar3[0x19] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x1a;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FPerParticleCacheData> @ 14dadbdc0

void __cdecl UE::CoreUObject::Private::Construct<FPerParticleCacheData>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// ConstructForTests<FPerParticleCacheData> @ 14dadbe40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPerParticleCacheData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// Destruct<FPerParticleCacheData> @ 14dadbea0

void __cdecl UE::CoreUObject::Private::Destruct<FPerParticleCacheData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRichCurve>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FPerParticleCacheData> @ 14dadbf80

bool __cdecl
UE::CoreUObject::Private::Copy<FPerParticleCacheData>(void *param_1,void *param_2,int param_3)

{
  FParticleTransformTrack *pFVar1;
  FParticleTransformTrack *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FParticleTransformTrack *)(((longlong)param_2 - (longlong)param_1) + (longlong)this)
      ;
      FParticleTransformTrack::operator=(this,pFVar1);
      TSet<TTuple<FName,FRichCurve>,TDefaultMapHashableKeyFuncs<FName,FRichCurve,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FRichCurve>,TDefaultMapHashableKeyFuncs<FName,FRichCurve,0>,FDefaultSetAllocator>
                   *)(this + 1),
                  (TSet<TTuple<FName,FRichCurve>,TDefaultMapHashableKeyFuncs<FName,FRichCurve,0>,FDefaultSetAllocator>
                   *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = (FParticleTransformTrack *)&this[2].RawTransformTrack.PosKeys.ArrayNum;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FParticleTransformTrack> @ 14dadc480

void __cdecl UE::CoreUObject::Private::Construct<FParticleTransformTrack>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x35) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FParticleTransformTrack> @ 14dadc4c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FParticleTransformTrack>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FParticleTransformTrack> @ 14dadc530

void __cdecl UE::CoreUObject::Private::Destruct<FParticleTransformTrack>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FParticleTransformTrack> @ 14dadc5a0

bool __cdecl
UE::CoreUObject::Private::Copy<FParticleTransformTrack>(void *param_1,void *param_2,int param_3)

{
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    pTVar1 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x10);
    if (pTVar1 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                  ((longlong)param_2 + 0x10)) {
      iVar3 = ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x10))->ArrayNum;
      piVar2 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x10))->ArrayMax;
      _Src = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
              ((longlong)param_2 + 0x10))->AllocatorInstance).Data;
      ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))->
      ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,0x10,iVar3,*piVar2,(ForAnyElementType *)pTVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 4);
        }
      }
    }
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x20),
               (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x20));
    *(undefined4 *)
     &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))
      ->AllocatorInstance).Data =
         *(undefined4 *)
          &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
            ((longlong)param_2 + 0x30))->AllocatorInstance).Data;
    *(undefined1 *)
     ((longlong)
      &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x30))
       ->AllocatorInstance).Data + 4) =
         *(undefined1 *)
          ((longlong)
           &(((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_2 + 0x30))->AllocatorInstance).Data + 4);
    TArray<float,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<float,TSizedDefaultAllocator<32>_> *)
               &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_1 + 0x30))->ArrayNum,
               (TArray<float,TSizedDefaultAllocator<32>_> *)
               &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                ((longlong)param_2 + 0x30))->ArrayNum);
    param_1 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_1 + 0x40))->ArrayNum;
    param_2 = &((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
               ((longlong)param_2 + 0x40))->ArrayNum;
  }
  return true;
}

// Construct<FMovieSceneChaosCacheSectionTemplate> @ 14dadc760

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneChaosCacheSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneChaosCacheSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams
            ((FMovieSceneBaseCacheParams *)((longlong)param_1 + 0x28));
  ((FMovieSceneBaseCacheParams *)((longlong)param_1 + 0x28))->_padding_ =
       (longlong)&___7FMovieSceneChaosCacheParams__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FMovieSceneChaosCacheSectionTemplate> @ 14dadc7d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneChaosCacheSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneChaosCacheSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams
            ((FMovieSceneBaseCacheParams *)((longlong)param_1 + 0x28));
  ((FMovieSceneBaseCacheParams *)((longlong)param_1 + 0x28))->_padding_ =
       (longlong)&___7FMovieSceneChaosCacheParams__6B_;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FMovieSceneChaosCacheSectionTemplate> @ 14dadc830

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneChaosCacheSectionTemplate>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x28) = &___7FMovieSceneBaseCacheParams__6B_;
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieSceneChaosCacheSectionTemplate> @ 14dadc890

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneChaosCacheSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)((longlong)param_1 + 0x20);
    pvVar2 = param_1;
    do {
      *(undefined1 *)((longlong)pvVar2 + 8) =
           *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar2);
      *(undefined1 *)((longlong)pvVar2 + 0x10) =
           *(undefined1 *)((longlong)pvVar2 + (longlong)param_2 + (0x10 - (longlong)param_1));
      *(undefined8 *)((longlong)pvVar2 + 0x14) =
           *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x14 - (longlong)param_1));
      *puVar3 = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x20 - (longlong)param_1));
      *(undefined4 *)(puVar3 + 2) =
           *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x30 - (longlong)param_1));
      *(undefined4 *)((longlong)puVar3 + 0x14) =
           *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x34 - (longlong)param_1));
      *(undefined4 *)(puVar3 + 3) =
           *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x38 - (longlong)param_1));
      *(undefined4 *)((longlong)puVar3 + 0x1c) =
           *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x3c - (longlong)param_1));
      *(uint *)(puVar3 + 4) =
           *(uint *)(puVar3 + 4) ^
           (*(uint *)(puVar3 + 4) ^
           *(uint *)((longlong)pvVar2 + (longlong)param_2 + (0x40 - (longlong)param_1))) & 1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = *(UObject **)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1)),
         pUVar1 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar1);
      }
      puVar3[5] = *(undefined8 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1))
      ;
      puVar3 = puVar3 + 10;
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x50);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FObservedComponent> @ 14dadca30

void __cdecl UE::CoreUObject::Private::Construct<FObservedComponent>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x28);
  uStackX_8 = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x68))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x68),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x50),(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(double (*) [2])((longlong)param_1 + 0x110) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x140) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x150) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x160) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  return;
}

// ConstructForTests<FObservedComponent> @ 14dadca40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FObservedComponent>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 uStackX_8;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x28);
  uStackX_8 = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x68))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x68),0);
  uStackX_8 = 0;
  FSoftObjectPtr::operator=((FSoftObjectPtr *)((longlong)param_1 + 0x50),(FObjectPtr)&uStackX_8);
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(double (*) [2])((longlong)param_1 + 0x110) =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x120) =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x130) =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x140) =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x150) =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *(double (*) [2])((longlong)param_1 + 0x160) =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  return;
}

// Destruct<FObservedComponent> @ 14dadca50

void __cdecl UE::CoreUObject::Private::Destruct<FObservedComponent>(void *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  longlong *plVar1;
  void *pvVar2;
  FReadAccessScope FStack_28;
  
  this = (TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0x178);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,&FStack_28);
  if ((*(int *)((longlong)param_1 + 0x188) != 0) &&
     (plVar1 = *(longlong **)((longlong)param_1 + 0x180), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
  pvVar2 = *(void **)((longlong)param_1 + 0x180);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  if (*(void **)((longlong)param_1 + 0xf8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf8));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xb8));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  return;
}

// Copy<FObservedComponent> @ 14dadcb60

bool __cdecl
UE::CoreUObject::Private::Copy<FObservedComponent>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 0x78) = *(undefined1 *)((longlong)param_2 + 0x78);
      *(undefined1 *)((longlong)param_1 + 0x90) = *(undefined1 *)((longlong)param_2 + 0x90);
      *(undefined1 *)((longlong)param_1 + 0x79) = *(undefined1 *)((longlong)param_2 + 0x79);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x80),(FString *)((longlong)param_2 + 0x80));
      *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
      *(undefined8 *)((longlong)param_1 + 0x98) = *(undefined8 *)((longlong)param_2 + 0x98);
      *(undefined8 *)((longlong)param_1 + 0xa0) = *(undefined8 *)((longlong)param_2 + 0xa0);
      *(undefined8 *)((longlong)param_1 + 0xa8) = *(undefined8 *)((longlong)param_2 + 0xa8);
      *(undefined4 *)((longlong)param_1 + 0xb0) = *(undefined4 *)((longlong)param_2 + 0xb0);
      *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      operator=((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0xb8),
                (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0xb8));
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x118);
      *(undefined8 *)((longlong)param_1 + 0x110) = *(undefined8 *)((longlong)param_2 + 0x110);
      *(undefined8 *)((longlong)param_1 + 0x118) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x128);
      *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
      *(undefined8 *)((longlong)param_1 + 0x128) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x138);
      *(undefined8 *)((longlong)param_1 + 0x130) = *(undefined8 *)((longlong)param_2 + 0x130);
      *(undefined8 *)((longlong)param_1 + 0x138) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x148);
      *(undefined8 *)((longlong)param_1 + 0x140) = *(undefined8 *)((longlong)param_2 + 0x140);
      *(undefined8 *)((longlong)param_1 + 0x148) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x158);
      *(undefined8 *)((longlong)param_1 + 0x150) = *(undefined8 *)((longlong)param_2 + 0x150);
      *(undefined8 *)((longlong)param_1 + 0x158) = uVar1;
      uVar1 = *(undefined8 *)((longlong)param_2 + 0x168);
      *(undefined8 *)((longlong)param_1 + 0x160) = *(undefined8 *)((longlong)param_2 + 0x160);
      *(undefined8 *)((longlong)param_1 + 0x168) = uVar1;
      *(undefined8 *)((longlong)param_1 + 0x170) = *(undefined8 *)((longlong)param_2 + 0x170);
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
      *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
      *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 0x58),
                 (FSoftObjectPath *)((longlong)param_2 + 0x58));
      param_2 = (void *)((longlong)param_2 + 400);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 400);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCacheEventTrack> @ 14dadd160

void __cdecl UE::CoreUObject::Private::Construct<FCacheEventTrack>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FCacheEventTrack> @ 14dadd180

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCacheEventTrack>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FCacheEventTrack> @ 14dadd1a0

void __cdecl UE::CoreUObject::Private::Destruct<FCacheEventTrack>(void *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined1 auStackX_8 [8];
  
  if (*(longlong *)((longlong)param_1 + 8) == 0) {
    if ((*(int *)((longlong)param_1 + 0x28) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EventData.Num() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\CacheEvents.cpp"
                           ,0x2d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    *(int *)((longlong)param_1 + 0x30) = *(int *)((longlong)param_1 + 0x30) + 1;
    puVar6 = *(undefined8 **)((longlong)param_1 + 0x20);
    iVar2 = *(int *)((longlong)param_1 + 0x28);
    puVar1 = puVar6 + iVar2;
    while( true ) {
      if (*(int *)((longlong)param_1 + 0x28) != iVar2) {
        `TCheckedPointerIterator<unsigned_char_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_8);
      }
      if (puVar6 == puVar1) break;
      pvVar3 = (void *)*puVar6;
      (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x300))
                (*(longlong **)((longlong)param_1 + 8),pvVar3);
      FMemory::Free(pvVar3);
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)((longlong)param_1 + 0x28) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)((longlong)param_1 + 0x20),0,
                 (int *)((longlong)param_1 + 0x2c));
    }
    *(undefined4 *)((longlong)param_1 + 0x18) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)((longlong)param_1 + 0x10),0,
                 (int *)((longlong)param_1 + 0x1c));
    }
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
    return;
  }
  FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  return;
}

// SerializeArchive<FCacheEventTrack> @ 14dadd1b0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FCacheEventTrack>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  UPackage *pUVar1;
  
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FCacheEventTrack.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
      Z_Registration_Info_UScriptStruct_FCacheEventTrack.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventTrack,(UObject *)pUVar1,
                           L"CacheEventTrack");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)Z_Registration_Info_UScriptStruct_FCacheEventTrack.OuterSingleton,param_1,
               param_2,*(UStruct **)((longlong)param_2 + 8),(uchar *)0x0,(UObject *)0x0);
  }
  if ((param_1->field_0x28 & 4) != 0) {
    FCacheEventTrack::SaveEventsToArchive(param_2,param_1);
    return true;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    FCacheEventTrack::LoadEventsFromArchive(param_2,param_1);
  }
  return true;
}

// Copy<FCacheEventTrack> @ 14dadd260

bool __cdecl
UE::CoreUObject::Private::Copy<FCacheEventTrack>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *_Src;
  longlong lVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)((longlong)param_1 + lVar5);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 = *(UObject **)((longlong)param_1 + lVar5 + 8), pUVar4 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar4);
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar5 + 8);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
                 (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + lVar5 + 0x10));
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar5 + 0x20);
      pFVar6 = (ForAnyElementType *)((longlong)param_1 + 0x20);
      if (pFVar6 != pFVar1) {
        iVar3 = *(int *)((longlong)param_1 + lVar5 + 0x28);
        piVar2 = (int *)((longlong)param_1 + 0x2c);
        _Src = pFVar1->Data;
        *(int *)((longlong)param_1 + 0x28) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,*piVar2,pFVar6,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar6->Data,_Src,(longlong)iVar3 << 3);
          }
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_1 + lVar5 + 0x30);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneChaosCacheSectionTemplateParameters> @ 14dadd440

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneChaosCacheSectionTemplateParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams
            ((FMovieSceneBaseCacheParams *)((longlong)param_1 + 8));
  ((FMovieSceneBaseCacheParams *)((longlong)param_1 + 8))->_padding_ =
       (longlong)&___7FMovieSceneChaosCacheParams__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FMovieSceneChaosCacheSectionTemplateParameters> @ 14dadd480

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneChaosCacheSectionTemplateParameters>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams
            ((FMovieSceneBaseCacheParams *)((longlong)param_1 + 8));
  ((FMovieSceneBaseCacheParams *)((longlong)param_1 + 8))->_padding_ =
       (longlong)&___7FMovieSceneChaosCacheParams__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FMovieSceneChaosCacheSectionTemplateParameters> @ 14dadd4c0

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneChaosCacheSectionTemplateParameters>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 8) = &___7FMovieSceneBaseCacheParams__6B_;
  return;
}

// Copy<FMovieSceneChaosCacheSectionTemplateParameters> @ 14dadd4e0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneChaosCacheSectionTemplateParameters>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(uint *)((longlong)param_1 + 0x20) =
           *(uint *)((longlong)param_1 + 0x20) ^
           (*(uint *)((longlong)param_1 + 0x20) ^ *(uint *)((longlong)param_2 + 0x20)) & 1;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x28) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x28));
      }
      puVar1 = (undefined8 *)((longlong)param_2 + 0x28);
      param_2 = (void *)((longlong)param_2 + 0x30);
      *(undefined8 *)((longlong)param_1 + 0x28) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x30);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCacheEventBase> @ 14dadd5d0

void __cdecl UE::CoreUObject::Private::Construct<FCacheEventBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCacheEventBase__6B_;
  return;
}

// ConstructForTests<FCacheEventBase> @ 14dadd5f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCacheEventBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCacheEventBase__6B_;
  return;
}

// Destruct<FCacheEventBase> @ 14dadd610

void __cdecl UE::CoreUObject::Private::Destruct<FCacheEventBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FCacheEventBase__6B_;
  return;
}

// Copy<FCacheEventBase> @ 14dadd630

bool __cdecl
UE::CoreUObject::Private::Copy<FCacheEventBase>(void *param_1,void *param_2,int param_3)

{
  return true;
}

// DereferenceIfNecessary<AChaosCacheManager,AChaosCacheManager_*_&> @ 14dade560

AChaosCacheManager * __cdecl
UE::Core::Private::DereferenceIfNecessary<AChaosCacheManager,AChaosCacheManager_*_&>
          (AChaosCacheManager **param_1)

{
  return *param_1;
}

