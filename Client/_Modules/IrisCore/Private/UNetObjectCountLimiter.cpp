// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 23

// StaticClass @ 14429e530

UClass * __cdecl UNetObjectCountLimiter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectCountLimiter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectCountLimiter",
               &Z_Registration_Info_UClass_UNetObjectCountLimiter.InnerSingleton,
               StaticRegisterNativesUNetObjectCountLimiter,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNetObjectCountLimiter>,
               InternalVTableHelperCtorCaller<UNetObjectCountLimiter>,local_res8,
               UNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectCountLimiter.InnerSingleton;
}

// UNetObjectCountLimiter @ 1442aef90

UNetObjectCountLimiter * __thiscall
UNetObjectCountLimiter::UNetObjectCountLimiter(UNetObjectCountLimiter *this)

{
  UObject::UObject((UObject *)this);
  this->ReplicationSystemId = 0xffffffff;
  this->_padding_ = (longlong)&___7UNetObjectCountLimiter__6B_;
  (this->ReplicationSystem).field0_0x0.DebugPtr = (UReplicationSystem *)0x0;
  (this->Config).Object = (UObject *)0x0;
  (this->PerConnectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerConnectionInfos).ArrayNum = 0;
  (this->PerConnectionInfos).ArrayMax = 0;
  (this->InternalObjectIndices).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalObjectIndices).Storage.ArrayNum = 0;
  (this->InternalObjectIndices).Storage.ArrayMax = 0;
  (this->InternalObjectIndices).BitCount = 0;
  (this->RoundRobinState).InternalObjectIndices.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RoundRobinState).InternalObjectIndices.Storage.ArrayNum = 0;
  (this->RoundRobinState).InternalObjectIndices.Storage.ArrayMax = 0;
  (this->RoundRobinState).InternalObjectIndices.BitCount = 0;
  (this->RoundRobinState).NextIndexToConsider = 0;
  (this->FillState).LastPrioFrame = 0;
  (this->FillState).LastConnectionId = 0;
  this->PrioFrame = 0;
  return this;
}

// UNetObjectCountLimiter @ 1442af000

UNetObjectCountLimiter * __thiscall
UNetObjectCountLimiter::UNetObjectCountLimiter(UNetObjectCountLimiter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetObjectCountLimiter__6B_;
  (this->ReplicationSystem).field0_0x0.DebugPtr = (UReplicationSystem *)0x0;
  (this->Config).Object = (UObject *)0x0;
  (this->PerConnectionInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerConnectionInfos).ArrayNum = 0;
  (this->PerConnectionInfos).ArrayMax = 0;
  (this->InternalObjectIndices).Storage.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalObjectIndices).Storage.ArrayNum = 0;
  (this->InternalObjectIndices).Storage.ArrayMax = 0;
  (this->InternalObjectIndices).BitCount = 0;
  (this->RoundRobinState).InternalObjectIndices.Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RoundRobinState).InternalObjectIndices.Storage.ArrayNum = 0;
  (this->RoundRobinState).InternalObjectIndices.Storage.ArrayMax = 0;
  (this->RoundRobinState).InternalObjectIndices.BitCount = 0;
  (this->RoundRobinState).NextIndexToConsider = 0;
  (this->FillState).LastPrioFrame = 0;
  (this->FillState).LastConnectionId = 0;
  return this;
}

// ~UNetObjectCountLimiter @ 1442b0c40

void __thiscall UNetObjectCountLimiter::~UNetObjectCountLimiter(UNetObjectCountLimiter *this)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  
  this->_padding_ = (longlong)&___7UNetObjectCountLimiter__6B_;
  pFVar1 = (this->RoundRobinState).InternalObjectIndices.Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InternalObjectIndices).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UNetObjectCountLimiter::FPerConnectionInfo,int>
            ((FPerConnectionInfo *)(this->PerConnectionInfos).AllocatorInstance.Data,
             (this->PerConnectionInfos).ArrayNum);
  pFVar1 = (this->PerConnectionInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pUVar2 = (this->Config).Object;
  if (pUVar2 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar2);
    (this->Config).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7UNetObjectPrioritizer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddConnection @ 1442b5220

void __thiscall UNetObjectCountLimiter::AddConnection(UNetObjectCountLimiter *this,uint param_1)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  uint *puVar8;
  
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
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = (this->InternalObjectIndices).BitCount;
  uVar7 = (ulonglong)uVar4;
  pFVar6 = (this->PerConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10;
  puVar8 = &this->PrioFrame;
  if (-1 < (int)uVar4) {
    pFVar2 = pFVar6 + 0xc;
    *(undefined4 *)&pFVar6[8].field_0x0 = 0;
    if (*(uint *)pFVar2 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,(ForAnyElementType *)pFVar6,0,(int *)pFVar2);
    }
    if (0 < (int)uVar4) {
      do {
        if ((*(undefined1 **)&pFVar6->field_0x0 <= puVar8) &&
           (puVar8 < *(undefined1 **)&pFVar6->field_0x0 + (longlong)*(int *)pFVar2 * 4)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        iVar5 = *(int *)&pFVar6[8].field_0x0;
        if (iVar5 == *(int *)pFVar2) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)pFVar6,(int *)pFVar2);
        }
        *(int *)&pFVar6[8].field_0x0 = iVar5 + 1;
        *(uint *)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar5 * 4) = *puVar8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar7);
}

