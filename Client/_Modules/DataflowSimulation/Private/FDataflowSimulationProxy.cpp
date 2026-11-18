// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 7

// StaticStruct @ 1462ecf90

UScriptStruct * __cdecl FDataflowSimulationProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationProxy,(UObject *)pUVar1,
                         L"DataflowSimulationProxy");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSimulationProxy.OuterSingleton;
}

// ~FDataflowSimulationProxy @ 1462f2df0

void __thiscall FDataflowSimulationProxy::~FDataflowSimulationProxy(FDataflowSimulationProxy *this)

{
  ForElementType<FSetElementId> FVar1;
  ForElementType<unsigned_int> FVar2;
  
  (this->SimulationGroups).HashSize = 0;
  FVar1 = (this->SimulationGroups).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SimulationGroups).Elements);
  FVar2 = (this->GroupBits).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// GetScriptStruct @ 1462f6f10

UScriptStruct * __thiscall FDataflowSimulationProxy::GetScriptStruct(FDataflowSimulationProxy *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationProxy,(UObject *)pUVar1,
                         L"DataflowSimulationProxy");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSimulationProxy.OuterSingleton;
}

// HasGroupBit @ 1462f7c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDataflowSimulationProxy::HasGroupBit
          (FDataflowSimulationProxy *this,TBitArray<FDefaultBitArrayAllocator> *param_1)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  undefined1 auStackY_88 [32];
  <lambda_1> local_58 [8];
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uVar6 = 0;
  local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar5 = 0;
  local_50.NumBits = 0;
  local_50.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            (&this->GroupBits,param_1,&local_50,MinSize,local_58);
  FVar9 = (ForElementType<unsigned_int>)&local_50;
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar9 = local_50.AllocatorInstance.SecondaryData;
  }
  iVar2 = (int)(local_50.NumBits + 0x1fU + ((int)(local_50.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5;
  uVar7 = local_50.NumBits & 0x8000001f;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
  }
  uVar4 = 0xffffffff >> ((byte)(0x20 - uVar7) & 0x1f);
  if (0x1f < (int)(0x20 - uVar7)) {
    uVar4 = 0xffffffff;
  }
  uVar7 = 0xffffffff;
  if (iVar2 == 1) {
    uVar7 = uVar4;
  }
  uVar3 = uVar6;
  if (0 < iVar2) {
    do {
      puVar1 = (uint *)((longlong)FVar9 + uVar3 * 4);
      if (uVar7 == 0xffffffff) {
        uVar7 = *puVar1;
      }
      else {
        uVar7 = *puVar1 & uVar7;
      }
      uVar8 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar7 - ((ulonglong)(uVar7 >> 1) & 0x5555555555555555);
      uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
      uVar5 = (int)uVar6 +
              (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
      uVar6 = (ulonglong)uVar5;
      uVar7 = 0xffffffff;
      if (uVar8 == iVar2 - 1U) {
        uVar7 = uVar4;
      }
      uVar3 = (ulonglong)uVar8;
    } while ((int)uVar8 < iVar2);
  }
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  return uVar5 != 0;
}

// HasSimulationGroup @ 1462f7e00

bool __thiscall
FDataflowSimulationProxy::HasSimulationGroup(FDataflowSimulationProxy *this,FString *param_1)

{
  FString *pFVar1;
  
  pFVar1 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Find
                     (&this->SimulationGroups,param_1);
  return pFVar1 != (FString *)0x0;
}

// IsValid @ 1462f8bd0

bool __thiscall FDataflowSimulationProxy::IsValid(FDataflowSimulationProxy *this)

{
  return true;
}

// SetSimulationGroups @ 1462fd8e0

void __thiscall
FDataflowSimulationProxy::SetSimulationGroups
          (FDataflowSimulationProxy *this,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
            (&this->SimulationGroups,param_1);
  return;
}

