// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 49

// StaticStruct @ 14a1ffb00

UScriptStruct * __cdecl FControlRigReplayTracks::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigReplayTracks.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigReplayTracks.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigReplayTracks,(UObject *)pUVar1,
                         L"ControlRigReplayTracks");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigReplayTracks.OuterSingleton;
}

// <lambda_1> @ 14a21cf30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

<lambda_1> * __thiscall
`FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(FControlRigReplayTracks **)this = param_1->__this;
  *(int *)((longlong)this + 8) = param_1->InTimeIndex;
  *(URigHierarchy **)((longlong)this + 0x10) = param_1->InHierarchy;
  lVar1 = *(longlong *)&param_1->InReportFunction;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(longlong *)((longlong)this + 0x20) = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->InReportFunction).field_0x28;
    puVar3 = (undefined8 *)&(param_1->InReportFunction).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)();
  }
  *(bool *)((longlong)this + 0x50) = param_1->bRestorePose;
  *(bool *)((longlong)this + 0x51) = param_1->bRestoreComponents;
  *(bool *)((longlong)this + 0x52) = param_1->bRestoreMetadata;
  return this;
}

// FControlRigReplayTracks @ 14a21ea60

FControlRigReplayTracks * __thiscall
FControlRigReplayTracks::FControlRigReplayTracks(FControlRigReplayTracks *this)

{
  FSampleTrackHost::FSampleTrackHost((FSampleTrackHost *)this);
  this->_padding_ = (longlong)&___7FControlRigReplayTracks__6B_;
  *(undefined8 *)&this->ElementKeyToTrackName = 0;
  *(undefined8 *)&(this->ElementKeyToTrackName).field_0x8 = 0;
  *(undefined8 *)&(this->ElementKeyToTrackName).field_0x20 = 0;
  *(undefined4 *)&(this->ElementKeyToTrackName).field_0x28 = 0;
  *(undefined4 *)&(this->ElementKeyToTrackName).field_0x2c = 0x80;
  *(undefined4 *)&(this->ElementKeyToTrackName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ElementKeyToTrackName).field_0x34 = 0;
  *(undefined8 *)&(this->ElementKeyToTrackName).field_0x40 = 0;
  *(undefined4 *)&(this->ElementKeyToTrackName).field_0x48 = 0;
  *(undefined8 *)&this->ComponentKeyToTrackName = 0;
  *(undefined8 *)&(this->ComponentKeyToTrackName).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentKeyToTrackName).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentKeyToTrackName).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentKeyToTrackName).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentKeyToTrackName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentKeyToTrackName).field_0x34 = 0;
  *(undefined8 *)&(this->ComponentKeyToTrackName).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentKeyToTrackName).field_0x48 = 0;
  *(undefined8 *)&this->MetadataToTrackName = 0;
  *(undefined8 *)&(this->MetadataToTrackName).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataToTrackName).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataToTrackName).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataToTrackName).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataToTrackName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataToTrackName).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataToTrackName).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataToTrackName).field_0x48 = 0;
  *(undefined8 *)&this->PropertyNameToTrackName = 0;
  *(undefined8 *)&(this->PropertyNameToTrackName).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyNameToTrackName).field_0x20 = 0;
  *(undefined4 *)&(this->PropertyNameToTrackName).field_0x28 = 0;
  *(undefined4 *)&(this->PropertyNameToTrackName).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertyNameToTrackName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertyNameToTrackName).field_0x34 = 0;
  *(undefined8 *)&(this->PropertyNameToTrackName).field_0x40 = 0;
  *(undefined4 *)&(this->PropertyNameToTrackName).field_0x48 = 0;
  FSampleTrackIndex::FSampleTrackIndex(&this->SampleTrackIndex);
  this->bIsInput = true;
  return this;
}

// ~FControlRigReplayTracks @ 14a225810

void __thiscall FControlRigReplayTracks::~FControlRigReplayTracks(FControlRigReplayTracks *this)

{
  ForElementType<int> FVar1;
  void *pvVar2;
  FSampleTrackContainer *this_00;
  
  this->_padding_ = (longlong)&___7FControlRigReplayTracks__6B_;
  FVar1 = (this->SampleTrackIndex).Samples.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&(this->PropertyNameToTrackName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PropertyNameToTrackName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertyNameToTrackName);
  *(undefined4 *)&(this->MetadataToTrackName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->MetadataToTrackName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FRigElementKey,FName>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FRigElementKey,FName>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FRigElementKey,FName>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetadataToTrackName);
  *(undefined4 *)&(this->ComponentKeyToTrackName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ComponentKeyToTrackName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigComponentKey,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigComponentKey,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigComponentKey,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentKeyToTrackName);
  *(undefined4 *)&(this->ElementKeyToTrackName).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ElementKeyToTrackName).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ElementKeyToTrackName);
  this->_padding_ = (longlong)&___7FSampleTrackHost__6B_;
  this_00 = (FSampleTrackContainer *)this->_padding_;
  if (this_00 != (FSampleTrackContainer *)0x0) {
    FSampleTrackContainer::~FSampleTrackContainer(this_00);
    ::operator_delete(this_00,0x98);
  }
  return;
}

// operator() @ 14a22bd10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigReplayTracks::RestoreComponents'::__l2::<lambda_1>::operator()
          (void *this,FRigBaseComponent *param_1,bool *param_2)

{
  FControlRigReplayTracks *this_00;
  bool bVar1;
  undefined8 *puVar2;
  TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> local_38;
  
  local_38._0_8_ = *(longlong *)((longlong)this + 0x20);
  this_00 = *(FControlRigReplayTracks **)this;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar2 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar2)(puVar2,&local_38.field_0x10);
  }
  bVar1 = FControlRigReplayTracks::RestoreComponent
                    (this_00,*(int *)((longlong)this + 8),*(URigHierarchy **)((longlong)this + 0x10)
                     ,param_1,&local_38);
  if (!bVar1) {
    *param_2 = false;
  }
  return;
}

// operator() @ 14a22bda0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  FControlRigReplayTracks *pFVar1;
  bool bVar2;
  undefined8 *puVar3;
  TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> local_38;
  
  if (*(char *)((longlong)this + 0x50) != '\0') {
    local_38._0_8_ = *(longlong *)((longlong)this + 0x20);
    pFVar1 = *(FControlRigReplayTracks **)this;
    local_38._40_8_ = 0;
    if (local_38._0_8_ != 0) {
      puVar3 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
    }
    bVar2 = FControlRigReplayTracks::RestorePose
                      (pFVar1,*(int *)((longlong)this + 8),
                       *(URigHierarchy **)((longlong)this + 0x10),param_1,&local_38);
    if (!bVar2) {
      *param_2 = false;
    }
  }
  if (*(char *)((longlong)this + 0x51) != '\0') {
    local_38._0_8_ = *(longlong *)((longlong)this + 0x20);
    pFVar1 = *(FControlRigReplayTracks **)this;
    local_38._40_8_ = 0;
    if (local_38._0_8_ != 0) {
      puVar3 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
    }
    bVar2 = FControlRigReplayTracks::RestoreComponents
                      (pFVar1,*(int *)((longlong)this + 8),
                       *(URigHierarchy **)((longlong)this + 0x10),param_1,&local_38);
    if (!bVar2) {
      *param_2 = false;
    }
  }
  if (*(char *)((longlong)this + 0x52) != '\0') {
    local_38._0_8_ = *(longlong *)((longlong)this + 0x20);
    pFVar1 = *(FControlRigReplayTracks **)this;
    local_38._40_8_ = 0;
    if (local_38._0_8_ != 0) {
      puVar3 = (undefined8 *)((longlong)this + 0x30);
      if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)((longlong)this + 0x48);
      }
      (**(code **)*puVar3)(puVar3,&local_38.field_0x10);
    }
    bVar2 = FControlRigReplayTracks::RestoreMetaData
                      (pFVar1,*(int *)((longlong)this + 8),
                       *(URigHierarchy **)((longlong)this + 0x10),param_1,&local_38);
    if (!bVar2) {
      *param_2 = false;
    }
  }
  return;
}

// operator() @ 14a22bef0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigReplayTracks::RestoreMetaData'::__l2::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  FControlRigReplayTracks *this_00;
  bool bVar1;
  undefined8 *puVar2;
  TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> local_38;
  
  local_38._0_8_ = *(longlong *)((longlong)this + 0x20);
  this_00 = *(FControlRigReplayTracks **)this;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar2 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar2)(puVar2,&local_38.field_0x10);
  }
  bVar1 = FControlRigReplayTracks::RestoreMetaData
                    (this_00,*(int *)((longlong)this + 8),*(URigHierarchy **)((longlong)this + 0x10)
                     ,param_1,&local_38);
  if (!bVar1) {
    *param_2 = false;
  }
  return;
}

// operator() @ 14a22bf80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigReplayTracks::RestorePose'::__l2::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  FControlRigReplayTracks *this_00;
  bool bVar1;
  undefined8 *puVar2;
  TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> local_38;
  
  local_38._0_8_ = *(longlong *)((longlong)this + 0x20);
  this_00 = *(FControlRigReplayTracks **)this;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar2 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar2)(puVar2,&local_38.field_0x10);
  }
  bVar1 = FControlRigReplayTracks::RestorePose
                    (this_00,*(int *)((longlong)this + 8),*(URigHierarchy **)((longlong)this + 0x10)
                     ,param_1,&local_38);
  if (!bVar1) {
    *param_2 = false;
  }
  return;
}

// operator() @ 14a22c710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigReplayTracks::StoreHierarchy'::__l2::<lambda_1>::operator()
          (void *this,FRigBaseElement *param_1,bool *param_2)

{
  URigHierarchy *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> local_68;
  TArrayView<FRigComponentKey,int> local_58;
  code *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  URigHierarchy *local_28;
  undefined8 local_20;
  
  if (*(char *)((longlong)this + 0x10) != '\0') {
    FControlRigReplayTracks::StorePose
              (*(FControlRigReplayTracks **)this,*(URigHierarchy **)((longlong)this + 8),param_1);
  }
  if (*(char *)((longlong)this + 0x11) != '\0') {
    pUVar1 = *(URigHierarchy **)((longlong)this + 8);
    uVar2 = *(undefined8 *)this;
    FRigBaseElement::GetComponentKeys(param_1,&local_68);
    if (local_68.ArrayNum != 0) {
      local_20 = 0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::`5'::<lambda_1>,0,0>
                  ::_vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FControlRigReplayTracks::StoreComponents'::__l5::<lambda_1>,void,FRigBaseComponent_*,bool_&>
                    ::Call;
      local_58.DataPtr = (FRigComponentKey *)local_68.AllocatorInstance.Data;
      local_30 = uVar2;
      local_28 = pUVar1;
      if (local_68.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FControlRigReplayTracks::ForEachComponent
                (pUVar1,&local_58,(TFunction<void___cdecl(FRigBaseComponent_*,bool_&)> *)local_48);
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
  }
  if (*(char *)((longlong)this + 0x12) != '\0') {
    FControlRigReplayTracks::StoreMetaData
              (*(FControlRigReplayTracks **)this,*(URigHierarchy **)((longlong)this + 8),param_1);
  }
  return;
}

// operator() @ 14a22daf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`FControlRigReplayTracks::RestoreComponents'::__l5::<lambda_1>::operator()
          (void *this,FRigBaseComponent *param_1,bool *param_2)

{
  FControlRigReplayTracks *this_00;
  bool bVar1;
  undefined8 *puVar2;
  TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> local_38;
  
  local_38._0_8_ = *(longlong *)((longlong)this + 0x20);
  this_00 = *(FControlRigReplayTracks **)this;
  local_38._40_8_ = 0;
  if (local_38._0_8_ != 0) {
    puVar2 = (undefined8 *)((longlong)this + 0x30);
    if (*(undefined8 **)((longlong)this + 0x48) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)((longlong)this + 0x48);
    }
    (**(code **)*puVar2)(puVar2,&local_38.field_0x10);
  }
  bVar1 = FControlRigReplayTracks::RestoreComponent
                    (this_00,*(int *)((longlong)this + 8),*(URigHierarchy **)((longlong)this + 0x10)
                     ,param_1,&local_38);
  if (!bVar1) {
    *param_2 = false;
  }
  return;
}

// FilterElementKeys @ 14a25a230

