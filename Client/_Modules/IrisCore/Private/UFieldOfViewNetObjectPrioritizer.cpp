// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 14

// StaticClass @ 14429fae0

UClass * __cdecl UFieldOfViewNetObjectPrioritizer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FieldOfViewNetObjectPrioritizer",
               &Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.InnerSingleton,
               StaticRegisterNativesUFieldOfViewNetObjectPrioritizer,0x68,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UFieldOfViewNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<UFieldOfViewNetObjectPrioritizer>,local_res8,
               ULocationBasedNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.InnerSingleton;
}

// UFieldOfViewNetObjectPrioritizer @ 1442aec10

UFieldOfViewNetObjectPrioritizer * __thiscall
UFieldOfViewNetObjectPrioritizer::UFieldOfViewNetObjectPrioritizer
          (UFieldOfViewNetObjectPrioritizer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,0);
  this->_padding_ = (longlong)&___7UFieldOfViewNetObjectPrioritizer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Config).Object = (UObject *)0x0;
  return this;
}

// UFieldOfViewNetObjectPrioritizer @ 1442aec70

UFieldOfViewNetObjectPrioritizer * __thiscall
UFieldOfViewNetObjectPrioritizer::UFieldOfViewNetObjectPrioritizer
          (UFieldOfViewNetObjectPrioritizer *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::
  TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,0);
  this->_padding_ = (longlong)&___7UFieldOfViewNetObjectPrioritizer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Config).Object = (UObject *)0x0;
  return this;
}

// ~UFieldOfViewNetObjectPrioritizer @ 1442b0ac0

void __thiscall
UFieldOfViewNetObjectPrioritizer::~UFieldOfViewNetObjectPrioritizer
          (UFieldOfViewNetObjectPrioritizer *this)

{
  UObject *pUVar1;
  
  this->_padding_ = (longlong)&___7UFieldOfViewNetObjectPrioritizer__6B_;
  pUVar1 = (this->Config).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Config).Object = (UObject *)0x0;
  }
  this->_padding_ = (longlong)&___7ULocationBasedNetObjectPrioritizer__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::
  ~TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<TChunkedArray<VectorRegister4Double,65536,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
              *)&this->_padding_);
  this->_padding_ = (longlong)&___7UNetObjectPrioritizer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Deinit @ 1442bb390

void __thiscall UFieldOfViewNetObjectPrioritizer::Deinit(UFieldOfViewNetObjectPrioritizer *this)

{
  UObject *pUVar1;
  
  this->_padding_ = 0;
  pUVar1 = (this->Config).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->Config).Object = (UObject *)0x0;
  }
  return;
}

// FinishBatch @ 1442c1660

void __thiscall
UFieldOfViewNetObjectPrioritizer::FinishBatch
          (UFieldOfViewNetObjectPrioritizer *this,FBatchParams *param_1,
          FNetObjectPrioritizationParams *param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  uint *puVar3;
  float *pfVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId212,"UFieldOfViewNetObjectPrioritizer_FinishBatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\FieldOfViewNetObjectPrioritizer.cpp"
               ,0xd4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId212);
  }
  uVar1 = param_1->ObjectCount;
  pfVar2 = param_2->Priorities;
  puVar3 = param_2->ObjectIndices;
  pfVar4 = param_1->Priorities;
  for (uVar5 = param_3; uVar5 != uVar1 + param_3; uVar5 = uVar5 + 1) {
    pfVar2[puVar3[uVar5]] = pfVar4[uVar5 - param_3];
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetPrivateStaticClass @ 1442c2f00

UClass * __cdecl UFieldOfViewNetObjectPrioritizer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"FieldOfViewNetObjectPrioritizer",
               &Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.InnerSingleton,
               StaticRegisterNativesUFieldOfViewNetObjectPrioritizer,0x68,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UFieldOfViewNetObjectPrioritizer>,
               InternalVTableHelperCtorCaller<UFieldOfViewNetObjectPrioritizer>,local_res8,
               ULocationBasedNetObjectPrioritizer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldOfViewNetObjectPrioritizer.InnerSingleton;
}

// Init @ 1442c44d0

void __thiscall
UFieldOfViewNetObjectPrioritizer::Init
          (UFieldOfViewNetObjectPrioritizer *this,FNetObjectPrioritizerInitParams *param_1)

{
  TStrongObjectPtr<UFieldOfViewNetObjectPrioritizerConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  *pTVar1;
  int iVar2;
  UObjectBase *this_00;
  UClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FWorldLocations *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined8 local_48;
  FString local_40;
  FString local_30;
  FString local_20;
  
  if (param_1->Config == (UNetObjectPrioritizerConfig *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Params.Config != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\FieldOfViewNetObjectPrioritizer.cpp"
                       ,0xd,L"Need config to operate.");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = (UObjectBase *)param_1->Config;
  if (this_00 != (UObjectBase *)0x0) {
    pUVar6 = UFieldOfViewNetObjectPrioritizerConfig::StaticClass();
    pUVar3 = (this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= (int)pUVar3->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar2 * 8) == &pUVar6->_padding_)
       ) {
      UObjectBase::AddRef(this_00);
      pTVar1 = &this->Config;
      if (pTVar1 == (TStrongObjectPtr<UFieldOfViewNetObjectPrioritizerConfig,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                     *)&local_48) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this_00);
      }
      else {
        if (pTVar1->Object != (UObject *)0x0) {
          UEStrongObjectPtr_Private::ReleaseUObject(pTVar1->Object);
        }
        pTVar1->Object = (UObject *)this_00;
      }
      UE::Net::FNetBitArray::Init((FNetBitArray *)&this->_padding_,param_1->CurrentMaxInternalIndex)
      ;
      pFVar7 = UReplicationSystem::GetWorldLocations
                         ((param_1->ReplicationSystem).field0_0x0.DebugPtr);
      this->_padding_ = (longlong)pFVar7;
      return;
    }
    pFVar8 = GetTypeName<UFieldOfViewNetObjectPrioritizerConfig>(&local_30);
    pwVar9 = L"";
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar8 = GetFullNameForCastLogError<UNetObjectPrioritizerConfig>
                       (&local_20,(UNetObjectPrioritizerConfig *)this_00);
    if ((pFVar8->Data).ArrayNum != 0) {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar9,pwVar10);
  }
  pFVar8 = GetTypeName<UFieldOfViewNetObjectPrioritizerConfig>(&local_40);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar9);
}

// PrepareBatch @ 1442cb430

void __thiscall
UFieldOfViewNetObjectPrioritizer::PrepareBatch
          (UFieldOfViewNetObjectPrioritizer *this,FBatchParams *param_1,
          FNetObjectPrioritizationParams *param_2,uint param_3)

