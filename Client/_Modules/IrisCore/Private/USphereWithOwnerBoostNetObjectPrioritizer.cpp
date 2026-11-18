// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 19

// StaticClass @ 14429f600

UClass * __cdecl USphereWithOwnerBoostNetObjectPrioritizer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereWithOwnerBoostNetObjectPrioritizer",
               &Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.InnerSingleton,
               StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizer,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereWithOwnerBoostNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<USphereWithOwnerBoostNetObjectPrioritizer>,local_res8,
               USphereNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.InnerSingleton;
}

// USphereWithOwnerBoostNetObjectPrioritizer @ 1442af6c0

USphereWithOwnerBoostNetObjectPrioritizer * __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::USphereWithOwnerBoostNetObjectPrioritizer
          (USphereWithOwnerBoostNetObjectPrioritizer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,0);
  this->_padding_ = (longlong)&___7USphereWithOwnerBoostNetObjectPrioritizer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::
  TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>(&this->OwningConnections,0);
  (this->AssignedOwningConnectionIndices).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AssignedOwningConnectionIndices).Storage.ArrayNum = 0;
  (this->AssignedOwningConnectionIndices).Storage.ArrayMax = 0;
  (this->AssignedOwningConnectionIndices).BitCount = 0;
  (this->ReplicationSystem).field0_0x0.DebugPtr = (UReplicationSystem *)0x0;
  return this;
}

// USphereWithOwnerBoostNetObjectPrioritizer @ 1442af740

USphereWithOwnerBoostNetObjectPrioritizer * __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::USphereWithOwnerBoostNetObjectPrioritizer
          (USphereWithOwnerBoostNetObjectPrioritizer *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,0);
  this->_padding_ = (longlong)&___7USphereWithOwnerBoostNetObjectPrioritizer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::
  TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>(&this->OwningConnections,0);
  (this->AssignedOwningConnectionIndices).Storage.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AssignedOwningConnectionIndices).Storage.ArrayNum = 0;
  (this->AssignedOwningConnectionIndices).Storage.ArrayMax = 0;
  (this->AssignedOwningConnectionIndices).BitCount = 0;
  (this->ReplicationSystem).field0_0x0.DebugPtr = (UReplicationSystem *)0x0;
  return this;
}

// ~USphereWithOwnerBoostNetObjectPrioritizer @ 1442b0f40

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::~USphereWithOwnerBoostNetObjectPrioritizer
          (USphereWithOwnerBoostNetObjectPrioritizer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USphereWithOwnerBoostNetObjectPrioritizer__6B_;
  pFVar1 = (this->AssignedOwningConnectionIndices).Storage.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            (&(this->OwningConnections).Chunks);
  USphereNetObjectPrioritizer::~USphereNetObjectPrioritizer((USphereNetObjectPrioritizer *)this);
  return;
}

// AddObject @ 1442b5790

bool __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::AddObject
          (USphereWithOwnerBoostNetObjectPrioritizer *this,uint param_1,
          FNetObjectPrioritizerAddObjectParams *param_2)