void __cdecl
FControlRigReplayTracks::FilterElementKeys
          (TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar2 = (longlong)param_1->ArrayNum;
  if (param_1->ArrayNum != 0) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    iVar7 = 0;
    bVar8 = *pFVar1 != (FScriptContainerElement)0x20;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        pFVar3 = pFVar1 + lVar4 * 0xc;
        do {
          if (bVar8 != (*pFVar3 != (FScriptContainerElement)0x20)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          pFVar3 = pFVar3 + 0xc;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          memmove(pFVar1 + (longlong)iVar7 * 0xc,pFVar1 + (longlong)iVar5 * 0xc,
                  (longlong)(iVar6 - iVar5) * 0xc);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    param_1->ArrayNum = iVar7;
  }
  return;
}

// ForEachComponent @ 14a25cad0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
FControlRigReplayTracks::ForEachComponent
          (URigHierarchy *param_1,TArrayView<FRigComponentKey,int> *param_2,
          TFunction<void___cdecl(FRigBaseComponent_*,bool_&)> *param_3)

{
  FRigComponentKey *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> *pTVar6;
  FRigBaseComponent *pFVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FRigComponentKey *pFVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_78 [8];
  FRigBaseComponent *local_70;
  undefined8 local_68;
  int iStack_60;
  TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> local_38;
  
  local_48 = *(undefined4 *)&param_2->DataPtr;
  uStack_44 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_40 = param_2->ArrayNum;
  uStack_3c = *(undefined4 *)&param_2->field_0xc;
  pFVar11 = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  iVar5 = (int)*(undefined8 *)&param_2->ArrayNum;
  uVar13 = local_48;
  uVar14 = uStack_44;
  if (iVar5 == 0) {
    pTVar6 = URigHierarchy::GetAllComponentKeys(param_1,&local_58);
    if (&local_38 != pTVar6) {
      pFVar11 = (pTVar6->AllocatorInstance).Data;
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar10 = pTVar6->ArrayNum;
      pTVar6->ArrayNum = 0;
      pTVar6->ArrayMax = 0;
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    local_68 = pFVar11;
    if ((iVar10 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar13 = (undefined4)local_68;
    uVar14 = local_68._4_4_;
    iVar5 = iVar10;
    iStack_60 = iVar10;
  }
  pFVar12 = (FRigComponentKey *)CONCAT44(uVar14,uVar13);
  local_78[0] = 1;
  pFVar1 = pFVar12 + iVar5;
  uVar4 = local_78[0];
  for (; local_78[0] = uVar4, pFVar12 != pFVar1; pFVar12 = pFVar12 + 1) {
    pFVar7 = URigHierarchy::FindComponent(param_1,pFVar12);
    if (pFVar7 != (FRigBaseComponent *)0x0) {
      local_70 = pFVar7;
      UE::Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar2 = *(code **)param_3;
      plVar9 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar9 = (longlong *)&param_3->field_0x10;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar2)(uVar8,&local_70,local_78);
    }
    uVar4 = local_78[0];
  }
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return (bool)uVar4;
}

// ForEachElement @ 14a25cc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
FControlRigReplayTracks::ForEachElement
          (URigHierarchy *param_1,TArrayView<FRigElementKey,int> *param_2,
          TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *param_3)

{
  FRigElementKey *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  FRigBaseElement *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  FRigElementKey *pFVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  FRigBaseElement *local_b0;
  code *local_a8 [5];
  undefined8 *local_80;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8[0] = 1;
  if (param_2->ArrayNum == 0) {
    local_78 = *(longlong *)param_3;
    local_50 = (longlong *)0x0;
    if (local_78 != 0) {
      puVar7 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar7 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar7)(puVar7,&local_68);
    }
    local_48 = local_b8;
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x50,0x10);
    *local_80 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FControlRigReplayTracks::ForEachElement'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    plVar8 = local_80 + 2;
    *plVar8 = local_78;
    local_80[7] = local_50;
    local_50 = (longlong *)0x0;
    local_80[4] = local_68;
    local_80[5] = uStack_60;
    local_80[6] = local_58;
    if (*plVar8 != 0) {
      local_78 = 0;
    }
    local_80[8] = local_48;
    if (plVar8 != (longlong *)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FControlRigReplayTracks::ForEachElement'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
                    ::Call;
    }
    URigHierarchy::Traverse
              (param_1,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_a8,true);
    if (local_78 != 0) {
      plVar8 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar8 = local_50;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  else {
    pFVar9 = param_2->DataPtr;
    pFVar1 = pFVar9 + param_2->ArrayNum;
    for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 1) {
      iVar4 = URigHierarchy::GetIndex(param_1,pFVar9,true);
      pFVar5 = URigHierarchy::Get(param_1,iVar4);
      if (pFVar5 != (FRigBaseElement *)0x0) {
        local_b0 = pFVar5;
        UE::Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar2 = *(code **)param_3;
        plVar8 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar8 = (longlong *)&param_3->field_0x10;
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        (*pcVar2)(uVar6,&local_b0,local_b8);
      }
    }
  }
  uVar3 = local_b8[0];
  if (*(longlong *)param_3 != 0) {
    plVar8 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return (bool)uVar3;
}

// GetElementKeys @ 14a2630a0

TArray<FRigElementKey,TSizedDefaultAllocator<32>_> * __thiscall
FControlRigReplayTracks::GetElementKeys
          (FControlRigReplayTracks *this,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  ForAnyElementType _Src;
  int iVar1;
  FSampleTrackContainer *this_00;
  FSharedReferencer<1> FVar2;
  FName local_res18;
  TSharedPtr<FSampleTrackBase_const_,1> local_18;
  
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  FLazyName::Resolve(&ElementKeysName);
  iVar1 = FSampleTrackContainer::GetTrackIndex(this_00,&local_res18);
  if ((iVar1 < 0) || ((this_00->Tracks).ArrayNum <= iVar1)) {
    FVar2.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FSampleTrackContainer::GetTrack(this_00,&local_18,iVar1);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar2.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if (local_18.Object != (FSampleTrackBase *)0x0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          FSampleTrackIndex::MakeSingleton(&SingletonTrackIndex);
          atexit(`FControlRigReplayTracks::GetElementKeys'::__l5::
                 _dynamic_atexit_destructor_for__SingletonTrackIndex__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      (**(code **)((local_18.Object)->_padding_ + 200))
                (local_18.Object,__return_storage_ptr__,0,&SingletonTrackIndex);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      atexit(`FControlRigReplayTracks::GetElementKeys'::__l2::
             _dynamic_atexit_destructor_for__EmptyElementKeys__);
      _Init_thread_footer(&::_TSS1);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = EmptyElementKeys.AllocatorInstance;
  iVar1 = EmptyElementKeys.ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,(longlong)iVar1 * 0xc);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return __return_storage_ptr__;
}

// GetInteraction @ 14a2649b0

TTuple<unsigned_char,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> * __thiscall
FControlRigReplayTracks::GetInteraction
          (FControlRigReplayTracks *this,
          TTuple<unsigned_char,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,int param_1)

{
  undefined1 uVar1;
  int iVar2;
  FSampleTrackContainer *pFVar3;
  undefined8 *puVar4;
  FSharedReferencer<1> FVar5;
  FSampleTrackBase *pFVar6;
  FSharedReferencer<1> FVar7;
  FSampleTrackBase *pFVar8;
  FName local_res20;
  TSharedPtr<FSampleTrackBase_const_,1> local_38;
  
  pFVar3 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  FLazyName::Resolve(&InteractionTypeName);
  iVar2 = FSampleTrackContainer::GetTrackIndex(pFVar3,&local_res20);
  if ((iVar2 < 0) || ((pFVar3->Tracks).ArrayNum <= iVar2)) {
    pFVar6 = (FSampleTrackBase *)0x0;
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FSampleTrackContainer::GetTrack(pFVar3,&local_38,iVar2);
    FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    pFVar6 = local_38.Object;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  pFVar3 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  FLazyName::Resolve(&ElementsBeingInteractedName);
  iVar2 = FSampleTrackContainer::GetTrackIndex(pFVar3,&local_res20);
  if ((iVar2 < 0) || ((pFVar3->Tracks).ArrayNum <= iVar2)) {
    pFVar8 = (FSampleTrackBase *)0x0;
    FVar7.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FSampleTrackContainer::GetTrack(pFVar3,&local_38,iVar2);
    pFVar8 = local_38.Object;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    FVar7.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  }
  if ((pFVar6 == (FSampleTrackBase *)0x0) || (pFVar8 == (FSampleTrackBase *)0x0)) {
    *(undefined1 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    uVar1 = (**(code **)(pFVar6->_padding_ + 200))(pFVar6,param_1,&this->SampleTrackIndex);
    puVar4 = (undefined8 *)
             (**(code **)(pFVar8->_padding_ + 200))
                       (pFVar8,&local_38,param_1,&this->SampleTrackIndex);
    *(undefined1 *)__return_storage_ptr__ = uVar1;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = *puVar4;
    *puVar4 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x10 = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = *(undefined4 *)((longlong)puVar4 + 0xc);
    puVar4[1] = 0;
    if (local_38.Object != (FSampleTrackBase *)0x0) {
      FMemory::Free(local_38.Object);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return __return_storage_ptr__;
}

// GetMetadataNames @ 14a265270

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FControlRigReplayTracks::GetMetadataNames
          (FControlRigReplayTracks *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          FSampleTrackIndex *param_2,FRigElementKey *param_3,
          TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_4)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  char cVar3;
  int iVar4;
  FSampleTrackContainer *this_00;
  FName *this_01;
  FString *pFVar5;
  undefined8 uVar6;
  longlong *plVar7;
  FSampleTrackBase *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<FSampleTrackBase_const_,1> local_78;
  undefined4 local_68 [2];
  FName local_60;
  FString local_58;
  
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FControlRigReplayTracks::GetMetadataNames'::__l2::
           _dynamic_atexit_destructor_for__EmptyMetadataNames__);
    _Init_thread_footer(&::_TSS0);
  }
  this_01 = GetTrackName(this,param_3);
  pFVar5 = ::FName::ToString(this_01,&local_58);
  ::FString::ConcatFC((FString *)&local_78,pFVar5,L"MetadataNames");
  pFVar8 = (FSampleTrackBase *)L"";
  if ((int)local_78.SharedReferenceCount.ReferenceController != 0) {
    pFVar8 = local_78.Object;
  }
  ::FName::FName(&local_60,(wchar_t *)pFVar8);
  if (local_78.Object != (FSampleTrackBase *)0x0) {
    FMemory::Free(local_78.Object);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  iVar4 = FSampleTrackContainer::GetTrackIndex(this_00,&local_60);
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  if ((-1 < iVar4) && (iVar4 < (this_00->Tracks).ArrayNum)) {
    FSampleTrackContainer::GetTrack(this_00,&local_78,iVar4);
    pFVar8 = local_78.Object;
    pTVar9 = (TReferenceControllerBase<1> *)
             CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                      (int)local_78.SharedReferenceCount.ReferenceController);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_78.SharedReferenceCount.ReferenceController._4_4_,
                        (int)local_78.SharedReferenceCount.ReferenceController));
    if (pFVar8 != (FSampleTrackBase *)0x0) {
      cVar3 = (**(code **)(pFVar8->_padding_ + 8))(pFVar8);
      if (cVar3 != '\x12') {
        if (*(longlong *)param_4 != 0) {
          ::FString::FString((FString *)&local_78,L"Track has incorrect type.");
          local_68[0] = 1;
          UE::Core::Private::Function::CheckCallable(*(void **)param_4);
          pcVar1 = *(code **)param_4;
          plVar7 = (longlong *)&param_4->field_0x10;
          if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
            plVar7 = *(longlong **)&param_4->field_0x28;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar1)(uVar6,local_68,this_01);
          if (local_78.Object != (FSampleTrackBase *)0x0) {
            FMemory::Free(local_78.Object);
          }
        }
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        FVar2 = EmptyMetadataNames.AllocatorInstance;
        iVar4 = EmptyMetadataNames.ArrayNum;
        __return_storage_ptr__->ArrayNum = iVar4;
        if (iVar4 == 0) {
          __return_storage_ptr__->ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                     &__return_storage_ptr__->ArrayMax);
          memcpy((__return_storage_ptr__->AllocatorInstance).Data,FVar2.Data,(longlong)iVar4 << 3);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        if (*(longlong *)param_4 == 0) {
          return __return_storage_ptr__;
        }
        plVar7 = (longlong *)&param_4->field_0x10;
        if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
          plVar7 = *(longlong **)&param_4->field_0x28;
        }
        (**(code **)(*plVar7 + 0x10))();
        return __return_storage_ptr__;
      }
      (**(code **)(pFVar8->_padding_ + 200))(pFVar8,__return_storage_ptr__,param_1,param_2);
      goto LAB_14a2654f0;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  FVar2 = EmptyMetadataNames.AllocatorInstance;
  iVar4 = EmptyMetadataNames.ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar4;
  if (iVar4 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,FVar2.Data,(longlong)iVar4 << 3);
  }
LAB_14a2654f0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (*(longlong *)param_4 != 0) {
    plVar7 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetMetadataTypeFromTrackType @ 14a265570

ERigMetadataType __cdecl FControlRigReplayTracks::GetMetadataTypeFromTrackType(ETrackType param_1)

{
  switch(param_1) {
  case ETrackType_Bool:
    return Bool;
  case ETrackType_Int32:
    return Int32;
  default:
    return Invalid;
  case ETrackType_Float:
    return Float;
  case ETrackType_Name:
    return Name;
  case ETrackType_Vector3f:
    return Vector;
  case ETrackType_Quatf:
    return Quat;
  case ETrackType_Transformf:
    return Transform;
  case ETrackType_LinearColor:
    return LinearColor;
  case ETrackType_ElementKey:
    return RigElementKey;
  case ETrackType_BoolArray:
    return BoolArray;
  case ETrackType_Int32Array:
    return Int32Array;
  case ETrackType_FloatArray:
    return FloatArray;
  case ETrackType_NameArray:
    return NameArray;
  case ETrackType_Vector3fArray:
    return VectorArray;
  case ETrackType_QuatfArray:
    return QuatArray;
  case ETrackType_TransformfArray:
    return TransformArray;
  case ETrackType_LinearColorArray:
    return LinearColorArray;
  case ETrackType_ElementKeyArray:
    return RigElementKeyArray;
  }
}

// GetRigVMEvent @ 14a269de0

FName __thiscall FControlRigReplayTracks::GetRigVMEvent(FControlRigReplayTracks *this,int param_1)

{
  int iVar1;
  FSampleTrackContainer *this_00;
  uint in_register_00000014;
  FName FVar2;
  undefined4 in_R8D;
  FName local_res20;
  TSharedPtr<FSampleTrackBase_const_,1> local_28;
  
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = param_1;
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  FLazyName::Resolve(&RigVMEventName);
  iVar1 = FSampleTrackContainer::GetTrackIndex(this_00,&local_res20);
  if ((iVar1 < 0) || ((this_00->Tracks).ArrayNum <= iVar1)) {
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FSampleTrackContainer::GetTrack(this_00,&local_28,iVar1);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (local_28.Object != (FSampleTrackBase *)0x0) {
      (**(code **)((local_28.Object)->_padding_ + 200))
                (local_28.Object,FVar2,in_R8D,&this->SampleTrackIndex);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return FVar2;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  *(undefined8 *)FVar2 = 0;
  return FVar2;
}

// GetTrackName @ 14a26bdf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName * __thiscall
FControlRigReplayTracks::GetTrackName(FControlRigReplayTracks *this,FRigComponentKey *param_1)

{
  TMap<FRigComponentKey,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigComponentKey,FName,0>_>
  *this_00;
  longlong lVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  FScriptContainerElement *pFVar8;
  TPairInitializer<FRigComponentKey_const_&,FName_const_&> local_res8;
  undefined1 local_48 [16];
  FString local_38;
  FString local_28;
  
  FVar2 = param_1->Name;
  this_00 = &this->ComponentKeyToTrackName;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = (param_1->ElementKey).Name;
  uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  iVar6 = TSet<TTuple<FRigComponentKey,FName>,TDefaultMapHashableKeyFuncs<FRigComponentKey,FName,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigComponentKey>
                    ((TSet<TTuple<FRigComponentKey,FName>,TDefaultMapHashableKeyFuncs<FRigComponentKey,FName,0>,FDefaultSetAllocator>
                      *)this_00,
                     (uVar4 + FVar2.Number) * 0xf + (uVar5 + FVar3.Number) * 10 +
                     (uint)(param_1->ElementKey).Type,param_1);
  if (iVar6 != -1) {
    lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x24;
    pFVar7 = (FName *)(lVar1 + 0x14);
    if (lVar1 == 0) {
      pFVar7 = (FName *)0x0;
    }
    if (pFVar7 != (FName *)0x0) {
      return pFVar7;
    }
  }
  FRigElementKey::ToString(&param_1->ElementKey,&local_28);
  ::FName::ToString(&param_1->Name,&local_38);
  ::FString::PrintfImpl((FString *)local_48,L"Component(%s,%s)");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar8 = (FScriptContainerElement *)L"";
  if (local_48._8_4_ != 0) {
    pFVar8 = (FScriptContainerElement *)local_48._0_8_;
  }
  ::FName::FName((FName *)&local_res8.Value,(wchar_t *)pFVar8);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  local_48._8_8_ = &local_res8.Value;
  local_48._0_8_ = param_1;
  TSet<TTuple<FRigComponentKey,FName>,TDefaultMapHashableKeyFuncs<FRigComponentKey,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRigComponentKey_const_&,FName_const_&>_>
            ((TSet<TTuple<FRigComponentKey,FName>,TDefaultMapHashableKeyFuncs<FRigComponentKey,FName,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)local_48);
  return (FName *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)local_res8.Key * 0x24 + 0x14);
}

// GetTrackName @ 14a26bf60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName * __thiscall
FControlRigReplayTracks::GetTrackName(FControlRigReplayTracks *this,FRigElementKey *param_1)

{
  TMap<FRigElementKey,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,FName,0>_>
  *this_00;
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  FName *pFVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  TPairInitializer<FRigElementKey_const_&,FName_const_&> local_res8;
  undefined1 local_18 [16];
  
  FVar1 = param_1->Name;
  this_00 = &this->ElementKeyToTrackName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  iVar3 = TSet<TTuple<FRigElementKey,FName>,TDefaultMapHashableKeyFuncs<FRigElementKey,FName,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FRigElementKey>
                    ((TSet<TTuple<FRigElementKey,FName>,TDefaultMapHashableKeyFuncs<FRigElementKey,FName,0>,FDefaultSetAllocator>
                      *)this_00,(uint)param_1->Type + (uVar2 + FVar1.Number) * 10,param_1);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x1c + *(longlong *)&this_00->field_0x0;
    pFVar5 = (FName *)(lVar4 + 0xc);
    if (lVar4 == 0) {
      pFVar5 = (FName *)0x0;
    }
    if (pFVar5 != (FName *)0x0) {
      return pFVar5;
    }
  }
  pFVar6 = FRigElementKey::ToString(param_1,(FString *)local_18);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  ::FName::FName((FName *)&local_res8.Value,pwVar7);
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  local_18._8_8_ = &local_res8.Value;
  local_18._0_8_ = param_1;
  TSet<TTuple<FRigElementKey,FName>,TDefaultMapHashableKeyFuncs<FRigElementKey,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRigElementKey_const_&,FName_const_&>_>
            ((TSet<TTuple<FRigElementKey,FName>,TDefaultMapHashableKeyFuncs<FRigElementKey,FName,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)local_18);
  return (FName *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)local_res8.Key * 0x1c + 0xc);
}

// GetTrackName @ 14a26c040

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName * __thiscall
FControlRigReplayTracks::GetTrackName
          (FControlRigReplayTracks *this,FRigElementKey *param_1,FName *param_2)

{
  TMap<TTuple<FRigElementKey,FName>,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FRigElementKey,FName>,FName,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  FName FVar4;
  uint uVar5;
  uint uVar6;
  FName *pFVar7;
  FString *pFVar8;
  void *pvVar9;
  undefined1 *puVar10;
  ulong64 uVar11;
  int iVar12;
  int iVar13;
  TPairInitializer<TTuple<FRigElementKey,FName>_const_&,FName_const_&> local_res8;
  undefined1 local_78 [16];
  uint local_68;
  FNameEntryId FStack_64;
  uint local_60;
  FName local_5c;
  TStringBuilderBase<wchar_t> local_50;
  
  uVar6 = (param_1->Name).Number;
  this_00 = &this->MetadataToTrackName;
  uVar2._0_1_ = param_1->Type;
  uVar2._1_3_ = *(undefined3 *)&param_1->field_0x1;
  uVar2._4_4_ = (param_1->Name).ComparisonIndex;
  local_68 = (uint)uVar2;
  local_5c = *param_2;
  FStack_64.Value = uVar2._4_4_;
  local_60 = uVar6;
  uVar5 = ::GetTypeHash((FNameEntryId)uVar2._4_4_);
  FVar4 = local_5c;
  uVar5 = (local_68 & 0xff) + (uVar5 + uVar6) * 10;
  uVar6 = ::GetTypeHash(local_5c.ComparisonIndex.Value);
  if (*(int *)&(this->MetadataToTrackName).field_0x8 !=
      *(int *)&(this->MetadataToTrackName).field_0x34) {
    puVar10 = *(undefined1 **)&(this->MetadataToTrackName).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->MetadataToTrackName).field_0x38;
    }
    iVar13 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->MetadataToTrackName).field_0x48 - 1U &
                     (uVar5 * 0x40 + FVar4.Number + (uVar5 >> 2) + uVar6 + 0x9e3779b9 ^ uVar5)) * 4)
    ;
    if (iVar13 != -1) {
      do {
        pFVar1 = (FScriptContainerElement *)
                 (*(longlong *)&this_00->field_0x0 + (longlong)iVar13 * 0x24);
        if (((*(longlong *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar13 * 0x24) ==
              CONCAT44(local_60,FStack_64.Value)) && (*pFVar1 == local_68._0_1_)) &&
           (*(FName *)(pFVar1 + 0xc) == local_5c)) {
          if (iVar13 != -1) {
            pFVar7 = (FName *)(pFVar1 + 0x14);
            if (pFVar1 == (FScriptContainerElement *)0x0) {
              pFVar7 = (FName *)0x0;
            }
            if (pFVar7 != (FName *)0x0) {
              return pFVar7;
            }
          }
          break;
        }
        iVar13 = *(int *)(pFVar1 + 0x1c);
      } while (iVar13 != -1);
    }
  }
  local_50.End = (wchar_t *)0x0;
  local_50.bIsDynamic = false;
  local_50.bIsExternal = false;
  local_50.Base = (wchar_t *)0x0;
  local_50.CurPos = (wchar_t *)0x0;
  pFVar8 = FRigElementKey::ToString(param_1,(FString *)local_78);
  iVar13 = (pFVar8->Data).ArrayNum;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  iVar12 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar12 = 0;
  }
  uVar11 = (ulong64)iVar12;
  if (local_50.End < local_50.CurPos + uVar11) {
    TStringBuilderBase<wchar_t>::Extend(&local_50,uVar11);
  }
  if (iVar12 != 0) {
    pvVar9 = FGenericPlatformString::Memcpy(local_50.CurPos,pFVar1,uVar11 * 2);
    local_50.CurPos = (wchar_t *)((longlong)pvVar9 + uVar11 * 2);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (local_50.End < local_50.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_50,1);
  }
  *local_50.CurPos = L':';
  local_50.CurPos = local_50.CurPos + 1;
  pFVar8 = ::FName::ToString(param_2,(FString *)local_78);
  iVar13 = (pFVar8->Data).ArrayNum;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  iVar12 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar12 = 0;
  }
  uVar11 = (ulong64)iVar12;
  if (local_50.End < local_50.CurPos + uVar11) {
    TStringBuilderBase<wchar_t>::Extend(&local_50,uVar11);
  }
  if (iVar12 != 0) {
    pvVar9 = FGenericPlatformString::Memcpy(local_50.CurPos,pFVar1,uVar11 * 2);
    local_50.CurPos = (wchar_t *)((longlong)pvVar9 + uVar11 * 2);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (local_50.End < local_50.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_50,1);
  }
  *local_50.CurPos = L'\0';
  ::FName::FName((FName *)&local_res8.Value,local_50.Base);
  local_78._0_8_ = &local_68;
  local_78._8_8_ = &local_res8.Value;
  TSet<TTuple<TTuple<FRigElementKey,FName>,FName>,TDefaultMapHashableKeyFuncs<TTuple<FRigElementKey,FName>,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<TTuple<FRigElementKey,FName>_const_&,FName_const_&>_>
            ((TSet<TTuple<TTuple<FRigElementKey,FName>,FName>,TDefaultMapHashableKeyFuncs<TTuple<FRigElementKey,FName>,FName,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)local_78);
  lVar3 = *(longlong *)&this_00->field_0x0;
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_50);
  return (FName *)(lVar3 + (longlong)(int)local_res8.Key * 0x24 + 0x14);
}

