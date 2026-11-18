// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 20

// FRigTransformElement @ 14a221400

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigTransformElement * __thiscall
FRigTransformElement::FRigTransformElement
          (FRigTransformElement *this,URigHierarchy *param_1,ERigElementType param_2)

{
  *(ERigElementType *)&this->_padding_ = param_2;
  this->_padding_ = (longlong)param_1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FRigTransformElement__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PoseStorage).Current.Local.StorageIndex = -1;
  (this->PoseStorage).Current.Local.Storage = (TTransform<double> *)0x0;
  (this->PoseStorage).Current.Global.StorageIndex = -1;
  (this->PoseStorage).Current.Global.Storage = (TTransform<double> *)0x0;
  (this->PoseStorage).Initial.Local.StorageIndex = -1;
  (this->PoseStorage).Initial.Local.Storage = (TTransform<double> *)0x0;
  (this->PoseStorage).Initial.Global.StorageIndex = -1;
  (this->PoseStorage).Initial.Global.Storage = (TTransform<double> *)0x0;
  (this->PoseDirtyState).Current.Global.StorageIndex = -1;
  (this->PoseDirtyState).Current.Global.Storage = (bool *)0x0;
  (this->PoseDirtyState).Current.Local.StorageIndex = -1;
  (this->PoseDirtyState).Current.Local.Storage = (bool *)0x0;
  (this->PoseDirtyState).Initial.Global.StorageIndex = -1;
  (this->PoseDirtyState).Initial.Global.Storage = (bool *)0x0;
  (this->PoseDirtyState).Initial.Local.StorageIndex = -1;
  (this->PoseDirtyState).Initial.Local.Storage = (bool *)0x0;
  (this->ElementsToDirty).AllocatorInstance.SecondaryData =
       (ForElementType<FRigTransformElement::FElementToDirty>)0x0;
  (this->ElementsToDirty).ArrayNum = 0;
  (this->ElementsToDirty).ArrayMax = 3;
  return this;
}

// FRigTransformElement @ 14a2214f0

FRigTransformElement * __thiscall
FRigTransformElement::FRigTransformElement(FRigTransformElement *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FRigTransformElement__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffffffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PoseStorage).Current.Local.StorageIndex = -1;
  (this->PoseStorage).Current.Local.Storage = (TTransform<double> *)0x0;
  (this->PoseStorage).Current.Global.StorageIndex = -1;
  (this->PoseStorage).Current.Global.Storage = (TTransform<double> *)0x0;
  (this->PoseStorage).Initial.Local.StorageIndex = -1;
  (this->PoseStorage).Initial.Local.Storage = (TTransform<double> *)0x0;
  (this->PoseStorage).Initial.Global.StorageIndex = -1;
  (this->PoseStorage).Initial.Global.Storage = (TTransform<double> *)0x0;
  (this->PoseDirtyState).Current.Global.StorageIndex = -1;
  (this->PoseDirtyState).Current.Global.Storage = (bool *)0x0;
  (this->PoseDirtyState).Current.Local.StorageIndex = -1;
  (this->PoseDirtyState).Current.Local.Storage = (bool *)0x0;
  (this->PoseDirtyState).Initial.Global.StorageIndex = -1;
  (this->PoseDirtyState).Initial.Global.Storage = (bool *)0x0;
  (this->PoseDirtyState).Initial.Local.StorageIndex = -1;
  (this->PoseDirtyState).Initial.Local.Storage = (bool *)0x0;
  (this->ElementsToDirty).AllocatorInstance.SecondaryData =
       (ForElementType<FRigTransformElement::FElementToDirty>)0x0;
  (this->ElementsToDirty).ArrayNum = 0;
  (this->ElementsToDirty).ArrayMax = 3;
  return this;
}

// ~FRigTransformElement @ 14a2261c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigTransformElement::~FRigTransformElement(FRigTransformElement *this)

{
  ForElementType<FRigTransformElement::FElementToDirty> FVar1;
  
  this->_padding_ = (longlong)&___7FRigTransformElement__6B_;
  FVar1 = (this->ElementsToDirty).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FRigBaseElement::~FRigBaseElement((FRigBaseElement *)this);
  return;
}

// operator= @ 14a22a0c0

FRigTransformElement * __thiscall
FRigTransformElement::operator=(FRigTransformElement *this,FRigTransformElement *param_1)