{
  double *pdVar1;
  ushort uVar2;
  uint *puVar3;
  FNetObjectPrioritizationInfo *pFVar4;
  float *pfVar5;
  VectorRegister4Double *pVVar6;
  float *pfVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId55,"UFieldOfViewNetObjectPrioritizer_PrepareBatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\FieldOfViewNetObjectPrioritizer.cpp"
               ,0x37);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId55);
  }
  uVar14 = param_1->ObjectCount;
  puVar3 = param_2->ObjectIndices;
  pFVar4 = param_2->PrioritizationInfos;
  pfVar5 = param_1->Priorities;
  pVVar6 = param_1->Positions;
  pfVar7 = param_2->Priorities;
  for (uVar18 = param_3; uVar18 != uVar14 + param_3; uVar18 = uVar18 + 1) {
    pfVar5[uVar18 - param_3] = pfVar7[puVar3[uVar18]];
  }
  uVar14 = param_1->ObjectCount;
  uVar18 = param_3;
  uVar16 = 0;
  while( true ) {
    if (uVar18 == uVar14 + param_3) {
      uVar14 = param_3 + 3 & 0xfffffffc;
      if (param_3 != uVar14) {
        uVar15 = (ulonglong)(uVar14 - param_3);
        do {
          pfVar5[uVar16] = 0.0;
          pVVar6[uVar16].XY.m128d_f64[0] = 0.0;
          pVVar6[uVar16].XY.m128d_f64[1] = 0.0;
          pVVar6[uVar16].ZW.m128d_f64[0] = 0.0;
          pVVar6[uVar16].ZW.m128d_f64[1] = 0.0;
          uVar15 = uVar15 - 1;
          uVar16 = (ulonglong)((int)uVar16 + 1);
        } while (uVar15 != 0);
      }
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar12 = puVar3[uVar18];
    uVar2 = pFVar4[uVar12].Data[3];
    uVar17 = CONCAT22(uVar2,pFVar4[uVar12].Data[2]);
    uVar12 = (int)(uVar17 + ((int)(short)uVar2 >> 0xf & 0x7ffU)) >> 0xb;
    uVar17 = uVar17 & 0x800007ff;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xfffff800) + 1;
    }
    uVar13 = 0;
    if ((int)uVar12 < (int)this->_padding_) {
      uVar13 = ~uVar12 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) break;
    uVar18 = uVar18 + 1;
    lVar8 = *(longlong *)(this->_padding_ + (longlong)(int)uVar12 * 8);
    pdVar1 = (double *)(lVar8 + (longlong)(int)uVar17 * 0x20);
    dVar10 = pdVar1[1];
    pVVar6[uVar16].XY.m128d_f64[0] = *pdVar1;
    pVVar6[uVar16].XY.m128d_f64[1] = dVar10;
    pdVar1 = (double *)(lVar8 + 0x10 + (longlong)(int)uVar17 * 0x20);
    dVar10 = pdVar1[1];
    pVVar6[uVar16].ZW.m128d_f64[0] = *pdVar1;
    pVVar6[uVar16].ZW.m128d_f64[1] = dVar10;
    uVar16 = (ulonglong)((int)uVar16 + 1);
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// Prioritize @ 1442d19d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFieldOfViewNetObjectPrioritizer::Prioritize
          (UFieldOfViewNetObjectPrioritizer *this,FNetObjectPrioritizationParams *param_1)