// GetTrackName @ 14a26c2f0

FName * __thiscall
FControlRigReplayTracks::GetTrackName(FControlRigReplayTracks *this,FProperty *param_1)

{
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *this_00;
  longlong lVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FName *pFVar5;
  TTuple<FName,FName> *pTVar6;
  void *pvVar7;
  FName FVar8;
  ulong64 uVar9;
  int iVar10;
  FName FVar11;
  TPairInitializer<FName_&&,FName_const_&> local_res8;
  FName local_res18;
  FString local_78;
  FName **local_68;
  FName *local_60;
  TStringBuilderBase<wchar_t> local_58;
  
  if ((param_1 == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigReplay.cpp"
                         ,0x3e0,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FName *)(*pcVar2)();
    return pFVar5;
  }
  bVar4 = IsThisNotNull(param_1,"FField::GetFName");
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
  FVar8 = FVar11;
  if (bVar4) {
    FVar8 = (FName)param_1->_padding_;
  }
  this_00 = &this->PropertyNameToTrackName;
  pTVar6 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                   *)this_00,FVar8);
  FVar8 = (FName)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<FName,FName> *)0x0) {
    FVar8 = FVar11;
  }
  if (FVar8 == (FName)0x0) {
    local_58.End = (wchar_t *)0x0;
    local_58.Base = (wchar_t *)0x0;
    local_58.CurPos = (wchar_t *)0x0;
    local_58.bIsDynamic = false;
    local_58.bIsExternal = false;
    TStringBuilderBase<wchar_t>::Extend(&local_58,9);
    pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,L"Variable:",0x12);
    local_58.CurPos = (wchar_t *)((longlong)pvVar7 + 0x12);
    bVar4 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&param_1->_padding_,&local_78);
    }
    else {
      ::FString::FString(&local_78,L"None");
    }
    FVar3.Data = local_78.Data.AllocatorInstance.Data;
    iVar10 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    uVar9 = (ulong64)iVar10;
    if (local_58.End < local_58.CurPos + uVar9) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,uVar9);
    }
    if (iVar10 != 0) {
      pvVar7 = FGenericPlatformString::Memcpy(local_58.CurPos,FVar3.Data,uVar9 * 2);
      local_58.CurPos = (wchar_t *)((longlong)pvVar7 + uVar9 * 2);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58.End < local_58.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_58,1);
    }
    *local_58.CurPos = L'\0';
    ::FName::FName(&local_res18,local_58.Base);
    bVar4 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar4) {
      local_res8.Value = (FName *)param_1->_padding_;
    }
    else {
      local_res8.Value = (FName *)0x0;
    }
    local_68 = &local_res8.Value;
    local_60 = &local_res18;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_&&,FName_const_&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_68);
    lVar1 = *(longlong *)&this_00->field_0x0;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_58);
    return (FName *)(lVar1 + (longlong)(int)local_res8.Key * 0x18 + 8);
  }
  return (FName *)FVar8;
}

// GetTrackTypeFromMetadataType @ 14a26c570

ETrackType __cdecl FControlRigReplayTracks::GetTrackTypeFromMetadataType(ERigMetadataType param_1)

{
  switch(param_1) {
  case Bool:
    return ETrackType_Bool;
  case BoolArray:
    return ETrackType_BoolArray;
  case Float:
    return ETrackType_Float;
  case FloatArray:
    return ETrackType_FloatArray;
  case Int32:
    return ETrackType_Int32;
  case Int32Array:
    return ETrackType_Int32Array;
  case Name:
    return ETrackType_Name;
  case NameArray:
    return ETrackType_NameArray;
  case Vector:
  case Rotator:
    return ETrackType_Vector3f;
  case VectorArray:
  case RotatorArray:
    return ETrackType_Vector3fArray;
  case Quat:
    return ETrackType_Quatf;
  case QuatArray:
    return ETrackType_QuatfArray;
  case Transform:
    return ETrackType_Transformf;
  case TransformArray:
    return ETrackType_TransformfArray;
  case LinearColor:
    return ETrackType_LinearColor;
  case LinearColorArray:
    return ETrackType_LinearColorArray;
  case RigElementKey:
    return ETrackType_ElementKey;
  case RigElementKeyArray:
    return ETrackType_ElementKeyArray;
  default:
    return ETrackType_Unknown;
  }
}

// GetTrackTypeFromProperty @ 14a26c620

ETrackType __cdecl FControlRigReplayTracks::GetTrackTypeFromProperty(FProperty *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  ETrackType EVar4;
  ETrackType EVar5;
  char cVar6;
  FProperty *pFVar7;
  
  if (param_1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigReplay.cpp"
                       ,0x4a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  else if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) != 0) {
    pFVar7 = (FProperty *)param_1[1]._padding_;
    goto LAB_14a26c657;
  }
  pFVar7 = param_1;
  param_1 = (FProperty *)0x0;
LAB_14a26c657:
  EVar4 = ETrackType_Unknown;
  cVar6 = '\0';
  uVar1 = *(ulonglong *)(pFVar7->_padding_ + 0x18);
  if ((uVar1 >> 0x11 & 1) != 0) {
    EVar4 = ETrackType_BoolArray;
    if (param_1 == (FProperty *)0x0) {
      EVar4 = ETrackType_Bool;
    }
    return EVar4;
  }
  if (((uVar1 >> 8 & 1) == 0) && ((uVar1 >> 0x20 & 1) == 0)) {
    if (((char)uVar1 < '\0') || ((uVar1 >> 0x1f & 1) != 0)) {
      EVar4 = ETrackType_Int32Array;
      if (param_1 == (FProperty *)0x0) {
        EVar4 = ETrackType_Int32;
      }
      return EVar4;
    }
    if (((((uVar1 >> 0xb & 1) != 0) || ((uVar1 >> 0x12 & 1) != 0)) || ((uVar1 & 0x40) != 0)) ||
       ((uVar1 >> 0x30 & 1) != 0)) {
      EVar4 = ETrackType_Uint32Array;
      if (param_1 == (FProperty *)0x0) {
        EVar4 = ETrackType_Uint32;
      }
      return EVar4;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      EVar4 = ETrackType_NameArray;
      if (param_1 == (FProperty *)0x0) {
        EVar4 = ETrackType_Name;
      }
      return EVar4;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      EVar4 = ETrackType_StringArray;
      if (param_1 == (FProperty *)0x0) {
        EVar4 = ETrackType_String;
      }
      return EVar4;
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      EVar4 = ETrackType_StructArray;
      if (param_1 == (FProperty *)0x0) {
        EVar4 = ETrackType_Struct;
      }
      return EVar4;
    }
  }
  else {
    EVar4 = ETrackType_Float;
    cVar6 = '\x04';
  }
  EVar5 = cVar6 + ETrackType_Struct;
  if (param_1 == (FProperty *)0x0) {
    EVar5 = EVar4;
  }
  return EVar5;
}

// IsEmpty @ 14a274300

bool __thiscall FControlRigReplayTracks::IsEmpty(FControlRigReplayTracks *this)

{
  int iVar1;
  FSampleTrackContainer *pFVar2;
  
  pFVar2 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  iVar1 = FSampleTrackContainer::GetNumTimes(pFVar2);
  if (iVar1 != 0) {
    pFVar2 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
    if ((pFVar2->Tracks).ArrayNum != 0) {
      return false;
    }
  }
  return true;
}

// Reset @ 14a2892b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FControlRigReplayTracks::Reset(FControlRigReplayTracks *this)

{
  ForElementType<int> FVar1;
  FSampleTrackIndex *pFVar2;
  undefined1 auStack_58 [32];
  FSampleTrackIndex local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  FSampleTrackHost::Reset((FSampleTrackHost *)this);
  pFVar2 = FSampleTrackIndex::FSampleTrackIndex(&local_38);
  if (&this->SampleTrackIndex != pFVar2) {
    if ((pFVar2->Samples).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
      *(undefined4 *)(this->SampleTrackIndex).Samples.AllocatorInstance.InlineData =
           *(undefined4 *)(pFVar2->Samples).AllocatorInstance.InlineData;
    }
    FVar1 = (this->SampleTrackIndex).Samples.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->SampleTrackIndex).Samples.AllocatorInstance.SecondaryData =
         (pFVar2->Samples).AllocatorInstance.SecondaryData;
    (pFVar2->Samples).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    (this->SampleTrackIndex).Samples.ArrayNum = (pFVar2->Samples).ArrayNum;
    (this->SampleTrackIndex).Samples.ArrayMax = (pFVar2->Samples).ArrayMax;
    (pFVar2->Samples).ArrayNum = 0;
    (pFVar2->Samples).ArrayMax = 1;
  }
  (this->SampleTrackIndex).bIsSingleton = pFVar2->bIsSingleton;
  if (local_38.Samples.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_38.Samples.AllocatorInstance.SecondaryData);
  }
  return;
}

// RestoreComponent @ 14a28a1c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigReplayTracks::RestoreComponent
          (FControlRigReplayTracks *this,int param_1,URigHierarchy *param_2,
          FRigBaseComponent *param_3,
          TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar5;
  int iVar6;
  FSampleTrackContainer *this_00;
  FName *pFVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  int local_68 [2];
  TObjectPtr<UScriptStruct_const_>_u_0 local_60;
  TReferenceControllerBase<1> *local_58;
  FString local_50;
  
  local_68[0] = param_1;
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  pFVar7 = GetTrackName(this,&param_3->Key);
  iVar6 = FSampleTrackContainer::GetTrackIndex(this_00,pFVar7);
  if ((iVar6 < 0) || ((this_00->Tracks).ArrayNum <= iVar6)) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
LAB_14a28a335:
    if (*(longlong *)param_4 == 0) goto LAB_14a28a395;
    ::FString::FString(&local_50,L"Track not found.");
    local_68[0] = 3;
  }
  else {
    FSampleTrackContainer::GetTrack
              (this_00,(TSharedPtr<FSampleTrackBase_const_,1> *)&local_60.ObjectPtr,iVar6);
    pTVar11 = local_58;
    TVar5 = local_60;
    if (local_58 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_58->SharedReferenceCount = (atomic<int>)((int)local_58->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    if (TVar5.DebugPtr == (UScriptStruct *)0x0) goto LAB_14a28a335;
    lVar3 = (TVar5.DebugPtr)->_padding_;
    lVar8 = (**(code **)(param_3->_padding_ + 0x48))(param_3);
    if (lVar3 == lVar8) {
      iVar6 = param_3->IndexInHierarchy;
      param_3->IndexInHierarchy = iVar6;
      iVar2 = param_3->IndexInElement;
      param_3->IndexInElement = iVar2;
      bVar1 = param_3->bSelected;
      param_3->bSelected = bVar1;
      (**(code **)((TVar5.DebugPtr)->_padding_ + 200))
                (TVar5.DebugPtr,&local_60,local_68[0],&this->SampleTrackIndex);
      UScriptStruct::CopyScriptStruct(local_60.DebugPtr,param_3,local_58,1);
      FInstancedStruct::Reset((FInstancedStruct *)&local_60.ObjectPtr);
      param_3->bSelected = bVar1;
      param_3->IndexInElement = iVar2;
      param_3->IndexInHierarchy = iVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      if (*(longlong *)param_4 != 0) {
        plVar10 = (longlong *)&param_4->field_0x10;
        if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
          plVar10 = *(longlong **)&param_4->field_0x28;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      return true;
    }
    if (*(longlong *)param_4 == 0) goto LAB_14a28a395;
    ::FString::FString(&local_50,L"Component doesn\'t match track scriptstruct");
    local_68[0] = 1;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_4);
  pcVar4 = *(code **)param_4;
  plVar10 = (longlong *)&param_4->field_0x10;
  if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
    plVar10 = *(longlong **)&param_4->field_0x28;
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  (*pcVar4)(uVar9,local_68,pFVar7,&local_50);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
LAB_14a28a395:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (*(longlong *)param_4 != 0) {
    plVar10 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return false;
}

// RestoreComponents @ 14a28a3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigReplayTracks::RestoreComponents
          (FControlRigReplayTracks *this,int param_1,URigHierarchy *param_2,FRigBaseElement *param_3
          ,TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_e8 [32];
  TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> local_c8;
  TArrayView<FRigComponentKey,int> local_b8;
  code *local_a8 [5];
  undefined8 *local_80;
  FControlRigReplayTracks *local_78;
  int local_70;
  URigHierarchy *local_68;
  longlong local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FRigBaseElement::GetComponentKeys(param_3,&local_c8);
  if (local_c8.ArrayNum == 0) {
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (*(longlong *)param_4 != 0) {
      plVar5 = (longlong *)&param_4->field_0x10;
      if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
        plVar5 = *(longlong **)&param_4->field_0x28;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    bVar2 = true;
  }
  else {
    local_58 = *(longlong *)param_4;
    local_30 = (longlong *)0x0;
    local_78 = this;
    local_70 = param_1;
    local_68 = param_2;
    if (local_58 != 0) {
      puVar4 = (undefined8 *)&param_4->field_0x10;
      if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)&param_4->field_0x28;
      }
      (**(code **)*puVar4)(puVar4,&local_48);
    }
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x60,0x10);
    *local_80 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_80[2] = local_78;
    *(int *)(local_80 + 3) = local_70;
    local_80[4] = local_68;
    local_80[6] = local_58;
    local_80[0xb] = local_30;
    local_30 = (longlong *)0x0;
    local_80[8] = local_48;
    local_80[9] = uStack_40;
    local_80[10] = local_38;
    if (local_80[6] != 0) {
      local_58 = 0;
    }
    if (local_80 + 2 != (undefined8 *)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FControlRigReplayTracks::RestoreComponents'::__l5::<lambda_1>,void,FRigBaseComponent_*,bool_&>
                    ::Call;
    }
    local_b8.DataPtr = (FRigComponentKey *)local_c8.AllocatorInstance.Data;
    if ((local_c8.ArrayNum < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_b8.ArrayNum = local_c8.ArrayNum;
    bVar2 = ForEachComponent(param_2,&local_b8,
                             (TFunction<void___cdecl(FRigBaseComponent_*,bool_&)> *)local_a8);
    if (local_58 != 0) {
      plVar5 = &local_48;
      if (local_30 != (longlong *)0x0) {
        plVar5 = local_30;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (*(longlong *)param_4 != 0) {
      plVar5 = (longlong *)&param_4->field_0x10;
      if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
        plVar5 = *(longlong **)&param_4->field_0x28;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return bVar2;
}

// RestoreComponents @ 14a28a5c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigReplayTracks::RestoreComponents
          (FControlRigReplayTracks *this,int param_1,URigHierarchy *param_2,
          TArrayView<FRigComponentKey,int> *param_3,
          TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  code *local_a8 [5];
  undefined8 *local_80;
  FControlRigReplayTracks *local_78;
  int local_70;
  URigHierarchy *local_68;
  longlong local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_58 = *(longlong *)param_4;
  local_30 = (longlong *)0x0;
  local_78 = this;
  local_70 = param_1;
  local_68 = param_2;
  if (local_58 != 0) {
    puVar2 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_48);
  }
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x60,0x10);
  *local_80 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FControlRigReplayTracks::RestoreComponents'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_80[2] = local_78;
  *(int *)(local_80 + 3) = local_70;
  local_80[4] = local_68;
  local_80[6] = local_58;
  local_80[0xb] = local_30;
  local_30 = (longlong *)0x0;
  local_80[8] = local_48;
  local_80[9] = uStack_40;
  local_80[10] = local_38;
  if (local_80[6] != 0) {
    local_58 = 0;
  }
  if (local_80 + 2 != (undefined8 *)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FControlRigReplayTracks::RestoreComponents'::__l2::<lambda_1>,void,FRigBaseComponent_*,bool_&>
                  ::Call;
  }
  bVar1 = ForEachComponent(param_2,param_3,
                           (TFunction<void___cdecl(FRigBaseComponent_*,bool_&)> *)local_a8);
  if (local_58 != 0) {
    plVar3 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar3 = local_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar3 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return bVar1;
}

// RestoreHierarchy @ 14a28a740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigReplayTracks::RestoreHierarchy
          (FControlRigReplayTracks *this,int param_1,URigHierarchy *param_2,
          TArrayView<FRigElementKey,int> *param_3,
          TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_4,
          bool param_5,bool param_6,bool param_7)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  code *local_b8 [5];
  undefined8 *local_90;
  FControlRigReplayTracks *local_88;
  int local_80;
  URigHierarchy *local_78;
  longlong local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  bool local_38;
  bool local_37;
  bool local_36;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_68 = *(longlong *)param_4;
  local_40 = (longlong *)0x0;
  local_88 = this;
  local_80 = param_1;
  local_78 = param_2;
  if (local_68 != 0) {
    puVar2 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_58);
  }
  local_38 = param_5;
  local_37 = param_6;
  local_36 = param_7;
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x70,0x10);
  *local_90 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FControlRigReplayTracks::RestoreHierarchy'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_90[2] = local_88;
  *(int *)(local_90 + 3) = local_80;
  local_90[4] = local_78;
  local_90[6] = local_68;
  local_90[0xb] = local_40;
  local_40 = (longlong *)0x0;
  local_90[8] = local_58;
  local_90[9] = uStack_50;
  local_90[10] = local_48;
  if (local_90[6] != 0) {
    local_68 = 0;
  }
  *(bool *)(local_90 + 0xc) = local_38;
  *(bool *)((longlong)local_90 + 0x61) = local_37;
  *(bool *)((longlong)local_90 + 0x62) = local_36;
  if (local_90 + 2 != (undefined8 *)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FControlRigReplayTracks::RestoreHierarchy'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                  ::Call;
  }
  bVar1 = ForEachElement(param_2,param_3,
                         (TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_b8);
  if (local_68 != 0) {
    plVar3 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar3 = local_40;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar3 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return bVar1;
}

// RestoreMetaData @ 14a28a8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigReplayTracks::RestoreMetaData
          (FControlRigReplayTracks *this,int param_1,URigHierarchy *param_2,FRigBaseElement *param_3
          ,FName *param_4,
          TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_5)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  FSharedReferencer<1> FVar20;
  bool bVar21;
  undefined1 uVar22;
  ETrackType EVar23;
  ERigMetadataType EVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  FSampleTrackContainer *this_00;
  FName *pFVar28;
  undefined8 uVar29;
  FRigBaseMetadata *this_01;
  FSampleTrack<float> *pFVar30;
  FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> *pFVar31;
  FSampleTrack<int> *pFVar32;
  TRotator<double> *pTVar33;
  FSampleTrack<UE::Math::TTransform<float>_> *pFVar34;
  FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *pFVar35;
  UScriptStruct *pUVar36;
  FProperty *pFVar37;
  FSampleTrack<FLinearColor> *pFVar38;
  FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *pFVar39;
  FSampleTrack<FRigElementKey> *pFVar40;
  FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *pFVar41;
  longlong lVar42;
  longlong *plVar43;
  float *pfVar44;
  undefined8 *puVar45;
  float *pfVar46;
  undefined1 auStackY_4b8 [32];
  TSharedPtr<FSampleTrackBase_const_,1> local_468;
  TRotator<double> local_458;
  undefined1 local_440;
  undefined1 local_43f;
  undefined1 local_43e [6];
  ForAnyElementType local_438;
  undefined8 local_430;
  ForAnyElementType local_428;
  undefined8 local_420;
  ForAnyElementType local_418;
  undefined8 local_410;
  FName local_408;
  undefined4 local_400 [2];
  undefined4 local_3f8 [2];
  undefined4 local_3f0 [2];
  undefined4 local_3e8;
  undefined1 local_3e4 [28];
  float *local_3c8;
  ulonglong local_3c0;
  void *local_3b8;
  ulonglong local_3b0;
  undefined8 *local_3a8;
  ulonglong local_3a0;
  float local_398;
  float local_394;
  float local_390;
  float local_388;
  float local_384;
  float local_380;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  URigHierarchy *local_368;
  undefined1 local_360 [24];
  void *local_348 [2];
  void *local_338 [2];
  void *local_328 [2];
  void *local_318 [2];
  void *local_308 [2];
  void *local_2f8 [2];
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  undefined1 local_2b8 [16];
  TRotator<double> local_2a8;
  TVector<double>_u_0 local_290;
  TRotator<double> local_278;
  double local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8 [2];
  TSharedPtr<FSampleTrack<float>_const_,1> local_1e8;
  TSharedPtr<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>_const_,1> local_1d8;
  TSharedPtr<FSampleTrack<int>_const_,1> local_1c8;
  TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>_const_,1> local_1b8;
  TSharedPtr<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>_const_,1>
  local_1a8;
  TSharedPtr<FSampleTrack<FLinearColor>_const_,1> local_198;
  undefined1 local_188 [16];
  TSharedPtr<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_const_,1> local_178;
  TSharedPtr<FSampleTrack<FRigElementKey>_const_,1> local_168;
  TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_const_,1> local_158;
  TVector<double>_u_0 local_148;
  TRotator<double> local_130;
  TRotator<double> local_118;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  double dStack_90;
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_368 = param_2;
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  pFVar28 = GetTrackName(this,&param_3->Key,param_4);
  local_408 = *pFVar28;
  FSampleTrackContainer::FindTrack(this_00,&local_468,&local_408);
  if ((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) {
    if (*(longlong *)param_5 == 0) goto LAB_14a28be00;
    ::FString::FString(&local_2c8,L"Track not found.");
    local_400[0] = 3;
    UE::Core::Private::Function::CheckCallable(*(void **)param_5);
    pcVar6 = *(code **)param_5;
    plVar43 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar43 = *(longlong **)&param_5->field_0x28;
    }
    uVar29 = (**(code **)(*plVar43 + 8))();
    (*pcVar6)(uVar29,local_400,&local_408,&local_2c8);
LAB_14a28bdf6:
    if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
    }
LAB_14a28be00:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_468.SharedReferenceCount.ReferenceController);
    if (*(longlong *)param_5 != 0) {
      plVar43 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar43 = *(longlong **)&param_5->field_0x28;
      }
      (**(code **)(*plVar43 + 0x10))();
    }
    return false;
  }
  if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar6 = (code *)swi(3);
    uVar22 = (*pcVar6)();
    return (bool)uVar22;
  }
  EVar23 = (**(code **)((local_468.Object)->_padding_ + 8))();
  EVar24 = GetMetadataTypeFromTrackType(EVar23);
  this_01 = FRigBaseElement::GetMetadata(param_3,param_4,Invalid);
  if (this_01 != (FRigBaseMetadata *)0x0) {
    if (this_01->Type == EVar24) goto LAB_14a28aa3c;
    if (*(longlong *)param_5 == 0) goto LAB_14a28be00;
    ::FString::FString(&local_2d8,L"Track has incorrect type.");
    local_3f0[0] = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)param_5);
    pcVar6 = *(code **)param_5;
    plVar43 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar43 = *(longlong **)&param_5->field_0x28;
    }
    uVar29 = (**(code **)(*plVar43 + 8))();
    (*pcVar6)(uVar29,local_3f0,&local_408,&local_2d8);
    local_2c8.Data.AllocatorInstance.Data = local_2d8.Data.AllocatorInstance.Data;
    goto LAB_14a28bdf6;
  }
  if (EVar24 == Invalid) {
    if (*(longlong *)param_5 == 0) goto LAB_14a28be00;
    ::FString::FString((FString *)(local_360 + 8),L"Cannot create metadata. Invalid metadata type.")
    ;
    local_3f8[0] = 3;
    UE::Core::Private::Function::CheckCallable(*(void **)param_5);
    pcVar6 = *(code **)param_5;
    plVar43 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar43 = *(longlong **)&param_5->field_0x28;
    }
    uVar29 = (**(code **)(*plVar43 + 8))();
    (*pcVar6)(uVar29,local_3f8,&local_408,local_360 + 8);
    local_2c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_360._8_8_;
    goto LAB_14a28bdf6;
  }
  this_01 = URigHierarchy::GetMetadataForElement(local_368,param_3,param_4,EVar24,true);
