// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 6

// ~FRigPose @ 14a226170

void __thiscall FRigPose::~FRigPose(FRigPose *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->KeyToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->KeyToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KeyToIndex);
  pFVar2 = (this->Elements).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14a22a040

FRigPose * __thiscall FRigPose::operator=(FRigPose *this,FRigPose *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->Elements).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Elements).AllocatorInstance.Data = (param_1->Elements).AllocatorInstance.Data;
    (param_1->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Elements).ArrayNum = (param_1->Elements).ArrayNum;
    (this->Elements).ArrayMax = (param_1->Elements).ArrayMax;
    (param_1->Elements).ArrayNum = 0;
    (param_1->Elements).ArrayMax = 0;
  }
  this->HierarchyTopologyVersion = param_1->HierarchyTopologyVersion;
  this->PoseHash = param_1->PoseHash;
  this->CachedPoseHash = param_1->CachedPoseHash;
  if (&this->KeyToIndex != &param_1->KeyToIndex) {
    TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                *)&this->KeyToIndex,
               (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                *)&param_1->KeyToIndex);
  }
  return this;
}

// operator[] @ 14a22a380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigPoseElement * __thiscall FRigPose::operator[](FRigPose *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigPoseElement *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigPoseElement *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FRigPoseElement *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x110);
}

// GetIndex @ 14a2645c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

int __thiscall FRigPose::GetIndex(FRigPose *this,FRigElementKey *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  FScriptContainerElement *pFVar7;
  uint local_res8 [2];
  TPairInitializer<FRigElementKey_const_&,int_const_&> local_res18;
  FScriptContainerElement *local_28;
  uint *local_20;
  
  if (this->CachedPoseHash != this->PoseHash) {
    TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
             *)&this->KeyToIndex);
    this->CachedPoseHash = this->PoseHash;
  }
  piVar6 = TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
           ::Find((TMapBase<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>_>
                   *)&this->KeyToIndex,param_1);
  if (piVar6 != (int *)0x0) {
    return *piVar6;
  }
  iVar5 = (this->Elements).ArrayNum;
  local_res8[0] = 0;
  if (0 < iVar5) {
    do {
      uVar2 = local_res8[0];
      uVar4 = 0;
      if ((int)local_res8[0] < iVar5) {
        uVar4 = ~local_res8[0] >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      local_20 = local_res8;
      pFVar7 = (this->Elements).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x110;
      local_28 = pFVar7;
      TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FRigElementKey_const_&,int_const_&>_>
                ((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
                  *)&this->KeyToIndex,&local_res18,(bool *)&local_28);
      if ((*(FName *)(pFVar7 + 4) == param_1->Name) &&
         (*pFVar7 == (FScriptContainerElement)param_1->Type)) {
        return local_res8[0];
      }
      iVar5 = (this->Elements).ArrayNum;
      local_res8[0] = local_res8[0] + 1;
    } while ((int)local_res8[0] < iVar5);
  }
  return -1;
}

// StaticStruct @ 14a2c2a00

UScriptStruct * __cdecl FRigPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigPose.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigPose,(UObject *)pUVar1,L"RigPose");
  }
  return Z_Registration_Info_UScriptStruct_FRigPose.OuterSingleton;
}

// operator= @ 14a519f00

FRigPose * __thiscall FRigPose::operator=(FRigPose *this,FRigPose *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Elements).ArrayMax;
    piVar1 = &(this->Elements).ArrayMax;
    _Src = (param_1->Elements).AllocatorInstance.Data;
    iVar3 = (param_1->Elements).ArrayNum;
    (this->Elements).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x110,0x10,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Elements).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x110);
      }
    }
  }
  this->HierarchyTopologyVersion = param_1->HierarchyTopologyVersion;
  this->PoseHash = param_1->PoseHash;
  this->CachedPoseHash = param_1->CachedPoseHash;
  TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&this->KeyToIndex,
              (TSet<TTuple<FRigElementKey,int>,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0>,FDefaultSetAllocator>
               *)&param_1->KeyToIndex);
  return this;
}