// AddObject @ 1442b5620

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UNetObjectCountLimiter::AddObject
          (UNetObjectCountLimiter *this,uint param_1,FNetObjectPrioritizerAddObjectParams *param_2)

{
  FNetBitArray *this_00;
  uint *puVar1;
  uint uVar2;
  FNetObjectPrioritizationInfo *pFVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = (this->InternalObjectIndices).Storage.ArrayNum;
  this_00 = &this->InternalObjectIndices;
  pFVar3 = param_2->OutInfo;
  uVar8 = 0;
  uVar2 = (this->InternalObjectIndices).BitCount;
  iVar11 = 0;
  pFVar10 = (this_00->Storage).AllocatorInstance.Data;
  if (uVar12 == 0) {
LAB_1442b568f:
    if ((0xffff < uVar2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index <= 65535U",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\NetObjectCountLimiter.cpp"
                           ,0x82,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    puVar1 = &(this->InternalObjectIndices).BitCount;
    *puVar1 = *puVar1 + 0x40;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this_00->Storage,(this->InternalObjectIndices).BitCount + 0x1f >> 5,No);
    uVar8 = (this->InternalObjectIndices).BitCount;
    uVar12 = uVar2;
    if (uVar8 != 0) {
      pFVar10 = (this_00->Storage).AllocatorInstance.Data +
                (longlong)(this->InternalObjectIndices).Storage.ArrayNum * 4 + -4;
      *(uint *)pFVar10 = *(uint *)pFVar10 & 0xffffffffU >> (-(char)uVar8 & 0x1fU);
    }
LAB_1442b56ef:
    pFVar10 = (this_00->Storage).AllocatorInstance.Data;
    if (((this->InternalObjectIndices).BitCount <= uVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar10 = pFVar10 + (ulonglong)(uVar12 >> 5) * 4;
    *(uint *)pFVar10 = *(uint *)pFVar10 | 1 << (uVar12 & 0x1f);
    pFVar3->Data[0] = (ushort)uVar12;
    return true;
  }
LAB_1442b5655:
  if (*(uint *)pFVar10 == 0xffffffff) goto code_r0x0001442b565d;
  uVar12 = ~*(uint *)pFVar10;
  iVar4 = 0;
  if (uVar12 != 0) {
    for (; (uVar12 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
    }
  }
  iVar9 = 0x20;
  if (uVar12 != 0) {
    iVar9 = iVar4;
  }
  uVar12 = 0xffffffff;
  if ((uint)(iVar9 + iVar11) < uVar2) {
    uVar12 = iVar9 + iVar11;
  }
  if (uVar12 != 0xffffffff) goto LAB_1442b56ef;
  goto LAB_1442b568f;
code_r0x0001442b565d:
  uVar8 = uVar8 + 1;
  pFVar10 = pFVar10 + 4;
  iVar11 = iVar11 + 0x20;
  if (uVar12 <= uVar8) goto LAB_1442b568f;
  goto LAB_1442b5655;
}

// AllocInternalIndex @ 1442b5b80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

ushort __thiscall UNetObjectCountLimiter::AllocInternalIndex(UNetObjectCountLimiter *this)

{
  FNetBitArray *this_00;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  uint uVar11;
  
  uVar11 = (this->InternalObjectIndices).Storage.ArrayNum;
  this_00 = &this->InternalObjectIndices;
  uVar2 = (this->InternalObjectIndices).BitCount;
  uVar7 = 0;
  pFVar9 = (this_00->Storage).AllocatorInstance.Data;
  iVar10 = 0;
  if (uVar11 == 0) {
LAB_1442b5bea:
    if ((0xffff < uVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index <= 65535U",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\NetObjectCountLimiter.cpp"
                           ,0x82,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    puVar1 = &(this->InternalObjectIndices).BitCount;
    *puVar1 = *puVar1 + 0x40;
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this_00->Storage,(this->InternalObjectIndices).BitCount + 0x1f >> 5,No);
    uVar7 = (this->InternalObjectIndices).BitCount;
    uVar11 = uVar2;
    if (uVar7 != 0) {
      pFVar9 = (this_00->Storage).AllocatorInstance.Data +
               (longlong)(this->InternalObjectIndices).Storage.ArrayNum * 4 + -4;
      *(uint *)pFVar9 = *(uint *)pFVar9 & 0xffffffffU >> (-(char)uVar7 & 0x1fU);
    }
LAB_1442b5c4a:
    pFVar9 = (this_00->Storage).AllocatorInstance.Data;
    if (((this->InternalObjectIndices).BitCount <= uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2a2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
    pFVar9 = pFVar9 + (ulonglong)(uVar11 >> 5) * 4;
    *(uint *)pFVar9 = *(uint *)pFVar9 | 1 << (uVar11 & 0x1f);
    return (ushort)uVar11;
  }
LAB_1442b5bb0:
  if (*(uint *)pFVar9 == 0xffffffff) goto code_r0x0001442b5bb8;
  uVar11 = ~*(uint *)pFVar9;
  iVar3 = 0;
  if (uVar11 != 0) {
    for (; (uVar11 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  iVar8 = 0x20;
  if (uVar11 != 0) {
    iVar8 = iVar3;
  }
  uVar11 = 0xffffffff;
  if ((uint)(iVar8 + iVar10) < uVar2) {
    uVar11 = iVar8 + iVar10;
  }
  if (uVar11 != 0xffffffff) goto LAB_1442b5c4a;
  goto LAB_1442b5bea;
code_r0x0001442b5bb8:
  uVar7 = uVar7 + 1;
  pFVar9 = pFVar9 + 4;
  iVar10 = iVar10 + 0x20;
  if (uVar11 <= uVar7) goto LAB_1442b5bea;
  goto LAB_1442b5bb0;
}

// Deinit @ 1442bb3e0

void __thiscall UNetObjectCountLimiter::Deinit(UNetObjectCountLimiter *this)

{
  TStrongObjectPtr<UNetObjectCountLimiterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int *piVar2;
  undefined8 local_18 [2];
  
  pTVar1 = &this->Config;
  (this->ReplicationSystem).field0_0x0.DebugPtr = (UReplicationSystem *)0x0;
  if (pTVar1 != (TStrongObjectPtr<UNetObjectCountLimiterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)local_18) {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)0x0;
  }
  (this->InternalObjectIndices).BitCount = 0;
  piVar2 = &(this->InternalObjectIndices).Storage.ArrayMax;
  (this->InternalObjectIndices).Storage.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->InternalObjectIndices,0,piVar2);
  }
  return;
}

// FreeInternalIndex @ 1442c1ff0

void __thiscall
UNetObjectCountLimiter::FreeInternalIndex(UNetObjectCountLimiter *this,ushort param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->InternalObjectIndices).Storage.AllocatorInstance.Data;
  if ((this->InternalObjectIndices).BitCount <= (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = pFVar1 + (ulonglong)(param_1 >> 5) * 4;
  *(uint *)pFVar1 = *(uint *)pFVar1 & ~(1 << (param_1 & 0x1f));
  return;
}

// GetPrivateStaticClass @ 1442c32c0

UClass * __cdecl UNetObjectCountLimiter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetObjectCountLimiter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetObjectCountLimiter",
               &Z_Registration_Info_UClass_UNetObjectCountLimiter.InnerSingleton,
               StaticRegisterNativesUNetObjectCountLimiter,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNetObjectCountLimiter>,
               InternalVTableHelperCtorCaller<UNetObjectCountLimiter>,local_res8,
               UNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetObjectCountLimiter.InnerSingleton;
}

// Init @ 1442c4670

void __thiscall
UNetObjectCountLimiter::Init(UNetObjectCountLimiter *this,FNetObjectPrioritizerInitParams *param_1)

{
  TStrongObjectPtr<UNetObjectCountLimiterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int *piVar2;
  UObjectBase *this_00;
  UClass *pUVar3;
  UReplicationSystem *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  FString *pFVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  int iVar13;
  undefined1 local_res10 [8];
  longlong local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  
  if (param_1->Config == (UNetObjectPrioritizerConfig *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.Config != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\NetObjectCountLimiter.cpp"
                       ,0x18,L"Need config to operate.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (0xffff < param_1->MaxConnectionCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.MaxConnectionCount < 65536U",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\NetObjectCountLimiter.cpp"
                       ,0x19,L"Assumption being able to use uint16 for ConnectionIds is incorrect.")
    ;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = (UObjectBase *)param_1->Config;
  if (this_00 == (UObjectBase *)0x0) {
    pFVar9 = GetTypeName<UNetObjectCountLimiterConfig>(&local_50);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar8 = UNetObjectCountLimiterConfig::StaticClass();
  pUVar3 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
  iVar13 = (int)pUVar8->_padding_;
  if (((int)pUVar3->_padding_ < iVar13) ||
     ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar13 * 8) != &pUVar8->_padding_))
  {
    pFVar9 = GetTypeName<UNetObjectCountLimiterConfig>(&local_40);
    pwVar11 = L"";
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = GetFullNameForCastLogError<UNetObjectPrioritizerConfig>
                       (&local_30,(UNetObjectPrioritizerConfig *)this_00);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar12);
  }
  UObjectBase::AddRef(this_00);
  pTVar1 = &this->Config;
  if (pTVar1 == (TStrongObjectPtr<UNetObjectCountLimiterConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                 *)&local_58) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
  }
  else {
    if (pTVar1->Object != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
    }
    pTVar1->Object = (UObject *)this_00;
  }
  if (pTVar1->Object == (UObject *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(int *)&pTVar1->Object[1].field_0x4 == 0) {
    local_res10[0] = 0;
    `UNetObjectCountLimiter::Init'::__l2::<lambda_1>::operator()(local_res10);
  }
  UE::Net::FNetBitArray::Init(&this->InternalObjectIndices,0x40);
  piVar2 = &(this->PerConnectionInfos).ArrayNum;
  iVar13 = *piVar2;
  uVar10 = param_1->MaxConnectionCount + 1;
  if (iVar13 < (int)uVar10) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar10 - iVar13,&(this->PerConnectionInfos).AllocatorInstance,piVar2,
                       &(this->PerConnectionInfos).ArrayMax);
    DefaultConstructItems<UNetObjectCountLimiter::FPerConnectionInfo,int>
              ((this->PerConnectionInfos).AllocatorInstance.Data + (longlong)iVar7 * 0x10,
               uVar10 - iVar13);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar13) {
      iVar13 = iVar13 - uVar10;
      if (iVar13 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (iVar13 == 0) goto LAB_1442c4883;
      TArray<UNetObjectCountLimiter::FPerConnectionInfo,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (&this->PerConnectionInfos,uVar10,iVar13);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->PerConnectionInfos).AllocatorInstance,*piVar2,
                 &(this->PerConnectionInfos).ArrayMax);
    }
  }
LAB_1442c4883:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 = (param_1->ReplicationSystem).field0_0x0.DebugPtr, pUVar4 != (UReplicationSystem *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ReplicationSystem).field0_0x0 = (param_1->ReplicationSystem).field0_0x0;
  return;
}

// OnMaxInternalNetRefIndexIncreased @ 1442c8a40

void __thiscall
UNetObjectCountLimiter::OnMaxInternalNetRefIndexIncreased(UNetObjectCountLimiter *this,uint param_1)

{
  return;
}

// PrePrioritize @ 1442ca7c0

void __thiscall
UNetObjectCountLimiter::PrePrioritize
          (UNetObjectCountLimiter *this,FNetObjectPrePrioritizationParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->PrioFrame = this->PrioFrame + 1;
  if ((this->Config).Object == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)((this->Config).Object + 1) == 0) {
    PrePrioritizeForRoundRobin(this);
    return;
  }
  return;
}

// PrePrioritizeForRoundRobin @ 1442ca830

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UNetObjectCountLimiter::PrePrioritizeForRoundRobin(UNetObjectCountLimiter *this)

{
  uint *puVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  bool bVar12;
  undefined1 auStack_68 [48];
  ulonglong local_38;
  uint local_30 [2];
  
  puVar10 = auStack_68;
  local_38 = __security_cookie.value ^ (ulonglong)&local_38;
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId145,"UNetObjectCountLimiter_PrePrioritizeForRoundRobin",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\NetObjectCountLimiter.cpp"
               ,0x91);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId145);
  }
  uVar7 = (this->InternalObjectIndices).BitCount;
  UE::Net::FNetBitArray::Init(&(this->RoundRobinState).InternalObjectIndices,uVar7);
  puVar11 = (uint *)0x0;
  if (uVar7 <= (this->RoundRobinState).NextIndexToConsider) {
    (this->RoundRobinState).NextIndexToConsider = 0;
  }
  if (((this->Config).Object == (UObject *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                         ,0x67,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&(this->Config).Object[1].field_0x4;
  if (uVar7 != 0) {
    lVar8 = (ulonglong)uVar7 * 4;
    puVar10 = auStack_68;
    if ((ulonglong)uVar7 != 0) {
      uVar9 = lVar8 + 0x1e;
      if (uVar9 <= lVar8 + 0xfU) {
        uVar9 = 0xffffffffffffff0;
      }
      puVar10 = auStack_68 + -(uVar9 & 0xfffffffffffffff0);
      puVar11 = (uint *)((longlong)local_30 + -(uVar9 & 0xfffffffffffffff0));
    }
    uVar2 = (this->RoundRobinState).NextIndexToConsider;
    uVar6 = (this->InternalObjectIndices).BitCount;
    pFVar3 = (this->InternalObjectIndices).Storage.AllocatorInstance.Data;
    *(uint *)(puVar10 + 0x28) = uVar7;
    *(uint **)(puVar10 + 0x20) = puVar11;
    *(undefined8 *)(puVar10 + -8) = 0x1442ca95f;
    uVar6 = UE::Net::FNetBitArrayHelper::GetSetBitIndices
                      ((uint *)pFVar3,uVar6,(uint)uVar2,0xffffffff,*(uint **)(puVar10 + 0x20),
                       *(uint *)(puVar10 + 0x28));
    uVar2 = (this->RoundRobinState).NextIndexToConsider;
    if ((uVar2 != 0) && (uVar6 < uVar7)) {
      pFVar3 = (this->InternalObjectIndices).Storage.AllocatorInstance.Data;
      *(uint *)(puVar10 + 0x28) = uVar7 - uVar6;
      *(uint **)(puVar10 + 0x20) = puVar11 + uVar6;
      uVar7 = (this->InternalObjectIndices).BitCount;
      *(undefined8 *)(puVar10 + -8) = 0x1442ca995;
      uVar7 = UE::Net::FNetBitArrayHelper::GetSetBitIndices
                        ((uint *)pFVar3,uVar7,0,uVar2 - 1,*(uint **)(puVar10 + 0x20),
                         *(uint *)(puVar10 + 0x28));
      uVar6 = uVar6 + uVar7;
    }
    if (uVar6 != 0) {
      (this->RoundRobinState).NextIndexToConsider = (short)puVar11[uVar6 - 1] + 1;
      if ((int)uVar6 < 0) {
        *(undefined8 *)(puVar10 + -8) = 0x1442ca9d2;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      puVar1 = puVar11 + (int)uVar6;
      for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
        uVar7 = *puVar11;
        pFVar3 = (this->RoundRobinState).InternalObjectIndices.Storage.AllocatorInstance.Data;
        if ((this->RoundRobinState).InternalObjectIndices.BitCount <= uVar7) {
          *(undefined8 *)(puVar10 + -8) = 0x1442caa10;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < BitCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                             ,0x2a2,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(uint *)(pFVar3 + (ulonglong)(uVar7 >> 5) * 4) =
             *(uint *)(pFVar3 + (ulonglong)(uVar7 >> 5) * 4) | 1 << (uVar7 & 0x1f);
      }
    }
  }
  if (bVar12) {
    *(undefined8 *)(puVar10 + -8) = 0x1442caa3f;
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(undefined8 *)(puVar10 + -8) = 0x1442caa4b;
  return;
}

// Prioritize @ 1442d1d80

void __thiscall
UNetObjectCountLimiter::Prioritize
          (UNetObjectCountLimiter *this,FNetObjectPrioritizationParams *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Config).Object == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)((this->Config).Object + 1);
  if (iVar1 == 0) {
    PrioritizeForRoundRobin(this,param_1);
  }
  else if (iVar1 == 1) {
    PrioritizeForFill(this,param_1);
    return;
  }
  return;
}

// PrioritizeForFill @ 1442d4600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UNetObjectCountLimiter::PrioritizeForFill
          (UNetObjectCountLimiter *this,FNetObjectPrioritizationParams *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FNetObjectPrioritizationInfo *pFVar7;
  UObject *pUVar8;
  code *pcVar9;
  FIdentityFunctor FVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  longlong lVar18;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this_00;
  FSortInfo *pFVar19;
  bool *pbVar20;
  FSortInfo *pFVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  FIdentityFunctor local_78 [4];
  uint local_74;
  undefined1 local_70 [16];
  ulonglong local_60;
  ulonglong local_58;
  
  puVar15 = auStack_a8;
  local_58 = __security_cookie.value ^ (ulonglong)local_78;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId234,"UNetObjectCountLimiter_PrioritizeForFill",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\NetObjectCountLimiter.cpp"
               ,0xea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId234);
  }
  if (((this->FillState).LastPrioFrame == this->PrioFrame) &&
     ((this->FillState).LastConnectionId == param_1->ConnectionId)) {
    local_78[0] = (FIdentityFunctor)0x0;
    `UNetObjectCountLimiter::PrioritizeForFill'::__l2::<lambda_1>::operator()(local_78);
  }
  (this->FillState).LastPrioFrame = this->PrioFrame;
  (this->FillState).LastConnectionId = param_1->ConnectionId;
  local_74 = param_1->ConnectionId;
  lVar18 = (longlong)(int)local_74;
  iVar5 = (this->PerConnectionInfos).ArrayNum;
  uVar12 = 0;
  if ((int)local_74 < iVar5) {
    uVar12 = ~local_74 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (local_88 = lVar18, local_80 = (longlong)iVar5,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar12 = (this->InternalObjectIndices).BitCount;
  this_00 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
            ((this->PerConnectionInfos).AllocatorInstance.Data + lVar18 * 0x10);
  if ((uint)this_00->ArrayNum < uVar12) {
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar12,Default);
  }
  local_60 = (ulonglong)param_1->ObjectCount;
  pFVar6 = (this_00->AllocatorInstance).Data;
  if (local_60 == 0) {
    pFVar19 = (FSortInfo *)0x0;
  }
  else {
    uVar13 = local_60 * 0x10 + 0x1e;
    if (uVar13 <= local_60 * 0x10 + 0xf) {
      uVar13 = 0xffffffffffffff0;
    }
    puVar15 = auStack_a8 + -(uVar13 & 0xfffffffffffffff0);
    pFVar19 = (FSortInfo *)(local_70 + -(uVar13 & 0xfffffffffffffff0));
  }
  local_70._8_8_ = pFVar6;
  if ((int)param_1->ObjectCount < 0) {
    *(undefined8 *)(puVar15 + -8) = 0x1442d47b1;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar12 = param_1->ObjectCount;
  local_70._0_8_ = ZEXT48(uVar12);
  puVar17 = param_1->ObjectIndices;
  if ((int)uVar12 < 0) {
    *(undefined8 *)(puVar15 + -8) = 0x1442d47eb;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar12 = (uint)local_70._0_8_;
  }
  puVar1 = puVar17 + (int)uVar12;
  pFVar21 = pFVar19;
  for (; puVar17 != puVar1; puVar17 = puVar17 + 1) {
    uVar12 = *puVar17;
    pFVar7 = param_1->PrioritizationInfos;
    uVar4 = pFVar7[uVar12].Data[0];
    pFVar21->InternalIndex = (uint)uVar4;
    pFVar21->ObjectIndex = uVar12;
    pFVar21->FrameCountSinceConsidered = this->PrioFrame - *(int *)(pFVar6 + (ulonglong)uVar4 * 4);
    pFVar21->bIsOwnedByConnection = pFVar7[uVar12].Data[1] == local_74;
    pFVar21 = pFVar21 + 1;
  }
  if ((this->Config).Object == (UObject *)0x0) {
    *(undefined8 *)(puVar15 + -8) = 0x1442d487d;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pUVar8 = (this->Config).Object;
  fVar2 = *(float *)&pUVar8[1].field_0x8;
  if (pUVar8 == (UObject *)0x0) {
    *(undefined8 *)(puVar15 + -8) = 0x1442d48b1;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pUVar8 = (this->Config).Object;
  fVar3 = *(float *)&pUVar8[1].field_0xc;
  if (pUVar8 == (UObject *)0x0) {
    *(undefined8 *)(puVar15 + -8) = 0x1442d48e5;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pUVar8 = (this->Config).Object;
  iVar16 = 0;
  iVar5 = *(int *)&pUVar8[1].field_0x4;
  if (pUVar8 == (UObject *)0x0) {
    *(undefined8 *)(puVar15 + -8) = 0x1442d491a;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  FVar10 = local_78[0];
  iVar14 = (int)local_60;
  pFVar21 = pFVar19 + iVar14;
  if ((this->Config).Object[1].field_0x10 == '\0') {
    *(undefined8 *)(puVar15 + -8) = 0x1442d49a9;
    AlgoImpl::
    IntroSortInternal<_UNetObjectCountLimiter::PrioritizeForFill_::__l2::FSortInfo,int,FIdentityFunctor,_UNetObjectCountLimiter::PrioritizeForFill_::__l23::<lambda_3>_>
              (pFVar19,iVar14,FVar10,(<lambda_3>)FVar10);
    for (; pFVar19 != pFVar21; pFVar19 = pFVar19 + 1) {
      *(uint *)(local_70._8_8_ + (ulonglong)pFVar19->InternalIndex * 4) = this->PrioFrame;
      fVar23 = fVar2;
      if (pFVar19->bIsOwnedByConnection != false) {
        fVar23 = fVar3;
      }
      iVar16 = iVar16 + 1;
      param_1->Priorities[pFVar19->ObjectIndex] = fVar23;
      if (iVar16 == iVar5) break;
    }
  }
  else {
    *(undefined8 *)(puVar15 + -8) = 0x1442d494a;
    AlgoImpl::
    IntroSortInternal<_UNetObjectCountLimiter::PrioritizeForFill_::__l2::FSortInfo,int,FIdentityFunctor,_UNetObjectCountLimiter::PrioritizeForFill_::__l14::<lambda_2>_>
              (pFVar19,iVar14,FVar10,(<lambda_2>)FVar10);
    if (pFVar19 != pFVar21) {
      pbVar20 = &pFVar19->bIsOwnedByConnection;
      do {
        *(uint *)(local_70._8_8_ + (ulonglong)*(uint *)(pbVar20 + -8) * 4) = this->PrioFrame;
        fVar23 = fVar2;
        if (*pbVar20 != false) {
          fVar23 = fVar3;
        }
        param_1->Priorities[((FSortInfo *)(pbVar20 + -0xc))->ObjectIndex] = fVar23;
        iVar16 = iVar16 + (uint)(*pbVar20 == false);
      } while ((iVar16 != iVar5) &&
              (pFVar19 = (FSortInfo *)(pbVar20 + 4), pbVar20 = pbVar20 + 0x10, pFVar19 != pFVar21));
    }
  }
  if (bVar22) {
    *(undefined8 *)(puVar15 + -8) = 0x1442d49f2;
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(undefined8 *)(puVar15 + -8) = 0x1442d49fe;
  return;
}

// PrioritizeForRoundRobin @ 1442d4a30

void __thiscall
UNetObjectCountLimiter::PrioritizeForRoundRobin
          (UNetObjectCountLimiter *this,FNetObjectPrioritizationParams *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  UObject *pUVar8;
  FNetObjectPrioritizationInfo *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  bool bVar16;
  float fVar17;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId181,"UNetObjectCountLimiter_PrioritizeForRoundRobin",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\NetObjectCountLimiter.cpp"
               ,0xb5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId181);
  }
  if (((this->Config).Object == (UObject *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pUVar8 = (this->Config).Object;
  cVar4 = pUVar8[1].field_0x10;
  if ((pUVar8 == (UObject *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pUVar8 = (this->Config).Object;
  fVar2 = *(float *)&pUVar8[1].field_0x8;
  if ((pUVar8 == (UObject *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pUVar8 = (this->Config).Object;
  fVar3 = *(float *)&pUVar8[1].field_0xc;
  if ((pUVar8 == (UObject *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                          ,0x67,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar13 = 0;
  puVar14 = param_1->ObjectIndices;
  uVar6 = param_1->ObjectCount;
  uVar7 = *(uint *)&(this->Config).Object[1].field_0x4;
  if (cVar4 == '\0') {
    if (((int)uVar6 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar1 = puVar14 + (int)uVar6;
    for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
      uVar6 = *puVar14;
      pFVar9 = param_1->PrioritizationInfos;
      pFVar10 = (this->RoundRobinState).InternalObjectIndices.Storage.AllocatorInstance.Data;
      uVar5 = pFVar9[uVar6].Data[0];
      if (((this->RoundRobinState).InternalObjectIndices.BitCount <= (uint)uVar5) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((*(uint *)(pFVar10 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
        fVar17 = fVar2;
        if ((uint)pFVar9[uVar6].Data[1] == param_1->ConnectionId) {
          fVar17 = fVar3;
        }
        uVar13 = uVar13 + 1;
        param_1->Priorities[uVar6] = fVar17;
        if (uVar13 == uVar7) break;
      }
    }
  }
  else {
    if (((int)uVar6 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar1 = puVar14 + (int)uVar6;
    for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
      uVar6 = *puVar14;
      pFVar9 = param_1->PrioritizationInfos;
      pFVar10 = (this->RoundRobinState).InternalObjectIndices.Storage.AllocatorInstance.Data;
      uVar5 = pFVar9[uVar6].Data[0];
      if (((this->RoundRobinState).InternalObjectIndices.BitCount <= (uint)uVar5) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < BitCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                              ,0x2c1,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar15 = (uint)pFVar9[uVar6].Data[1];
      if ((*(uint *)(pFVar10 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0 ||
          uVar15 == param_1->ConnectionId) {
        if (uVar15 == param_1->ConnectionId) {
          param_1->Priorities[uVar6] = fVar3;
        }
        else if (uVar13 < uVar7) {
          uVar13 = uVar13 + 1;
          param_1->Priorities[uVar6] = fVar2;
        }
      }
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// RemoveConnection @ 1442dec00

void __thiscall UNetObjectCountLimiter::RemoveConnection(UNetObjectCountLimiter *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement local_18 [16];
  
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
  pFVar4 = (this->PerConnectionInfos).AllocatorInstance.Data + (longlong)(int)param_1 * 0x10;
  if (pFVar4 != local_18) {
    if (*(void **)pFVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar4);
    }
    *(undefined8 *)pFVar4 = 0;
    *(undefined8 *)(pFVar4 + 8) = 0;
  }
  return;
}

// RemoveObject @ 1442def20

void __thiscall
UNetObjectCountLimiter::RemoveObject
          (UNetObjectCountLimiter *this,uint param_1,FNetObjectPrioritizationInfo *param_2)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  uVar1 = param_2->Data[0];
  pFVar2 = (this->InternalObjectIndices).Storage.AllocatorInstance.Data;
  if ((this->InternalObjectIndices).BitCount <= (uint)uVar1) {
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
  return;
}

// StaticRegisterNativesUNetObjectCountLimiter @ 1442e62e0

void __cdecl UNetObjectCountLimiter::StaticRegisterNativesUNetObjectCountLimiter(void)

{
  return;
}

// UpdateObjects @ 1442eab30

void __thiscall
UNetObjectCountLimiter::UpdateObjects
          (UNetObjectCountLimiter *this,FNetObjectPrioritizerUpdateParams *param_1)

{
  uint *puVar1;
  uint uVar2;
  FNetObjectPrioritizationInfo *pFVar3;
  code *pcVar4;
  bool bVar5;
  ushort uVar6;
  FReplicationSystemInternal *pFVar8;
  uint *puVar9;
  uint uVar7;
  
  pFVar8 = UReplicationSystem::GetReplicationSystemInternal
                     ((this->ReplicationSystem).field0_0x0.DebugPtr);
  uVar2 = param_1->ObjectCount;
  puVar9 = param_1->ObjectIndices;
  if (((int)uVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar1 = puVar9 + (int)uVar2;
  do {
    if (puVar9 == puVar1) {
      return;
    }
    uVar2 = *puVar9;
    pFVar3 = param_1->PrioritizationInfos;
    if ((pFVar8->Filtering).bHasDirtyOwner == 0) {
      uVar7 = 0;
      if ((int)uVar2 < (pFVar8->Filtering).ObjectIndexToOwningConnection.ArrayNum) {
        uVar7 = ~uVar2 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(ushort *)
               ((pFVar8->Filtering).ObjectIndexToOwningConnection.AllocatorInstance.Data +
               (longlong)(int)uVar2 * 2);
    }
    else {
      uVar7 = UE::Net::Private::FReplicationFiltering::GetOwningConnectionIfDirty
                        (&pFVar8->Filtering,uVar2);
      uVar6 = (ushort)uVar7;
    }
    puVar9 = puVar9 + 1;
    pFVar3[uVar2].Data[1] = uVar6;
  } while( true );
}

// operator() @ 1504b8300

bool __thiscall `UNetObjectCountLimiter::Init'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1072171639791157275>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1072171639791157275>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504b8390

bool __thiscall
`UNetObjectCountLimiter::PrioritizeForFill'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1072171639791157495>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1072171639791157495>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