LAB_14a28aa3c:
  FVar20.ReferenceController = local_468.SharedReferenceCount.ReferenceController;
  switch(this_01->Type) {
  case Bool:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    local_458.Pitch._0_1_ =
         (**(code **)((local_468.Object)->_padding_ + 200))
                   (local_468.Object,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_258,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize != 1) break;
    lVar42 = this_01->_padding_;
    pTVar33 = &local_458;
    goto LAB_14a28abc5;
  case BoolArray:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    (**(code **)((local_468.Object)->_padding_ + 200))
              (local_468.Object,local_348,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_250,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize == 0x10) {
      (**(code **)(this_01->_padding_ + 0x10))(this_01,local_348);
    }
    if (local_348[0] != (void *)0x0) {
      FMemory::Free(local_348[0]);
    }
    break;
  case Float:
    local_1e8.Object = (FSampleTrack<float> *)local_468.Object;
    local_1e8.SharedReferenceCount.ReferenceController =
         local_468.SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar30 = TSharedPtr<FSampleTrack<float>_const_,1>::operator->(&local_1e8);
    local_3e8 = (**(code **)(*(longlong *)pFVar30 + 200))(pFVar30,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    FRigBaseMetadata::SetValueData(this_01,&local_3e8,4);
    break;
  case FloatArray:
    local_1d8.Object = (FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_468.Object;
    local_1d8.SharedReferenceCount.ReferenceController =
         local_468.SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar31 = TSharedPtr<FSampleTrack<TArray<float,TSizedDefaultAllocator<32>_>_>_const_,1>::
              operator->(&local_1d8);
    (**(code **)(*(longlong *)pFVar31 + 200))(pFVar31,local_338,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    FRigBaseMetadata::SetValueData(this_01,local_338,0x10);
    if (local_338[0] != (void *)0x0) {
      FMemory::Free(local_338[0]);
    }
    break;
  case Int32:
    local_1c8.Object = (FSampleTrack<int> *)local_468.Object;
    local_1c8.SharedReferenceCount.ReferenceController =
         local_468.SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar32 = TSharedPtr<FSampleTrack<int>_const_,1>::operator->(&local_1c8);
    local_3e4._0_4_ =
         (**(code **)(*(longlong *)pFVar32 + 200))(pFVar32,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_248,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize != 4) break;
    lVar42 = this_01->_padding_;
    pTVar33 = (TRotator<double> *)local_3e4;
    goto LAB_14a28abc5;
  case Int32Array:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    (**(code **)((local_468.Object)->_padding_ + 200))
              (local_468.Object,local_328,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_240,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize == 0x10) {
      (**(code **)(this_01->_padding_ + 0x10))(this_01,local_328);
    }
    if (local_328[0] != (void *)0x0) {
      FMemory::Free(local_328[0]);
    }
    break;
  case Name:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    (**(code **)((local_468.Object)->_padding_ + 200))
              (local_468.Object,local_360,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_238,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize != 8) break;
    lVar42 = this_01->_padding_;
    pTVar33 = (TRotator<double> *)local_360;
    goto LAB_14a28abc5;
  case NameArray:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    (**(code **)((local_468.Object)->_padding_ + 200))
              (local_468.Object,local_318,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_230,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize == 0x10) {
      (**(code **)(this_01->_padding_ + 0x10))(this_01,local_318);
    }
    if (local_318[0] != (void *)0x0) {
      FMemory::Free(local_318[0]);
    }
    break;
  case Vector:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    (**(code **)((local_468.Object)->_padding_ + 200))
              (local_468.Object,&local_398,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    pFVar37 = this_01->ValueProperty;
    local_2a8.Pitch = (double)local_398;
    local_2a8.Yaw = (double)local_394;
    local_2a8.Roll = (double)local_390;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_228,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize != 0x18) break;
    lVar42 = this_01->_padding_;
    pTVar33 = &local_2a8;
    goto LAB_14a28abc5;
  case VectorArray:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    (**(code **)((local_468.Object)->_padding_ + 200))
              (local_468.Object,local_3e4 + 0xc,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    local_420._0_4_ = 0;
    local_428.Data = (FScriptContainerElement *)0x0;
    local_420 = 0;
    iVar27 = (int)local_3e4._20_8_;
    if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_3e4._20_8_ & 0xffffffff);
    }
    if (0 < iVar27) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar27,&local_428,0,(int *)((longlong)&local_420 + 4));
    }
    iVar25 = (int)local_3e4._20_8_;
    pfVar44 = (float *)(local_3e4._12_8_ + (longlong)iVar25 * 3 * 4);
    pfVar46 = (float *)local_3e4._12_8_;
    iVar27 = (int)local_420;
    while( true ) {
      iVar26 = iVar27;
      if ((int)local_3e4._20_8_ != iVar25) {
        `TCheckedPointerIterator<UE::Math::TVector<float>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_440);
        iVar26 = (int)local_420;
      }
      if (pfVar46 == pfVar44) break;
      if (iVar26 == local_420._4_4_) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_428,(int *)((longlong)&local_420 + 4));
      }
      iVar27 = iVar26 + 1;
      local_420 = CONCAT44(local_420._4_4_,iVar27);
      uVar29 = *(undefined8 *)(pfVar46 + 1);
      fVar3 = *pfVar46;
      pfVar46 = pfVar46 + 3;
      dVar10 = (double)(float)((ulonglong)uVar29 >> 0x20);
      *(double *)(local_428.Data + (longlong)iVar26 * 0x18) = (double)fVar3;
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = (double)(float)uVar29;
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(local_428.Data + (longlong)iVar26 * 0x18 + 8) = auVar9;
    }
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_220,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize == 0x10) {
      (**(code **)(this_01->_padding_ + 0x10))(this_01,&local_428);
    }
    if (local_428.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_428.Data);
    }
    if ((float *)local_3e4._12_8_ != (float *)0x0) {
      FMemory::Free((void *)local_3e4._12_8_);
    }
    break;
  case Rotator:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    (**(code **)((local_468.Object)->_padding_ + 200))
              (local_468.Object,&local_388,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    local_290._s_0.X = (double)local_388;
    local_290._s_0.Y = (double)local_384;
    local_290._s_0.Z = (double)local_380;
    pTVar33 = UE::Math::TRotator<double>::MakeFromEuler
                        (&local_130,(TVector<double> *)&local_290._s_0);
    if (pTVar33 == (TRotator<double> *)0x0) break;
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_210,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize != 0x18) break;
    lVar42 = this_01->_padding_;
    goto LAB_14a28abc5;
  case RotatorArray:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    (**(code **)((local_468.Object)->_padding_ + 200))
              (local_468.Object,&local_3a8,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    local_458.Yaw = 0.0;
    local_458.Roll = 0.0;
    iVar27 = (int)local_3a0;
    if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_3a0 & 0xffffffff);
    }
    if (0 < iVar27) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar27,(ForAnyElementType *)&local_458.Yaw,0,
                 (int *)((longlong)&local_458.Roll + 4));
    }
    iVar27 = (int)local_3a0;
    puVar2 = (undefined8 *)((longlong)local_3a8 + (longlong)iVar27 * 0xc);
    puVar45 = local_3a8;
    while( true ) {
      if ((int)local_3a0 != iVar27) {
        local_458.Pitch._1_1_ = 0;
        `TCheckedPointerIterator<UE::Math::TVector<float>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()((void *)((longlong)&local_458.Pitch + 1));
      }
      if (puVar45 == puVar2) break;
      local_148._s_0.X = (double)(float)*puVar45;
      local_148._s_0.Y = (double)(float)((ulonglong)*puVar45 >> 0x20);
      local_148._s_0.Z = (double)*(float *)(puVar45 + 1);
      pTVar33 = UE::Math::TRotator<double>::MakeFromEuler
                          (&local_118,(TVector<double> *)&local_148._s_0);
      if ((((ulonglong)local_458.Yaw <= pTVar33) &&
          (pTVar33 < (TRotator<double> *)
                     ((longlong)local_458.Yaw + (longlong)local_458.Roll._4_4_ * 0x18))) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar22 = (*pcVar6)();
        return (bool)uVar22;
      }
      iVar25 = local_458.Roll._0_4_;
      if (local_458.Roll._0_4_ == local_458.Roll._4_4_) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)&local_458.Yaw,
                            (int *)((longlong)&local_458.Roll + 4));
      }
      puVar45 = (undefined8 *)((longlong)puVar45 + 0xc);
      local_458.Roll = (double)CONCAT44(local_458.Roll._4_4_,iVar25 + 1);
      dVar10 = pTVar33->Yaw;
      ((TRotator<double> *)((longlong)local_458.Yaw + (longlong)iVar25 * 0x18))->Pitch =
           pTVar33->Pitch;
      ((TRotator<double> *)((longlong)local_458.Yaw + (longlong)iVar25 * 0x18))->Yaw = dVar10;
      ((TRotator<double> *)((longlong)local_458.Yaw + (longlong)iVar25 * 0x18))->Roll =
           pTVar33->Roll;
    }
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_218,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize == 0x10) {
      (**(code **)(this_01->_padding_ + 0x10))(this_01,&local_458.Yaw);
    }
    if ((TRotator<double> *)local_458.Yaw != (TRotator<double> *)0x0) {
      FMemory::Free((void *)local_458.Yaw);
    }
    if (local_3a8 != (undefined8 *)0x0) {
      FMemory::Free(local_3a8);
    }
    break;
  case Quat:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    (**(code **)((local_468.Object)->_padding_ + 200))
              (local_468.Object,&local_378,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    pFVar37 = this_01->ValueProperty;
    local_278.Pitch = (double)local_378;
    local_278.Yaw = (double)local_374;
    local_278.Roll = (double)local_370;
    local_260 = (double)local_36c;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(local_1f8,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize != 0x20) break;
    lVar42 = this_01->_padding_;
    pTVar33 = &local_278;
LAB_14a28abc5:
    (**(code **)(lVar42 + 0x10))(this_01,pTVar33);
    break;
  case QuatArray:
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<float> *)local_468.Object == (FSampleTrack<float> *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar22 = (*pcVar6)();
      return (bool)uVar22;
    }
    (**(code **)((local_468.Object)->_padding_ + 200))
              (local_468.Object,&local_3b8,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    local_410._0_4_ = 0;
    local_418.Data = (FScriptContainerElement *)0x0;
    local_410 = 0;
    iVar27 = (int)local_3b0;
    if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_3b0 & 0xffffffff);
    }
    if (0 < iVar27) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,iVar27,&local_418,0,(int *)((longlong)&local_410 + 4));
    }
    iVar25 = (int)local_3b0;
    pfVar46 = (float *)((longlong)iVar25 * 0x10 + (longlong)local_3b8);
    pfVar44 = (float *)((longlong)local_3b8 + 8);
    iVar27 = (int)local_410;
    while( true ) {
      iVar26 = iVar27;
      if ((int)local_3b0 != iVar25) {
        `TCheckedPointerIterator<UE::Math::TQuat<float>_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_43f);
        iVar26 = (int)local_410;
      }
      if (pfVar44 + -2 == pfVar46) break;
      if (iVar26 == local_410._4_4_) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&local_418,(int *)((longlong)&local_410 + 4));
      }
      iVar27 = iVar26 + 1;
      local_410 = CONCAT44(local_410._4_4_,iVar27);
      pfVar1 = pfVar44 + 1;
      fVar3 = *pfVar44;
      fVar4 = pfVar44[-1];
      fVar5 = pfVar44[-2];
      lVar42 = (longlong)iVar26 * 0x20;
      pfVar44 = pfVar44 + 4;
      *(double *)(local_418.Data + lVar42 + 0x18) = (double)*pfVar1;
      *(double *)(local_418.Data + lVar42 + 0x10) = (double)fVar3;
      *(double *)(local_418.Data + lVar42 + 8) = (double)fVar4;
      *(double *)(local_418.Data + lVar42) = (double)fVar5;
    }
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_208,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize == 0x10) {
      (**(code **)(this_01->_padding_ + 0x10))(this_01,&local_418);
    }
    if (local_418.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.Data);
    }
    if (local_3b8 != (void *)0x0) {
      FMemory::Free(local_3b8);
    }
    break;
  case Transform:
    local_1b8.Object = (FSampleTrack<UE::Math::TTransform<float>_> *)local_468.Object;
    local_1b8.SharedReferenceCount.ReferenceController =
         local_468.SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar34 = TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>_const_,1>::operator->
                        (&local_1b8);
    (**(code **)(*(longlong *)pFVar34 + 200))(pFVar34,&local_f8,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    local_c8 = (double)local_f8;
    dStack_c0 = (double)fStack_f4;
    local_b8 = (double)fStack_f0;
    dStack_b0 = (double)fStack_ec;
    local_98 = (double)fStack_e0;
    dStack_90 = (double)fStack_dc;
    local_a8._8_4_ = SUB84((double)fStack_e4,0);
    local_a8._0_8_ = (double)local_e8;
    local_a8._12_4_ = (int)((ulonglong)(double)fStack_e4 >> 0x20);
    local_78 = (double)fStack_d0;
    dStack_70 = (double)fStack_cc;
    local_88._8_4_ = SUB84((double)fStack_d4,0);
    local_88._0_8_ = (double)local_d8;
    local_88._12_4_ = (int)((ulonglong)(double)fStack_d4 >> 0x20);
    FRigBaseMetadata::SetValueData(this_01,&local_c8,0x60);
    break;
  case TransformArray:
    local_1a8.Object =
         (FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> *)
         local_468.Object;
    local_1a8.SharedReferenceCount.ReferenceController =
         local_468.SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar35 = TSharedPtr<FSampleTrack<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>_const_,1>
              ::operator->(&local_1a8);
    (**(code **)(*(longlong *)pFVar35 + 200))(pFVar35,&local_3c8,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    local_430._0_4_ = 0;
    local_438.Data = (FScriptContainerElement *)0x0;
    local_430 = 0;
    iVar27 = (int)local_3c0;
    if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_3c0 & 0xffffffff);
    }
    if (0 < iVar27) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar27,&local_438,0,(int *)((longlong)&local_430 + 4));
    }
    iVar25 = (int)local_3c0;
    pfVar46 = local_3c8 + (longlong)iVar25 * 0xc;
    pfVar44 = local_3c8;
    iVar27 = (int)local_430;
    while( true ) {
      iVar26 = iVar27;
      if ((int)local_3c0 != iVar25) {
        `TCheckedPointerIterator<UE::Math::TTransform<float>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_43e);
        iVar26 = (int)local_430;
      }
      if (pfVar44 == pfVar46) break;
      if (iVar26 == local_430._4_4_) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&local_438,(int *)((longlong)&local_430 + 4));
      }
      iVar27 = iVar26 + 1;
      local_430 = CONCAT44(local_430._4_4_,iVar27);
      fVar3 = *pfVar44;
      fVar4 = pfVar44[1];
      fVar5 = pfVar44[2];
      fVar11 = pfVar44[3];
      fVar12 = pfVar44[8];
      fVar13 = pfVar44[9];
      fVar14 = pfVar44[10];
      fVar15 = pfVar44[0xb];
      fVar16 = pfVar44[4];
      fVar17 = pfVar44[5];
      fVar18 = pfVar44[6];
      fVar19 = pfVar44[7];
      lVar42 = (longlong)iVar26 * 0x60;
      pfVar44 = pfVar44 + 0xc;
      *(double *)(local_438.Data + lVar42) = (double)fVar3;
      *(double *)(local_438.Data + lVar42 + 8) = (double)fVar4;
      *(double *)(local_438.Data + lVar42 + 0x10) = (double)fVar5;
      *(double *)(local_438.Data + lVar42 + 0x10 + 8) = (double)fVar11;
      auVar7._8_4_ = SUB84((double)fVar17,0);
      auVar7._0_8_ = (double)fVar16;
      auVar7._12_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
      *(undefined1 (*) [16])(local_438.Data + lVar42 + 0x20) = auVar7;
      *(double *)(local_438.Data + lVar42 + 0x30) = (double)fVar18;
      *(double *)(local_438.Data + lVar42 + 0x30 + 8) = (double)fVar19;
      auVar8._8_4_ = SUB84((double)fVar13,0);
      auVar8._0_8_ = (double)fVar12;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
      *(undefined1 (*) [16])(local_438.Data + lVar42 + 0x40) = auVar8;
      *(double *)(local_438.Data + lVar42 + 0x50) = (double)fVar14;
      *(double *)(local_438.Data + lVar42 + 0x50 + 8) = (double)fVar15;
    }
    pFVar37 = this_01->ValueProperty;
    if (pFVar37 == (FProperty *)0x0) {
      pUVar36 = FRigBaseMetadata::GetMetadataStruct(this_01);
      pFVar28 = ::FName::FName(&local_200,L"Value");
      pFVar37 = UStruct::FindPropertyByName((UStruct *)pUVar36,*pFVar28);
      this_01->ValueProperty = pFVar37;
    }
    if (pFVar37->ElementSize == 0x10) {
      (**(code **)(this_01->_padding_ + 0x10))(this_01,&local_438);
    }
    if (local_438.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_438.Data);
    }
    if (local_3c8 != (float *)0x0) {
      FMemory::Free(local_3c8);
    }
    break;
  case LinearColor:
    local_198.Object = (FSampleTrack<FLinearColor> *)local_468.Object;
    local_198.SharedReferenceCount.ReferenceController =
         local_468.SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar38 = TSharedPtr<FSampleTrack<FLinearColor>_const_,1>::operator->(&local_198);
    (**(code **)(*(longlong *)pFVar38 + 200))(pFVar38,local_188,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    FRigBaseMetadata::SetValueData(this_01,local_188,0x10);
    break;
  case LinearColorArray:
    local_178.Object =
         (FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> *)local_468.Object;
    local_178.SharedReferenceCount.ReferenceController =
         local_468.SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar39 = TSharedPtr<FSampleTrack<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>_const_,1>::
              operator->(&local_178);
    (**(code **)(*(longlong *)pFVar39 + 200))(pFVar39,local_308,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    FRigBaseMetadata::SetValueData(this_01,local_308,0x10);
    if (local_308[0] != (void *)0x0) {
      FMemory::Free(local_308[0]);
    }
    break;
  case RigElementKey:
    local_168.Object = (FSampleTrack<FRigElementKey> *)local_468.Object;
    local_168.SharedReferenceCount.ReferenceController =
         local_468.SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar40 = TSharedPtr<FSampleTrack<FRigElementKey>_const_,1>::operator->(&local_168);
    (**(code **)(*(longlong *)pFVar40 + 200))(pFVar40,local_2b8,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    FRigBaseMetadata::SetValueData(this_01,local_2b8,0xc);
    break;
  case RigElementKeyArray:
    local_158.Object =
         (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)local_468.Object;
    local_158.SharedReferenceCount.ReferenceController =
         local_468.SharedReferenceCount.ReferenceController;
    if (local_468.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_468.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar41 = TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>_const_,1>
              ::operator->(&local_158);
    (**(code **)(*(longlong *)pFVar41 + 200))(pFVar41,local_2f8,param_1,&this->SampleTrackIndex);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar20.ReferenceController);
    FRigBaseMetadata::SetValueData(this_01,local_2f8,0x10);
    if (local_2f8[0] != (void *)0x0) {
      FMemory::Free(local_2f8[0]);
    }
    break;
  case Invalid:
    if (*(longlong *)param_5 == 0) goto LAB_14a28be00;
    ::FString::FString(&local_2e8,L"Unsupported Metadata Type.");
    local_3e4._4_4_ = 1;
    UE::Core::Private::Function::CheckCallable(*(void **)param_5);
    pcVar6 = *(code **)param_5;
    plVar43 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar43 = *(longlong **)&param_5->field_0x28;
    }
    uVar29 = (**(code **)(*plVar43 + 8))();
    (*pcVar6)(uVar29,local_3e4 + 4,&local_408,&local_2e8);
    local_2c8.Data.AllocatorInstance.Data = local_2e8.Data.AllocatorInstance.Data;
    goto LAB_14a28bdf6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_468.SharedReferenceCount.ReferenceController);
  if (*(longlong *)param_5 != 0) {
    plVar43 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar43 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar43 + 0x10))();
  }
  return true;
}

