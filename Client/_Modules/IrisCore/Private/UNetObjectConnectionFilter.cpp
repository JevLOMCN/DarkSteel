// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 19

// StaticClass @ 1442a0260

UClass * __cdecl UNetObjectConnectionFilter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectConnectionFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectConnectionFilter",
               &Z_Registration_Info_UClass_UNetObjectConnectionFilter.InnerSingleton,
               StaticRegisterNativesUNetObjectConnectionFilter,0xa8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectConnectionFilter>,
               InternalVTableHelperCtorCaller<UNetObjectConnectionFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectConnectionFilter.InnerSingleton;
}

// UNetObjectConnectionFilter @ 1442aee70

UNetObjectConnectionFilter * __thiscall
UNetObjectConnectionFilter::UNetObjectConnectionFilter
          (UNetObjectConnectionFilter *this,FVTableHelper *param_1)

{
  UNetObjectFilter::UNetObjectFilter((UNetObjectFilter *)this,param_1);
  this->_padding_ = (longlong)&___7UNetObjectConnectionFilter__6B_;
  (this->Config).Object = (UObject *)0x0;
  (this->LocalToNetRefIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalToNetRefIndex).ArrayNum = 0;
  (this->LocalToNetRefIndex).ArrayMax = 0;
  (this->PerConnectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerConnectionInfos).ArrayNum = 0;
  (this->PerConnectionInfos).ArrayMax = 0;
  (this->UsedLocalInfoIndices).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedLocalInfoIndices).Storage.ArrayNum = 0;
  (this->UsedLocalInfoIndices).Storage.ArrayMax = 0;
  (this->UsedLocalInfoIndices).BitCount = 0;
  this->MaxInternalIndex = 0;
  this->bObjectRemoved = false;
  return this;
}

// UNetObjectConnectionFilter @ 1442aeed0

UNetObjectConnectionFilter * __thiscall
UNetObjectConnectionFilter::UNetObjectConnectionFilter(UNetObjectConnectionFilter *this)

{
  UNetObjectFilter::UNetObjectFilter((UNetObjectFilter *)this);
  this->_padding_ = (longlong)&___7UNetObjectConnectionFilter__6B_;
  (this->Config).Object = (UObject *)0x0;
  (this->LocalToNetRefIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LocalToNetRefIndex).ArrayNum = 0;
  (this->LocalToNetRefIndex).ArrayMax = 0;
  (this->PerConnectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerConnectionInfos).ArrayNum = 0;
  (this->PerConnectionInfos).ArrayMax = 0;
  (this->UsedLocalInfoIndices).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedLocalInfoIndices).Storage.ArrayNum = 0;
  (this->UsedLocalInfoIndices).Storage.ArrayMax = 0;
  (this->UsedLocalInfoIndices).BitCount = 0;
  this->MaxInternalIndex = 0;
  this->bObjectRemoved = false;
  return this;
}

// ~UNetObjectConnectionFilter @ 1442b0ba0

void __thiscall
UNetObjectConnectionFilter::~UNetObjectConnectionFilter(UNetObjectConnectionFilter *this)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  this->_padding_ = (longlong)&___7UNetObjectConnectionFilter__6B_;
  pFVar1 = (this->UsedLocalInfoIndices).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UNetObjectConnectionFilter::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)(this->PerConnectionInfos).AllocatorInstance.Data,
             (this->PerConnectionInfos).ArrayNum);
  pFVar1 = (this->PerConnectionInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LocalToNetRefIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pUVar2 = (this->Config).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Config).Object = (UObject *)0x0;
  }
  UNetObjectFilter::~UNetObjectFilter((UNetObjectFilter *)this);
  return;
}

// AddConnection @ 1442b5190