{
  longlong lVar1;
  FObjectLocationInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FRepTagFindInfo local_28;
  
  lVar1 = *(longlong *)this->_padding_;
  if ((*(uint *)((longlong *)this->_padding_ + 2) <= param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((*(uint *)(lVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) == 0) {
    bVar4 = UE::Net::FindRepTag(param_2->Protocol,0x719e9e9e02f8b16,&local_28);
    if (((!bVar4) || (0xfffe < local_28.ExternalStateOffset)) || (0xfffe < local_28.StateIndex)) {
      return false;
    }
  }
  else {
    local_28.StateIndex = 0xffff;
    local_28.ExternalStateOffset = 0xffff;
  }
  pFVar2 = (FObjectLocationInfo *)param_2->OutInfo;
  *(undefined2 *)pFVar2 = (undefined2)local_28.ExternalStateOffset;
  *(undefined2 *)&pFVar2->field_0x2 = (undefined2)local_28.StateIndex;
  uVar6 = ULocationBasedNetObjectPrioritizer::AllocLocation
                    ((ULocationBasedNetObjectPrioritizer *)this);
  *(short *)&pFVar2->field_0x4 = (short)uVar6;
  *(short *)&pFVar2->field_0x6 = (short)(uVar6 >> 0x10);
  ULocationBasedNetObjectPrioritizer::UpdateLocation
            ((ULocationBasedNetObjectPrioritizer *)this,param_1,pFVar2,param_2->InstanceProtocol);
  AllocOwningConnection(this);
  return true;
}

// AllocOwningConnection @ 1442b5e90

uint __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::AllocOwningConnection
          (USphereWithOwnerBoostNetObjectPrioritizer *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  void *local_28 [2];
  
  uVar6 = (this->AssignedOwningConnectionIndices).Storage.ArrayNum;
  uVar3 = 0;
  pFVar7 = (this->AssignedOwningConnectionIndices).Storage.AllocatorInstance.Data;
  iVar9 = 0;
  uVar8 = 0xffffffff;
  if (uVar6 != 0) {
    do {
      if (*(uint *)pFVar7 != 0xffffffff) {
        uVar6 = ~*(uint *)pFVar7;
        iVar5 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
        iVar4 = 0x20;
        if (uVar6 != 0) {
          iVar4 = iVar5;
        }
        uVar8 = 0xffffffff;
        if ((uint)(iVar4 + iVar9) < (this->AssignedOwningConnectionIndices).BitCount) {
          uVar8 = iVar4 + iVar9;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      pFVar7 = pFVar7 + 4;
      iVar9 = iVar9 + 0x20;
    } while (uVar3 < uVar6);
  }
  uVar6 = (this->OwningConnections).NumElements;
  if (uVar6 <= uVar8) {
    (this->OwningConnections).NumElements = uVar6 + 0x400;
    iVar9 = (this->OwningConnections).Chunks.Array.ArrayNum;
    iVar5 = (int)(uVar6 + 0x7ff + ((int)(uVar6 + 0x7ff) >> 0x1f & 0x3ffU)) >> 10;
    if (iVar9 < iVar5) {
      uVar10 = (ulonglong)(uint)(iVar5 - iVar9);
      do {
        local_28[0] = ::operator_new(0x800);
        pFVar7 = (this->OwningConnections).Chunks.Array.AllocatorInstance.Data;
        if (((pFVar7 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar7 + (longlong)(this->OwningConnections).Chunks.Array.ArrayMax * 8)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
        iVar9 = (this->OwningConnections).Chunks.Array.ArrayNum;
        if (iVar9 == (this->OwningConnections).Chunks.Array.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&this->OwningConnections,
                             &(this->OwningConnections).Chunks.Array.ArrayMax);
        }
        pFVar7 = (this->OwningConnections).Chunks.Array.AllocatorInstance.Data;
        (this->OwningConnections).Chunks.Array.ArrayNum = iVar9 + 1;
        *(void **)(pFVar7 + (longlong)iVar9 * 8) = local_28[0];
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  pFVar7 = (this->AssignedOwningConnectionIndices).Storage.AllocatorInstance.Data;
  if (((this->AssignedOwningConnectionIndices).BitCount <= uVar8) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2a2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  pFVar7 = pFVar7 + (ulonglong)(uVar8 >> 5) * 4;
  *(uint *)pFVar7 = *(uint *)pFVar7 | 1 << (uVar8 & 0x1f);
  return uVar8;
}

// BoostOwningConnectionPriorities @ 1442b66c0

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::BoostOwningConnectionPriorities
          (USphereWithOwnerBoostNetObjectPrioritizer *this,FOwnerBoostBatchParams *param_1)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar3 = param_1->OwnedObjectCount;
  lVar9 = 0;
  uVar8 = 0;
  fVar2 = param_1->OwnerPriorityBoost;
  lVar4 = *(longlong *)&param_1->field_0x240;
  puVar7 = param_1->OwnedObjectsLocalIndices;
  if (uVar3 < 4) {
    if (uVar3 == 0) {
      return;
    }
  }
  else {
    puVar6 = puVar7 + 2;
    uVar5 = (uVar3 - 4 >> 2) + 1;
    uVar10 = (ulonglong)uVar5;
    uVar8 = uVar5 * 4;
    lVar9 = (ulonglong)uVar5 * 4;
    do {
      *(float *)(lVar4 + (ulonglong)puVar6[-2] * 4) =
           fVar2 + *(float *)(lVar4 + (ulonglong)puVar6[-2] * 4);
      *(float *)(lVar4 + (ulonglong)puVar6[-1] * 4) =
           fVar2 + *(float *)(lVar4 + (ulonglong)puVar6[-1] * 4);
      *(float *)(lVar4 + (ulonglong)*puVar6 * 4) =
           fVar2 + *(float *)(lVar4 + (ulonglong)*puVar6 * 4);
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 4;
      *(float *)(lVar4 + (ulonglong)*puVar1 * 4) =
           fVar2 + *(float *)(lVar4 + (ulonglong)*puVar1 * 4);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (uVar3 <= uVar8) {
      return;
    }
  }
  puVar7 = puVar7 + lVar9;
  uVar10 = (ulonglong)(uVar3 - uVar8);
  do {
    uVar3 = *puVar7;
    puVar7 = puVar7 + 1;
    *(float *)(lVar4 + (ulonglong)uVar3 * 4) = fVar2 + *(float *)(lVar4 + (ulonglong)uVar3 * 4);
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  return;
}

// Deinit @ 1442bb500

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::Deinit(USphereWithOwnerBoostNetObjectPrioritizer *this)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 local_18 [2];
  
  plVar1 = &this->_padding_;
  this->_padding_ = 0;
  if (plVar1 != local_18) {
    if ((UObject *)*plVar1 != (UObject *)0x0) {
      UEStrongObjectPtr_Private::ReleaseUObject((UObject *)*plVar1);
    }
    *plVar1 = 0;
  }
  (this->ReplicationSystem).field0_0x0.DebugPtr = (UReplicationSystem *)0x0;
  (this->AssignedOwningConnectionIndices).BitCount = 0;
  piVar2 = &(this->AssignedOwningConnectionIndices).Storage.ArrayMax;
  (this->AssignedOwningConnectionIndices).Storage.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->AssignedOwningConnectionIndices,0,piVar2);
  }
  TIndirectArray<TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->OwningConnections).Chunks,0);
  (this->OwningConnections).NumElements = 0;
  return;
}

// FinishBatch @ 1442c17e0

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::FinishBatch
          (USphereWithOwnerBoostNetObjectPrioritizer *this,FOwnerBoostBatchParams *param_1,
          FNetObjectPrioritizationParams *param_2,uint param_3)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId304,"USphereNetObjectPrioritizer_FinishBatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
               ,0x130);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId304);
  }
  iVar1 = *(int *)&param_1->field_0x234;
  pfVar2 = param_2->Priorities;
  puVar3 = param_2->ObjectIndices;
  lVar4 = *(longlong *)&param_1->field_0x240;
  for (uVar5 = param_3; uVar5 != iVar1 + param_3; uVar5 = uVar5 + 1) {
    pfVar2[puVar3[uVar5]] = *(float *)(lVar4 + (ulonglong)(uVar5 - param_3) * 4);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FreeOwningConnection @ 1442c20d0

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::FreeOwningConnection
          (USphereWithOwnerBoostNetObjectPrioritizer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->AssignedOwningConnectionIndices).Storage.AllocatorInstance.Data;
  if ((this->AssignedOwningConnectionIndices).BitCount <= param_1) {
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
  *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) =
       *(uint *)(pFVar1 + (ulonglong)(param_1 >> 5) * 4) & ~(1 << (param_1 & 0x1f));
  return;
}

// GetPrivateStaticClass @ 1442c39f0

UClass * __cdecl USphereWithOwnerBoostNetObjectPrioritizer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"SphereWithOwnerBoostNetObjectPrioritizer",
               &Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.InnerSingleton,
               StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizer,0xa0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USphereWithOwnerBoostNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<USphereWithOwnerBoostNetObjectPrioritizer>,local_res8,
               USphereNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.InnerSingleton;
}

// Init @ 1442c4bf0

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::Init
          (USphereWithOwnerBoostNetObjectPrioritizer *this,FNetObjectPrioritizerInitParams *param_1)

{
  longlong *plVar1;
  int iVar2;
  UNetObjectPrioritizerConfig *pUVar3;
  UObjectBase *this_00;
  UReplicationSystem *pUVar4;
  code *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  FWorldLocations *pFVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined8 local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20;
  
  if (0xfffe < param_1->MaxConnectionCount) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.MaxConnectionCount < std::numeric_limits<ConnectionId>::max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereWithOwnerBoostNetObjectPrioritizer.cpp"
                       ,0x10,L"Need to increase size of ConnectionId type.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar3 = param_1->Config;
  if (pUVar3 == (UNetObjectPrioritizerConfig *)0x0) {
    pFVar10 = GetTypeName<USphereWithOwnerBoostNetObjectPrioritizerConfig>(&local_70);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pUVar7 = USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass();
  iVar2 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8)
      != &pUVar7->_padding_)) {
    pFVar10 = GetTypeName<USphereWithOwnerBoostNetObjectPrioritizerConfig>(&local_30);
    pwVar11 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UNetObjectPrioritizerConfig>(&local_20,pUVar3);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar12);
  }
  if (param_1->Config == (UNetObjectPrioritizerConfig *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.Config != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereNetObjectPrioritizer.cpp"
                       ,0xe,L"Need config to operate.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = (UObjectBase *)param_1->Config;
  if (this_00 != (UObjectBase *)0x0) {
    pUVar8 = USphereNetObjectPrioritizerConfig::StaticClass();
    pUVar7 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= (int)pUVar7->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) == &pUVar8->_padding_)
       ) {
      UObjectBase::AddRef(this_00);
      plVar1 = &this->_padding_;
      if (plVar1 == &local_78) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
      }
      else {
        if ((UObject *)*plVar1 != (UObject *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject((UObject *)*plVar1);
        }
        *plVar1 = (longlong)this_00;
      }
      UE::Net::FNetBitArray::Init((FNetBitArray *)&this->_padding_,param_1->CurrentMaxInternalIndex)
      ;
      pFVar9 = UReplicationSystem::GetWorldLocations
                         ((param_1->ReplicationSystem).field0_0x0.DebugPtr);
      this->_padding_ = (longlong)pFVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 = (param_1->ReplicationSystem).field0_0x0.DebugPtr,
         pUVar4 != (UReplicationSystem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->ReplicationSystem).field0_0x0 = (param_1->ReplicationSystem).field0_0x0;
      UE::Net::FNetBitArray::Init
                (&this->AssignedOwningConnectionIndices,param_1->AbsoluteMaxNetObjectCount);
      return;
    }
    pFVar10 = GetTypeName<USphereNetObjectPrioritizerConfig>(&local_50);
    pwVar11 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UNetObjectPrioritizerConfig>
                        (&local_40,(UNetObjectPrioritizerConfig *)this_00);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar12);
  }
  pFVar10 = GetTypeName<USphereNetObjectPrioritizerConfig>(&local_60);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar11);
}

