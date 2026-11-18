// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 20

// StaticStruct @ 14a2be6a0

UScriptStruct * __cdecl FRigBaseComponent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseComponent,(UObject *)pUVar1,
                         L"RigBaseComponent");
  }
  return Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton;
}

// GetDefaultComponentName @ 14a2bea60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __thiscall FRigBaseComponent::GetDefaultComponentName(FRigBaseComponent *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,L"Component");
  return in_RDX;
}

// CanBeRenamed @ 14a2beb40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseComponent::CanBeRenamed(FRigBaseComponent *this)

{
  return true;
}

// IsSingleton @ 14a2beb50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseComponent::IsSingleton(FRigBaseComponent *this)

{
  return false;
}

// CanBeAddedTo @ 14a2bed60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FRigBaseComponent::CanBeAddedTo
          (FRigBaseComponent *this,FRigElementKey *param_1,URigHierarchy *param_2,FString *param_3)

{
  return true;
}

// OnAddedToHierarchy @ 14a2bee70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigBaseComponent::OnAddedToHierarchy
          (FRigBaseComponent *this,URigHierarchy *param_1,URigHierarchyController *param_2)

{
  return;
}

// GetIconForUI @ 14a2bee80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FSlateIcon * __thiscall FRigBaseComponent::GetIconForUI(FRigBaseComponent *this)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res20;
  FName local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_res20,L"ControlRig.Tree.RigidBody");
      FVar1 = *pFVar2;
      pFVar2 = ::FName::FName(local_18,L"ControlRigEditorStyle");
      FSlateIcon::FSlateIcon(&ComponentIcon,*pFVar2,FVar1,(FName)0x0,(FName)0x0);
      _Init_thread_footer(&::_TSS0);
      return &ComponentIcon;
    }
  }
  return &ComponentIcon;
}

// GetColorForUI @ 14a2bef40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FSlateColor * __thiscall
FRigBaseComponent::GetColorForUI(FRigBaseComponent *this,FSlateColor *__return_storage_ptr__)

{
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_Foreground;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// OnRigHierarchyKeyChanged @ 14a2befb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigBaseComponent::OnRigHierarchyKeyChanged
          (FRigBaseComponent *this,FRigHierarchyKey *param_1,FRigHierarchyKey *param_2)

{
  return;
}

// GetScriptStruct @ 14a2befc0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigBaseComponent::GetScriptStruct(FRigBaseComponent *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseComponent,(UObject *)pUVar1,
                         L"RigBaseComponent");
  }
  return Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton;
}

// GetDisplayName @ 14a2bf0d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName * __thiscall FRigBaseComponent::GetDisplayName(FRigBaseComponent *this)

{
  return &(this->Key).Name;
}

// Save @ 14a2bf130

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigBaseComponent::Save(FRigBaseComponent *this,FArchive *param_1)

{
  if ((((param_1->field_0x28 & 4) != 0) || ((param_1->field_0x2b & 5) != 0)) ||
     ((param_1->field_0x28 & 1) != 0)) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&(this->Key).Name);
    ::operator<<(param_1,&(this->Key).ElementKey);
  }
  return;
}

// Load @ 14a2bf180

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigBaseComponent::Load(FRigBaseComponent *this,FArchive *param_1)

{
  if ((((param_1->field_0x28 & 4) != 0) || ((param_1->field_0x2b & 5) != 0)) ||
     ((param_1->field_0x28 & 1) != 0)) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&(this->Key).Name);
    ::operator<<(param_1,&(this->Key).ElementKey);
  }
  ::FString::Reset(&this->CachedNameString,0);
  return;
}