{
  FRigCurrentAndInitialTransform *pFVar1;
  FRigCurrentAndInitialTransform *this_00;
  FRigCurrentAndInitialDirtyState *pFVar2;
  FRigCurrentAndInitialDirtyState *this_01;
  
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  ::FString::Reset((FString *)&this->_padding_,0);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  pFVar1 = GetTransform(param_1);
  this_00 = GetTransform(this);
  FRigCurrentAndInitialTransform::operator=(this_00,pFVar1);
  pFVar2 = GetDirtyState(param_1);
  this_01 = GetDirtyState(this);
  FRigCurrentAndInitialDirtyState::operator=(this_01,pFVar2);
  return this;
}

// GetElementTypeIndex @ 14a263490

int __thiscall FRigTransformElement::GetElementTypeIndex(FRigTransformElement *this)

{
  return ElementTypeIndex;
}

// GetNumTransforms @ 14a2663c0

int __thiscall FRigTransformElement::GetNumTransforms(FRigTransformElement *this)

{
  return 4;
}

// GetScriptStruct @ 14a26a870

UScriptStruct * __thiscall FRigTransformElement::GetScriptStruct(FRigTransformElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformElement,(UObject *)pUVar1,
                         L"RigTransformElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton;
}

// StaticStruct @ 14a2c8f50

UScriptStruct * __cdecl FRigTransformElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigTransformElement,(UObject *)pUVar1,
                         L"RigTransformElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigTransformElement.OuterSingleton;
}

// CopyFrom @ 14a2f92b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigTransformElement::CopyFrom(FRigTransformElement *this,FRigBaseElement *param_1)

