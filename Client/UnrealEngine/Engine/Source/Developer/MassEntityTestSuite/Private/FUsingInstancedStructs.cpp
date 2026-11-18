// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// SetUp @ 1471ab2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityBuilder::FUsingInstancedStructs::SetUp(FUsingInstancedStructs *this)

{
  bool bVar1;
  TSharedRef<FMassEntityManager,1> *pTVar2;
  FMassEntityHandle FVar3;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  FInstancedStruct local_1d0;
  undefined1 *local_1c0;
  TSharedRef<FMassEntityManager,1> local_1b0;
  FEntityBuilder local_1a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  bVar1 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar1) {
    local_1c0 = &this->field_0x28;
    pTVar2 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                       ((TSharedPtr<FMassEntityManager,1> *)local_1c0,&local_1b0);
    FEntityBuilder::FEntityBuilder(&local_1a0,pTVar2);
    TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_1b0);
    FInstancedStruct::FInstancedStruct(&local_1d0);
    FInstancedStruct::InitializeAs<FTestFragment_Int>(&local_1d0);
    FEntityBuilder::Add(&local_1a0,&local_1d0);
    FInstancedStruct::InitializeAs<FTestFragment_Int,int_const_&>
              (&local_1d0,(int *)&this->field_0x98);
    FEntityBuilder::Add(&local_1a0,&local_1d0);
    FInstancedStruct::InitializeAs<FTestFragment_Float>(&local_1d0);
    FEntityBuilder::Add(&local_1a0,&local_1d0);
    FInstancedStruct::InitializeAs<FTestFragment_Float,float_const_&>
              (&local_1d0,(float *)&this->field_0x9c);
    FEntityBuilder::Add(&local_1a0,&local_1d0);
    FInstancedStruct::InitializeAs<FTestSharedFragment_Float>(&local_1d0);
    FEntityBuilder::Add(&local_1a0,&local_1d0);
    FInstancedStruct::InitializeAs<FTestSharedFragment_Float,float_const_&>
              (&local_1d0,(float *)&this->field_0xa0);
    FEntityBuilder::Add(&local_1a0,&local_1d0);
    FInstancedStruct::InitializeAs<FTestConstSharedFragment_Int>(&local_1d0);
    FEntityBuilder::Add(&local_1a0,&local_1d0);
    FInstancedStruct::InitializeAs<FTestConstSharedFragment_Int,int_const_&>
              (&local_1d0,(int *)&this->field_0xa4);
    FEntityBuilder::Add(&local_1a0,&local_1d0);
    FEntityBuilder::Add<FTestTag_B>(&local_1a0);
    FVar3 = FEntityBuilder::Commit(&local_1a0);
    *(undefined8 *)&this->field_0x90 = *(undefined8 *)FVar3;
    local_1d8 = 1;
    FInstancedStruct::~FInstancedStruct(&local_1d0);
    FEntityBuilder::~FEntityBuilder(&local_1a0);
  }
  else {
    local_1d8 = 0;
  }
  return (bool)local_1d8;
}