// ~FRigBaseComponent @ 14a2de800

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigBaseComponent::~FRigBaseComponent(FRigBaseComponent *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FRigBaseComponent__6B_;
  pFVar1 = (this->CachedNameString).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// GetAllComponentScriptStructs @ 14a308dc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> * __cdecl
FRigBaseComponent::GetAllComponentScriptStructs
          (TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UPackage *pUVar9;
  FString *this;
  UScriptStruct **ppUVar10;
  FIdentityFunctor local_res10;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar12;
  UScriptStruct **ppUVar11;
  UScriptStruct *local_48;
  void *local_40 [2];
  TObjectIterator<UScriptStruct> local_30;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_30.Index = 0xffffffff;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_30.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ObjectArray.ArrayNum = 0;
  local_30.ObjectArray.ArrayMax = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  ppUVar11 = (UScriptStruct **)(CONCAT44(uVar12,EVar4) | 0x90020000);
  GetObjectsOfClass(pUVar7,&local_30.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
LAB_14a308e23:
  do {
    TObjectIterator<UScriptStruct>::Advance(&local_30);
    ppUVar10 = (UScriptStruct **)(longlong)local_30.Index;
    if (local_30.Index < 0) {
LAB_14a309026:
      if (local_30.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.ObjectArray.AllocatorInstance.Data);
      }
      if (param_1) {
        AlgoImpl::
        IntroSortInternal<UScriptStruct_*,int,FIdentityFunctor,_FRigBaseComponent::GetAllComponentScriptStructs_::__l13::<lambda_1>_>
                  ((UScriptStruct **)(__return_storage_ptr__->AllocatorInstance).Data,
                   __return_storage_ptr__->ArrayNum,local_res10,(<lambda_1>)local_res10);
      }
      return __return_storage_ptr__;
    }
    if (local_30.ObjectArray.ArrayNum <= local_30.Index) goto LAB_14a309026;
    uVar5 = 0;
    if (local_30.Index < local_30.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_30.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      ppUVar11 = ppUVar10;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
    }
    local_48 = *(UScriptStruct **)
                (local_30.ObjectArray.AllocatorInstance.Data + (longlong)ppUVar10 * 8);
    if (Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar9 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseComponent,(UObject *)pUVar9,
                           L"RigBaseComponent");
    }
  } while (local_48 == Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton);
  if (Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigBaseComponent,(UObject *)pUVar9,
                         L"RigBaseComponent");
    if (Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_14a308e23;
  }
  iVar6 = (int)(Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton)->_padding_;
  if (((int)local_48->_padding_ < iVar6) ||
     ((longlong *)*(undefined1 **)(local_48->_padding_ + (longlong)iVar6 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FRigBaseComponent.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    this = (FString *)
           (**(code **)(local_48->_padding_ + 0x388))(local_48,local_40,0,local_48,ppUVar11);
    ppUVar11 = (UScriptStruct **)((ulonglong)ppUVar11 & 0xffffffff00000000);
    iVar6 = ::FString::Find(this,L"Base",4,IgnoreCase,FromStart,-1);
    if (local_40[0] != (void *)0x0) {
      FMemory::Free(local_40[0]);
    }
    if (iVar6 == -1) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar1 <= (FScriptContainerElement *)&local_48) {
        if ((FScriptContainerElement *)&local_48 <
            pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8) {
          ppUVar11 = &local_48;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar8;
          }
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(UScriptStruct **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_48;
    }
  }
  goto LAB_14a308e23;
}

// GetContentAsText @ 14a30b8f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigBaseComponent::GetContentAsText(FRigBaseComponent *this,FString *__return_storage_ptr__)

{
  UScriptStruct *this_00;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this_00 = (UScriptStruct *)(**(code **)(this->_padding_ + 0x48))();
  if (this_00 != (UScriptStruct *)0x0) {
    UScriptStruct::ExportText
              (this_00,__return_storage_ptr__,this,(void *)0x0,(UObject *)0x0,0x40,(UObject *)0x0,
               true);
  }
  return __return_storage_ptr__;
}

// GetName @ 14a311510

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall FRigBaseComponent::GetName(FRigBaseComponent *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FName *this_00;
  FString local_18;
  
  pFVar1 = &this->CachedNameString;
  if (((this->CachedNameString).Data.ArrayNum < 2) &&
     (this_00 = &(this->Key).Name, *this_00 != (FName)0x0)) {
    pFVar3 = ::FName::ToString(this_00,&local_18);
    if (pFVar1 != pFVar3) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->CachedNameString).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (this->CachedNameString).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return pFVar1;
}

// GetState @ 14a319640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigComponentState * __thiscall
FRigBaseComponent::GetState(FRigBaseComponent *this,FRigComponentState *__return_storage_ptr__)

{
  FCustomVersionContainer *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  UScriptStruct *pUVar5;
  undefined8 *puVar6;
  FArchiveState local_d8;
  undefined8 local_48;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_40;
  undefined8 local_38;
  
  pFVar1 = &__return_storage_ptr__->Versions;
  __return_storage_ptr__->ComponentStruct = (UScriptStruct *)0x0;
  (__return_storage_ptr__->Versions).Versions.ArrayMax = 0;
  piVar2 = &(__return_storage_ptr__->Versions).Versions.ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (pFVar1->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Versions).Versions.ArrayNum = 0;
  pUVar5 = (UScriptStruct *)(**(code **)(this->_padding_ + 0x48))();
  __return_storage_ptr__->ComponentStruct = pUVar5;
  local_d8._padding_ = 0;
  local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_d8._40_8_ = 0;
  local_d8.ArSerializingDefaults = 0;
  local_d8.ArPortFlags = 0;
  local_d8.ArMaxSerializeSize = 0;
  local_d8.ArUEVer.FileVersionUE4 = 0;
  local_d8.ArUEVer.FileVersionUE5 = 0;
  local_d8.ArLicenseeUEVer = 0;
  local_d8.ArEngineVer.Major = 0;
  local_d8.ArEngineVer.Minor = 0;
  local_d8.ArEngineVer.Patch = 0;
  local_d8.ArEngineVer._6_2_ = 0;
  local_d8.ArEngineVer.Changelist = 0;
  local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_d8.SerializedProperty = (FProperty *)0x0;
  local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_d8.bCustomVersionsAreReset = false;
  local_d8._129_7_ = 0;
  local_d8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_d8);
  local_48 = 0;
  local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_38 = 0;
  local_40 = &__return_storage_ptr__->Data;
  FArchiveState::SetIsSaving(&local_d8,true);
  (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
  local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  (**(code **)(this->_padding_ + 0x58))(this,&local_d8);
  puVar6 = (undefined8 *)(**(code **)(local_d8._padding_ + 0x60))(&local_d8);
  if (pFVar1 != (FCustomVersionContainer *)puVar6) {
    iVar3 = *(int *)(puVar6 + 1);
    _Src = (void *)*puVar6;
    iVar4 = *piVar2;
    (__return_storage_ptr__->Versions).Versions.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,iVar4,(ForAnyElementType *)pFVar1,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pFVar1->Versions).AllocatorInstance.Data,_Src,(longlong)iVar3 * 0x28);
      }
    }
  }
  FArchive::~FArchive((FArchive *)&local_d8);
  return __return_storage_ptr__;
}