// PrepareBatch @ 1442cb950

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::PrepareBatch
          (USphereWithOwnerBoostNetObjectPrioritizer *this,FOwnerBoostBatchParams *param_1,
          FNetObjectPrioritizationParams *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  FNetObjectPrioritizationInfo *pFVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  code *pcVar11;
  uint uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  bool bVar22;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId107,"USphereWithOwnerBoostNetObjectPrioritizer_PrepareBatch"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereWithOwnerBoostNetObjectPrioritizer.cpp"
               ,0x6b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId107);
  }
  puVar4 = param_2->ObjectIndices;
  iVar3 = *(int *)&param_1->field_0x234;
  pFVar5 = param_2->PrioritizationInfos;
  lVar6 = *(longlong *)&param_1->field_0x240;
  pfVar7 = param_2->Priorities;
  lVar8 = *(longlong *)&param_1->field_0x238;
  puVar9 = param_1->OwnedObjectsLocalIndices;
  for (uVar21 = param_3; uVar21 != iVar3 + param_3; uVar21 = uVar21 + 1) {
    *(float *)(lVar6 + (ulonglong)(uVar21 - param_3) * 4) = pfVar7[puVar4[uVar21]];
  }
  uVar21 = param_2->ConnectionId;
  uVar20 = 0;
  uVar18 = 0;
  iVar3 = *(int *)&param_1->field_0x234;
  uVar17 = param_3;
  while( true ) {
    if (uVar17 == iVar3 + param_3) {
      param_1->OwnedObjectCount = (uint)uVar18;
      uVar21 = param_3 + 3 & 0xfffffffc;
      if (param_3 != uVar21) {
        uVar18 = (ulonglong)(uVar21 - param_3);
        do {
          *(undefined4 *)(lVar6 + uVar20 * 4) = 0;
          puVar1 = (undefined8 *)(uVar20 * 0x20 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(uVar20 * 0x20 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar18 = uVar18 - 1;
          uVar20 = (ulonglong)((int)uVar20 + 1);
        } while (uVar18 != 0);
      }
      if (bVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar12 = (uint)uVar20;
    uVar17 = puVar4[uVar12 + param_3];
    uVar19 = CONCAT22(pFVar5[uVar17].Data[3],pFVar5[uVar17].Data[2]);
    uVar15 = (int)(uVar19 + ((int)(short)pFVar5[uVar17].Data[3] >> 0xf & 0x7ffU)) >> 0xb;
    uVar19 = uVar19 & 0x800007ff;
    if ((int)uVar19 < 0) {
      uVar19 = (uVar19 - 1 | 0xfffff800) + 1;
    }
    uVar16 = 0;
    if ((int)uVar15 < (int)this->_padding_) {
      uVar16 = ~uVar15 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) break;
    lVar10 = *(longlong *)(this->_padding_ + (longlong)(int)uVar15 * 8);
    puVar1 = (undefined8 *)(lVar10 + (longlong)(int)uVar19 * 0x20);
    uVar13 = puVar1[1];
    puVar2 = (undefined8 *)(uVar20 * 0x20 + lVar8);
    *puVar2 = *puVar1;
    puVar2[1] = uVar13;
    puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)(int)uVar19 * 0x20);
    uVar13 = puVar1[1];
    puVar2 = (undefined8 *)(uVar20 * 0x20 + 0x10 + lVar8);
    *puVar2 = *puVar1;
    puVar2[1] = uVar13;
    uVar15 = CONCAT22(pFVar5[uVar17].Data[3],pFVar5[uVar17].Data[2]);
    uVar17 = (int)(uVar15 + ((int)(short)pFVar5[uVar17].Data[3] >> 0xf & 0x3ffU)) >> 10;
    uVar15 = uVar15 & 0x800003ff;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffc00) + 1;
    }
    uVar19 = 0;
    if ((int)uVar17 < (this->OwningConnections).Chunks.Array.ArrayNum) {
      uVar19 = ~uVar17 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (*(ushort *)
         (*(longlong *)
           ((this->OwningConnections).Chunks.Array.AllocatorInstance.Data +
           (longlong)(int)uVar17 * 8) + (longlong)(int)uVar15 * 2) == uVar21) {
      puVar9[uVar18] = uVar12;
      uVar18 = (ulonglong)((uint)uVar18 + 1);
    }
    uVar20 = (ulonglong)(uVar12 + 1);
    uVar17 = uVar12 + 1 + param_3;
  }
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

// Prioritize @ 1442d2180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::Prioritize
          (USphereWithOwnerBoostNetObjectPrioritizer *this,FNetObjectPrioritizationParams *param_1)

{
  FMemStackBase *this_00;
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  UClass *pUVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStackY_318 [32];
  undefined1 local_2e7 [7];
  FMemMark local_2e0;
  code *local_2b8;
  undefined1 *local_2b0;
  undefined1 local_2a8 [544];
  ForElementType<UE::Net::FReplicationView::FView> local_88;
  int local_80;
  int local_7c;
  uint local_74;
  float *local_68;
  uint *local_60;
  uint local_58;
  float local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId80,"USphereWithOwnerBoostNetObjectPrioritizer_Prioritize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereWithOwnerBoostNetObjectPrioritizer.cpp"
               ,0x50);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId80);
  }
  puVar6 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_2b0 = local_2e7;
  local_2b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar7 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2b8,puVar6);
  uVar12 = 0;
  this_00 = (FMemStackBase *)(pFVar7 + 2);
  local_2e0.Top = this_00->Top;
  local_2e0.SavedChunk = *(FTaggedMemory **)(pFVar7 + 4);
  local_2e0.bPopped = false;
  local_2e0.NextTopmostMark = *(FMemMark **)(pFVar7 + 5);
  pFVar7[5] = (FTlsAutoCleanup)&local_2e0;
  *(int *)(pFVar7 + 6) = *(int *)(pFVar7 + 6) + 1;
  local_88 = (ForElementType<UE::Net::FReplicationView::FView>)0x0;
  uVar9 = param_1->ObjectCount + 3 & 0xfffffffc;
  local_80 = 0;
  local_7c = 4;
  uVar4 = 0x400;
  if (uVar9 < 0x400) {
    uVar4 = uVar9;
  }
  local_2e0.Mem = this_00;
  USphereNetObjectPrioritizer::SetupBatchParams
            ((USphereNetObjectPrioritizer *)this,(FBatchParams *)local_2a8,param_1,uVar4,this_00);
  local_60 = FMemStackBase::Alloc(this_00,(ulonglong)uVar4 << 2,4);
  uVar10 = this->_padding_;
  if (uVar10 != 0) {
    pUVar8 = USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass();
    iVar2 = (int)pUVar8->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(uVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x30) + (longlong)iVar2 * 8)
        == &pUVar8->_padding_)) goto LAB_1442d2303;
  }
  uVar10 = uVar12;