{
  int *piVar1;
  TArray<FRigTransformElement::FElementToDirty,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  ForElementType<FRigTransformElement::FElementToDirty> FVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FRigTransformElement::FElementToDirty> FVar12;
  FScriptContainerElement *pFVar13;
  FRigBaseElement *this_00;
  uint uVar14;
  longlong local_res10;
  FRigBaseElement *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((param_1 == (FRigBaseElement *)0x0) ||
     (bVar8 = FRigBaseElement::IsA<FRigTransformElement>(param_1), !bVar8)) {
    param_1 = (FRigBaseElement *)0x0;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Element",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                       ,0x3f1,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FRigLocalAndGlobalTransform::operator=
            (&(this->PoseStorage).Current,(FRigLocalAndGlobalTransform *)(param_1 + 1));
  FRigLocalAndGlobalTransform::operator=
            (&(this->PoseStorage).Initial,(FRigLocalAndGlobalTransform *)&param_1[1].SubIndex);
  FRigLocalAndGlobalDirtyState::operator=
            (&(this->PoseDirtyState).Current,
             (FRigLocalAndGlobalDirtyState *)&param_1[1].ComponentIndices);
  FRigLocalAndGlobalDirtyState::operator=
            (&(this->PoseDirtyState).Initial,(FRigLocalAndGlobalDirtyState *)(param_1 + 2));
  pTVar2 = &this->ElementsToDirty;
  piVar1 = &(this->ElementsToDirty).ArrayMax;
  (this->ElementsToDirty).ArrayNum = 0;
  if ((this->ElementsToDirty).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigTransformElement::FElementToDirty>_>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar14 = param_1[2].CachedNameString.Data.ArrayNum;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  if (*piVar1 < (int)uVar14) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigTransformElement::FElementToDirty>_>
              (0x10,8,uVar14,&pTVar2->AllocatorInstance,(this->ElementsToDirty).ArrayNum,piVar1);
  }
  uVar14 = 0;
  if (0 < param_1[2].CachedNameString.Data.ArrayNum) {
    local_res10 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar14 < param_1[2].CachedNameString.Data.ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = param_1[2].CachedNameString.Data.AllocatorInstance.Data;
      lVar5 = this->_padding_;
      pFVar13 = (FScriptContainerElement *)&param_1[2].SubIndex;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        pFVar13 = pFVar4;
      }
      uVar9 = *(uint *)(*(longlong *)(pFVar13 + local_res10) + 0x1c);
      if (((int)uVar9 < 0) || (*(int *)(lVar5 + 0x100) <= (int)uVar9)) {
LAB_14a2f94cf:
        this_00 = (FRigBaseElement *)0x0;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                           ,0x3f9,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        uVar10 = 0;
        if ((int)uVar9 < *(int *)(lVar5 + 0x100)) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_00 = *(FRigBaseElement **)(*(longlong *)(lVar5 + 0xf8) + (longlong)(int)uVar9 * 8);
        if ((this_00 == (FRigBaseElement *)0x0) ||
           (bVar8 = FRigBaseElement::IsA<FRigTransformElement>(this_00), !bVar8))
        goto LAB_14a2f94cf;
      }
      uStack_40 = *(undefined4 *)(pFVar13 + local_res10 + 8);
      FVar6 = (this->ElementsToDirty).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FRigTransformElement::FElementToDirty>)pTVar2;
      if (FVar6 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
        FVar12 = FVar6;
      }
      local_48 = this_00;
      if ((ulonglong)FVar12 <= &local_48) {
        FVar12 = (ForElementType<FRigTransformElement::FElementToDirty>)pTVar2;
        if (FVar6 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
          FVar12 = FVar6;
        }
        if ((&local_48 < (FRigBaseElement **)((longlong)*piVar1 * 0x10 + (longlong)FVar12)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar11 = (this->ElementsToDirty).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigTransformElement::FElementToDirty>_>
                           (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ElementsToDirty).ArrayNum = iVar11 + 1;
      FVar6 = (this->ElementsToDirty).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FRigTransformElement::FElementToDirty>)pTVar2;
      if (FVar6 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
        FVar12 = FVar6;
      }
      puVar3 = (undefined8 *)((longlong)FVar12 + (longlong)iVar11 * 0x10);
      *puVar3 = local_48;
      puVar3[1] = CONCAT44(uStack_3c,uStack_40);
      uVar9 = 0;
      if ((int)uVar14 < (this->ElementsToDirty).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar6 = (this->ElementsToDirty).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FRigTransformElement::FElementToDirty>)pTVar2;
      if (FVar6 != (ForElementType<FRigTransformElement::FElementToDirty>)0x0) {
        FVar12 = FVar6;
      }
      lVar5 = *(longlong *)(pFVar13 + local_res10);
      if (((*(longlong *)(*(longlong *)((longlong)FVar12 + local_res10) + 0x14) !=
            *(longlong *)(lVar5 + 0x14)) ||
          (*(char *)(*(longlong *)((longlong)FVar12 + local_res10) + 0x10) !=
           *(char *)(lVar5 + 0x10))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementsToDirty[ElementToDirtyIndex].Element->GetKey() == Source.Element->GetKey()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                             ,0x44a,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_res10 = local_res10 + 0x10;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < param_1[2].CachedNameString.Data.ArrayNum);
  }
  return;
}

// CopyPose @ 14a2fd430

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigTransformElement::CopyPose
          (FRigTransformElement *this,FRigBaseElement *param_1,bool param_2,bool param_3,
          bool param_4)

{
  bool bVar1;
  
  if ((param_1 != (FRigBaseElement *)0x0) &&
     (bVar1 = FRigBaseElement::IsA<FRigTransformElement>(param_1), bVar1)) {
    if (param_2) {
      FRigLocalAndGlobalTransform::operator=
                (&(this->PoseStorage).Current,(FRigLocalAndGlobalTransform *)(param_1 + 1));
      FRigLocalAndGlobalDirtyState::operator=
                (&(this->PoseDirtyState).Current,
                 (FRigLocalAndGlobalDirtyState *)&param_1[1].ComponentIndices);
    }
    if (param_3) {
      FRigLocalAndGlobalTransform::operator=
                (&(this->PoseStorage).Initial,(FRigLocalAndGlobalTransform *)&param_1[1].SubIndex);
      FRigLocalAndGlobalDirtyState::operator=
                (&(this->PoseDirtyState).Initial,(FRigLocalAndGlobalDirtyState *)(param_1 + 2));
    }
  }
  return;
}

// GetDirtyState @ 14a30e260

FRigCurrentAndInitialDirtyState * __thiscall
FRigTransformElement::GetDirtyState(FRigTransformElement *this)

{
  return &this->PoseDirtyState;
}

// GetDirtyState @ 14a30e270

FRigCurrentAndInitialDirtyState * __thiscall
FRigTransformElement::GetDirtyState(FRigTransformElement *this)

{
  return &this->PoseDirtyState;
}

// GetTransform @ 14a31a190

FRigCurrentAndInitialTransform * __thiscall
FRigTransformElement::GetTransform(FRigTransformElement *this)

{
  return &this->PoseStorage;
}

// GetTransform @ 14a31a1a0

FRigCurrentAndInitialTransform * __thiscall
FRigTransformElement::GetTransform(FRigTransformElement *this)

{
  return &this->PoseStorage;
}

// IsElementDirty @ 14a3282a0

bool __thiscall FRigTransformElement::IsElementDirty(FRigTransformElement *this,Type param_1)

{
  bool bVar1;
  
  bVar1 = FRigCurrentAndInitialDirtyState::IsDirty(&this->PoseDirtyState,param_1);
  return bVar1;
}

// LinkStorage @ 14a32a110

void __thiscall
FRigTransformElement::LinkStorage
          (FRigTransformElement *this,TArrayView<UE::Math::TTransform<double>,int> *param_1,
          TArrayView<bool,int> *param_2,TArrayView<float,int> *param_3)

{
  int iVar1;
  
  FRigCurrentAndInitialTransform::LinkStorage(&this->PoseStorage,param_1);
  iVar1 = (this->PoseDirtyState).Current.Local.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->PoseDirtyState).Current.Local.Storage = param_2->DataPtr + iVar1;
  }
  iVar1 = (this->PoseDirtyState).Current.Global.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->PoseDirtyState).Current.Global.Storage = param_2->DataPtr + iVar1;
  }
  iVar1 = (this->PoseDirtyState).Initial.Local.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->PoseDirtyState).Initial.Local.Storage = param_2->DataPtr + iVar1;
  }
  iVar1 = (this->PoseDirtyState).Initial.Global.StorageIndex;
  if ((-1 < iVar1) && (iVar1 < param_2->ArrayNum)) {
    (this->PoseDirtyState).Initial.Global.Storage = param_2->DataPtr + iVar1;
  }
  return;
}