// RestoreMetaData @ 14a28beb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigReplayTracks::RestoreMetaData
          (FControlRigReplayTracks *this,int param_1,URigHierarchy *param_2,FRigBaseElement *param_3
          ,TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_4)

{
  FName *pFVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  ForAnyElementType FVar8;
  undefined1 local_98 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_90;
  URigHierarchy *local_80;
  TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> local_78;
  
  local_78._40_8_ = 0;
  local_78._0_8_ = *(undefined8 *)param_4;
  local_80 = param_2;
  if (local_78._0_8_ != 0) {
    puVar4 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar4)(puVar4,&local_78.field_0x10);
  }
  GetMetadataNames(this,&local_90,param_1,&this->SampleTrackIndex,&param_3->Key,&local_78);
  iVar3 = local_90.ArrayNum;
  pFVar1 = (FName *)(local_90.AllocatorInstance.Data + (longlong)iVar3 * 8);
  FVar8.Data = local_90.AllocatorInstance.Data;
  bVar7 = true;
  while( true ) {
    if (local_90.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_98);
    }
    if ((FName *)FVar8.Data == pFVar1) break;
    local_78._0_8_ = *(undefined8 *)param_4;
    local_78._40_8_ = 0;
    if (local_78._0_8_ != 0) {
      puVar4 = *(undefined8 **)&param_4->field_0x28;
      if (*(undefined8 **)&param_4->field_0x28 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&param_4->field_0x10;
      }
      (**(code **)*puVar4)(puVar4,&local_78.field_0x10);
    }
    bVar2 = RestoreMetaData(this,param_1,local_80,param_3,(FName *)FVar8.Data,&local_78);
    bVar6 = false;
    if (bVar2) {
      bVar6 = bVar7;
    }
    FVar8.Data = FVar8.Data + 8;
    bVar7 = bVar6;
  }
  if ((FName *)local_90.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (*(longlong *)param_4 != 0) {
    plVar5 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return bVar7;
}

// RestoreMetaData @ 14a28c010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigReplayTracks::RestoreMetaData
          (FControlRigReplayTracks *this,int param_1,URigHierarchy *param_2,
          TArrayView<FRigElementKey,int> *param_3,
          TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  code *local_a8 [5];
  undefined8 *local_80;
  FControlRigReplayTracks *local_78;
  int local_70;
  URigHierarchy *local_68;
  longlong local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_58 = *(longlong *)param_4;
  local_30 = (longlong *)0x0;
  local_78 = this;
  local_70 = param_1;
  local_68 = param_2;
  if (local_58 != 0) {
    puVar2 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_48);
  }
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x60,0x10);
  *local_80 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FControlRigReplayTracks::RestoreMetaData'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_80[2] = local_78;
  *(int *)(local_80 + 3) = local_70;
  local_80[4] = local_68;
  local_80[6] = local_58;
  local_80[0xb] = local_30;
  local_30 = (longlong *)0x0;
  local_80[8] = local_48;
  local_80[9] = uStack_40;
  local_80[10] = local_38;
  if (local_80[6] != 0) {
    local_58 = 0;
  }
  if (local_80 + 2 != (undefined8 *)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FControlRigReplayTracks::RestoreMetaData'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                  ::Call;
  }
  bVar1 = ForEachElement(param_2,param_3,
                         (TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_a8);
  if (local_58 != 0) {
    plVar3 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar3 = local_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar3 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return bVar1;
}

// RestorePose @ 14a28c2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigReplayTracks::RestorePose
          (FControlRigReplayTracks *this,int param_1,URigHierarchy *param_2,FRigBaseElement *param_3
          ,TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_4)

{
  code *pcVar1;
  bool bVar2;
  FSampleTrackBase *pFVar3;
  int iVar4;
  longlong lVar5;
  UScriptStruct *pUVar6;
  FSampleTrackContainer *this_00;
  FName *pFVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FSharedReferencer<1> FVar10;
  float fVar11;
  undefined1 auStackY_148 [32];
  URigHierarchy *local_108;
  TSharedPtr<FSampleTrackBase_const_,1> local_100;
  TTransform<double> local_e8;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_108 = param_2;
  lVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3);
  pUVar6 = FRigTransformElement::StaticStruct();
  if (pUVar6 == (UScriptStruct *)0x0) {
LAB_14a28c360:
    lVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3);
    pUVar6 = FRigCurveElement::StaticStruct();
    if (pUVar6 != (UScriptStruct *)0x0) {
      iVar4 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar4) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14a28c3dc;
    }
    lVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3);
    pUVar6 = FRigReferenceElement::StaticStruct();
    if (pUVar6 == (UScriptStruct *)0x0) goto LAB_14a28c4c4;
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14a28c4c4;
  }
  else {
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14a28c360;
  }
