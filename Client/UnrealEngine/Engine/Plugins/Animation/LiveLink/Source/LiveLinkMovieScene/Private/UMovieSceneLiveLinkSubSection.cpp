// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 15

// StaticClass @ 14d0976a0

UClass * __cdecl UMovieSceneLiveLinkSubSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSection",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkSubSection,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneLiveLinkSubSection>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton;
}

// UMovieSceneLiveLinkSubSection @ 14d09e7a0

UMovieSceneLiveLinkSubSection * __thiscall
UMovieSceneLiveLinkSubSection::UMovieSceneLiveLinkSubSection
          (UMovieSceneLiveLinkSubSection *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSection__6B_;
  (this->SubSectionData).Properties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubSectionData).Properties.ArrayNum = 0;
  (this->SubSectionData).Properties.ArrayMax = 0;
  (this->SubjectRole).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->StaticData).Object = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0;
  (this->StaticData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UMovieSceneLiveLinkSubSection @ 14d09e7e0

UMovieSceneLiveLinkSubSection * __thiscall
UMovieSceneLiveLinkSubSection::UMovieSceneLiveLinkSubSection
          (UMovieSceneLiveLinkSubSection *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSection__6B_;
  (this->SubSectionData).Properties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubSectionData).Properties.ArrayNum = 0;
  (this->SubSectionData).Properties.ArrayMax = 0;
  (this->SubjectRole).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->StaticData).Object = (FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)0x0;
  (this->StaticData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UMovieSceneLiveLinkSubSection @ 14d09f0a0

void __thiscall
UMovieSceneLiveLinkSubSection::~UMovieSceneLiveLinkSubSection(UMovieSceneLiveLinkSubSection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneLiveLinkSubSection__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StaticData).SharedReferenceCount.ReferenceController);
  DestructItems<FLiveLinkPropertyData,int>
            ((FLiveLinkPropertyData *)(this->SubSectionData).Properties.AllocatorInstance.Data,
             (this->SubSectionData).Properties.ArrayNum);
  pFVar1 = (this->SubSectionData).Properties.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateChannelProxy @ 14d0a2b10

int __thiscall
UMovieSceneLiveLinkSubSection::CreateChannelProxy
          (UMovieSceneLiveLinkSubSection *this,int param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2,FMovieSceneChannelProxyData *param_3)

{
  return 0;
}

// FinalizeSection @ 14d0ae9b0

void __thiscall
UMovieSceneLiveLinkSubSection::FinalizeSection
          (UMovieSceneLiveLinkSubSection *this,bool param_1,FKeyDataOptimizationParams *param_2)

{
  return;
}

// GetChannelCount @ 14d0b00a0

int __thiscall UMovieSceneLiveLinkSubSection::GetChannelCount(UMovieSceneLiveLinkSubSection *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->SubSectionData).Properties.ArrayNum;
  iVar4 = 0;
  pFVar2 = (this->SubSectionData).Properties.AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->SubSectionData).Properties.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FLiveLinkPropertyData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    iVar4 = iVar4 + *(int *)(pFVar2 + 0x50) + *(int *)(pFVar2 + 0x40) + *(int *)(pFVar2 + 0x30) +
                    *(int *)(pFVar2 + 0x20) + *(int *)(pFVar2 + 0x10);
    pFVar2 = pFVar2 + 0x58;
  }
  return iVar4;
}