// Load @ 14a32d060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigTransformElement::Load
          (FRigTransformElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  FRigBaseElement::Load((FRigBaseElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    FRigCurrentAndInitialTransform::Load(&this->PoseStorage,param_1,param_2,&this->PoseDirtyState);
  }
  return;
}

// MarkElementDirty @ 14a331910

void __thiscall FRigTransformElement::MarkElementDirty(FRigTransformElement *this,Type param_1)

{
  FRigCurrentAndInitialDirtyState::MarkDirty(&this->PoseDirtyState,param_1);
  return;
}

// Save @ 14a345f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigTransformElement::Save
          (FRigTransformElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  if (param_2->SerializationPhase == StaticData) {
    ::operator<<(param_1,(FRigElementKey *)&this->_padding_);
  }
  if (param_2->SerializationPhase == StaticData) {
    if (param_2->bSerializeCurrentTransform != false) {
      FRigLocalAndGlobalTransform::Save
                (&(this->PoseStorage).Current,param_1,param_2,&(this->PoseDirtyState).Current);
    }
    if (param_2->bSerializeInitialTransform != false) {
      FRigLocalAndGlobalTransform::Save
                (&(this->PoseStorage).Initial,param_1,param_2,&(this->PoseDirtyState).Initial);
    }
  }
  return;
}

// UnlinkStorage @ 14a35bfe0

void __thiscall
FRigTransformElement::UnlinkStorage
          (FRigTransformElement *this,
          FRigReusableElementStorage<UE::Math::TTransform<double>_> *param_1,
          FRigReusableElementStorage<bool> *param_2,FRigReusableElementStorage<float> *param_3)

{
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&this->PoseStorage,&(this->PoseStorage).Current.Local.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,&(this->PoseStorage).Current.Global.StorageIndex,
             &(this->PoseStorage).Current.Global.Storage);
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,(int *)&(this->PoseStorage).Initial,&(this->PoseStorage).Initial.Local.Storage)
  ;
  FRigReusableElementStorage<UE::Math::TTransform<double>_>::Deallocate
            (param_1,&(this->PoseStorage).Initial.Global.StorageIndex,
             &(this->PoseStorage).Initial.Global.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,&(this->PoseDirtyState).Current.Local.StorageIndex,
             &(this->PoseDirtyState).Current.Local.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,(int *)&this->PoseDirtyState,&(this->PoseDirtyState).Current.Global.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,&(this->PoseDirtyState).Initial.Local.StorageIndex,
             &(this->PoseDirtyState).Initial.Local.Storage);
  FRigReusableElementStorage<bool>::Deallocate
            (param_2,(int *)&(this->PoseDirtyState).Initial,
             &(this->PoseDirtyState).Initial.Global.Storage);
  return;
}