LAB_14a28c3dc:
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  pFVar7 = GetTrackName(this,&param_3->Key);
  lVar5 = (**(code **)(param_3->_padding_ + 0x10))(param_3);
  pUVar6 = FRigCurveElement::StaticStruct();
  if (pUVar6 == (UScriptStruct *)0x0) {
LAB_14a28c501:
    iVar4 = FSampleTrackContainer::GetTrackIndex(this_00,pFVar7);
    if ((iVar4 < 0) || ((this_00->Tracks).ArrayNum <= iVar4)) {
LAB_14a28c5da:
      FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14a28c5dc:
      if (*(longlong *)param_4 != 0) {
        ::FString::FString((FString *)&local_100,L"Track not found.");
        local_108 = (URigHierarchy *)CONCAT44(local_108._4_4_,3);
        UE::Core::Private::Function::CheckCallable(*(void **)param_4);
        pcVar1 = *(code **)param_4;
        plVar9 = (longlong *)&param_4->field_0x10;
        if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
          plVar9 = *(longlong **)&param_4->field_0x28;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        (*pcVar1)(uVar8,&local_108,pFVar7,&local_100);
        if (local_100.Object != (FSampleTrackBase *)0x0) {
          FMemory::Free(local_100.Object);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar10.ReferenceController);
      if (*(longlong *)param_4 != 0) {
        plVar9 = (longlong *)&param_4->field_0x10;
        if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
          plVar9 = *(longlong **)&param_4->field_0x28;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      return false;
    }
    FSampleTrackContainer::GetTrack(this_00,&local_100,iVar4);
    pFVar3 = local_100.Object;
    if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_100.SharedReferenceCount.ReferenceController);
    FVar10.ReferenceController = local_100.SharedReferenceCount.ReferenceController;
    if (pFVar3 == (FSampleTrackBase *)0x0) goto LAB_14a28c5dc;
    (**(code **)(pFVar3->_padding_ + 200))(pFVar3,&local_88,param_1);
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)fStack_84,0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)local_88;
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_84 >> 0x20);
    local_e8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fStack_7c,0);
    local_e8.Rotation.ZW.m128d_f64[0] = (double)fStack_80;
    local_e8.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_7c >> 0x20);
    local_e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fStack_74,0);
    local_e8.Translation.XY.m128d_f64[0] = (double)local_78;
    local_e8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_74 >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84((double)fStack_6c,0);
    local_e8.Translation.ZW.m128d_f64[0] = (double)fStack_70;
    local_e8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_6c >> 0x20);
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fStack_64,0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)local_68;
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_64 >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fStack_5c,0);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)fStack_60;
    local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fStack_5c >> 0x20);
    URigHierarchy::SetLocalTransformByIndex
              (local_108,param_3->Index,&local_e8,false,true,false,false);
  }
  else {
    iVar4 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar6->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14a28c501;
    iVar4 = FSampleTrackContainer::GetTrackIndex(this_00,pFVar7);
    if ((iVar4 < 0) || ((this_00->Tracks).ArrayNum <= iVar4)) goto LAB_14a28c5da;
    FSampleTrackContainer::GetTrack(this_00,&local_100,iVar4);
    pFVar3 = local_100.Object;
    if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_100.SharedReferenceCount.ReferenceController);
    FVar10.ReferenceController = local_100.SharedReferenceCount.ReferenceController;
    if (pFVar3 == (FSampleTrackBase *)0x0) goto LAB_14a28c5dc;
    fVar11 = (float)(**(code **)(pFVar3->_padding_ + 200))(pFVar3,param_1,&this->SampleTrackIndex);
    URigHierarchy::SetCurveValue(local_108,(FRigCurveElement *)param_3,fVar11,false,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
LAB_14a28c4c4:
  if (*(longlong *)param_4 != 0) {
    plVar9 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return true;
}

// RestorePose @ 14a28c670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FControlRigReplayTracks::RestorePose
          (FControlRigReplayTracks *this,int param_1,URigHierarchy *param_2,
          TArrayView<FRigElementKey,int> *param_3,
          TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  code *local_a8 [5];
  undefined8 *local_80;
  FControlRigReplayTracks *local_78;
  int local_70;
  URigHierarchy *local_68;
  longlong local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_58 = *(longlong *)param_4;
  local_30 = (longlong *)0x0;
  local_78 = this;
  local_70 = param_1;
  local_68 = param_2;
  if (local_58 != 0) {
    puVar2 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar2)(puVar2,&local_48);
  }
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x60,0x10);
  *local_80 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FControlRigReplayTracks::RestorePose'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_80[2] = local_78;
  *(int *)(local_80 + 3) = local_70;
  local_80[4] = local_68;
  local_80[6] = local_58;
  local_80[0xb] = local_30;
  local_30 = (longlong *)0x0;
  local_80[8] = local_48;
  local_80[9] = uStack_40;
  local_80[10] = local_38;
  if (local_80[6] != 0) {
    local_58 = 0;
  }
  if (local_80 + 2 != (undefined8 *)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FControlRigReplayTracks::RestorePose'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                  ::Call;
  }
  bVar1 = ForEachElement(param_2,param_3,
                         (TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_a8);
  if (local_58 != 0) {
    plVar3 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar3 = local_30;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar3 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return bVar1;
}

// RestoreVariables @ 14a28c8c0

bool __thiscall
FControlRigReplayTracks::RestoreVariables
          (FControlRigReplayTracks *this,int param_1,URigVMHost *param_2,
          TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *param_3)

{
  code *pcVar1;
  FProperty *this_00;
  bool bVar2;
  ETrackType EVar3;
  ETrackType EVar4;
  undefined1 uVar5;
  FName *pFVar6;
  void *pvVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  TFieldIterator<FProperty> local_a8;
  int local_90;
  undefined4 local_88 [2];
  TSharedPtr<FSampleTrackBase_const_,1> local_80;
  FSampleTrackContainer *local_70;
  URigVMHost *local_68;
  FString local_60 [2];
  
  local_90 = param_1;
  local_68 = param_2;
  local_70 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  local_a8.Struct = (UStruct *)param_2->_padding_;
  bVar10 = true;
  if (local_a8.Struct == (UStruct *)0x0) {
    local_a8.Field = (FField *)0x0;
  }
  else {
    local_a8.Field = (local_a8.Struct)->ChildProperties;
  }
  local_a8.InterfaceIndex = -1;
  local_a8.bIncludeSuper = true;
  local_a8.bIncludeDeprecated = true;
  local_a8.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_a8);
  this_00 = (FProperty *)local_a8.Field;
  do {
    local_a8.Field = (FField *)this_00;
    if (this_00 == (FProperty *)0x0) {
      if (*(longlong *)param_3 != 0) {
        plVar9 = (longlong *)&param_3->field_0x10;
        if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
          plVar9 = *(longlong **)&param_3->field_0x28;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      return bVar10;
    }
    bVar2 = FField::IsNative((FField *)this_00);
    if (!bVar2) {
      pFVar6 = GetTrackName(this,this_00);
      EVar3 = GetTrackTypeFromProperty(this_00);
      FSampleTrackContainer::FindTrack(local_70,&local_80,pFVar6);
      if (local_80.Object == (FSampleTrackBase *)0x0) {
        if (*(longlong *)param_3 != 0) {
          ::FString::FString(local_60,L"Track not found.");
          local_88[0] = 3;
          UE::Core::Private::Function::CheckCallable(*(void **)param_3);
          pcVar1 = *(code **)param_3;
          plVar9 = *(longlong **)&param_3->field_0x28;
          if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
            plVar9 = (longlong *)&param_3->field_0x10;
          }
          uVar8 = (**(code **)(*plVar9 + 8))();
          (*pcVar1)(uVar8,local_88,pFVar6,local_60);
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
        }
        bVar10 = false;
      }
      else {
        EVar4 = (**(code **)((local_80.Object)->_padding_ + 8))();
        if ((EVar4 != EVar3) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Track->GetTrackType() == TrackType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigReplay.cpp"
                               ,0x375,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        pvVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)local_68,0);
        if ((local_80.Object == (FSampleTrackBase *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        (**(code **)((local_80.Object)->_padding_ + 0x68))
                  (local_80.Object,local_90,&this->SampleTrackIndex,this_00,pvVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_80.SharedReferenceCount.ReferenceController);
    }
    local_a8.Field = (FField *)this_00->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_a8);
    this_00 = (FProperty *)local_a8.Field;
  } while( true );
}

// Serialize @ 14a28e760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FControlRigReplayTracks::Serialize(FControlRigReplayTracks *this,FArchive *param_1)

{
  bool bVar1;
  bool bVar2;
  FSampleTrackContainer *pFVar3;
  FSampleTrackIndex *pFVar4;
  undefined1 auStack_58 [32];
  FSampleTrackIndex local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  bVar1 = FSampleTrackHost::Serialize((FSampleTrackHost *)this,param_1);
  bVar2 = false;
  if (bVar1) {
    if ((param_1->field_0x28 & 1) != 0) {
      pFVar3 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
      pFVar4 = FSampleTrackIndex::FSampleTrackIndex(&local_38,pFVar3);
      FSampleTrackIndex::operator=(&this->SampleTrackIndex,pFVar4);
      if (local_38.Samples.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_38.Samples.AllocatorInstance.SecondaryData);
      }
    }
    bVar2 = true;
  }
  return bVar2;
}

// StoreComponent @ 14a298ab0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigReplayTracks::StoreComponent
          (FControlRigReplayTracks *this,URigHierarchy *param_1,FRigBaseComponent *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FSampleTrackContainer *this_00;
  FName *pFVar6;
  longlong lVar7;
  TSharedPtr<FSampleTrack<FInstancedStruct>,1> *pTVar8;
  UScriptStruct *pUVar9;
  FSampleTrack<FInstancedStruct> *pFVar10;
  TSharedPtr<FSampleTrack<FInstancedStruct>,1> local_58;
  TObjectPtr<UScriptStruct_const_>_u_0 local_48;
  void *local_40;
  TSharedPtr<FSampleTrackBase,1> local_38;
  TSharedPtr<FSampleTrack<FInstancedStruct>,1> local_28;
  
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  pFVar6 = GetTrackName(this,&param_2->Key);
  iVar5 = FSampleTrackContainer::GetTrackIndex(this_00,pFVar6);
  if ((iVar5 < 0) || ((this_00->Tracks).ArrayNum <= iVar5)) {
    local_38.Object = (FSampleTrackBase *)0x0;
    local_58.Object = (FSampleTrack<FInstancedStruct> *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FSampleTrackContainer::GetTrack(this_00,&local_38,iVar5);
    local_58.Object = (FSampleTrack<FInstancedStruct> *)local_38.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if ((FSampleTrack<FInstancedStruct> *)local_38.Object != (FSampleTrack<FInstancedStruct> *)0x0)
    {
      cVar3 = (**(code **)((local_38.Object)->_padding_ + 8))(local_38.Object);
      if (cVar3 != '\r') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Track->GetTrackType() == FSampleTrackBase::ETrackType_Struct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigReplay.cpp"
                           ,0x12f,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((FSampleTrack<FInstancedStruct> *)local_38.Object == (FSampleTrack<FInstancedStruct> *)0x0
         ) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lVar1 = (longlong)(local_38.Object)->ScriptStruct;
      lVar7 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
      pFVar10 = (FSampleTrack<FInstancedStruct> *)local_38.Object;
      if (lVar1 != lVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Track->GetScriptStruct() == InComponent->GetScriptStruct()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigReplay.cpp"
                           ,0x130,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      goto LAB_14a298c5b;
    }
  }
  pUVar9 = (UScriptStruct *)(**(code **)(param_2->_padding_ + 0x48))(param_2);
  pTVar8 = FSampleTrackContainer::AddStructTrack(this_00,&local_28,pFVar6,pUVar9);
  pFVar10 = (FSampleTrack<FInstancedStruct> *)local_38.Object;
  if (&local_58 != pTVar8) {
    local_58.Object = pTVar8->Object;
    pTVar8->Object = (FSampleTrack<FInstancedStruct> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_58.SharedReferenceCount,&pTVar8->SharedReferenceCount);
    pFVar10 = local_58.Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FSampleTrackIndex::Update(&this->SampleTrackIndex,this_00);
LAB_14a298c5b:
  pUVar9 = (UScriptStruct *)(**(code **)(param_2->_padding_ + 0x48))(param_2);
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_48.ObjectPtr,pUVar9);
  UScriptStruct::CopyScriptStruct(local_48.DebugPtr,local_40,param_2,1);
  if (pFVar10 == (FSampleTrack<FInstancedStruct> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(*(longlong *)pFVar10 + 0xd8))(pFVar10,&local_48,__real_38d1b717);
  FInstancedStruct::Reset((FInstancedStruct *)&local_48.ObjectPtr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// StoreComponents @ 14a298d00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigReplayTracks::StoreComponents
          (FControlRigReplayTracks *this,URigHierarchy *param_1,FRigBaseElement *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<FRigComponentKey,TSizedDefaultAllocator<32>_> local_58;
  TArrayView<FRigComponentKey,int> local_48;
  code *local_38 [2];
  undefined **local_28;
  FControlRigReplayTracks *local_20;
  URigHierarchy *local_18;
  undefined8 local_10;
  
  FRigBaseElement::GetComponentKeys(param_2,&local_58);
  if (local_58.ArrayNum != 0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::`5'::<lambda_1>,0,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FControlRigReplayTracks::StoreComponents'::__l5::<lambda_1>,void,FRigBaseComponent_*,bool_&>
                  ::Call;
    local_48.DataPtr = (FRigComponentKey *)local_58.AllocatorInstance.Data;
    local_20 = this;
    local_18 = param_1;
    if (local_58.ArrayNum < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ForEachComponent(param_1,&local_48,
                     (TFunction<void___cdecl(FRigBaseComponent_*,bool_&)> *)local_38);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// StoreComponents @ 14a298dd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigReplayTracks::StoreComponents
          (FControlRigReplayTracks *this,URigHierarchy *param_1,
          TArrayView<FRigComponentKey,int> *param_2)

{
  code *local_38 [2];
  undefined **local_28;
  FControlRigReplayTracks *local_20;
  URigHierarchy *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FControlRigReplayTracks::StoreComponents'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FControlRigReplayTracks::StoreComponents'::__l2::<lambda_1>,void,FRigBaseComponent_*,bool_&>
                ::Call;
  local_20 = this;
  local_18 = param_1;
  ForEachComponent(param_1,param_2,(TFunction<void___cdecl(FRigBaseComponent_*,bool_&)> *)local_38);
  return;
}

// StoreHierarchy @ 14a298e20

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigReplayTracks::StoreHierarchy
          (FControlRigReplayTracks *this,URigHierarchy *param_1,
          TArrayView<FRigElementKey,int> *param_2,bool param_3,bool param_4,bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSampleTrackBase *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FSampleTrackContainer *pFVar10;
  TSharedPtr<FSampleTrackBase,1> *pTVar11;
  FRigElementKey *pFVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  ForAnyElementType FVar15;
  undefined1 local_218 [8];
  ForAnyElementType local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_1f8;
  uint local_1e8;
  uint local_1e4;
  FControlRigReplayTracks *local_1e0;
  URigHierarchy *pUStack_1d8;
  undefined1 local_1d0;
  bool bStack_1cf;
  bool bStack_1ce;
  undefined5 uStack_1cd;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FRigElementKey local_1a8;
  TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1> local_198;
  TSharedPtr<FSampleTrack<unsigned_int>,1> local_188;
  TSharedPtr<FSampleTrack<unsigned_int>,1> local_178;
  TSharedPtr<FSampleTrackBase,1> local_168;
  FRigElementKey local_158;
  code *local_148 [5];
  undefined8 *local_120;
  FSampleTrackBase local_118;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if (this->bIsInput == false) {
    pFVar10 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
    FLazyName::Resolve(&TopologyHashName);
    FSampleTrackContainer::FindOrAddTrack<unsigned_int>
              (pFVar10,&local_178,&local_1c8,ETrackType_Uint32,(UScriptStruct *)0x0);
    pFVar10 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
    FLazyName::Resolve(&MetadataVersionName);
    FSampleTrackContainer::FindOrAddTrack<unsigned_int>
              (pFVar10,&local_188,&local_1c0,ETrackType_Uint32,(UScriptStruct *)0x0);
    if ((local_178.Object == (FSampleTrack<unsigned_int> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = *(code **)(*(longlong *)local_178.Object + 0xd8);
    local_1e8 = URigHierarchy::GetTopologyHash(param_1,true,false);
    uVar6 = __real_38d1b717;
    (*pcVar5)(local_178.Object,&local_1e8,__real_38d1b717);
    if ((local_188.Object == (FSampleTrack<unsigned_int> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_1e4 = (uint)param_1->MetadataTagVersion;
    (**(code **)(*(longlong *)local_188.Object + 0xd8))(local_188.Object,&local_1e4,uVar6);
    iVar8 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)this);
    if (iVar8 == 1) {
      pFVar10 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
      FLazyName::Resolve(&ElementKeysName);
      FSampleTrackContainer::FindOrAddTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
                (pFVar10,&local_198,&local_1b8,ETrackType_ElementKeyArray,(UScriptStruct *)0x0);
      pFVar10 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
      FLazyName::Resolve(&ParentIndicesName);
      memset(&local_118,0,200);
      FSampleTrackBase::FSampleTrackBase(&local_118);
      local_70 = (void *)0x0;
      local_118._padding_ =
           (longlong)
           &
           ___7__FSampleTrackShared_V__TArray_HV__TSizedDefaultAllocator__0CA______Internal_ControlRig_UE__6B_
      ;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)0x0,0);
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      local_118._padding_ = (longlong)&___7FSampleTrackBase__6B_;
      if (local_118.AtlasStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AtlasStorage.AllocatorInstance.Data);
      }
      if (local_118.TimeIndicesStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.TimeIndicesStorage.AllocatorInstance.Data);
      }
      if (local_118.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Names.AllocatorInstance.Data);
      }
      if ((longlong *)local_118._padding_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_118._padding_ + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*(longlong *)local_118._padding_ + 8))(local_118._padding_,1);
        }
      }
      pTVar11 = FSampleTrackContainer::FindOrAddTrack
                          (pFVar10,&local_168,&local_1b0,ETrackType_Int32Array,(UScriptStruct *)0x0)
      ;
      pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar11->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_168.SharedReferenceCount.ReferenceController);
      URigHierarchy::GetAllKeys(param_1,&local_1f8,false,All);
      FilterElementKeys(&local_1f8);
      local_210.Data = (FScriptContainerElement *)0x0;
      local_208 = 0;
      if (local_1f8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_1f8.ArrayNum);
      }
      if (0 < local_1f8.ArrayNum) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_1f8.ArrayNum,&local_210,0,(int *)((longlong)&local_208 + 4));
      }
      iVar8 = local_1f8.ArrayNum;
      pFVar2 = local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 0xc;
      FVar14.Data = local_1f8.AllocatorInstance.Data;
      while( true ) {
        if (local_1f8.ArrayNum != iVar8) {
          local_218[0] = 0;
          `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_218);
        }
        if (FVar14.Data == pFVar2) break;
        if (*FVar14.Data == (FScriptContainerElement)0x40) {
          local_200 = 0xffffffff;
          if (((local_210.Data <= (FScriptContainerElement *)&local_200) &&
              ((FScriptContainerElement *)&local_200 <
               local_210.Data + (longlong)local_208._4_4_ * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((int)local_208 == local_208._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_210,(int *)((longlong)&local_208 + 4));
            local_208 = CONCAT44(local_208._4_4_,iVar9);
          }
          lVar13 = (longlong)(int)local_208;
          FVar14.Data = FVar14.Data + 0xc;
          local_208 = CONCAT44(local_208._4_4_,(int)local_208 + 1);
          *(undefined4 *)(local_210.Data + lVar13 * 4) = local_200;
        }
        else {
          local_1a8._0_8_ = *(undefined8 *)FVar14.Data;
          local_1a8.Name.Number = *(uint *)(FVar14.Data + 8);
          pFVar12 = URigHierarchy::GetDefaultParent(param_1,&local_158,&local_1a8);
          if (local_1f8.AllocatorInstance.Data !=
              local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 0xc) {
            FVar15.Data = local_1f8.AllocatorInstance.Data;
            do {
              if ((*(FName *)(FVar15.Data + 4) == pFVar12->Name) &&
                 (*FVar15.Data == (FScriptContainerElement)pFVar12->Type)) {
                local_1fc = (undefined4)
                            (((longlong)FVar15.Data - (longlong)local_1f8.AllocatorInstance.Data) /
                            0xc);
                goto LAB_14a299291;
              }
              FVar15.Data = FVar15.Data + 0xc;
            } while (FVar15.Data !=
                     local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayNum * 0xc);
          }
          local_1fc = 0xffffffff;
LAB_14a299291:
          if (((local_210.Data <= (FScriptContainerElement *)&local_1fc) &&
              ((FScriptContainerElement *)&local_1fc <
               local_210.Data + (longlong)local_208._4_4_ * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (int)local_208;
          if ((int)local_208 == local_208._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_210,(int *)((longlong)&local_208 + 4));
          }
          FVar14.Data = FVar14.Data + 0xc;
          local_208 = CONCAT44(local_208._4_4_,iVar9 + 1);
          *(undefined4 *)(local_210.Data + (longlong)iVar9 * 4) = local_1fc;
        }
      }
      if ((local_198.Object ==
           (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*(longlong *)local_198.Object + 0xd8))(local_198.Object,&local_1f8,uVar6);
      if ((pFVar4 == (FSampleTrackBase *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(pFVar4->_padding_ + 0xd8))(pFVar4,&local_210,uVar6);
      if (local_210.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data);
      }
      if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
  }
  bStack_1cf = param_4;
  bStack_1ce = param_5;
  local_148[0] = (code *)0x0;
  local_1e0 = this;
  pUStack_1d8 = param_1;
  local_1d0 = param_3;
  local_120 = FMemory::Malloc(0x20,8);
  *local_120 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FControlRigReplayTracks::StoreHierarchy'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  local_120[1] = local_1e0;
  local_120[2] = pUStack_1d8;
  local_120[3] = CONCAT53(uStack_1cd,CONCAT12(bStack_1ce,CONCAT11(bStack_1cf,local_1d0)));
  if (local_120 + 1 != (undefined8 *)0x0) {
    local_148[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FControlRigReplayTracks::StoreHierarchy'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                   ::Call;
  }
  ForEachElement(param_1,param_2,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_148);
  return;
}

// StoreInteraction @ 14a2994f0

void __thiscall
FControlRigReplayTracks::StoreInteraction
          (FControlRigReplayTracks *this,uchar param_1,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FSampleTrackContainer *pFVar4;
  uint local_res10 [4];
  FName local_res20;
  FName local_58;
  TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1> local_50;
  TSharedPtr<FSampleTrack<unsigned_int>,1> local_40 [2];
  
  pFVar4 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  FLazyName::Resolve(&InteractionTypeName);
  FSampleTrackContainer::FindOrAddTrack<unsigned_int>
            (pFVar4,local_40,&local_res20,ETrackType_Uint32,(UScriptStruct *)0x0);
  pFVar4 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  FLazyName::Resolve(&ElementsBeingInteractedName);
  FSampleTrackContainer::FindOrAddTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
            (pFVar4,&local_50,&local_58,ETrackType_ElementKeyArray,(UScriptStruct *)0x0);
  if (local_40[0].Object == (FSampleTrack<unsigned_int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar2 = __real_38d1b717;
  local_res10[0] = (uint)param_1;
  (**(code **)(*(longlong *)local_40[0].Object + 0xd8))
            (local_40[0].Object,local_res10,__real_38d1b717);
  if (local_50.Object == (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)local_50.Object + 0xd8))(local_50.Object,param_2,uVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40[0].SharedReferenceCount.ReferenceController);
  return;
}

// StoreMetaData @ 14a299660

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigReplayTracks::StoreMetaData
          (FControlRigReplayTracks *this,URigHierarchy *param_1,FRigBaseElement *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FSampleTrackBase *pFVar2;
  bool bVar3;
  FSampleTrackContainer *this_00;
  FName *pFVar4;
  FString *pFVar5;
  TSharedPtr<FSampleTrackBase,1> *pTVar6;
  FRigBaseMetadata *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined1 local_res20 [8];
  FName local_68 [2];
  FString local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<FSampleTrackBase,1> local_38;
  
  bVar3 = URigHierarchy::HasMetadata(param_1,param_2);
  if (bVar3) {
    this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
    local_58.Data.ArrayNum = (param_2->Key).Name.Number;
    local_58.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&param_2->Key;
    URigHierarchy::GetMetadataNames(param_1,&local_48,(FRigElementKey *)&local_58);
    pFVar4 = GetTrackName(this,&param_2->Key);
    pFVar5 = ::FName::ToString(pFVar4,(FString *)&local_38);
    ::FString::ConcatFC(&local_58,pFVar5,L"MetadataNames");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
    }
    ::FName::FName(local_68,(wchar_t *)FVar9.Data);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Object != (FSampleTrackBase *)0x0) {
      FMemory::Free(local_38.Object);
    }
    pTVar6 = FSampleTrackContainer::FindOrAddTrack
                       (this_00,&local_38,local_68,ETrackType_NameArray,(UScriptStruct *)0x0);
    pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar6->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (pFVar2 != (FSampleTrackBase *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0xd8))(pFVar2,&local_48,__real_38d1b717);
    }
    iVar8 = local_48.ArrayNum;
    pFVar4 = (FName *)(local_48.AllocatorInstance.Data + (longlong)iVar8 * 8);
    FVar9.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if (local_48.ArrayNum != iVar8) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if ((FName *)FVar9.Data == pFVar4) break;
      pFVar7 = FRigBaseElement::GetMetadata(param_2,(FName *)FVar9.Data,Invalid);
      if (pFVar7 != (FRigBaseMetadata *)0x0) {
        StoreMetaData(this,param_1,param_2,pFVar7);
      }
      FVar9.Data = FVar9.Data + 8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// StoreMetaData @ 14a299830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigReplayTracks::StoreMetaData
          (FControlRigReplayTracks *this,URigHierarchy *param_1,FRigBaseElement *param_2,
          FRigBaseMetadata *param_3)

{
  TRotator<double> *pTVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  FSampleTrackBase *pFVar17;
  FSharedReferencer<1> FVar18;
  bool bVar19;
  ETrackType EVar20;
  int iVar21;
  int iVar22;
  FSampleTrackContainer *this_00;
  FName *pFVar23;
  TSharedPtr<FSampleTrackBase,1> *pTVar24;
  TVector<double> *pTVar25;
  longlong lVar26;
  FSampleTrack<FName> *pFVar27;
  TRotator<double> *this_01;
  ETrackType EVar28;
  double *pdVar29;
  double *pdVar30;
  double *pdVar31;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FSampleTrackBase,1> local_178;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165 [5];
  ForAnyElementType local_160;
  undefined8 local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  ForAnyElementType local_140;
  undefined8 local_138;
  ForAnyElementType local_130;
  undefined8 local_128;
  FName local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  TSharedPtr<FSampleTrackBase,1> local_e8;
  TSharedPtr<FSampleTrack<FName>,1> local_d8;
  TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1> local_c8;
  TVector<double> local_b8;
  TVector<double> local_a0;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  pFVar23 = GetTrackName(this,&param_2->Key,&param_3->Name);
  local_120 = *pFVar23;
  switch(param_3->Type) {
  case Bool:
    EVar28 = ETrackType_Bool;
    break;
  case BoolArray:
    EVar28 = ETrackType_BoolArray;
    break;
  case Float:
    EVar28 = ETrackType_Float;
    break;
  case FloatArray:
    EVar28 = ETrackType_FloatArray;
    break;
  case Int32:
    EVar28 = ETrackType_Int32;
    break;
  case Int32Array:
    EVar28 = ETrackType_Int32Array;
    break;
  case Name:
    EVar28 = ETrackType_Name;
    break;
  case NameArray:
    EVar28 = ETrackType_NameArray;
    break;
  case Vector:
  case Rotator:
    EVar28 = ETrackType_Vector3f;
    break;
  case VectorArray:
  case RotatorArray:
    EVar28 = ETrackType_Vector3fArray;
    break;
  case Quat:
    EVar28 = ETrackType_Quatf;
    break;
  case QuatArray:
    EVar28 = ETrackType_QuatfArray;
    break;
  case Transform:
    EVar28 = ETrackType_Transformf;
    break;
  case TransformArray:
    EVar28 = ETrackType_TransformfArray;
    break;
  case LinearColor:
    EVar28 = ETrackType_LinearColor;
    break;
  case LinearColorArray:
    EVar28 = ETrackType_LinearColorArray;
    break;
  case RigElementKey:
    EVar28 = ETrackType_ElementKey;
    break;
  case RigElementKeyArray:
    EVar28 = ETrackType_ElementKeyArray;
    break;
  default:
    EVar28 = ETrackType_Unknown;
  }
  FSampleTrackContainer::FindTrack(this_00,&local_178,&local_120);
  iVar22 = 0;
  if ((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) {
    pTVar24 = FSampleTrackContainer::AddTrack
                        (this_00,&local_e8,&local_120,EVar28,(UScriptStruct *)0x0);
    if (&local_178 != pTVar24) {
      local_178.Object = pTVar24->Object;
      pTVar24->Object = (FSampleTrackBase *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_178.SharedReferenceCount,&pTVar24->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    FSampleTrackIndex::Update(&this->SampleTrackIndex,this_00);
  }
  else {
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar20 = (**(code **)((local_178.Object)->_padding_ + 8))();
    if ((EVar20 != EVar28) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Track->GetTrackType() == TrackType",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\ControlRigReplay.cpp"
                            ,0x1a1,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FVar18.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
  pFVar17 = local_178.Object;
  switch(param_3->Type) {
  case Bool:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,param_3 + 1,__real_38d1b717);
    break;
  case BoolArray:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,param_3 + 1,__real_38d1b717);
    break;
  case Float:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,param_3 + 1,__real_38d1b717);
    break;
  case FloatArray:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,param_3 + 1,__real_38d1b717);
    break;
  case Int32:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,param_3 + 1,__real_38d1b717);
    break;
  case Int32Array:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,param_3 + 1,__real_38d1b717);
    break;
  case Name:
    local_d8.Object = (FSampleTrack<FName> *)local_178.Object;
    local_d8.SharedReferenceCount.ReferenceController =
         local_178.SharedReferenceCount.ReferenceController;
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar27 = TSharedPtr<FSampleTrack<FName>,1>::operator->(&local_d8);
    goto LAB_14a29a4ef;
  case NameArray:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,param_3 + 1,__real_38d1b717);
    break;
  case Vector:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_118 = (float)(double)param_3[1]._padding_;
    local_114 = (float)(double)param_3[1].Name;
    local_110 = (float)*(double *)&param_3[1].Type;
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,&local_118,__real_38d1b717);
    break;
  case VectorArray:
    uVar6 = param_3[1].Name.ComparisonIndex.Value;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    local_158._0_4_ = iVar22;
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar6,&local_160,0,(int *)((longlong)&local_158 + 4));
    }
    uVar6 = param_3[1].Name.ComparisonIndex.Value;
    pdVar30 = (double *)param_3[1]._padding_;
    pdVar29 = pdVar30 + (longlong)(int)uVar6 * 3;
    iVar22 = (int)local_158;
    while( true ) {
      iVar21 = iVar22;
      if (param_3[1].Name.ComparisonIndex.Value != uVar6) {
        local_168 = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_168);
        iVar21 = (int)local_158;
      }
      FVar18.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
      pFVar17 = local_178.Object;
      if (pdVar30 == pdVar29) break;
      if (iVar21 == local_158._4_4_) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_160,(int *)((longlong)&local_158 + 4));
      }
      iVar22 = iVar21 + 1;
      lVar26 = (longlong)iVar21;
      local_158 = CONCAT44(local_158._4_4_,iVar22);
      dVar3 = pdVar30[2];
      pdVar31 = pdVar30 + 1;
      dVar4 = *pdVar30;
      pdVar30 = pdVar30 + 3;
      *(float *)(local_160.Data + lVar26 * 0xc + 4) = (float)*pdVar31;
      *(float *)(local_160.Data + lVar26 * 0xc) = (float)dVar4;
      *(float *)(local_160.Data + lVar26 * 0xc + 8) = (float)dVar3;
    }
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,&local_160,__real_38d1b717);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar18.ReferenceController);
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    goto switchD_14a2999f0_default;
  case Rotator:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = *(code **)(pFVar17->_padding_ + 0xd8);
    pTVar25 = UE::Math::TRotator<double>::Euler((TRotator<double> *)(param_3 + 1),&local_b8);
    local_104 = (float)(pTVar25->field0_0x0)._s_0.Z;
    local_108 = (float)(pTVar25->field0_0x0)._s_0.Y;
    local_10c = (float)(pTVar25->field0_0x0)._s_0.X;
    (*pcVar7)(pFVar17,&local_10c,__real_38d1b717);
    break;
  case RotatorArray:
    uVar6 = param_3[1].Name.ComparisonIndex.Value;
    local_130.Data = (FScriptContainerElement *)0x0;
    local_128 = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar6,&local_130,0,(int *)((longlong)&local_128 + 4));
    }
    uVar6 = param_3[1].Name.ComparisonIndex.Value;
    this_01 = (TRotator<double> *)param_3[1]._padding_;
    pTVar1 = this_01 + (int)uVar6;
    while( true ) {
      if (param_3[1].Name.ComparisonIndex.Value != uVar6) {
        local_167 = 0;
        `TCheckedPointerIterator<UE::Math::TRotator<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_167);
      }
      FVar18.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
      pFVar17 = local_178.Object;
      if (this_01 == pTVar1) break;
      pTVar25 = UE::Math::TRotator<double>::Euler(this_01,&local_a0);
      iVar22 = (int)local_128;
      if ((int)local_128 == local_128._4_4_) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&local_130,(int *)((longlong)&local_128 + 4));
      }
      this_01 = this_01 + 1;
      local_128 = CONCAT44(local_128._4_4_,iVar22 + 1);
      dVar3 = (pTVar25->field0_0x0)._s_0.Z;
      dVar4 = (pTVar25->field0_0x0)._s_0.X;
      lVar26 = (longlong)iVar22;
      *(float *)(local_130.Data + lVar26 * 0xc + 4) = (float)(pTVar25->field0_0x0)._s_0.Y;
      *(float *)(local_130.Data + lVar26 * 0xc) = (float)dVar4;
      *(float *)(local_130.Data + lVar26 * 0xc + 8) = (float)dVar3;
    }
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,&local_130,__real_38d1b717);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar18.ReferenceController);
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
    goto switchD_14a2999f0_default;
  case Quat:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_f8 = (float)(double)param_3[1]._padding_;
    local_f4 = (float)(double)param_3[1].Name;
    local_f0 = (float)*(double *)&param_3[1].Type;
    local_ec = (float)(double)param_3[1].ValueProperty;
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,&local_f8,__real_38d1b717);
    break;
  case QuatArray:
    uVar6 = param_3[1].Name.ComparisonIndex.Value;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148 = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    local_148._0_4_ = iVar22;
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar6,&local_150,0,(int *)((longlong)&local_148 + 4));
    }
    uVar6 = param_3[1].Name.ComparisonIndex.Value;
    pdVar29 = (double *)param_3[1]._padding_;
    pdVar30 = pdVar29 + (longlong)(int)uVar6 * 4;
    iVar22 = (int)local_148;
    while( true ) {
      iVar21 = iVar22;
      if (param_3[1].Name.ComparisonIndex.Value != uVar6) {
        local_166 = 0;
        `TCheckedPointerIterator<UE::Math::TQuat<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_166);
        iVar21 = (int)local_148;
      }
      FVar18.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
      pFVar17 = local_178.Object;
      if (pdVar29 == pdVar30) break;
      if (iVar21 == local_148._4_4_) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&local_150,(int *)((longlong)&local_148 + 4));
      }
      iVar22 = iVar21 + 1;
      lVar26 = (longlong)iVar21;
      local_148 = CONCAT44(local_148._4_4_,iVar22);
      dVar3 = pdVar29[3];
      dVar4 = pdVar29[2];
      pdVar31 = pdVar29 + 1;
      dVar5 = *pdVar29;
      pdVar29 = pdVar29 + 4;
      *(float *)(local_150.Data + lVar26 * 0x10 + 4) = (float)*pdVar31;
      *(float *)(local_150.Data + lVar26 * 0x10) = (float)dVar5;
      *(float *)(local_150.Data + lVar26 * 0x10 + 8) = (float)dVar4;
      *(float *)(local_150.Data + lVar26 * 0x10 + 0xc) = (float)dVar3;
    }
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,&local_150,__real_38d1b717);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar18.ReferenceController);
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
    goto switchD_14a2999f0_default;
  case Transform:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_88 = (float)(double)param_3[1]._padding_;
    fStack_84 = (float)(double)param_3[1].Name;
    local_78 = (float)(double)param_3[2]._padding_;
    fStack_74 = (float)(double)param_3[2].Name;
    fStack_80 = (float)*(double *)&param_3[1].Type;
    fStack_7c = (float)(double)param_3[1].ValueProperty;
    fStack_70 = (float)*(double *)&param_3[2].Type;
    fStack_6c = (float)(double)param_3[2].ValueProperty;
    local_68 = (float)(double)param_3[3]._padding_;
    fStack_64 = (float)(double)param_3[3].Name;
    fStack_60 = (float)*(double *)&param_3[3].Type;
    fStack_5c = (float)(double)param_3[3].ValueProperty;
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,&local_88,__real_38d1b717);
    break;
  case TransformArray:
    uVar6 = param_3[1].Name.ComparisonIndex.Value;
    local_140.Data = (FScriptContainerElement *)0x0;
    local_138 = 0;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    local_138._0_4_ = iVar22;
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,uVar6,&local_140,0,(int *)((longlong)&local_138 + 4));
    }
    pdVar30 = (double *)param_3[1]._padding_;
    uVar6 = param_3[1].Name.ComparisonIndex.Value;
    pdVar29 = pdVar30 + 4;
    pdVar31 = pdVar30 + (longlong)(int)uVar6 * 0xc;
    iVar22 = (int)local_138;
    while( true ) {
      iVar21 = iVar22;
      if (param_3[1].Name.ComparisonIndex.Value != uVar6) {
        local_165[0] = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_165);
        iVar21 = (int)local_138;
      }
      FVar18.ReferenceController = local_178.SharedReferenceCount.ReferenceController;
      pFVar17 = local_178.Object;
      if (pdVar30 == pdVar31) break;
      if (iVar21 == local_138._4_4_) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1030,&local_140,(int *)((longlong)&local_138 + 4));
      }
      iVar22 = iVar21 + 1;
      local_138 = CONCAT44(local_138._4_4_,iVar22);
      dVar3 = pdVar30[2];
      dVar4 = pdVar30[3];
      lVar26 = (longlong)iVar21;
      dVar5 = *pdVar30;
      dVar8 = pdVar30[1];
      pdVar30 = pdVar30 + 0xc;
      dVar9 = pdVar29[2];
      dVar10 = pdVar29[3];
      dVar11 = *pdVar29;
      dVar12 = pdVar29[1];
      dVar13 = pdVar29[6];
      dVar14 = pdVar29[7];
      dVar15 = pdVar29[4];
      dVar16 = pdVar29[5];
      pdVar29 = pdVar29 + 0xc;
      pFVar2 = local_140.Data + lVar26 * 0x30;
      *(float *)pFVar2 = (float)dVar5;
      *(float *)(pFVar2 + 4) = (float)dVar8;
      *(float *)(pFVar2 + 8) = (float)dVar3;
      *(float *)(pFVar2 + 0xc) = (float)dVar4;
      pFVar2 = local_140.Data + lVar26 * 0x30 + 0x10;
      *(float *)pFVar2 = (float)dVar11;
      *(float *)(pFVar2 + 4) = (float)dVar12;
      *(float *)(pFVar2 + 8) = (float)dVar9;
      *(float *)(pFVar2 + 0xc) = (float)dVar10;
      pFVar2 = local_140.Data + lVar26 * 0x30 + 0x20;
      *(float *)pFVar2 = (float)dVar15;
      *(float *)(pFVar2 + 4) = (float)dVar16;
      *(float *)(pFVar2 + 8) = (float)dVar13;
      *(float *)(pFVar2 + 0xc) = (float)dVar14;
    }
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,&local_140,__real_38d1b717);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar18.ReferenceController);
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
    goto switchD_14a2999f0_default;
  case LinearColor:
  case LinearColorArray:
  case RigElementKey:
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((FSampleTrack<FName> *)local_178.Object == (FSampleTrack<FName> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (**(code **)(pFVar17->_padding_ + 0xd8))(pFVar17,param_3 + 1,__real_38d1b717);
    break;
  case RigElementKeyArray:
    local_c8.Object =
         (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)local_178.Object;
    local_c8.SharedReferenceCount.ReferenceController =
         local_178.SharedReferenceCount.ReferenceController;
    if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar27 = (FSampleTrack<FName> *)
              TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1>::
              operator->(&local_c8);
LAB_14a29a4ef:
    (**(code **)(*(longlong *)pFVar27 + 0xd8))(pFVar27,param_3 + 1,__real_38d1b717);
    break;
  default:
    goto switchD_14a2999f0_default;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar18.ReferenceController);
switchD_14a2999f0_default:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  return;
}