// Serialize @ 14a3490e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseComponent::Serialize(FRigBaseComponent *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    (**(code **)(this->_padding_ + 0x60))(this,param_1);
    return true;
  }
  if ((param_1->field_0x28 & 4) != 0) {
    (**(code **)(this->_padding_ + 0x58))(this,param_1);
  }
  return true;
}

// SetState @ 14a3519f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FRigBaseComponent::SetState(FRigBaseComponent *this,FRigComponentState *param_1)

{
  UScriptStruct *pUVar1;
  UScriptStruct *pUVar2;
  FMemoryReader local_b8;
  
  if (((param_1->ComponentStruct != (UScriptStruct *)0x0) && ((param_1->Data).ArrayNum != 0)) &&
     (pUVar1 = param_1->ComponentStruct,
     pUVar2 = (UScriptStruct *)(**(code **)(this->_padding_ + 0x48))(), pUVar1 == pUVar2)) {
    FMemoryReader::FMemoryReader(&local_b8,&param_1->Data,false);
    (**(code **)(local_b8._padding_ + 0x68))(&local_b8,&param_1->Versions);
    (**(code **)(this->_padding_ + 0x60))(this,&local_b8);
    FArchive::~FArchive((FArchive *)&local_b8);
    return true;
  }
  return false;
}