// GetLiveLinkSubSectionForRole @ 14d0b1f80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<UMovieSceneLiveLinkSubSection>,TSizedDefaultAllocator<32>_> * __cdecl
UMovieSceneLiveLinkSubSection::GetLiveLinkSubSectionForRole
          (TArray<TSubclassOf<UMovieSceneLiveLinkSubSection>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<TSubclassOf<UMovieSceneLiveLinkSubSection>,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  uint uVar10;
  FUObjectCppClassStaticFunctions local_res18 [2];
  UObject *local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  TObjectIterator<UClass> local_50;
  
  local_50.Index = 0xffffffff;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ObjectArray.ArrayNum = 0;
  local_50.ObjectArray.ArrayMax = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar7,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_50);
  do {
    lVar9 = (longlong)local_50.Index;
    if ((local_50.Index < 0) || (local_50.ObjectArray.ArrayNum <= local_50.Index)) {
      if (local_50.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_60.Data;
      __return_storage_ptr__->ArrayNum = (int)local_58;
      __return_storage_ptr__->ArrayMax = local_58._4_4_;
      return __return_storage_ptr__;
    }
    uVar10 = 0;
    uVar5 = uVar10;
    if (local_50.Index < local_50.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_50.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<TSubclassOf<UMovieSceneLiveLinkSubSection>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar2)();
        return pTVar8;
      }
    }
    lVar9 = *(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar9 * 8);
    iVar6 = local_50.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton == (UClass *)0x0) {
      local_res18[0].AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSection",
                 &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton,
                 StaticRegisterNativesUMovieSceneLiveLinkSubSection,0x50,8,
                 CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                 InternalConstructor<UMovieSceneLiveLinkSubSection>,
                 InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSection>,local_res18,
                 UObject::StaticClass,UObject::StaticClass);
      iVar6 = local_50.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton != (UClass *)0x0)
      goto LAB_14d0b20f9;
    }
    else {
LAB_14d0b20f9:
      iVar1 = (int)(Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton)->
                   _padding_;
      if ((*(int *)(lVar9 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton)->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar9 = (longlong)local_50.Index;
        uVar5 = uVar10;
        if (local_50.Index < iVar6) {
          uVar5 = (uint)~local_50.Index >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TSubclassOf<UMovieSceneLiveLinkSubSection>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar8;
          }
          iVar6 = local_50.ObjectArray.ArrayNum;
        }
        if ((*(uint *)(*(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar9 * 8) + 0xd4
                      ) & 0x2000001) == 0) {
          lVar9 = (longlong)local_50.Index;
          if (local_50.Index < iVar6) {
            uVar10 = (uint)~local_50.Index >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TSubclassOf<UMovieSceneLiveLinkSubSection>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar8;
          }
          local_68 = *(UObject **)(local_50.ObjectArray.AllocatorInstance.Data + lVar9 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_68);
          }
          if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
              ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)local_58._4_4_ * 8))
             && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<TSubclassOf<UMovieSceneLiveLinkSubSection>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar8;
          }
          iVar6 = (int)local_58;
          if ((int)local_58 == local_58._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_60,(int *)((longlong)&local_58 + 4));
          }
          local_58 = CONCAT44(local_58._4_4_,iVar6 + 1);
          *(UObject **)(local_60.Data + (longlong)iVar6 * 8) = local_68;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_68);
          }
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_50);
  } while( true );
}

// GetPrivateStaticClass @ 14d0b2750

UClass * __cdecl UMovieSceneLiveLinkSubSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkMovieScene",L"MovieSceneLiveLinkSubSection",
               &Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneLiveLinkSubSection,0x50,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneLiveLinkSubSection>,
               InternalVTableHelperCtorCaller<UMovieSceneLiveLinkSubSection>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLiveLinkSubSection.InnerSingleton;
}

// Initialize @ 14d0b32f0

void __thiscall
UMovieSceneLiveLinkSubSection::Initialize
          (UMovieSceneLiveLinkSubSection *this,TSubclassOf<ULiveLinkRole> param_1,
          TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
  }
  (this->SubjectRole).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_1.Class.field0_0x0;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->StaticData).SharedReferenceCount.ReferenceController;
  (this->StaticData).Object = pFVar2;
  (this->StaticData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// IsRoleSupported @ 14d0b4380

bool __thiscall
UMovieSceneLiveLinkSubSection::IsRoleSupported
          (UMovieSceneLiveLinkSubSection *this,TSubclassOf<ULiveLinkRole> *param_1)

{
  return false;
}

// PostLoad @ 14d0b4540

void __thiscall UMovieSceneLiveLinkSubSection::PostLoad(UMovieSceneLiveLinkSubSection *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UMovieSceneLiveLinkSubSection **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// RecordFrame @ 14d0b5c00

void __thiscall
UMovieSceneLiveLinkSubSection::RecordFrame
          (UMovieSceneLiveLinkSubSection *this,FFrameNumber param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  return;
}

// SetStaticData @ 14d0b7670

void __thiscall
UMovieSceneLiveLinkSubSection::SetStaticData
          (UMovieSceneLiveLinkSubSection *this,
          TSharedPtr<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->StaticData).SharedReferenceCount.ReferenceController;
  (this->StaticData).Object = pFVar2;
  (this->StaticData).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// StaticRegisterNativesUMovieSceneLiveLinkSubSection @ 14d0b7fc0

void __cdecl UMovieSceneLiveLinkSubSection::StaticRegisterNativesUMovieSceneLiveLinkSubSection(void)

{
  return;
}