// StoreMetaData @ 14a29a620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigReplayTracks::StoreMetaData
          (FControlRigReplayTracks *this,URigHierarchy *param_1,
          TArrayView<FRigElementKey,int> *param_2)

{
  code *local_38 [2];
  undefined **local_28;
  FControlRigReplayTracks *local_20;
  URigHierarchy *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FControlRigReplayTracks::StoreMetaData'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FControlRigReplayTracks::StoreMetaData'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                ::Call;
  local_20 = this;
  local_18 = param_1;
  ForEachElement(param_1,param_2,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_38);
  return;
}

// StorePose @ 14a29a670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigReplayTracks::StorePose
          (FControlRigReplayTracks *this,URigHierarchy *param_1,FRigBaseElement *param_2)

{
  FSampleTrackBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  UScriptStruct *pUVar7;
  FSampleTrackContainer *this_00;
  FName *this_01;
  UClass *pUVar8;
  FString *pFVar9;
  TSharedPtr<FSampleTrackBase,1> *pTVar10;
  TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar11;
  ForElementType<FRigElementKey> FVar12;
  TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>,1> *pTVar13;
  FSharedReferencer<1> FVar14;
  ForAnyElementType FVar15;
  longlong *plVar16;
  ForElementType<FRigElementKey> _Src;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [24];
  FSharedReferencer<1> FStack_220;
  float local_218 [2];
  FName local_210;
  FString local_208;
  TSharedPtr<FSampleTrackBase,1> local_1f8;
  FString local_1e8;
  TSharedPtr<FSampleTrackBase,1> local_1d8;
  TSharedPtr<FSampleTrackBase,1> local_1c8;
  TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>,1> local_1b8;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  TTransform<double> local_178;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_118;
  TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  local_f8;
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  void *local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  lVar6 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
  pUVar7 = FRigTransformElement::StaticStruct();
  if (pUVar7 == (UScriptStruct *)0x0) {
LAB_14a29a6dc:
    lVar6 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
    pUVar7 = FRigCurveElement::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar5 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar5) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar7->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14a29a760;
    }
    lVar6 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
    pUVar7 = FRigConnectorElement::StaticStruct();
    if (pUVar7 != (UScriptStruct *)0x0) {
      iVar5 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar6 + 0x38) < iVar5) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar7->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_14a29a760;
    }
    bVar3 = FRigBaseElement::IsA<FRigReferenceElement>(param_2);
    if (!bVar3) {
      return;
    }
  }
  else {
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14a29a6dc;
  }