void __thiscall
UNetObjectConnectionFilter::AddConnection(UNetObjectConnectionFilter *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((int)param_1 < (this->PerConnectionInfos).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Net::FNetBitArray::Init
            ((FNetBitArray *)
             ((this->PerConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18),
             (this->UsedLocalInfoIndices).BitCount);
  return;
}

// AddObject @ 1442b54a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNetObjectConnectionFilter::AddObject
          (UNetObjectConnectionFilter *this,uint param_1,FNetObjectFilterAddObjectParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  UNetObjectConnectionFilter *local_res20;
  
  uVar7 = (this->UsedLocalInfoIndices).Storage.ArrayNum;
  pFVar8 = (this->UsedLocalInfoIndices).Storage.AllocatorInstance.Data;
  uVar5 = 0;
  iVar9 = 0;
  if (uVar7 != 0) {
    do {
      if (*(uint *)pFVar8 != 0xffffffff) {
        uVar7 = ~*(uint *)pFVar8;
        iVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        iVar6 = 0x20;
        if (uVar7 != 0) {
          iVar6 = iVar1;
        }
        uVar7 = 0xffffffff;
        if ((uint)(iVar6 + iVar9) < (this->UsedLocalInfoIndices).BitCount) {
          uVar7 = iVar6 + iVar9;
        }
        if (uVar7 != 0xffffffff) {
          if (5 < (byte)LogIris._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
          }
          pFVar8 = (this->UsedLocalInfoIndices).Storage.AllocatorInstance.Data;
          if ((this->UsedLocalInfoIndices).BitCount <= uVar7) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2a2,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          pFVar8 = pFVar8 + (ulonglong)(uVar7 >> 5) * 4;
          *(uint *)pFVar8 = *(uint *)pFVar8 | 1 << (uVar7 & 0x1f);
          uVar5 = 0;
          if ((int)uVar7 < (this->LocalToNetRefIndex).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          *(uint *)((this->LocalToNetRefIndex).AllocatorInstance.Data + (longlong)(int)uVar7 * 4) =
               param_1;
          param_2->OutInfo->Data[0] = (ushort)uVar7;
          return true;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      pFVar8 = pFVar8 + 4;
      iVar9 = iVar9 + 0x20;
    } while (uVar5 < uVar7);
  }
  local_res20 = this;
  `UNetObjectConnectionFilter::AddObject'::__l5::<lambda_1>::operator()(&local_res20);
  return false;
}

// Filter @ 1442bffc0

void __thiscall
UNetObjectConnectionFilter::Filter
          (UNetObjectConnectionFilter *this,FNetObjectFilteringParams *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  uint local_res8;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"UNetObjectConnectionFilter_Filter",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\NetObjectConnectionFilter.cpp"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  memset((param_1->OutAllowedObjects).Storage,0,
         (ulonglong)(param_1->OutAllowedObjects).WordCount << 2);
  uVar1 = param_1->ConnectionId;
  lVar11 = (longlong)(int)uVar1;
  uVar12 = 0;
  if ((int)uVar1 < (this->PerConnectionInfos).ArrayNum) {
    uVar12 = ~uVar1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->PerConnectionInfos).AllocatorInstance.Data;
  uVar12 = 0;
  uVar1 = *(uint *)(pFVar3 + lVar11 * 0x18 + 8);
  puVar8 = *(uint **)(pFVar3 + lVar11 * 0x18);
  uVar2 = *(undefined4 *)(pFVar3 + lVar11 * 0x18 + 0x10);
  local_res8 = 0;
  if (uVar1 != 0) {
    do {
      uVar10 = 0xffffffff;
      if (uVar12 == uVar1 - 1) {
        uVar10 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
      }
      uVar9 = local_res8;
      for (uVar10 = uVar10 & *puVar8; uVar10 != 0; uVar10 = uVar10 >> 1) {
        if ((uVar10 & 1) != 0) {
          uVar7 = 0;
          if ((int)uVar9 < (this->LocalToNetRefIndex).ArrayNum) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar4 = (param_1->OutAllowedObjects).Storage;
          uVar7 = *(uint *)((this->LocalToNetRefIndex).AllocatorInstance.Data +
                           (longlong)(int)uVar9 * 4);
          if (((param_1->OutAllowedObjects).BitCount <= uVar7) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < BitCount",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                 ,0x2a2,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          puVar4[uVar7 >> 5] = puVar4[uVar7 >> 5] | 1 << (uVar7 & 0x1f);
        }
        uVar9 = uVar9 + 1;
      }
      puVar8 = puVar8 + 1;
      local_res8 = local_res8 + 0x20;
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar1);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetPrivateStaticClass @ 1442c3140

UClass * __cdecl UNetObjectConnectionFilter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectConnectionFilter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectConnectionFilter",
               &Z_Registration_Info_UClass_UNetObjectConnectionFilter.InnerSingleton,
               StaticRegisterNativesUNetObjectConnectionFilter,0xa8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetObjectConnectionFilter>,
               InternalVTableHelperCtorCaller<UNetObjectConnectionFilter>,local_res8,
               UNetObjectFilter::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectConnectionFilter.InnerSingleton;
}

// OnDeinit @ 1442c85d0

void __thiscall UNetObjectConnectionFilter::OnDeinit(UNetObjectConnectionFilter *this)

{
  TStrongObjectPtr<UNetObjectConnectionFilterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int *piVar2;
  undefined8 local_18 [2];
  
  pTVar1 = &this->Config;
  if (pTVar1 != (TStrongObjectPtr<UNetObjectConnectionFilterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)local_18) {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)0x0;
  }
  (this->UsedLocalInfoIndices).BitCount = 0;
  piVar2 = &(this->UsedLocalInfoIndices).Storage.ArrayMax;
  (this->UsedLocalInfoIndices).Storage.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->UsedLocalInfoIndices,0,piVar2);
  }
  piVar2 = &(this->LocalToNetRefIndex).ArrayMax;
  (this->LocalToNetRefIndex).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LocalToNetRefIndex).AllocatorInstance,0,piVar2);
  }
  return;
}

// OnInit @ 1442c8680

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNetObjectConnectionFilter::OnInit
          (UNetObjectConnectionFilter *this,FNetObjectFilterInitParams *param_1)

{
  TStrongObjectPtr<UNetObjectConnectionFilterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int *piVar2;
  UObjectBase *this_00;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FString *pFVar8;
  uint uVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  int iVar12;
  longlong local_48;
  FString local_40;
  FString local_30;
  FString local_20;
  
  this->MaxInternalIndex = param_1->CurrentMaxInternalIndex;
  this_00 = (UObjectBase *)param_1->Config;
  if (this_00 == (UObjectBase *)0x0) {
    pFVar8 = GetTypeName<UNetObjectConnectionFilterConfig>(&local_40);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar10);
  }
  pUVar7 = UNetObjectConnectionFilterConfig::StaticClass();
  pUVar3 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
  iVar12 = (int)pUVar7->_padding_;
  if ((iVar12 <= (int)pUVar3->_padding_) &&
     ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar12 * 8) == &pUVar7->_padding_))
  {
    UObjectBase::AddRef(this_00);
    pTVar1 = &this->Config;
    if (pTVar1 == (TStrongObjectPtr<UNetObjectConnectionFilterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                   *)&local_48) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
    }
    else {
      if (pTVar1->Object != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
      }
      pTVar1->Object = (UObject *)this_00;
    }
    if ((pTVar1->Object == (UObject *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                           ,0x67,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar9 = (uint)*(ushort *)(pTVar1->Object + 1);
    if (param_1->AbsoluteMaxNetObjectCount < (uint)*(ushort *)(pTVar1->Object + 1)) {
      uVar9 = param_1->AbsoluteMaxNetObjectCount & 0xffff;
    }
    UE::Net::FNetBitArray::Init(&this->UsedLocalInfoIndices,uVar9);
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->LocalToNetRefIndex,uVar9,Default);
    piVar2 = &(this->PerConnectionInfos).ArrayNum;
    iVar12 = *piVar2;
    uVar9 = param_1->MaxConnectionCount + 1;
    if (iVar12 < (int)uVar9) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,uVar9 - iVar12,&(this->PerConnectionInfos).AllocatorInstance,piVar2,
                         &(this->PerConnectionInfos).ArrayMax);
      DefaultConstructItems<UNetObjectConnectionFilter::FPerConnectionInfo,int>
                ((this->PerConnectionInfos).AllocatorInstance.Data + (longlong)iVar6 * 0x18,
                 uVar9 - iVar12);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < iVar12) {
        iVar12 = iVar12 - uVar9;
        if (iVar12 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else if (iVar12 == 0) {
          return;
        }
        TArray<UNetObjectConnectionFilter::FPerConnectionInfo,TSizedDefaultAllocator<32>_>::
        RemoveAtImpl(&this->PerConnectionInfos,uVar9,iVar12);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&(this->PerConnectionInfos).AllocatorInstance,*piVar2,
                   &(this->PerConnectionInfos).ArrayMax);
      }
    }
    return;
  }
  pFVar8 = GetTypeName<UNetObjectConnectionFilterConfig>(&local_30);
  pwVar10 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UNetObjectFilterConfig>
                     (&local_20,(UNetObjectFilterConfig *)this_00);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar11);
}

// OnMaxInternalNetRefIndexIncreased @ 1442c8a30

void __thiscall
UNetObjectConnectionFilter::OnMaxInternalNetRefIndexIncreased
          (UNetObjectConnectionFilter *this,uint param_1)

{
  return;
}

// PreFilter @ 1442ca600

void __thiscall
UNetObjectConnectionFilter::PreFilter
          (UNetObjectConnectionFilter *this,FNetObjectPreFilteringParams *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  
  if (this->bObjectRemoved != false) {
    this->bObjectRemoved = false;
    uVar2 = (param_1->ValidConnections).BitCount;
    uVar12 = 0;
    uVar3 = (param_1->ValidConnections).WordCount;
    uVar13 = 0;
    puVar14 = (param_1->ValidConnections).Storage;
    if (uVar3 != 0) {
      do {
        uVar10 = 0xffffffff;
        if (uVar13 == uVar3 - 1) {
          uVar10 = 0xffffffff >> (-(char)uVar2 & 0x1fU);
        }
        uVar9 = uVar12;
        for (uVar10 = uVar10 & *puVar14; uVar10 != 0; uVar10 = uVar10 >> 1) {
          if ((uVar10 & 1) != 0) {
            uVar6 = 0;
            if ((int)uVar9 < (this->PerConnectionInfos).ArrayNum) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar1 = (this->PerConnectionInfos).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18
            ;
            if (((*(FScriptContainerElement **)pFVar1 ==
                  (this->UsedLocalInfoIndices).Storage.AllocatorInstance.Data) ||
                (*(uint *)(pFVar1 + 0x10) != (this->UsedLocalInfoIndices).BitCount)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(*this).GetData() != (Other).GetData() && (*this).GetNumBits() == (Other).GetNumBits()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                                   ,0x539,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            puVar7 = *(uint **)pFVar1;
            if (*(uint *)(pFVar1 + 8) != 0) {
              lVar11 = (longlong)(this->UsedLocalInfoIndices).Storage.AllocatorInstance.Data -
                       (longlong)puVar7;
              uVar8 = (ulonglong)*(uint *)(pFVar1 + 8);
              do {
                *puVar7 = *puVar7 & *(uint *)((longlong)puVar7 + lVar11);
                puVar7 = puVar7 + 1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
          uVar9 = uVar9 + 1;
        }
        uVar13 = uVar13 + 1;
        puVar14 = puVar14 + 1;
        uVar12 = uVar12 + 0x20;
      } while (uVar13 < uVar3);
    }
  }
  return;
}

// RemoveConnection @ 1442deb50

void __thiscall
UNetObjectConnectionFilter::RemoveConnection(UNetObjectConnectionFilter *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement local_28 [32];
  
  uVar4 = 0;
  if ((int)param_1 < (this->PerConnectionInfos).ArrayNum) {
    uVar4 = ~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->PerConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x18;
  if (pFVar1 != local_28) {
    if (*(void **)pFVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar1);
    }
    *(undefined8 *)pFVar1 = 0;
    *(undefined8 *)(pFVar1 + 8) = 0;
  }
  *(undefined4 *)(pFVar1 + 0x10) = 0;
  return;
}

// RemoveObject @ 1442dee20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNetObjectConnectionFilter::RemoveObject
          (UNetObjectConnectionFilter *this,uint param_1,FNetObjectFilteringInfo *param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  this->bObjectRemoved = true;
  uVar1 = param_2->Data[0];
  pFVar2 = (this->UsedLocalInfoIndices).Storage.AllocatorInstance.Data;
  if ((this->UsedLocalInfoIndices).BitCount <= (uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(pFVar2 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(pFVar2 + (ulonglong)(uVar1 >> 5) * 4) & ~(1 << (uVar1 & 0x1f));
  if (5 < (byte)LogIris._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIris);
  }
  if ((this->LocalToNetRefIndex).ArrayNum <= (int)(uint)uVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)((this->LocalToNetRefIndex).AllocatorInstance.Data + (ulonglong)uVar1 * 4) = 0;
  return;
}

// SetReplicateToConnection @ 1442e4fa0

void __thiscall
UNetObjectConnectionFilter::SetReplicateToConnection
          (UNetObjectConnectionFilter *this,FNetRefHandle param_1,uint param_2,
          ENetFilterStatus param_3)

{
  FNetBitArray *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNetObjectFilteringInfo *pFVar4;
  longlong lVar5;
  ushort local_res8 [4];
  uint local_res18 [2];
  uint local_38 [2];
  uint *local_30;
  UNetObjectConnectionFilter *local_28;
  uint *local_20;
  ushort *local_18;
  
  local_res18[0] = param_2;
  if ((uint)(this->PerConnectionInfos).ArrayNum <= param_2) {
    local_30 = local_res18;
    local_28 = this;
    `UNetObjectConnectionFilter::SetReplicateToConnection'::__l5::<lambda_1>::operator()(&local_30);
    return;
  }
  local_38[0] = UNetObjectFilter::GetObjectIndex((UNetObjectFilter *)this,param_1);
  if (local_38[0] != 0) {
    pFVar4 = UNetObjectFilter::GetFilteringInfo((UNetObjectFilter *)this,local_38[0]);
    if (pFVar4 != (FNetObjectFilteringInfo *)0x0) {
      local_res8[0] = pFVar4->Data[0];
      lVar5 = (longlong)(int)local_res18[0];
      uVar3 = 0;
      if ((int)local_res18[0] < (this->PerConnectionInfos).ArrayNum) {
        uVar3 = ~local_res18[0] >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      this_00 = (FNetBitArray *)((this->PerConnectionInfos).AllocatorInstance.Data + lVar5 * 0x18);
      if (this_00->BitCount <= (uint)local_res8[0]) {
        local_20 = local_38;
        local_18 = local_res8;
        `UNetObjectConnectionFilter::SetReplicateToConnection'::__l11::<lambda_2>::operator()
                  (&local_20);
      }
      UE::Net::FNetBitArray::SetBitValue(this_00,(uint)local_res8[0],param_3 == Allow);
    }
  }
  return;
}

// StaticRegisterNativesUNetObjectConnectionFilter @ 1442e62c0

void __cdecl UNetObjectConnectionFilter::StaticRegisterNativesUNetObjectConnectionFilter(void)

{
  return;
}

// operator() @ 1504b8640

bool __thiscall `UNetObjectConnectionFilter::AddObject'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2950967867534737484>);
  if (bVar2) {
    if (*(longlong *)(*(longlong *)this + 0x60) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x60) + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2950967867534737484>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504b86f9;
    }
  }
  bVar2 = false;
LAB_1504b86f9:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504b8730

bool __thiscall
`UNetObjectConnectionFilter::SetReplicateToConnection'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2950967867534737424>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2950967867534737424>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b8b40

bool __thiscall
`UNetObjectConnectionFilter::SetReplicateToConnection'::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2950967867534737440>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2950967867534737440>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