{
  FMemStackBase *this_00;
  float *pfVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_3e8 [32];
  char local_3c8;
  undefined1 local_3c7 [3];
  uint local_3c4;
  FMemMark local_3c0;
  code *local_390;
  undefined1 *local_388;
  FBatchParams local_378;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  if (!__CsvProfilerStat28) {
    FCsvProfilerTrace::OutputInlineStat
              ("UFieldOfViewNetObjectPrioritizer_Prioritize",_GCsvCategory_Iris.Index);
    __CsvProfilerStat28 = true;
  }
  local_3c4 = _GCsvCategory_Iris.Index;
  FCsvProfiler::BeginStat
            ("UFieldOfViewNetObjectPrioritizer_Prioritize",_GCsvCategory_Iris.Index,
             "CSV_UFieldOfViewNetObjectPrioritizer_Prioritize");
  bVar11 = CpuChannel->Enabled < 0;
  if (bVar11) {
    local_3c8 = '\0';
  }
  else {
    local_3c8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId28,"UFieldOfViewNetObjectPrioritizer_Prioritize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\FieldOfViewNetObjectPrioritizer.cpp"
               ,0x1c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId28);
  }
  puVar4 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_388 = local_3c7;
  local_390 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_390,puVar4);
  uVar8 = 0;
  this_00 = (FMemStackBase *)(pFVar5 + 2);
  local_3c0.Top = this_00->Top;
  local_3c0.SavedChunk = *(FTaggedMemory **)(pFVar5 + 4);
  local_3c0.bPopped = false;
  local_3c0.NextTopmostMark = *(FMemMark **)(pFVar5 + 5);
  pFVar5[5] = (FTlsAutoCleanup)&local_3c0;
  *(int *)(pFVar5 + 6) = *(int *)(pFVar5 + 6) + 1;
  local_378.View.Views.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Net::FReplicationView::FView>)0x0;
  uVar6 = param_1->ObjectCount + 3 & 0xfffffffc;
  local_378.View.Views.ArrayNum = 0;
  local_378.View.Views.ArrayMax = 4;
  local_3c0.Mem = this_00;
  UE::Net::FReplicationView::operator=(&local_378.View,&param_1->View);
  local_378.ConnectionId = param_1->ConnectionId;
  uVar3 = 0x400;
  if (uVar6 < 0x400) {
    uVar3 = uVar6;
  }
  local_378.Positions = FMemStackBase::Alloc(this_00,(ulonglong)uVar3 << 5,0x10);
  local_378.Priorities = FMemStackBase::Alloc(this_00,(ulonglong)uVar3 * 4,0x10);
  SetupCalculationConstants(this,&local_378.PriorityCalculationConstants);
  memset(local_378.Positions,0,(ulonglong)uVar3 << 5);
  uVar3 = param_1->ObjectCount;
  cVar9 = !bVar11;
  if (uVar3 != 0) {
    do {
      uVar7 = (uint)uVar8;
      uVar6 = 0x400;
      if (uVar3 - uVar7 < 0x400) {
        uVar6 = uVar3 - uVar7;
      }
      local_378.ObjectCount = uVar6;
      PrepareBatch(this,&local_378,param_1,uVar7);
      PrioritizeBatch(this,&local_378);
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId212,"UFieldOfViewNetObjectPrioritizer_FinishBatch",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\FieldOfViewNetObjectPrioritizer.cpp"
                   ,0xd4);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId212);
      }
      pfVar1 = param_1->Priorities;
      puVar4 = param_1->ObjectIndices;
      uVar10 = uVar7;
      while (uVar10 != local_378.ObjectCount + uVar7) {
        uVar10 = (int)uVar8 + 1;
        pfVar1[puVar4[uVar8]] = local_378.Priorities[(int)uVar8 - uVar7];
        uVar8 = (ulonglong)uVar10;
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      uVar8 = (ulonglong)(uVar7 + uVar6);
      cVar9 = local_3c8;
    } while (uVar7 + uVar6 < uVar3);
  }
  if (local_378.View.Views.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FMemory::Free((void *)local_378.View.Views.AllocatorInstance.SecondaryData);
  }
  if (local_3c0.bPopped == false) {
    if (((local_3c0.Mem)->TopMark != &local_3c0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_3c0.bPopped = true;
    (local_3c0.Mem)->NumMarks = (local_3c0.Mem)->NumMarks + -1;
    if (local_3c0.SavedChunk != (local_3c0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_3c0.Mem,local_3c0.SavedChunk);
    }
    (local_3c0.Mem)->Top = local_3c0.Top;
    (local_3c0.Mem)->TopMark = local_3c0.NextTopmostMark;
    local_3c0.Top = (uchar *)0x0;
  }
  if (cVar9 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FCsvProfiler::EndStat("UFieldOfViewNetObjectPrioritizer_Prioritize",local_3c4);
  return;
}

// PrioritizeBatch @ 1442d25b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UFieldOfViewNetObjectPrioritizer::PrioritizeBatch
          (UFieldOfViewNetObjectPrioritizer *this,FBatchParams *param_1)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  bool bVar21;
  int iVar22;
  uint uVar23;
  ForElementType<VectorRegister4Double> FVar24;
  ForElementType<UE::Net::FReplicationView::FView> FVar25;
  longlong lVar26;
  VectorRegister4Double *pVVar27;
  float *pfVar28;
  char cVar29;
  uint uVar30;
  undefined8 *puVar31;
  FBatchParams *pFVar32;
  VectorRegister4Double *pVVar33;
  VectorRegister4Double *pVVar34;
  VectorRegister4Double *pVVar35;
  uint uVar36;
  longlong lVar37;
  bool bVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  double dVar44;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar65;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar45;
  double dVar66;
  double dVar67;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar46;
  double dVar68;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  longlong lVar47;
  undefined1 auVar64 [16];
  double dVar69;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar70;
  double dVar81;
  undefined1 auVar77 [16];
  double dVar71;
  double dVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar83;
  undefined1 auVar84 [16];
  double dVar85;
  double dVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar90;
  undefined1 auVar89 [16];
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  uint uVar94;
  uint uVar95;
  undefined4 uVar96;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  undefined4 uVar101;
  uint uVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined1 auStack_668 [32];
  undefined8 *local_648;
  ForElementType<VectorRegister4Double> local_640;
  longlong local_638;
  longlong local_630;
  undefined8 local_628;
  char local_618;
  undefined1 local_617 [15];
  longlong local_608;
  double dStack_600;
  VectorRegister4Double *local_5f8;
  VectorRegister4Double *local_5f0;
  FBatchParams *local_5e8;
  double local_5d8;
  double dStack_5d0;
  VectorRegister4Double *local_5c8;
  float *local_5c0;
  longlong local_5b8;
  float *local_5b0;
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  double local_588;
  double dStack_580;
  undefined1 local_578 [16];
  double local_568;
  double dStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  ForElementType<VectorRegister4Double> local_518;
  int local_308;
  int local_304 [3];
  ForElementType<VectorRegister4Double> local_2f8;
  int local_e8;
  int local_e4 [3];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_668;
  bVar38 = CpuChannel->Enabled < 0;
  local_5e8 = param_1;
  if (bVar38) {
    local_618 = '\0';
  }
  else {
    local_618 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId94,"UFieldOfViewNetObjectPrioritizer_PrioritizeBatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\Prioritization\\FieldOfViewNetObjectPrioritizer.cpp"
               ,0x5e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId94);
  }
  FVar25 = (param_1->View).Views.AllocatorInstance.SecondaryData;
  iVar3 = (param_1->View).Views.ArrayNum;
  local_2f8.SecondaryData = (ForElementType<VectorRegister4Double>)0x0;
  if (FVar25 == (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
    FVar25 = (ForElementType<UE::Net::FReplicationView::FView>)&param_1->View;
  }
  local_e8 = 0;
  local_e4[0] = 0x10;
  local_518.SecondaryData = (ForElementType<VectorRegister4Double>)0x0;
  local_308 = 0;
  local_304[0] = 0x10;
  puVar31 = (undefined8 *)((longlong)FVar25 + 0x38);
  do {
    if ((param_1->View).Views.ArrayNum != iVar3) {
      local_617[0] = 0;
      `TCheckedPointerIterator<UE::Net::FReplicationView::FView,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_617);
    }
    if (puVar31 + -7 == (undefined8 *)((longlong)FVar25 + (longlong)iVar3 * 0x48)) {
      pVVar33 = local_5e8->Positions;
      pfVar28 = local_5e8->Priorities;
      uVar4 = local_5e8->ObjectCount;
      cVar29 = !bVar38;
      local_5c8 = pVVar33;
      local_5b0 = pfVar28;
      if (uVar4 != 0) {
        lVar26 = (longlong)(local_5e8->View).Views.ArrayNum;
        pFVar32 = local_5e8;
        uVar36 = 2;
        local_5b8 = lVar26;
        do {
          uVar23 = uVar36 - 2;
          uVar30 = 0;
          pfVar2 = pfVar28 + uVar23;
          local_5c0 = pfVar28 + uVar23;
          auVar80._0_8_ = (double)*pfVar2;
          auVar80._8_8_ = (double)pfVar2[1];
          local_5a8 = maxpd(auVar80,*(undefined1 (*) [16])
                                     (pFVar32->PriorityCalculationConstants).OutsidePriority.XY.
                                     m128d_f64);
          auVar62._0_8_ = (double)pfVar2[2];
          auVar62._8_8_ = (double)pfVar2[3];
          local_598 = maxpd(auVar62,*(undefined1 (*) [16])
                                     (pFVar32->PriorityCalculationConstants).OutsidePriority.ZW.
                                     m128d_f64);
          if (0 < lVar26) {
            pVVar35 = pVVar33 + (uVar36 - 1);
            pVVar27 = pVVar33 + (uVar36 + 1);
            pVVar34 = pVVar33 + uVar23;
            pVVar33 = pVVar33 + uVar36;
            lVar37 = 0;
            local_5f8 = pVVar27;
            local_5f0 = pVVar34;
            do {
              uVar23 = 0;
              if ((int)uVar30 < local_e8) {
                uVar23 = ~uVar30 >> 0x1f;
              }
              local_608 = lVar26;
              if (uVar23 == 0) {
                local_648 = (undefined8 *)(longlong)(int)uVar30;
                local_640 = (ForElementType<VectorRegister4Double>)(longlong)local_e8;
                bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                pVVar27 = local_5f8;
                pVVar34 = local_5f0;
                if (bVar38) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              FVar24 = (ForElementType<VectorRegister4Double>)&local_2f8;
              if (local_2f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
                FVar24 = local_2f8.SecondaryData;
              }
              dVar86 = *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37);
              dVar90 = *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37 + 8);
              dVar46 = *(double *)((longlong)FVar24 + lVar37);
              dVar67 = ((double *)((longlong)FVar24 + lVar37))[1];
              uVar23 = 0;
              if ((int)uVar30 < local_308) {
                uVar23 = ~uVar30 >> 0x1f;
              }
              local_5d8 = dVar86;
              dStack_5d0 = dVar90;
              if (uVar23 == 0) {
                local_648 = (undefined8 *)(longlong)(int)uVar30;
                local_640 = (ForElementType<VectorRegister4Double>)(longlong)local_308;
                bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                pVVar27 = local_5f8;
                pVVar34 = local_5f0;
                if (bVar38) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              FVar24 = (ForElementType<VectorRegister4Double>)&local_518;
              if (local_518.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
                FVar24 = local_518.SecondaryData;
              }
              dVar44 = 0.0 - *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37);
              dStack_600 = 0.0 - *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37 + 8);
              dVar14 = (pVVar27->ZW).m128d_f64[0] - local_5d8;
              dVar15 = (pVVar27->ZW).m128d_f64[1] - dStack_5d0;
              uVar104 = (undefined4)((ulonglong)dVar15 >> 0x20);
              dVar16 = 0.0 - *(double *)((longlong)FVar24 + lVar37);
              dVar17 = 0.0 - ((double *)((longlong)FVar24 + lVar37))[1];
              uVar105 = (undefined4)((ulonglong)dVar17 >> 0x20);
              auVar84._8_4_ = SUB84(dVar15,0);
              auVar84._0_8_ = dVar14;
              auVar84._12_4_ = uVar104;
              dVar68 = (pVVar34->XY).m128d_f64[0] - dVar46;
              dVar7 = (pVVar34->XY).m128d_f64[1] - dVar67;
              uVar91 = (undefined4)((ulonglong)dVar7 >> 0x20);
              dVar71 = (pVVar35->XY).m128d_f64[0] - dVar46;
              dVar82 = (pVVar35->XY).m128d_f64[1] - dVar67;
              uVar92 = (undefined4)((ulonglong)dVar82 >> 0x20);
              dVar45 = (pVVar33->XY).m128d_f64[0] - dVar46;
              dVar66 = (pVVar33->XY).m128d_f64[1] - dVar67;
              uVar96 = (undefined4)((ulonglong)dVar66 >> 0x20);
              dVar10 = (pVVar34->ZW).m128d_f64[0] - dVar86;
              dVar11 = (pVVar34->ZW).m128d_f64[1] - dVar90;
              dVar83 = (pVVar35->ZW).m128d_f64[0] - dVar86;
              dVar85 = (pVVar35->ZW).m128d_f64[1] - dVar90;
              uVar93 = (undefined4)((ulonglong)dVar85 >> 0x20);
              dVar86 = (pVVar33->ZW).m128d_f64[0] - dVar86;
              dVar90 = (pVVar33->ZW).m128d_f64[1] - dVar90;
              uVar101 = (undefined4)((ulonglong)dVar90 >> 0x20);
              auVar48._8_4_ = SUB84(dVar7,0);
              auVar48._0_8_ = dVar68;
              auVar48._12_4_ = uVar91;
              dVar46 = (pVVar27->XY).m128d_f64[0] - dVar46;
              dVar67 = (pVVar27->XY).m128d_f64[1] - dVar67;
              uVar103 = (undefined4)((ulonglong)dVar67 >> 0x20);
              auVar72._8_4_ = SUB84(dVar85,0);
              auVar72._0_8_ = dVar83;
              auVar72._12_4_ = uVar93;
              auVar87._8_4_ = SUB84(dVar90,0);
              auVar87._0_8_ = dVar86;
              auVar87._12_4_ = uVar101;
              auVar49._8_4_ = SUB84(dVar82,0);
              auVar49._0_8_ = dVar71;
              auVar49._12_4_ = uVar92;
              auVar50._8_4_ = SUB84(dVar66,0);
              auVar50._0_8_ = dVar45;
              auVar50._12_4_ = uVar96;
              auVar51._8_4_ = SUB84(dVar67,0);
              auVar51._0_8_ = dVar46;
              auVar51._12_4_ = uVar103;
              dVar6 = dVar10 * dVar10 + dVar68 * dVar68 + dVar11 * dVar11 + auVar48._8_8_ * dVar7;
              dVar65 = dVar83 * dVar83 + dVar71 * dVar71 +
                       auVar72._8_8_ * dVar85 + auVar49._8_8_ * dVar82;
              local_568 = dVar86 * dVar86 + dVar45 * dVar45 +
                          auVar87._8_8_ * dVar90 + auVar50._8_8_ * dVar66;
              dStack_560 = dVar14 * dVar14 + dVar46 * dVar46 +
                           auVar84._8_8_ * dVar15 + auVar51._8_8_ * dVar67;
              local_578._8_4_ = SUB84(dVar65,0);
              local_578._0_8_ = dVar6;
              local_578._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
              auVar52._8_4_ = SUB84(dVar7,0);
              auVar52._0_8_ = dVar68;
              auVar52._12_4_ = uVar91;
              auVar73._8_4_ = SUB84(dVar11,0);
              auVar73._0_8_ = dVar10;
              auVar73._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
              dStack_580 = dVar10 * *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37) +
                           dVar68 * *(double *)((longlong)FVar24 + lVar37);
              dVar65 = auVar73._8_8_ * *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37 + 8)
                       + auVar52._8_8_ * ((double *)((longlong)FVar24 + lVar37))[1];
              auVar53._8_4_ = SUB84(dVar82,0);
              auVar53._0_8_ = dVar71;
              auVar53._12_4_ = uVar92;
              auVar88._8_4_ = SUB84(dVar65,0);
              auVar88._0_8_ = dStack_580;
              auVar88._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
              local_588 = auVar88._8_8_ + dStack_580;
              dStack_580 = dStack_580 + dVar65;
              auVar74._8_4_ = SUB84(dVar85,0);
              auVar74._0_8_ = dVar83;
              auVar74._12_4_ = uVar93;
              dVar69 = dVar83 * *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37) +
                       dVar71 * *(double *)((longlong)FVar24 + lVar37);
              dVar65 = auVar74._8_8_ * *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37 + 8)
                       + auVar53._8_8_ * ((double *)((longlong)FVar24 + lVar37))[1];
              auVar54._8_4_ = SUB84(dVar66,0);
              auVar54._0_8_ = dVar45;
              auVar54._12_4_ = uVar96;
              dVar8 = dVar65 + dVar69;
              dVar69 = dVar69 + dVar65;
              auVar75._8_4_ = SUB84(dVar90,0);
              auVar75._0_8_ = dVar86;
              auVar75._12_4_ = uVar101;
              dStack_5d0 = dVar86 * *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37) +
                           dVar45 * *(double *)((longlong)FVar24 + lVar37);
              dVar65 = auVar75._8_8_ * *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37 + 8)
                       + auVar54._8_8_ * ((double *)((longlong)FVar24 + lVar37))[1];
              auVar55._8_4_ = SUB84(dVar65,0);
              auVar55._0_8_ = dStack_5d0;
              auVar55._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
              local_5d8 = auVar55._8_8_ + dStack_5d0;
              dStack_5d0 = dStack_5d0 + dVar65;
              dVar68 = dVar16 * local_588 + dVar68;
              dVar7 = dVar17 * dStack_580 + dVar7;
              dVar10 = dVar44 * local_588 + dVar10;
              dVar11 = dStack_600 * dStack_580 + dVar11;
              dVar83 = dVar44 * dVar8 + dVar83;
              dVar85 = dStack_600 * dVar69 + dVar85;
              auVar56._8_4_ = SUB84(dVar67,0);
              auVar56._0_8_ = dVar46;
              auVar56._12_4_ = uVar103;
              auVar76._8_4_ = SUB84(dVar15,0);
              auVar76._0_8_ = dVar14;
              auVar76._12_4_ = uVar104;
              dVar70 = dVar14 * *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37) +
                       dVar46 * *(double *)((longlong)FVar24 + lVar37);
              dVar81 = auVar76._8_8_ * *(double *)((uchar *)((longlong)FVar24 + 0x10) + lVar37 + 8)
                       + auVar56._8_8_ * ((double *)((longlong)FVar24 + lVar37))[1];
              dVar86 = dVar44 * local_5d8 + dVar86;
              dVar90 = dStack_600 * dStack_5d0 + dVar90;
              auVar57._8_4_ = SUB84(dVar17,0);
              auVar57._0_8_ = dVar16;
              auVar57._12_4_ = uVar105;
              dVar65 = dVar81 + dVar70;
              dVar70 = dVar70 + dVar81;
              dVar45 = dVar16 * local_5d8 + dVar45;
              dVar66 = auVar57._8_8_ * dStack_5d0 + dVar66;
              auVar77._8_4_ = SUB84(dVar17,0);
              auVar77._0_8_ = dVar16;
              auVar77._12_4_ = uVar105;
              dVar71 = dVar16 * dVar8 + dVar71;
              dVar82 = auVar77._8_8_ * dVar69 + dVar82;
              dVar14 = dVar44 * dVar65 + dVar14;
              dVar15 = dStack_600 * dVar70 + dVar15;
              dVar8 = dVar86 * dVar86 + dVar45 * dVar45 + dVar90 * dVar90 + dVar66 * dVar66;
              auVar89._8_4_ = SUB84(dVar69,0);
              auVar89._0_8_ = dStack_580;
              auVar89._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
              dVar45 = dStack_580 *
                       (local_5e8->PriorityCalculationConstants).ConeRadiusFactor.XY.m128d_f64[0];
              dVar66 = auVar89._8_8_ *
                       (local_5e8->PriorityCalculationConstants).ConeRadiusFactor.XY.m128d_f64[1];
              dVar71 = dVar83 * dVar83 + dVar71 * dVar71 + dVar85 * dVar85 + dVar82 * dVar82;
              dVar90 = dVar10 * dVar10 + dVar68 * dVar68 + dVar11 * dVar11 + dVar7 * dVar7;
              dVar46 = dVar16 * dVar65 + dVar46;
              dVar67 = dVar17 * dVar70 + dVar67;
              dVar67 = dVar14 * dVar14 + dVar46 * dVar46 + dVar15 * dVar15 + dVar67 * dVar67;
              bVar18 = dStack_580 <=
                       (local_5e8->PriorityCalculationConstants).ConeLength.XY.m128d_f64[0] &&
                       0.0 <= dStack_580;
              bVar38 = dVar69 <= (local_5e8->PriorityCalculationConstants).ConeLength.XY.m128d_f64
                                 [1] && 0.0 <= dVar69;
              auVar58._8_8_ = -(ulonglong)(0.0 <= dVar70);
              auVar58._0_8_ = -(ulonglong)(0.0 <= dStack_5d0);
              bVar19 = dStack_5d0 <=
                       (local_5e8->PriorityCalculationConstants).ConeLength.ZW.m128d_f64[0] &&
                       0.0 <= dStack_5d0;
              bVar21 = dVar70 <= (local_5e8->PriorityCalculationConstants).ConeLength.ZW.m128d_f64
                                 [1] && 0.0 <= dVar70;
              uVar30 = uVar30 + 1;
              auVar62 = *(undefined1 (*) [16])
                         (local_5e8->PriorityCalculationConstants).InnerConePriority.XY.m128d_f64;
              lVar37 = lVar37 + 0x20;
              lVar26 = -(ulonglong)
                        (dStack_580 <=
                        (local_5e8->PriorityCalculationConstants).InnerConeLength.XY.m128d_f64[0]);
              lVar40 = -(ulonglong)
                        (dVar69 <=
                        (local_5e8->PriorityCalculationConstants).InnerConeLength.XY.m128d_f64[1]);
              uVar23 = (uint)lVar26;
              uVar94 = (uint)((ulonglong)lVar26 >> 0x20);
              uVar95 = (uint)lVar40;
              uVar97 = (uint)((ulonglong)lVar40 >> 0x20);
              auVar80 = *(undefined1 (*) [16])
                         (local_5e8->PriorityCalculationConstants).InnerConePriority.ZW.m128d_f64;
              lVar26 = -(ulonglong)
                        (dStack_5d0 <=
                        (local_5e8->PriorityCalculationConstants).InnerConeLength.ZW.m128d_f64[0]);
              lVar40 = -(ulonglong)
                        (dVar70 <=
                        (local_5e8->PriorityCalculationConstants).InnerConeLength.ZW.m128d_f64[1]);
              uVar98 = (uint)lVar26;
              uVar99 = (uint)((ulonglong)lVar26 >> 0x20);
              uVar100 = (uint)lVar40;
              uVar102 = (uint)((ulonglong)lVar40 >> 0x20);
              dVar86 = dStack_5d0 *
                       (local_5e8->PriorityCalculationConstants).ConeRadiusFactor.ZW.m128d_f64[0];
              dVar70 = dVar70 * (local_5e8->PriorityCalculationConstants).ConeRadiusFactor.ZW.
                                m128d_f64[1];
              lVar26 = local_608 + -1;
              auVar59 = sqrtpd(auVar58,local_578);
              dVar46 = (auVar59._0_8_ -
                       (local_5e8->PriorityCalculationConstants).InnerConeLength.XY.m128d_f64[0]) *
                       (local_5e8->PriorityCalculationConstants).InvConeLengthDiff.XY.m128d_f64[0] *
                       (local_5e8->PriorityCalculationConstants).ConePriorityDiff.XY.m128d_f64[0] +
                       auVar62._0_8_;
              dVar68 = (auVar59._8_8_ -
                       (local_5e8->PriorityCalculationConstants).InnerConeLength.XY.m128d_f64[1]) *
                       (local_5e8->PriorityCalculationConstants).InvConeLengthDiff.XY.m128d_f64[1] *
                       (local_5e8->PriorityCalculationConstants).ConePriorityDiff.XY.m128d_f64[1] +
                       auVar62._8_8_;
              auVar60._8_4_ = SUB84(dVar71,0);
              auVar60._0_8_ = dVar90;
              auVar60._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
              lVar41 = -(ulonglong)(dVar90 <= dVar45 * dVar45 && bVar18);
              lVar39 = -(ulonglong)(bVar38 && auVar60._8_8_ <= dVar66 * dVar66);
              lVar47 = -(ulonglong)
                        (dVar90 <= (local_5e8->PriorityCalculationConstants).LineOfSightRadiusSqr.XY
                                   .m128d_f64[0] && bVar18);
              lVar40 = -(ulonglong)
                        (dVar71 <= (local_5e8->PriorityCalculationConstants).LineOfSightRadiusSqr.XY
                                   .m128d_f64[1] && bVar38);
              auVar20._8_8_ = dStack_560;
              auVar20._0_8_ = local_568;
              auVar78._0_4_ = (~uVar23 & SUB84(dVar46,0) | auVar62._0_4_ & uVar23) & (uint)lVar41;
              auVar78._4_4_ =
                   (~uVar94 & (uint)((ulonglong)dVar46 >> 0x20) | auVar62._4_4_ & uVar94) &
                   (uint)((ulonglong)lVar41 >> 0x20);
              auVar78._8_4_ = (~uVar95 & SUB84(dVar68,0) | auVar62._8_4_ & uVar95) & (uint)lVar39;
              auVar78._12_4_ =
                   (~uVar97 & (uint)((ulonglong)dVar68 >> 0x20) | auVar62._12_4_ & uVar97) &
                   (uint)((ulonglong)lVar39 >> 0x20);
              lVar39 = -(ulonglong)
                        (dVar6 <= (local_5e8->PriorityCalculationConstants).OuterSphereRadiusSqr.XY.
                                  m128d_f64[0]);
              lVar41 = -(ulonglong)
                        (local_578._8_8_ <=
                        (local_5e8->PriorityCalculationConstants).OuterSphereRadiusSqr.XY.m128d_f64
                        [1]);
              auVar61._0_4_ =
                   (uint)lVar39 &
                   *(uint *)(local_5e8->PriorityCalculationConstants).OuterSpherePriority.XY.
                            m128d_f64;
              auVar61._4_4_ =
                   (uint)((ulonglong)lVar39 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).OuterSpherePriority.XY.
                             m128d_f64 + 4);
              auVar61._8_4_ =
                   (uint)lVar41 &
                   *(uint *)((local_5e8->PriorityCalculationConstants).OuterSpherePriority.XY.
                             m128d_f64 + 1);
              auVar61._12_4_ =
                   (uint)((ulonglong)lVar41 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).OuterSpherePriority.XY.
                             m128d_f64 + 0xc);
              lVar39 = -(ulonglong)
                        (dVar6 <= (local_5e8->PriorityCalculationConstants).InnerSphereRadiusSqr.XY.
                                  m128d_f64[0]);
              lVar41 = -(ulonglong)
                        (local_578._8_8_ <=
                        (local_5e8->PriorityCalculationConstants).InnerSphereRadiusSqr.XY.m128d_f64
                        [1]);
              auVar13._4_4_ =
                   (uint)((ulonglong)lVar39 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).InnerSpherePriority.XY.
                             m128d_f64 + 4);
              auVar13._0_4_ =
                   (uint)lVar39 &
                   *(uint *)(local_5e8->PriorityCalculationConstants).InnerSpherePriority.XY.
                            m128d_f64;
              auVar13._8_4_ =
                   (uint)lVar41 &
                   *(uint *)((local_5e8->PriorityCalculationConstants).InnerSpherePriority.XY.
                             m128d_f64 + 1);
              auVar13._12_4_ =
                   (uint)((ulonglong)lVar41 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).InnerSpherePriority.XY.
                             m128d_f64 + 0xc);
              auVar62 = maxpd(auVar61,auVar13);
              auVar9._4_4_ = (uint)((ulonglong)lVar47 >> 0x20) &
                             *(uint *)((longlong)
                                       (local_5e8->PriorityCalculationConstants).LineOfSightPriority
                                       .XY.m128d_f64 + 4);
              auVar9._0_4_ = (uint)lVar47 &
                             *(uint *)(local_5e8->PriorityCalculationConstants).LineOfSightPriority.
                                      XY.m128d_f64;
              auVar9._8_4_ = (uint)lVar40 &
                             *(uint *)((local_5e8->PriorityCalculationConstants).LineOfSightPriority
                                       .XY.m128d_f64 + 1);
              auVar9._12_4_ =
                   (uint)((ulonglong)lVar40 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).LineOfSightPriority.XY.
                             m128d_f64 + 0xc);
              auVar59 = maxpd(auVar78,auVar9);
              auVar59 = maxpd(local_5a8,auVar59);
              local_5a8 = maxpd(auVar59,auVar62);
              auVar62 = sqrtpd(auVar62,auVar20);
              dVar90 = (auVar62._0_8_ -
                       (local_5e8->PriorityCalculationConstants).InnerConeLength.ZW.m128d_f64[0]) *
                       (local_5e8->PriorityCalculationConstants).InvConeLengthDiff.ZW.m128d_f64[0] *
                       (local_5e8->PriorityCalculationConstants).ConePriorityDiff.ZW.m128d_f64[0] +
                       auVar80._0_8_;
              dVar46 = (auVar62._8_8_ -
                       (local_5e8->PriorityCalculationConstants).InnerConeLength.ZW.m128d_f64[1]) *
                       (local_5e8->PriorityCalculationConstants).InvConeLengthDiff.ZW.m128d_f64[1] *
                       (local_5e8->PriorityCalculationConstants).ConePriorityDiff.ZW.m128d_f64[1] +
                       auVar80._8_8_;
              auVar63._8_4_ = SUB84(dVar67,0);
              auVar63._0_8_ = dVar8;
              auVar63._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
              lVar47 = -(ulonglong)(dVar8 <= dVar86 * dVar86 && bVar19);
              lVar40 = -(ulonglong)(bVar21 && auVar63._8_8_ <= dVar70 * dVar70);
              auVar79._0_4_ = (~uVar98 & SUB84(dVar90,0) | auVar80._0_4_ & uVar98) & (uint)lVar47;
              auVar79._4_4_ =
                   (~uVar99 & (uint)((ulonglong)dVar90 >> 0x20) | auVar80._4_4_ & uVar99) &
                   (uint)((ulonglong)lVar47 >> 0x20);
              auVar79._8_4_ = (~uVar100 & SUB84(dVar46,0) | auVar80._8_4_ & uVar100) & (uint)lVar40;
              auVar79._12_4_ =
                   (~uVar102 & (uint)((ulonglong)dVar46 >> 0x20) | auVar80._12_4_ & uVar102) &
                   (uint)((ulonglong)lVar40 >> 0x20);
              lVar47 = -(ulonglong)
                        (dVar8 <= (local_5e8->PriorityCalculationConstants).LineOfSightRadiusSqr.ZW.
                                  m128d_f64[0] && bVar19);
              lVar40 = -(ulonglong)
                        (dVar67 <= (local_5e8->PriorityCalculationConstants).LineOfSightRadiusSqr.ZW
                                   .m128d_f64[1] && bVar21);
              lVar39 = -(ulonglong)
                        (local_568 <=
                        (local_5e8->PriorityCalculationConstants).OuterSphereRadiusSqr.ZW.m128d_f64
                        [0]);
              lVar42 = -(ulonglong)
                        (dStack_560 <=
                        (local_5e8->PriorityCalculationConstants).OuterSphereRadiusSqr.ZW.m128d_f64
                        [1]);
              lVar41 = -(ulonglong)
                        (local_568 <=
                        (local_5e8->PriorityCalculationConstants).InnerSphereRadiusSqr.ZW.m128d_f64
                        [0]);
              lVar43 = -(ulonglong)
                        (dStack_560 <=
                        (local_5e8->PriorityCalculationConstants).InnerSphereRadiusSqr.ZW.m128d_f64
                        [1]);
              auVar64._0_4_ =
                   (uint)lVar39 &
                   *(uint *)(local_5e8->PriorityCalculationConstants).OuterSpherePriority.ZW.
                            m128d_f64;
              auVar64._4_4_ =
                   (uint)((ulonglong)lVar39 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).OuterSpherePriority.ZW.
                             m128d_f64 + 4);
              auVar64._8_4_ =
                   (uint)lVar42 &
                   *(uint *)((local_5e8->PriorityCalculationConstants).OuterSpherePriority.ZW.
                             m128d_f64 + 1);
              auVar64._12_4_ =
                   (uint)((ulonglong)lVar42 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).OuterSpherePriority.ZW.
                             m128d_f64 + 0xc);
              auVar12._4_4_ =
                   (uint)((ulonglong)lVar47 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).LineOfSightPriority.ZW.
                             m128d_f64 + 4);
              auVar12._0_4_ =
                   (uint)lVar47 &
                   *(uint *)(local_5e8->PriorityCalculationConstants).LineOfSightPriority.ZW.
                            m128d_f64;
              auVar12._8_4_ =
                   (uint)lVar40 &
                   *(uint *)((local_5e8->PriorityCalculationConstants).LineOfSightPriority.ZW.
                             m128d_f64 + 1);
              auVar12._12_4_ =
                   (uint)((ulonglong)lVar40 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).LineOfSightPriority.ZW.
                             m128d_f64 + 0xc);
              auVar80 = maxpd(auVar79,auVar12);
              auVar59._4_4_ =
                   (uint)((ulonglong)lVar41 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).InnerSpherePriority.ZW.
                             m128d_f64 + 4);
              auVar59._0_4_ =
                   (uint)lVar41 &
                   *(uint *)(local_5e8->PriorityCalculationConstants).InnerSpherePriority.ZW.
                            m128d_f64;
              auVar59._8_4_ =
                   (uint)lVar43 &
                   *(uint *)((local_5e8->PriorityCalculationConstants).InnerSpherePriority.ZW.
                             m128d_f64 + 1);
              auVar59._12_4_ =
                   (uint)((ulonglong)lVar43 >> 0x20) &
                   *(uint *)((longlong)
                             (local_5e8->PriorityCalculationConstants).InnerSpherePriority.ZW.
                             m128d_f64 + 0xc);
              auVar62 = maxpd(auVar64,auVar59);
              auVar80 = maxpd(local_598,auVar80);
              local_598 = maxpd(auVar80,auVar62);
            } while (lVar26 != 0);
            local_608 = 0;
            pfVar28 = local_5b0;
            pFVar32 = local_5e8;
            pVVar33 = local_5c8;
            lVar26 = local_5b8;
          }
          *(ulonglong *)local_5c0 = CONCAT44((float)local_5a8._8_8_,(float)local_5a8._0_8_);
          *(ulonglong *)(local_5c0 + 2) = CONCAT44((float)local_598._8_8_,(float)local_598._0_8_);
          uVar23 = uVar36 + 2;
          cVar29 = local_618;
          uVar36 = uVar36 + 4;
        } while (uVar23 < uVar4);
      }
      if (local_518.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
        FMemory::Free((void *)local_518.SecondaryData);
      }
      if (local_2f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
        FMemory::Free((void *)local_2f8.SecondaryData);
      }
      if (cVar29 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    local_558 = puVar31[-5];
    uStack_550 = puVar31[-4];
    local_548 = puVar31[-3];
    FVar24 = (ForElementType<VectorRegister4Double>)&local_2f8;
    if (local_2f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
      FVar24 = local_2f8.SecondaryData;
    }
    uStack_540 = 0;
    if ((ulonglong)FVar24 <= &local_558) {
      FVar24 = (ForElementType<VectorRegister4Double>)&local_2f8;
      if (local_2f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
        FVar24 = local_2f8.SecondaryData;
      }
      if (&local_558 < (undefined8 *)((longlong)local_e4[0] * 0x20 + (longlong)FVar24)) {
        local_630 = (longlong)local_e8;
        local_628 = 0x20;
        local_648 = &local_558;
        local_640 = (ForElementType<VectorRegister4Double>)&local_2f8;
        if (local_2f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
          local_640 = local_2f8.SecondaryData;
        }
        local_638 = (longlong)local_e4[0];
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_e8 == local_e4[0]) {
      local_e8 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorRegister4Double>_>
                           (0x1020,&local_2f8,local_e4);
    }
    lVar26 = (longlong)local_e8;
    FVar24 = (ForElementType<VectorRegister4Double>)&local_2f8;
    if (local_2f8.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
      FVar24 = local_2f8.SecondaryData;
    }
    local_e8 = local_e8 + 1;
    puVar1 = (undefined8 *)(lVar26 * 0x20 + (longlong)FVar24);
    *puVar1 = local_558;
    puVar1[1] = uStack_550;
    puVar1 = (undefined8 *)(lVar26 * 0x20 + 0x10 + (longlong)FVar24);
    *puVar1 = local_548;
    puVar1[1] = uStack_540;
    local_538 = puVar31[-2];
    uStack_530 = puVar31[-1];
    local_528 = *puVar31;
    FVar24 = (ForElementType<VectorRegister4Double>)&local_518;
    if (local_518.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
      FVar24 = local_518.SecondaryData;
    }
    uStack_520 = 0;
    if ((ulonglong)FVar24 <= &local_538) {
      FVar24 = (ForElementType<VectorRegister4Double>)&local_518;
      if (local_518.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
        FVar24 = local_518.SecondaryData;
      }
      if (&local_538 < (undefined8 *)((longlong)local_304[0] * 0x20 + (longlong)FVar24)) {
        local_630 = (longlong)local_308;
        local_628 = 0x20;
        local_648 = &local_538;
        local_640 = (ForElementType<VectorRegister4Double>)&local_518;
        if (local_518.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
          local_640 = local_518.SecondaryData;
        }
        local_638 = (longlong)local_304[0];
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar21) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    iVar22 = local_308;
    if (local_308 == local_304[0]) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<VectorRegister4Double>_>
                         (0x1020,&local_518,local_304);
    }
    local_308 = iVar22 + 1;
    FVar24 = (ForElementType<VectorRegister4Double>)&local_518;
    if (local_518.SecondaryData != (ForElementType<VectorRegister4Double>)0x0) {
      FVar24 = local_518.SecondaryData;
    }
    puVar31 = puVar31 + 9;
    puVar1 = (undefined8 *)((longlong)iVar22 * 0x20 + (longlong)FVar24);
    *puVar1 = local_538;
    puVar1[1] = uStack_530;
    puVar1 = (undefined8 *)((longlong)iVar22 * 0x20 + 0x10 + (longlong)FVar24);
    *puVar1 = local_528;
    puVar1[1] = uStack_520;
  } while( true );
}

// SetupBatchParams @ 1442e53e0

void __thiscall
UFieldOfViewNetObjectPrioritizer::SetupBatchParams
          (UFieldOfViewNetObjectPrioritizer *this,FBatchParams *param_1,
          FNetObjectPrioritizationParams *param_2,uint param_3,FMemStackBase *param_4)

{
  VectorRegister4Double *pVVar1;
  float *pfVar2;
  ulong64 _Size;
  
  UE::Net::FReplicationView::operator=(&param_1->View,&param_2->View);
  _Size = (ulonglong)param_3 << 5;
  param_1->ConnectionId = param_2->ConnectionId;
  pVVar1 = FMemStackBase::Alloc(param_4,_Size,0x10);
  param_1->Positions = pVVar1;
  pfVar2 = FMemStackBase::Alloc(param_4,(ulonglong)param_3 * 4,0x10);
  param_1->Priorities = pfVar2;
  SetupCalculationConstants(this,&param_1->PriorityCalculationConstants);
  memset(param_1->Positions,0,_Size);
  return;
}

// SetupCalculationConstants @ 1442e5600

void __thiscall
UFieldOfViewNetObjectPrioritizer::SetupCalculationConstants
          (UFieldOfViewNetObjectPrioritizer *this,FPriorityCalculationConstants *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar51;
  double dStack_1c0;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double dStack_180;
  double dStack_170;
  double dStack_160;
  double dStack_100;
  double dStack_e0;
  
  if ((this->Config).Object == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  fVar36 = *(float *)&pUVar5[1].field_0x14;
  dVar16 = (double)fVar36;
  dVar17 = (double)fVar36;
  auVar14._8_4_ = SUB84(dVar17,0);
  auVar14._0_8_ = dVar16;
  auVar14._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  dVar20 = (double)fVar36;
  dVar21 = (double)fVar36;
  auVar18._8_4_ = SUB84(dVar21,0);
  auVar18._0_8_ = dVar20;
  auVar18._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  fVar36 = *(float *)&pUVar5[1].field_0x18;
  dVar30 = (double)fVar36;
  dVar31 = (double)fVar36;
  uVar50 = (undefined4)((ulonglong)dVar31 >> 0x20);
  dVar33 = (double)fVar36;
  dVar34 = (double)fVar36;
  uVar51 = (undefined4)((ulonglong)dVar34 >> 0x20);
  uVar42 = SUB84(dVar31 - dVar17,0);
  uVar43 = (undefined4)((ulonglong)(dVar31 - dVar17) >> 0x20);
  auVar40._8_4_ = uVar42;
  auVar40._0_8_ = dVar30 - dVar16;
  auVar40._12_4_ = uVar43;
  auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar40);
  uVar44 = SUB84(dVar34 - dVar21,0);
  uVar45 = (undefined4)((ulonglong)(dVar34 - dVar21) >> 0x20);
  auVar41._8_4_ = uVar44;
  auVar41._0_8_ = dVar33 - dVar20;
  auVar41._12_4_ = uVar45;
  auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar41);
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar6 = (this->Config).Object;
  fVar36 = tanf(*(float *)&pUVar6[1].field_0x10 * __real_3c0efa35);
  fVar36 = fVar36 * *(float *)&pUVar5[1].field_0x18;
  auVar46._0_8_ = (double)fVar36;
  auVar46._8_8_ = (double)fVar36;
  auVar48._0_8_ = (double)fVar36;
  auVar48._8_8_ = (double)fVar36;
  auVar47._8_4_ = SUB84(dVar31,0);
  auVar47._0_8_ = dVar30;
  auVar47._12_4_ = uVar50;
  auVar47 = divpd(auVar46,auVar47);
  auVar49._8_4_ = SUB84(dVar34,0);
  auVar49._0_8_ = dVar33;
  auVar49._12_4_ = uVar51;
  auVar49 = divpd(auVar48,auVar49);
  if (pUVar6 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  fVar36 = *(float *)&pUVar5[1].field_0x20;
  dVar17 = (double)fVar36;
  dVar21 = (double)fVar36;
  auVar22._8_4_ = SUB84(dVar21,0);
  auVar22._0_8_ = dVar17;
  auVar22._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  dVar26 = (double)fVar36;
  dVar27 = (double)fVar36;
  auVar24._8_4_ = SUB84(dVar27,0);
  auVar24._0_8_ = dVar26;
  auVar24._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  fVar36 = *(float *)&pUVar5[1].field_0x1c;
  dVar11 = (double)fVar36;
  dVar12 = (double)fVar36;
  auVar8._8_4_ = SUB84(dVar12,0);
  auVar8._0_8_ = dVar11;
  auVar8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  dVar27 = (double)fVar36 - dVar27;
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  fVar37 = *(float *)(pUVar5 + 1);
  fVar37 = fVar37 * fVar37;
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  fVar38 = *(float *)&pUVar5[1].field_0x8;
  fVar38 = fVar38 * fVar38;
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  fVar1 = *(float *)&pUVar5[1].field_0x4;
  auVar9._8_4_ = SUB84((double)fVar1,0);
  auVar9._0_8_ = (double)fVar1;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar1 >> 0x20);
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  fVar2 = *(float *)&pUVar5[1].field_0xc;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar2;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  fVar39 = *(float *)&pUVar5[1].field_0x24;
  fVar39 = fVar39 * fVar39 * __real_3e800000;
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar5 = (this->Config).Object;
  fVar3 = *(float *)(pUVar5 + 2);
  if (pUVar5 == (UObject *)0x0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\StrongObjectPtrTemplates.h"
                        ,0x67,L"");
    if (bVar35) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  dStack_1c0 = auVar14._8_8_;
  dStack_1b0 = auVar18._8_8_;
  fVar4 = *(float *)&(this->Config).Object[2].field_0x4;
  (param_1->InnerConeLength).XY.m128d_f64[0] = dVar16;
  (param_1->InnerConeLength).XY.m128d_f64[1] = dStack_1c0;
  local_1a8 = auVar40._0_8_;
  dStack_1a0 = auVar40._8_8_;
  (param_1->InvConeLengthDiff).XY.m128d_f64[0] = local_1a8;
  (param_1->InvConeLengthDiff).XY.m128d_f64[1] = dStack_1a0;
  dStack_180 = auVar22._8_8_;
  (param_1->InnerConePriority).XY.m128d_f64[0] = dVar17;
  (param_1->InnerConePriority).XY.m128d_f64[1] = dStack_180;
  dStack_160 = auVar8._8_8_;
  (param_1->InnerConeLength).ZW.m128d_f64[0] = dVar20;
  (param_1->InnerConeLength).ZW.m128d_f64[1] = dStack_1b0;
  local_198 = auVar41._0_8_;
  dStack_190 = auVar41._8_8_;
  (param_1->OuterConePriority).XY.m128d_f64[0] = dVar11;
  (param_1->OuterConePriority).XY.m128d_f64[1] = dStack_160;
  (param_1->InvConeLengthDiff).ZW.m128d_f64[0] = local_198;
  (param_1->InvConeLengthDiff).ZW.m128d_f64[1] = dStack_190;
  dStack_170 = auVar24._8_8_;
  (param_1->InnerSphereRadiusSqr).XY.m128d_f64[0] = (double)fVar37;
  (param_1->InnerSphereRadiusSqr).XY.m128d_f64[1] = (double)fVar37;
  (param_1->InnerConePriority).ZW.m128d_f64[0] = dVar26;
  (param_1->InnerConePriority).ZW.m128d_f64[1] = dStack_170;
  (param_1->OuterSphereRadiusSqr).XY.m128d_f64[0] = (double)fVar38;
  (param_1->OuterSphereRadiusSqr).XY.m128d_f64[1] = (double)fVar38;
  dStack_100 = auVar9._8_8_;
  (param_1->OuterConePriority).ZW.m128d_f64[0] = (double)fVar36;
  (param_1->OuterConePriority).ZW.m128d_f64[1] = (double)fVar36;
  (param_1->InnerSpherePriority).XY.m128d_f64[0] = (double)fVar1;
  (param_1->InnerSpherePriority).XY.m128d_f64[1] = dStack_100;
  dStack_e0 = auVar10._8_8_;
  (param_1->InnerSphereRadiusSqr).ZW.m128d_f64[0] = (double)fVar37;
  (param_1->InnerSphereRadiusSqr).ZW.m128d_f64[1] = (double)fVar37;
  (param_1->OuterSpherePriority).XY.m128d_f64[0] = (double)fVar2;
  (param_1->OuterSpherePriority).XY.m128d_f64[1] = dStack_e0;
  (param_1->OuterSphereRadiusSqr).ZW.m128d_f64[0] = (double)fVar38;
  (param_1->OuterSphereRadiusSqr).ZW.m128d_f64[1] = (double)fVar38;
  (param_1->InnerSpherePriority).ZW.m128d_f64[0] = (double)fVar1;
  (param_1->InnerSpherePriority).ZW.m128d_f64[1] = (double)fVar1;
  auVar29._8_4_ = SUB84(dVar31,0);
  auVar29._0_8_ = dVar30;
  auVar29._12_4_ = uVar50;
  *(undefined1 (*) [16])(param_1->ConeLength).XY.m128d_f64 = auVar29;
  auVar13._8_4_ = uVar42;
  auVar13._0_8_ = dVar30 - dVar16;
  auVar13._12_4_ = uVar43;
  *(undefined1 (*) [16])(param_1->ConeLengthDiff).XY.m128d_f64 = auVar13;
  *(undefined1 (*) [16])(param_1->ConeRadiusFactor).XY.m128d_f64 = auVar47;
  auVar19._8_4_ = SUB84(dVar12 - dVar21,0);
  auVar19._0_8_ = dVar11 - dVar17;
  auVar19._12_4_ = (int)((ulonglong)(dVar12 - dVar21) >> 0x20);
  *(undefined1 (*) [16])(param_1->ConePriorityDiff).XY.m128d_f64 = auVar19;
  auVar32._8_4_ = SUB84(dVar34,0);
  auVar32._0_8_ = dVar33;
  auVar32._12_4_ = uVar51;
  *(undefined1 (*) [16])(param_1->ConeLength).ZW.m128d_f64 = auVar32;
  auVar15._8_4_ = uVar44;
  auVar15._0_8_ = dVar33 - dVar20;
  auVar15._12_4_ = uVar45;
  *(undefined1 (*) [16])(param_1->ConeLengthDiff).ZW.m128d_f64 = auVar15;
  *(undefined1 (*) [16])(param_1->ConeRadiusFactor).ZW.m128d_f64 = auVar49;
  auVar23._8_4_ = SUB84(dVar27,0);
  auVar23._0_8_ = (double)fVar36 - dVar26;
  auVar23._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  *(undefined1 (*) [16])(param_1->ConePriorityDiff).ZW.m128d_f64 = auVar23;
  (param_1->OuterSpherePriority).ZW.m128d_f64[0] = (double)fVar2;
  (param_1->OuterSpherePriority).ZW.m128d_f64[1] = (double)fVar2;
  (param_1->LineOfSightRadiusSqr).XY.m128d_f64[0] = (double)fVar39;
  (param_1->LineOfSightRadiusSqr).XY.m128d_f64[1] = (double)fVar39;
  (param_1->LineOfSightRadiusSqr).ZW.m128d_f64[0] = (double)fVar39;
  (param_1->LineOfSightRadiusSqr).ZW.m128d_f64[1] = (double)fVar39;
  auVar25._8_4_ = SUB84((double)fVar3,0);
  auVar25._0_8_ = (double)fVar3;
  auVar25._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(param_1->LineOfSightPriority).XY.m128d_f64 = auVar25;
  auVar28._8_4_ = SUB84((double)fVar3,0);
  auVar28._0_8_ = (double)fVar3;
  auVar28._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(param_1->LineOfSightPriority).ZW.m128d_f64 = auVar28;
  (param_1->OutsidePriority).XY.m128d_f64[0] = (double)fVar4;
  (param_1->OutsidePriority).XY.m128d_f64[1] = (double)fVar4;
  (param_1->OutsidePriority).ZW.m128d_f64[0] = (double)fVar4;
  (param_1->OutsidePriority).ZW.m128d_f64[1] = (double)fVar4;
  return;
}

// StaticRegisterNativesUFieldOfViewNetObjectPrioritizer @ 1442e6290

void __cdecl
UFieldOfViewNetObjectPrioritizer::StaticRegisterNativesUFieldOfViewNetObjectPrioritizer(void)

{
  return;
}