LAB_14a29a760:
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  this_01 = GetTrackName(this,&param_2->Key);
  lVar6 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
  pUVar7 = FRigConnectorElement::StaticStruct();
  if (pUVar7 != (UScriptStruct *)0x0) {
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (param_2 != (FRigBaseElement *)0x0)) {
      if (this->bIsInput == false) {
        return;
      }
      plVar16 = (longlong *)param_1->_padding_;
      if (plVar16 == (longlong *)0x0) {
LAB_14a29a81a:
        plVar16 = (longlong *)0x0;
      }
      else {
        pUVar8 = UControlRig::StaticClass();
        iVar5 = (int)pUVar8->_padding_;
        if ((*(int *)(plVar16[2] + 0x38) < iVar5) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(plVar16[2] + 0x30) + (longlong)iVar5 * 8) !=
            &pUVar8->_padding_)) goto LAB_14a29a81a;
      }
      if (plVar16 == (longlong *)0x0) {
        return;
      }
      pFVar9 = ::FName::ToString(this_01,&local_1e8);
      ::FString::ConcatFC(&local_208,pFVar9,L"ConnectorTargets");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_208.Data.ArrayNum != 0) {
        FVar15.Data = local_208.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_210,(wchar_t *)FVar15.Data);
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      pTVar10 = FSampleTrackContainer::FindOrAddTrack
                          (this_00,&local_1d8,&local_210,ETrackType_ElementKeyArray,
                           (UScriptStruct *)0x0);
      FVar14.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
      pFVar1 = pTVar10->Object;
      if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar14.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.SharedReferenceCount.ReferenceController);
      local_238._0_8_ = (FScriptContainerElement *)0x0;
      local_238[8] = '\0';
      local_238[9] = '\0';
      local_238[10] = '\0';
      local_238[0xb] = '\0';
      local_238._12_4_ = 0;
      (**(code **)(*plVar16 + 0x390))(plVar16,&local_f8);
      pTVar11 = TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                ::Find(&local_f8,&param_2->Key);
      if (pTVar11 !=
          (TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)0x0)
      {
        FVar12 = (ForElementType<FRigElementKey>)
                 FRigElementKeyRedirector::Convert(&local_118,pTVar11);
        if (((ForElementType<FRigElementKey>)local_238 == FVar12) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = *(int *)((longlong)FVar12 + 0x18);
        if (iVar5 != 0) {
          iVar4 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xc,4,iVar5,(ForAnyElementType *)local_238,(int *)(local_238 + 8),
                             (int *)(local_238 + 0xc));
          _Src = FVar12;
          if (*(ForElementType<FRigElementKey> *)((longlong)FVar12 + 0x10) !=
              (ForElementType<FRigElementKey>)0x0) {
            _Src = *(ForElementType<FRigElementKey> *)((longlong)FVar12 + 0x10);
          }
          memmove((FScriptContainerElement *)(local_238._0_8_ + (longlong)iVar4 * 0xc),(void *)_Src,
                  (longlong)iVar5 * 0xc);
          *(int *)((longlong)FVar12 + 0x18) = 0;
        }
        if (local_118.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
          FMemory::Free((void *)local_118.AllocatorInstance.SecondaryData);
        }
      }
      if ((pFVar1 == (FSampleTrackBase *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(pFVar1->_padding_ + 0xd8))(pFVar1,local_238,__real_38d1b717);
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8);
      local_f8.Pairs.HashSize = 0;
      if (local_f8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_f8.Pairs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_f8);
      if ((FScriptContainerElement *)local_238._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_238._0_8_);
      }
      goto LAB_14a29ac68;
    }
  }
  lVar6 = (**(code **)(param_2->_padding_ + 0x10))(param_2);
  pUVar7 = FRigCurveElement::StaticStruct();
  if (pUVar7 != (UScriptStruct *)0x0) {
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (param_2 != (FRigBaseElement *)0x0)) {
      pTVar10 = FSampleTrackContainer::FindOrAddTrack
                          (this_00,&local_1c8,this_01,ETrackType_Float,(UScriptStruct *)0x0);
      FVar14.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
      pFVar1 = pTVar10->Object;
      if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar14.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      if ((pFVar1 == (FSampleTrackBase *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = *(code **)(pFVar1->_padding_ + 0xd8);
      local_218[0] = URigHierarchy::GetCurveValue(param_1,(FRigCurveElement *)param_2);
      (*pcVar2)(pFVar1,local_218,__real_38d1b717);
      goto LAB_14a29ac68;
    }
  }
  iVar5 = FSampleTrackContainer::GetTrackIndex(this_00,this_01);
  if ((iVar5 < 0) || ((this_00->Tracks).ArrayNum <= iVar5)) {
    local_238._16_8_ = (ForElementType<FRigElementKey>)0x0;
    FStack_220.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1f8.Object = (FSampleTrackBase *)(ForElementType<FRigElementKey>)0x0;
    local_1f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14a29ab7c:
    pTVar13 = FSampleTrackContainer::AddTransformTrack(this_00,&local_1b8,this_01);
    FVar12 = (ForElementType<FRigElementKey>)local_1f8.Object;
    FVar14.ReferenceController = local_1f8.SharedReferenceCount.ReferenceController;
    if ((TSharedPtr<FSampleTrack<UE::Math::TTransform<float>_>,1> *)(local_238 + 0x10) != pTVar13) {
      local_238._16_8_ = pTVar13->Object;
      pTVar13->Object = (FSampleTrack<UE::Math::TTransform<float>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_220,&pTVar13->SharedReferenceCount);
      FVar12 = (ForElementType<FRigElementKey>)local_238._16_8_;
      FVar14.ReferenceController = FStack_220.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8.SharedReferenceCount.ReferenceController);
    FSampleTrackIndex::Update(&this->SampleTrackIndex,this_00);
  }
  else {
    FSampleTrackContainer::GetTrack(this_00,&local_1f8,iVar5);
    local_238._16_8_ = local_1f8.Object;
    FStack_220.ReferenceController = local_1f8.SharedReferenceCount.ReferenceController;
    if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
    FVar12 = (ForElementType<FRigElementKey>)local_1f8.Object;
    FVar14.ReferenceController = local_1f8.SharedReferenceCount.ReferenceController;
    if ((ForElementType<FRigElementKey>)local_1f8.Object == (ForElementType<FRigElementKey>)0x0)
    goto LAB_14a29ab7c;
  }
  URigHierarchy::GetLocalTransformByIndex(param_1,&local_178,param_2->Index,false);
  if ((FVar12 == (ForElementType<FRigElementKey>)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_1a8 = (float)local_178.Rotation.XY.m128d_f64[0];
  fStack_1a4 = (float)local_178.Rotation.XY.m128d_f64[1];
  local_198 = (float)local_178.Translation.XY.m128d_f64[0];
  fStack_194 = (float)local_178.Translation.XY.m128d_f64[1];
  fStack_1a0 = (float)local_178.Rotation.ZW.m128d_f64[0];
  fStack_19c = (float)local_178.Rotation.ZW.m128d_f64[1];
  fStack_190 = (float)local_178.Translation.ZW.m128d_f64[0];
  fStack_18c = (float)local_178.Translation.ZW.m128d_f64[1];
  local_188 = (float)local_178.Scale3D.XY.m128d_f64[0];
  fStack_184 = (float)local_178.Scale3D.XY.m128d_f64[1];
  fStack_180 = (float)local_178.Scale3D.ZW.m128d_f64[0];
  fStack_17c = (float)local_178.Scale3D.ZW.m128d_f64[1];
  (**(code **)(*(longlong *)FVar12 + 0xd8))(FVar12,&local_1a8,__real_38d1b717);
LAB_14a29ac68:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  return;
}

// StorePose @ 14a29acb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FControlRigReplayTracks::StorePose
          (FControlRigReplayTracks *this,URigHierarchy *param_1,
          TArrayView<FRigElementKey,int> *param_2)

{
  code *local_38 [2];
  undefined **local_28;
  FControlRigReplayTracks *local_20;
  URigHierarchy *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FControlRigReplayTracks::StorePose'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FControlRigReplayTracks::StorePose'::__l2::<lambda_1>,void,FRigBaseElement_*,bool_&>
                ::Call;
  local_20 = this;
  local_18 = param_1;
  ForEachElement(param_1,param_2,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_38);
  return;
}

// StoreRigVMEvent @ 14a29ad00

void __thiscall
FControlRigReplayTracks::StoreRigVMEvent(FControlRigReplayTracks *this,FName *param_1)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSampleTrackBase *pFVar4;
  code *pcVar5;
  bool bVar6;
  FSampleTrackContainer *this_00;
  TSharedPtr<FSampleTrackBase,1> *pTVar7;
  FName local_res18 [2];
  TSharedPtr<FSampleTrackBase,1> local_e8;
  FSampleTrackBase local_d8;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  FLazyName::Resolve(&RigVMEventName);
  memset(&local_d8,0,200);
  FSampleTrackBase::FSampleTrackBase(&local_d8);
  local_d8._padding_ = (longlong)&___7FSampleTrackBase__6B_;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_d8.AtlasStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AtlasStorage.AllocatorInstance.Data);
  }
  if (local_d8.TimeIndicesStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.TimeIndicesStorage.AllocatorInstance.Data);
  }
  if (local_d8.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Names.AllocatorInstance.Data);
  }
  if ((longlong *)local_d8._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(local_d8._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)local_d8._padding_ + 8))(local_d8._padding_,1);
    }
  }
  pTVar7 = FSampleTrackContainer::FindOrAddTrack
                     (this_00,&local_e8,local_res18,ETrackType_Name,(UScriptStruct *)0x0);
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar7->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (pFVar4 == (FSampleTrackBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (**(code **)(pFVar4->_padding_ + 0xd8))(pFVar4,param_1,__real_38d1b717);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// StoreVariables @ 14a29ae90

void __thiscall
FControlRigReplayTracks::StoreVariables(FControlRigReplayTracks *this,URigVMHost *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSampleTrackBase *pFVar3;
  code *pcVar4;
  FProperty *this_00;
  bool bVar5;
  ETrackType EVar6;
  int iVar7;
  FSampleTrackContainer *this_01;
  FName *pFVar8;
  void *pvVar9;
  TSharedPtr<FSampleTrackBase,1> *pTVar10;
  UScriptStruct *pUVar11;
  UScriptStruct *pUVar12;
  FName local_res10;
  longlong local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  TSharedPtr<FSampleTrackBase,1> local_60;
  TSharedPtr<FSampleTrackBase,1> local_50;
  TFieldIterator<FProperty> local_40;
  
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  this_01 = FSampleTrackHost::GetContainer((FSampleTrackHost *)this);
  local_40.Struct = (UStruct *)param_1->_padding_;
  if (local_40.Struct == (UStruct *)0x0) {
    local_40.Field = (FField *)0x0;
  }
  else {
    local_40.Field = (local_40.Struct)->ChildProperties;
  }
  local_40.InterfaceIndex = -1;
  local_40.bIncludeSuper = true;
  local_40.bIncludeDeprecated = true;
  local_40.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_40);
  this_00 = (FProperty *)local_40.Field;
  while (local_40.Field = (FField *)this_00, this_00 != (FProperty *)0x0) {
    bVar5 = FField::IsNative((FField *)this_00);
    if (!bVar5) {
      pUVar11 = (UScriptStruct *)0x0;
      pUVar12 = (UScriptStruct *)0x0;
      if (this_00 != (FProperty *)0x0) {
        if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x14 & 1) == 0) {
          pUVar12 = pUVar11;
          if ((((this_00 != (FProperty *)0x0) &&
               ((*(uint *)(this_00->_padding_ + 0x18) >> 0x15 & 1) != 0)) &&
              (lVar1 = this_00[1]._padding_, lVar1 != 0)) &&
             ((*(uint *)(*(longlong *)(lVar1 + 8) + 0x18) >> 0x14 & 1) != 0)) {
            pUVar12 = *(UScriptStruct **)(lVar1 + 0x70);
          }
        }
        else {
          pUVar12 = (UScriptStruct *)this_00[1]._padding_;
        }
      }
      pFVar8 = GetTrackName(this,this_00);
      EVar6 = GetTrackTypeFromProperty(this_00);
      FSampleTrackContainer::FindOrAddTrack(this_01,&local_60,pFVar8,EVar6,pUVar12);
      pvVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)param_1,0);
      if ((local_60.Object == (FSampleTrackBase *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)((local_60.Object)->_padding_ + 0x60))(local_60.Object,this_00,pvVar9);
      bVar5 = IsThisNotNull(this_00,"FField::GetFName");
      if (bVar5) {
        local_78 = this_00->_padding_;
      }
      else {
        local_78 = 0;
      }
      if (((local_70.Data <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < local_70.Data + (longlong)local_68._4_4_ * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (int)local_68;
      if ((int)local_68 == local_68._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_70,(int *)((longlong)&local_68 + 4));
      }
      local_68 = CONCAT44(local_68._4_4_,iVar7 + 1);
      *(longlong *)(local_70.Data + (longlong)iVar7 * 8) = local_78;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
    }
    local_40.Field = (FField *)this_00->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_40);
    this_00 = (FProperty *)local_40.Field;
  }
  iVar7 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)this);
  if ((iVar7 == 1) && ((int)local_68 != 0)) {
    FLazyName::Resolve(&VariableNamesName);
    pTVar10 = FSampleTrackContainer::FindOrAddTrack
                        (this_01,&local_50,&local_res10,ETrackType_NameArray,(UScriptStruct *)0x0);
    pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar10->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    if ((pFVar3 == (FSampleTrackBase *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(pFVar3->_padding_ + 0xd8))(pFVar3,&local_70,__real_38d1b717);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