LAB_1442d2303:
  local_54 = *(float *)(uVar10 + 0x40);
  uVar4 = param_1->ObjectCount;
  if (uVar4 != 0) {
    do {
      uVar11 = (uint)uVar12;
      uVar9 = 0x400;
      if (uVar4 - uVar11 < 0x400) {
        uVar9 = uVar4 - uVar11;
      }
      local_74 = uVar9;
      PrepareBatch(this,(FOwnerBoostBatchParams *)local_2a8,param_1,uVar11);
      bVar16 = -1 < CpuChannel->Enabled;
      if (bVar16) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId154,
                   "USphereWithOwnerBoostNetObjectPrioritizer_PrioritizeBatch",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereWithOwnerBoostNetObjectPrioritizer.cpp"
                   ,0x9a);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId154);
      }
      if (local_80 == 1) {
        USphereNetObjectPrioritizer::PrioritizeBatchForSingleView
                  ((USphereNetObjectPrioritizer *)this,(FBatchParams *)local_2a8);
      }
      else if (local_80 == 2) {
        USphereNetObjectPrioritizer::PrioritizeBatchForDualView
                  ((USphereNetObjectPrioritizer *)this,(FBatchParams *)local_2a8);
      }
      else {
        USphereNetObjectPrioritizer::PrioritizeBatchForMultiView
                  ((USphereNetObjectPrioritizer *)this,(FBatchParams *)local_2a8);
      }
      uVar13 = 0;
      if (local_58 < 4) {
        if (local_58 != 0) {
          lVar14 = 0;
          goto LAB_1442d2468;
        }
      }
      else {
        puVar6 = local_60 + 2;
        uVar5 = (local_58 - 4 >> 2) + 1;
        uVar12 = (ulonglong)uVar5;
        uVar13 = uVar5 * 4;
        lVar14 = (ulonglong)uVar5 * 4;
        do {
          local_68[puVar6[-2]] = local_54 + local_68[puVar6[-2]];
          local_68[puVar6[-1]] = local_54 + local_68[puVar6[-1]];
          local_68[*puVar6] = local_54 + local_68[*puVar6];
          puVar1 = puVar6 + 1;
          puVar6 = puVar6 + 4;
          local_68[*puVar1] = local_54 + local_68[*puVar1];
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        if (uVar13 < local_58) {
LAB_1442d2468:
          puVar6 = local_60 + lVar14;
          uVar12 = (ulonglong)(local_58 - uVar13);
          do {
            uVar13 = *puVar6;
            puVar6 = puVar6 + 1;
            local_68[uVar13] = local_54 + local_68[uVar13];
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      if (bVar16) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      USphereNetObjectPrioritizer::FinishBatch
                ((USphereNetObjectPrioritizer *)this,(FBatchParams *)local_2a8,param_1,uVar11);
      uVar12 = (ulonglong)(uVar11 + uVar9);
    } while (uVar11 + uVar9 < uVar4);
  }
  if (local_88 != (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FMemory::Free((void *)local_88);
  }
  if (local_2e0.bPopped == false) {
    if (((local_2e0.Mem)->TopMark != &local_2e0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_2e0.bPopped = true;
    (local_2e0.Mem)->NumMarks = (local_2e0.Mem)->NumMarks + -1;
    if (local_2e0.SavedChunk != (local_2e0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_2e0.Mem,local_2e0.SavedChunk);
    }
    (local_2e0.Mem)->Top = local_2e0.Top;
    (local_2e0.Mem)->TopMark = local_2e0.NextTopmostMark;
    local_2e0.Top = (uchar *)0x0;
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrioritizeBatch @ 1442d3090

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::PrioritizeBatch
          (USphereWithOwnerBoostNetObjectPrioritizer *this,FOwnerBoostBatchParams *param_1)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId154,
               "USphereWithOwnerBoostNetObjectPrioritizer_PrioritizeBatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\SphereWithOwnerBoostNetObjectPrioritizer.cpp"
               ,0x9a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId154);
  }
  if (*(int *)&param_1->field_0x228 == 1) {
    USphereNetObjectPrioritizer::PrioritizeBatchForSingleView
              ((USphereNetObjectPrioritizer *)this,(FBatchParams *)param_1);
  }
  else if (*(int *)&param_1->field_0x228 == 2) {
    USphereNetObjectPrioritizer::PrioritizeBatchForDualView
              ((USphereNetObjectPrioritizer *)this,(FBatchParams *)param_1);
  }
  else {
    USphereNetObjectPrioritizer::PrioritizeBatchForMultiView
              ((USphereNetObjectPrioritizer *)this,(FBatchParams *)param_1);
  }
  uVar3 = param_1->OwnedObjectCount;
  lVar9 = 0;
  uVar8 = 0;
  fVar2 = param_1->OwnerPriorityBoost;
  lVar4 = *(longlong *)&param_1->field_0x240;
  puVar7 = param_1->OwnedObjectsLocalIndices;
  if (uVar3 < 4) {
    if (uVar3 == 0) goto LAB_1442d31d8;
  }
  else {
    puVar6 = puVar7 + 2;
    uVar5 = (uVar3 - 4 >> 2) + 1;
    uVar10 = (ulonglong)uVar5;
    uVar8 = uVar5 * 4;
    lVar9 = (ulonglong)uVar5 * 4;
    do {
      *(float *)(lVar4 + (ulonglong)puVar6[-2] * 4) =
           fVar2 + *(float *)(lVar4 + (ulonglong)puVar6[-2] * 4);
      *(float *)(lVar4 + (ulonglong)puVar6[-1] * 4) =
           fVar2 + *(float *)(lVar4 + (ulonglong)puVar6[-1] * 4);
      *(float *)(lVar4 + (ulonglong)*puVar6 * 4) =
           fVar2 + *(float *)(lVar4 + (ulonglong)*puVar6 * 4);
      puVar1 = puVar6 + 1;
      puVar6 = puVar6 + 4;
      *(float *)(lVar4 + (ulonglong)*puVar1 * 4) =
           fVar2 + *(float *)(lVar4 + (ulonglong)*puVar1 * 4);
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (uVar3 <= uVar8) goto LAB_1442d31d8;
  }
  puVar7 = puVar7 + lVar9;
  uVar10 = (ulonglong)(uVar3 - uVar8);
  do {
    uVar3 = *puVar7;
    puVar7 = puVar7 + 1;
    *(float *)(lVar4 + (ulonglong)uVar3 * 4) = fVar2 + *(float *)(lVar4 + (ulonglong)uVar3 * 4);
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
LAB_1442d31d8:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RemoveObject @ 1442defc0

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::RemoveObject
          (USphereWithOwnerBoostNetObjectPrioritizer *this,uint param_1,
          FNetObjectPrioritizationInfo *param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  ushort *puVar7;
  
  uVar5 = *(uint *)(param_2->Data + 2);
  puVar7 = TChunkedArray<unsigned_short,2048,TSizedDefaultAllocator<32>_>::operator[]
                     (&this->OwningConnections,uVar5);
  *puVar7 = 0;
  pFVar2 = (this->AssignedOwningConnectionIndices).Storage.AllocatorInstance.Data;
  if ((this->AssignedOwningConnectionIndices).BitCount <= uVar5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(uint *)(pFVar2 + (ulonglong)(uVar5 >> 5) * 4) =
       *(uint *)(pFVar2 + (ulonglong)(uVar5 >> 5) * 4) & ~(1 << (uVar5 & 0x1f));
  uVar5 = *(uint *)(param_2->Data + 2);
  lVar3 = this->_padding_;
  if ((uint)this->_padding_ <= uVar5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < BitCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                       ,0x2b7,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = (uint *)(lVar3 + (ulonglong)(uVar5 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << (uVar5 & 0x1f));
  return;
}

// SetupBatchParams @ 1442e5560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::SetupBatchParams
          (USphereWithOwnerBoostNetObjectPrioritizer *this,FOwnerBoostBatchParams *param_1,
          FNetObjectPrioritizationParams *param_2,uint param_3,FMemStackBase *param_4)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  uint *puVar4;
  UClass *pUVar5;
  
  USphereNetObjectPrioritizer::SetupBatchParams
            ((USphereNetObjectPrioritizer *)this,(FBatchParams *)param_1,param_2,param_3,param_4);
  puVar4 = FMemStackBase::Alloc(param_4,(ulonglong)param_3 << 2,4);
  param_1->OwnedObjectsLocalIndices = puVar4;
  lVar2 = this->_padding_;
  fVar3 = _DAT_00000040;
  if (lVar2 != 0) {
    pUVar5 = USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    fVar3 = _DAT_00000040;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      fVar3 = *(float *)(lVar2 + 0x40);
    }
  }
  param_1->OwnerPriorityBoost = fVar3;
  return;
}

// StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizer @ 1442e6380

void __cdecl
USphereWithOwnerBoostNetObjectPrioritizer::
StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizer(void)

{
  return;
}

// UpdateObjects @ 1442eac80

void __thiscall
USphereWithOwnerBoostNetObjectPrioritizer::UpdateObjects
          (USphereWithOwnerBoostNetObjectPrioritizer *this,
          FNetObjectPrioritizerUpdateParams *param_1)

{
  uint *puVar1;
  FNetObjectPrioritizationInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  FReplicationSystemInternal *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  
  uVar9 = param_1->ObjectCount;
  uVar10 = 0;
  if ((ulonglong)uVar9 != 0) {
    do {
      ULocationBasedNetObjectPrioritizer::UpdateLocation
                ((ULocationBasedNetObjectPrioritizer *)this,param_1->ObjectIndices[uVar10],
                 (FObjectLocationInfo *)
                 (param_1->PrioritizationInfos + param_1->ObjectIndices[uVar10]),
                 param_1->InstanceProtocols[uVar10]);
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  pFVar8 = UReplicationSystem::GetReplicationSystemInternal
                     ((this->ReplicationSystem).field0_0x0.DebugPtr);
  uVar9 = param_1->ObjectCount;
  puVar11 = param_1->ObjectIndices;
  if (((int)uVar9 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar1 = puVar11 + (int)uVar9;
  while( true ) {
    if (puVar11 == puVar1) {
      return;
    }
    uVar9 = *puVar11;
    pFVar2 = param_1->PrioritizationInfos;
    if ((pFVar8->Filtering).bHasDirtyOwner == 0) {
      uVar6 = 0;
      if ((int)uVar9 < (pFVar8->Filtering).ObjectIndexToOwningConnection.ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = *(undefined2 *)
               ((pFVar8->Filtering).ObjectIndexToOwningConnection.AllocatorInstance.Data +
               (longlong)(int)uVar9 * 2);
    }
    else {
      uVar6 = UE::Net::Private::FReplicationFiltering::GetOwningConnectionIfDirty
                        (&pFVar8->Filtering,uVar9);
      uVar5 = (undefined2)uVar6;
    }
    uVar9 = *(uint *)(pFVar2[uVar9].Data + 2);
    uVar6 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x3ffU)) >> 10;
    uVar9 = uVar9 & 0x800003ff;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffc00) + 1;
    }
    uVar7 = 0;
    if ((int)uVar6 < (this->OwningConnections).Chunks.Array.ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    puVar11 = puVar11 + 1;
    *(undefined2 *)
     (*(longlong *)
       ((this->OwningConnections).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar6 * 8) +
     (ulonglong)uVar9 * 2) = uVar5;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

