// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 16

// StaticStruct @ 14237b340

UScriptStruct * __cdecl FNodeHierarchyWithUserData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNodeHierarchyWithUserData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FNodeHierarchyWithUserData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNodeHierarchyWithUserData,(UObject *)pUVar1,
                         L"NodeHierarchyWithUserData");
  }
  return Z_Registration_Info_UScriptStruct_FNodeHierarchyWithUserData.OuterSingleton;
}

// GetLocalTransform @ 14237b380

TTransform<double> * __thiscall
FNodeHierarchyWithUserData::GetLocalTransform(FNodeHierarchyWithUserData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Public\\NodeHierarchy.h"
             ,0xdd,L"Pure virtual not implemented (%s)");
  uVar3 = 0;
  if (param_1 < (this->Hierarchy).Transforms.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)
         ((this->Hierarchy).Transforms.AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// GetGlobalTransform @ 14237b420

TTransform<double> * __thiscall
FNodeHierarchyWithUserData::GetGlobalTransform(FNodeHierarchyWithUserData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Public\\NodeHierarchy.h"
             ,0xde,L"Pure virtual not implemented (%s)");
  uVar3 = 0;
  if (param_1 < (this->Hierarchy).Transforms.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)
         ((this->Hierarchy).Transforms.AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// GetLocalTransform @ 14237b4c0

TTransform<double> * __thiscall
FNodeHierarchyWithUserData::GetLocalTransform(FNodeHierarchyWithUserData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Public\\NodeHierarchy.h"
             ,0xdf,L"Pure virtual not implemented (%s)");
  uVar3 = 0;
  if (param_1 < (this->Hierarchy).Transforms.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)
         ((this->Hierarchy).Transforms.AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// GetGlobalTransform @ 14237b560

TTransform<double> * __thiscall
FNodeHierarchyWithUserData::GetGlobalTransform(FNodeHierarchyWithUserData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimationCore\\Public\\NodeHierarchy.h"
             ,0xe0,L"Pure virtual not implemented (%s)");
  uVar3 = 0;
  if (param_1 < (this->Hierarchy).Transforms.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTransform<double> *)
         ((this->Hierarchy).Transforms.AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// SetLocalTransform @ 14237b600

void __thiscall
FNodeHierarchyWithUserData::SetLocalTransform
          (FNodeHierarchyWithUserData *this,int param_1,TTransform<double> *param_2)

{
  return;
}

// SetGlobalTransform @ 14237b610

void __thiscall
FNodeHierarchyWithUserData::SetGlobalTransform
          (FNodeHierarchyWithUserData *this,int param_1,TTransform<double> *param_2)

{
  return;
}

// Initialize @ 14237b620

void __thiscall FNodeHierarchyWithUserData::Initialize(FNodeHierarchyWithUserData *this)

{
  FNodeHierarchyData::BuildNodeNameToIndexMapping(&this->Hierarchy);
  return;
}

// GetUserDataImpl @ 14237b630

void * __thiscall
FNodeHierarchyWithUserData::GetUserDataImpl(FNodeHierarchyWithUserData *this,int param_1)

{
  return (void *)0x0;
}

// GetUserDataImpl @ 14237b640

void * __thiscall
FNodeHierarchyWithUserData::GetUserDataImpl(FNodeHierarchyWithUserData *this,int param_1)

{
  return (void *)0x0;
}

// AddUserDataImpl @ 14237b650

int __thiscall
FNodeHierarchyWithUserData::AddUserDataImpl(FNodeHierarchyWithUserData *this,void *param_1)

{
  return -1;
}

// GetNumUserData @ 14237b660

int __thiscall FNodeHierarchyWithUserData::GetNumUserData(FNodeHierarchyWithUserData *this)

{
  return 0;
}

// EmptyUserData @ 14237b670

void __thiscall
FNodeHierarchyWithUserData::EmptyUserData(FNodeHierarchyWithUserData *this,int param_1)

{
  return;
}

// RemoveUserData @ 14237b680

void __thiscall
FNodeHierarchyWithUserData::RemoveUserData(FNodeHierarchyWithUserData *this,int param_1)

{
  return;
}

// HasUserData @ 14237b690

bool __thiscall FNodeHierarchyWithUserData::HasUserData(FNodeHierarchyWithUserData *this)

{
  return false;
}

// ~FNodeHierarchyWithUserData @ 14237e9b0

void __thiscall
FNodeHierarchyWithUserData::~FNodeHierarchyWithUserData(FNodeHierarchyWithUserData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->Hierarchy).NodeNameToIndexMapping.field_0x48 = 0;
  this->_padding_ = (longlong)&___7FNodeHierarchyWithUserData__6B_;
  pvVar1 = *(void **)&(this->Hierarchy).NodeNameToIndexMapping.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Hierarchy).NodeNameToIndexMapping);
  pFVar2 = (this->Hierarchy).Transforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Hierarchy).Nodes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

