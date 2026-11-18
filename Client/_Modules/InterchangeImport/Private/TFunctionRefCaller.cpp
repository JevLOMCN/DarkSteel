// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 28

// Call @ 14e698300

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<UE::Math::TVector<float>_(__cdecl*)(float_const_*),UE::Math::TVector<float>,float_const_*>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,float **param_2)

{
  (**(code **)param_1)(__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14e698320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l9::<lambda_1>,void,TFunction<UE::Math::TVector<float>___cdecl(float_const_*)>,int,int,bool>
::Call(void *param_1,TFunction<UE::Math::TVector<float>___cdecl(float_const_*)> *param_2,
      int *param_3,int *param_4,bool *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  TFunction<UE::Math::TVector<float>___cdecl(float_const_*)> local_38;
  
  local_38._0_8_ = *(undefined8 *)param_2;
  iVar2 = *param_4;
  iVar3 = *param_3;
  bVar1 = *param_5;
  local_38._40_8_ = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  local_38._32_8_ = *(undefined8 *)&param_2->field_0x20;
  local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_38._24_8_ = *(undefined8 *)&param_2->field_0x18;
  if (local_38._0_8_ != 0) {
    *(undefined8 *)param_2 = 0;
  }
  `UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l9::<lambda_1>::operator()
            (param_1,&local_38,iVar3,iVar2,bVar1);
  return;
}

// Call @ 14e698390

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l14::<lambda_1>,void>::
Call(void *param_1)

{
  code *pcVar1;
  FString *pFVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  TTuple<FString,FInterchangeAnimationPayLoadKey> *pTVar13;
  bool bVar14;
  longlong lStackX_20;
  TArray<TTuple<FString,FInterchangeAnimationPayLoadKey>,TSizedDefaultAllocator<32>_> TStack_78;
  FAnimationPayloadData *pFStack_68;
  int iStack_60;
  TArray<UE::Interchange::FAnimationPayloadQuery,TSizedDefaultAllocator<32>_> TStack_58;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1063,
               "UInterchangeAnimSequenceFactory::GetAnimationPayloadMultipleQueries",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
               ,0x427);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1063);
  }
  uVar10 = 0;
  TStack_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_58.ArrayNum = 0;
  TStack_58.ArrayMax = 0;
  TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
              *)(*(longlong *)param_1 + 0x138),&TStack_58);
  (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x18))
            (*(longlong **)((longlong)param_1 + 8),&pFStack_68,&TStack_58);
  lVar9 = *(longlong *)param_1;
  if (iStack_60 == *(int *)(lVar9 + 0x140) - *(int *)(lVar9 + 0x16c)) {
    TStack_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_78.ArrayNum = 0;
    TStack_78.ArrayMax = 0;
    TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
    ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>_>
                *)(lVar9 + 0x138),&TStack_78);
    if (0 < iStack_60) {
      lStackX_20 = 0;
      uVar12 = uVar10;
      do {
        uVar11 = (uint)uVar12;
        lVar9 = *(longlong *)param_1;
        uVar8 = ~uVar11 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar11 < TStack_78.ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (TTuple<FString,FInterchangeAnimationPayLoadKey> *)
                  (TStack_78.AllocatorInstance.Data + uVar10);
        iVar6 = *(int *)&pTVar13->field_0x8 + -1;
        if (*(int *)&pTVar13->field_0x8 == 0) {
          pwVar7 = L"";
          iVar6 = 0;
        }
        else {
          pwVar7 = *(wchar_t **)pTVar13;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
        uVar5 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)&pTVar13->field_0x10);
        iVar6 = TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TTuple<FString,FInterchangeAnimationPayLoadKey>_>
                          ((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                            *)(lVar9 + 0x188),
                           (uVar4 >> 2) + uVar4 * 0x40 + -0x61c88647 + uVar5 ^ uVar4,pTVar13);
        if (iVar6 == -1) {
          bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5935353277871817777>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
                             ,0x431,
                             "BoneAnimationPayloadResults.Contains(TmpPayloadKeys[AnimationIndex])")
          ;
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else {
          uVar4 = 0;
          if ((int)uVar11 < iStack_60) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pFVar2 = &pFStack_68->SceneNodeUniqueID;
          lVar9 = *(longlong *)param_1;
          uVar4 = 0;
          if ((int)uVar11 < TStack_78.ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pTVar13 = (TTuple<FString,FInterchangeAnimationPayLoadKey> *)
                    (TStack_78.AllocatorInstance.Data + uVar10);
          iVar6 = *(int *)&pTVar13->field_0x8 + -1;
          if (*(int *)&pTVar13->field_0x8 == 0) {
            pwVar7 = L"";
            iVar6 = 0;
          }
          else {
            pwVar7 = *(wchar_t **)pTVar13;
          }
          uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
          uVar8 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)&pTVar13->field_0x10);
          iVar6 = TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<TTuple<FString,FInterchangeAnimationPayLoadKey>_>
                            ((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                              *)(lVar9 + 0x188),
                             uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 + uVar8 ^ uVar4,pTVar13);
          if (iVar6 == -1) {
            lVar9 = 0;
LAB_14e693a0a:
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          else {
            lVar9 = (longlong)iVar6 * 200 + *(longlong *)(lVar9 + 0x188);
            if (lVar9 == 0) goto LAB_14e693a0a;
          }
          Interchange::FAnimationPayloadData::operator=
                    ((FAnimationPayloadData *)(lVar9 + 0x28),
                     (FAnimationPayloadData *)
                     ((longlong)&(pFVar2->Data).AllocatorInstance.Data + lStackX_20));
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        lStackX_20 = lStackX_20 + 0x98;
        uVar10 = uVar10 + 0x28;
      } while ((int)(uVar11 + 1) < iStack_60);
    }
    DestructItems<TTuple<FString,FInterchangeAnimationPayLoadKey>,int>
              ((TTuple<FString,FInterchangeAnimationPayLoadKey> *)TStack_78.AllocatorInstance.Data,
               TStack_78.ArrayNum);
    if ((TTuple<FString,FInterchangeAnimationPayLoadKey> *)TStack_78.AllocatorInstance.Data !=
        (TTuple<FString,FInterchangeAnimationPayLoadKey> *)0x0) {
      FMemory::Free(TStack_78.AllocatorInstance.Data);
    }
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5935353277871817771>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
                       ,0x42b,"AnimationPayloads.Num() == BoneAnimationPayloadQueries.Num()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  DestructItems<UE::Interchange::FAnimationPayloadData,int>(pFStack_68,iStack_60);
  if (pFStack_68 != (FAnimationPayloadData *)0x0) {
    FMemory::Free(pFStack_68);
  }
  DestructItems<UE::Interchange::FAnimationPayloadQuery,int>
            ((FAnimationPayloadQuery *)TStack_58.AllocatorInstance.Data,TStack_58.ArrayNum);
  if ((FAnimationPayloadQuery *)TStack_58.AllocatorInstance.Data != (FAnimationPayloadQuery *)0x0) {
    FMemory::Free(TStack_58.AllocatorInstance.Data);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14e6983a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeAnimSequenceFactory::CreatePayloadTasks'::__l24::<lambda_2>,void>::
Call(void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  FAnimationPayloadData *pFVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FAnimationPayloadData *this;
  int iVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  bool bVar13;
  ForAnyElementType FStack_98;
  int iStack_90;
  int iStack_8c;
  FAnimationPayloadData *pFStack_88;
  int iStack_80;
  FAnimationPayloadQuery FStack_78;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1095,
               "UInterchangeAnimSequenceFactory::GetAnimationPayloadSingleQuery",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
               ,0x447);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1095);
  }
  iVar8 = *(int *)((longlong)param_1 + 0x10);
  pwVar12 = L"";
  lVar1 = *(longlong *)param_1;
  if (iVar8 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)((longlong)param_1 + 8);
  }
  lVar11 = 0;
  iVar9 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar9 = 0;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
  uVar7 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)((longlong)param_1 + 0x18));
  iVar8 = TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FString,FInterchangeAnimationPayLoadKey>_>
                    ((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadQuery,0>,FDefaultSetAllocator>
                      *)(lVar1 + 0x138),uVar6 * 0x40 + (uVar6 >> 2) + uVar7 + 0x9e3779b9 ^ uVar6,
                     (TTuple<FString,FInterchangeAnimationPayLoadKey> *)((longlong)param_1 + 8));
  if (((iVar8 == -1) ||
      (lVar11 = (longlong)iVar8 * 0x80 + *(longlong *)(lVar1 + 0x138), lVar11 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  plVar2 = *(longlong **)((longlong)param_1 + 0x30);
  pcVar3 = *(code **)(*plVar2 + 0x18);
  ::FString::FString(&FStack_78.SceneNodeUniqueID,(FString *)(lVar11 + 0x28));
  ::FString::FString(&FStack_78.PayloadKey.UniqueId,(FString *)(lVar11 + 0x38));
  FStack_78.TimeDescription.BakeFrequency = *(double *)(lVar11 + 0x50);
  FStack_78.TimeDescription.RangeStartSecond = *(double *)(lVar11 + 0x58);
  FStack_78.PayloadKey.Type = *(EInterchangeAnimationPayLoadType *)(lVar11 + 0x48);
  FStack_78.TimeDescription.RangeStopSecond = *(double *)(lVar11 + 0x60);
  iVar8 = 0;
  FStack_78.HashStringCache.field0_0x0.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  FStack_78.HashStringCache.field0_0x0.TypedValue.Data.ArrayNum = 0;
  FStack_78.HashStringCache.field0_0x0.TypedValue.Data.ArrayMax = -1;
  if (*(int *)(lVar11 + 0x74) != -1) {
    ::FString::FString((FString *)&FStack_78.HashStringCache,(FString *)(lVar11 + 0x68));
  }
  FStack_98.Data = (FScriptContainerElement *)0x0;
  iStack_90 = 1;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,1,0,&FStack_98,1,&iStack_8c);
  ConstructItems<UE::Interchange::FAnimationPayloadQuery,UE::Interchange::FAnimationPayloadQuery,int>
            (FStack_98.Data,&FStack_78,1);
  (*pcVar3)(plVar2,&pFStack_88,&FStack_98);
  DestructItems<UE::Interchange::FAnimationPayloadQuery,int>
            ((FAnimationPayloadQuery *)FStack_98.Data,iStack_90);
  if ((FAnimationPayloadQuery *)FStack_98.Data != (FAnimationPayloadQuery *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  if ((FStack_78.HashStringCache.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
     (FStack_78.HashStringCache.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)FStack_78.HashStringCache.field0_0x0.TypedValue.Data.AllocatorInstance.
                          Data);
  }
  if (FStack_78.PayloadKey.UniqueId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.PayloadKey.UniqueId.Data.AllocatorInstance.Data);
  }
  if (FStack_78.SceneNodeUniqueID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.SceneNodeUniqueID.Data.AllocatorInstance.Data);
  }
  if (0 < iStack_80) {
    lVar1 = *(longlong *)param_1;
    if (*(int *)((longlong)param_1 + 0x10) != 0) {
      pwVar12 = *(wchar_t **)((longlong)param_1 + 8);
      iVar8 = *(int *)((longlong)param_1 + 0x10) + -1;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar12);
    uVar7 = ::GetTypeHash((FInterchangeAnimationPayLoadKey *)((longlong)param_1 + 0x18));
    iVar8 = TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TTuple<FString,FInterchangeAnimationPayLoadKey>_>
                      ((TSet<TTuple<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                        *)(lVar1 + 0x188),(uVar6 >> 2) + uVar6 * 0x40 + uVar7 + 0x9e3779b9 ^ uVar6,
                       (TTuple<FString,FInterchangeAnimationPayLoadKey> *)((longlong)param_1 + 8));
    if (iVar8 != -1) {
      if ((iStack_80 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = pFStack_88;
      this = TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
             ::FindChecked((TMapBase<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FString,FInterchangeAnimationPayLoadKey>,UE::Interchange::FAnimationPayloadData,0>_>
                            *)(*(longlong *)param_1 + 0x188),
                           (TTuple<FString,FInterchangeAnimationPayLoadKey> *)
                           ((longlong)param_1 + 8));
      Interchange::FAnimationPayloadData::operator=(this,pFVar4);
      goto LAB_14e6947c2;
    }
  }
  bVar5 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5935353277871817802>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Animation\\InterchangeAnimSequenceFactory.cpp"
                     ,0x44a,
                     "AnimationPayloads.IsValidIndex(0) && BoneAnimationPayloadResults.Contains(SceneNodeUidAndPayloadKey)"
                    );
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e6947c2:
  DestructItems<UE::Interchange::FAnimationPayloadData,int>(pFStack_88,iStack_80);
  if (pFStack_88 != (FAnimationPayloadData *)0x0) {
    FMemory::Free(pFStack_88);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14e6983b0

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l12::<lambda_2>,UE::Math::TVector<float>,float_const_*>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,float **param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  
  pfVar4 = *param_2;
  fVar1 = **(float **)param_1;
  fVar2 = pfVar4[1];
  fVar3 = pfVar4[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar1 * *pfVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar1 * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1 * fVar3;
  return __return_storage_ptr__;
}

// Call @ 14e6983f0

TVector<float> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l13::<lambda_3>,UE::Math::TVector<float>,float_const_*>
::Call(TVector<float> *__return_storage_ptr__,void *param_1,float **param_2)

{
  `UE::Interchange::Gltf::Private::GetTransformAnimationPayloadData'::__l13::<lambda_3>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14e6c0e50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGLTFTranslator::GetVariantSetPayloadData'::__l2::<lambda_1>,void,TArray<int,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  uint *puVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType _Src;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TTuple<wchar_t_const_*,UE::Interchange::FVariant_*> *pTVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  atomic<unsigned_char> *paVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  uint *puVar19;
  FString *pFVar20;
  FScriptContainerElement *pFVar21;
  FNode *pFVar22;
  uint *puVar23;
  int *piVar24;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  char *pcVar25;
  undefined1 uStack_138;
  undefined1 auStack_137 [7];
  longlong lStack_130;
  uint *puStack_128;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  int *piStack_110;
  FString FStack_108;
  undefined2 uStack_f8;
  TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_u_0 TStack_f0;
  FString FStack_e0;
  uint *puStack_d0;
  uint *puStack_c8;
  longlong lStack_c0;
  FScriptContainerElement *pFStack_b8;
  FString *pFStack_b0;
  uint *puStack_a8;
  int *piStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  FNode *pFStack_88;
  FScriptContainerElement *pFStack_80;
  FString FStack_78;
  wchar_t *pwStack_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> TStack_58;
  
  lStack_130 = *(longlong *)param_1;
  pFVar21 = (param_2->AllocatorInstance).Data;
  uStack_114 = param_2->ArrayNum;
  uVar12 = (ulonglong)(int)uStack_114;
  pFStack_80 = pFVar21 + uVar12 * 4;
  do {
    pFVar6 = pFStack_80;
    pFStack_b8 = pFVar21;
    if (param_2->ArrayNum != (int)uVar12) {
      auStackX_18[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_18);
    }
    if (pFVar21 == pFVar6) {
      return;
    }
    uVar1 = *(uint *)pFVar21;
    if (((int)uVar1 < 0) || (lVar18 = *(longlong *)param_1, *(int *)(lVar18 + 0xd8) <= (int)uVar1))
    {
      pcVar25 = "this->GltfAsset.Nodes.IsValidIndex(NodeIndex)";
      paVar13 = &bGEnsureHasExecuted<5163310495276467453>;
      iVar9 = 0x4fd;
LAB_14e6bac1f:
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (paVar13,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                         ,iVar9,pcVar25);
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      uVar8 = 0;
      if ((int)uVar1 < *(int *)(lVar18 + 0xd8)) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar22 = (FNode *)((longlong)(int)uVar1 * 0x260 + *(longlong *)(lVar18 + 0xd0));
      pFStack_88 = pFVar22;
      if (pFVar22->Type == Mesh) {
        uVar1 = pFVar22->MeshIndex;
        if ((-1 < (int)uVar1) &&
           (lVar18 = *(longlong *)param_1, (int)uVar1 < *(int *)(lVar18 + 0xb8))) {
          uVar8 = 0;
          if ((int)uVar1 < *(int *)(lVar18 + 0xb8)) {
            uVar8 = ~uVar1 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar18 = (longlong)(int)uVar1 * 0xa8 + *(longlong *)(lVar18 + 0xb0);
          lStack_98 = lVar18;
          pFStack_b0 = TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                       ::Find((TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                               *)(*(longlong *)param_1 + 0x260),pFVar22);
          if (pFStack_b0 == (FString *)0x0) {
            pcVar25 = "NodeUidPtr";
            paVar13 = &bGEnsureHasExecuted<5163310495276467464>;
            iVar9 = 0x508;
            goto LAB_14e6bac1f;
          }
          uStack_118 = *(uint *)(lVar18 + 0x18);
          uVar12 = (ulonglong)(int)uStack_118;
          lVar15 = *(longlong *)(lVar18 + 0x10);
          puStack_128 = (uint *)(lVar15 + 0x28);
          lStack_90 = uVar12 * 0xa0 + lVar15;
          while( true ) {
            lVar16 = lStack_90;
            lStack_c0 = lVar15;
            if (*(int *)(lVar18 + 0x18) != (int)uVar12) {
              auStackX_20[0] = 0;
              `TCheckedPointerIterator<GLTF::FPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(auStackX_20);
            }
            pFVar21 = pFStack_b8;
            if (lVar15 == lVar16) break;
            uStack_11c = *puStack_128;
            uVar12 = (ulonglong)(int)uStack_11c;
            piVar24 = *(int **)(puStack_128 + -2);
            piStack_a0 = piVar24 + uVar12 * 6;
            puVar23 = (uint *)(piVar24 + 4);
            while( true ) {
              piVar5 = piStack_a0;
              piStack_110 = piVar24;
              puStack_c8 = puVar23;
              if (*puStack_128 != (uint)uVar12) {
                uStack_138 = 0;
                `TCheckedPointerIterator<GLTF::FVariantMapping_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&uStack_138);
              }
              lVar18 = lStack_130;
              if (piVar24 == piVar5) break;
              iVar9 = *piVar24;
              if ((iVar9 < 0) || (*(int *)(lStack_130 + 0x168) <= iVar9)) {
                bVar7 = Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<5163310495276467473>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                                   ,0x511,"Materials.IsValidIndex(VariantMapping.MaterialIndex)");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else {
                if ((iVar9 < 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar15 = (longlong)iVar9 * 0x370 + *(longlong *)(lVar18 + 0x160);
                pwStack_68 = *(wchar_t **)(lVar15 + 0x360);
                iVar9 = *(int *)(lVar15 + 0x368);
                iStack_60 = iVar9 + -1;
                if (iVar9 == 0) {
                  iStack_60 = 0;
                }
                TStack_58._12_4_ = uStack_5c;
                TStack_58.Size = iStack_60;
                TStack_58.DataPtr = pwStack_68;
                UInterchangeShaderGraphNode::MakeNodeUid(&FStack_78,&TStack_58);
                uStack_120 = *puVar23;
                uVar12 = (ulonglong)(int)uStack_120;
                puVar19 = *(uint **)(puVar23 + -2);
                puStack_a8 = puVar19 + uVar12;
                while( true ) {
                  puVar4 = puStack_a8;
                  puStack_d0 = puVar19;
                  if (*puVar23 != (uint)uVar12) {
                    auStack_137[0] = 0;
                    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(auStack_137);
                  }
                  if (puVar19 == puVar4) break;
                  uVar1 = *puVar19;
                  lVar15 = (longlong)(int)uVar1;
                  uVar8 = 0;
                  if ((int)uVar1 < *(int *)(lVar18 + 0x178)) {
                    uVar8 = ~uVar1 >> 0x1f;
                  }
                  if ((uVar8 == 0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar7)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (*(int *)(*(longlong *)(lVar18 + 0x170) + 8 + lVar15 * 0x10) == 0) {
                    pwVar17 = L"";
                  }
                  else {
                    pwVar17 = *(wchar_t **)(*(longlong *)(lVar18 + 0x170) + lVar15 * 0x10);
                  }
                  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(pwVar17);
                  _Src.Data = FStack_78.Data.AllocatorInstance.Data;
                  if (*(int *)((longlong)param_1 + 0x10) != *(int *)((longlong)param_1 + 0x3c)) {
                    lVar16 = (longlong)param_1 + 0x40;
                    if (*(longlong *)((longlong)param_1 + 0x48) != 0) {
                      lVar16 = *(longlong *)((longlong)param_1 + 0x48);
                    }
                    iVar9 = *(int *)(lVar16 + (ulonglong)
                                              (*(int *)((longlong)param_1 + 0x50) - 1U & uVar8) * 4)
                    ;
                    if (iVar9 != -1) {
                      do {
                        if (*(wchar_t **)
                             (*(longlong *)((longlong)param_1 + 8) + (longlong)iVar9 * 0x18) ==
                            pwVar17) {
                          FStack_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          FStack_108.Data.ArrayNum = 0;
                          FStack_108.Data.ArrayMax = 0;
                          TStack_f0.TypedValue.AllocatorInstance.Data =
                               (ForAnyElementType)(FScriptContainerElement *)0x0;
                          TStack_f0.TypedValue.ArrayNum = 0;
                          TStack_f0.TypedValue.ArrayMax = -1;
                          FStack_e0.Data.ArrayMax = -1;
                          uStack_f8 = 0x20;
                          FStack_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          iVar9 = FStack_78.Data.ArrayNum;
                          FStack_e0.Data.ArrayNum = iVar9;
                          if (iVar9 == 0) {
                            FStack_e0.Data.ArrayMax = 0;
                          }
                          else {
                            ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (2,2,iVar9,0,(ForAnyElementType *)&FStack_e0,iVar9,
                                       &FStack_e0.Data.ArrayMax);
                            memcpy(FStack_e0.Data.AllocatorInstance.Data,_Src.Data,
                                   (longlong)iVar9 * 2);
                          }
                          if ((FStack_e0.Data.ArrayMax == -1) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("IsSet()",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                                 ,0x171,
                                                 L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                                ), bVar7)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          lVar18 = lStack_130;
                          uVar8 = 0;
                          if ((int)uVar1 < *(int *)(lStack_130 + 0x178)) {
                            uVar8 = ~uVar1 >> 0x1f;
                          }
                          if ((uVar8 == 0) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar7)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          lVar16 = *(longlong *)(lVar18 + 0x170);
                          if (*(int *)(lVar16 + 8 + lVar15 * 0x10) == 0) {
                            pwVar17 = L"";
                          }
                          else {
                            pwVar17 = *(wchar_t **)(lVar16 + lVar15 * 0x10);
                          }
                          pTVar10 = TSet<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>,FDefaultSetAllocator>
                                    ::Find((TSet<TTuple<wchar_t_const_*,UE::Interchange::FVariant_*>,TStringPointerMapKeyFuncs_DEPRECATED<wchar_t_const_*,UE::Interchange::FVariant_*,0>,FDefaultSetAllocator>
                                            *)((longlong)param_1 + 8),pwVar17);
                          if ((pTVar10 == (TTuple<wchar_t_const_*,UE::Interchange::FVariant_*> *)0x0
                              ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                      ("Pair != nullptr",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                                  ,0x27b,L""), bVar7)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          lVar15 = *(longlong *)&pTVar10->field_0x8;
                          iVar9 = *(int *)(lVar15 + 0x18);
                          if (iVar9 == *(int *)(lVar15 + 0x1c)) {
                            iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x820,(ForAnyElementType *)(lVar15 + 0x10),
                                               (int *)(lVar15 + 0x1c));
                          }
                          *(int *)(lVar15 + 0x18) = iVar9 + 1;
                          pFVar20 = (FString *)
                                    (*(longlong *)(lVar15 + 0x10) + (longlong)iVar9 * 0x20);
                          DefaultConstructItems<UE::Interchange::FVariantBinding,int>(pFVar20,1);
                          if (pFVar20 != pFStack_b0) {
                            iVar9 = (pFStack_b0->Data).ArrayNum;
                            piVar24 = &(pFVar20->Data).ArrayMax;
                            pFVar21 = (pFStack_b0->Data).AllocatorInstance.Data;
                            (pFVar20->Data).ArrayNum = iVar9;
                            if ((iVar9 == 0) && (*piVar24 == 0)) {
                              *piVar24 = 0;
                              lVar18 = lStack_130;
                            }
                            else {
                              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                        (2,2,iVar9,*piVar24,(ForAnyElementType *)pFVar20,iVar9,
                                         piVar24);
                              lVar18 = lStack_130;
                              if (iVar9 != 0) {
                                memcpy((pFVar20->Data).AllocatorInstance.Data,pFVar21,
                                       (longlong)iVar9 * 2);
                                lVar18 = lStack_130;
                              }
                            }
                          }
                          pFVar21 = pFVar20[1].Data.AllocatorInstance.Data;
                          if (((pFVar21 <= (FScriptContainerElement *)&FStack_108) &&
                              ((FScriptContainerElement *)&FStack_108 <
                               pFVar21 + (longlong)pFVar20[1].Data.ArrayMax * 0x38)) &&
                             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar7)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          iVar9 = pFVar20[1].Data.ArrayNum;
                          piVar24 = &pFVar20[1].Data.ArrayMax;
                          if (iVar9 == *piVar24) {
                            iVar9 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                              (0x838,(ForAnyElementType *)(pFVar20 + 1),piVar24);
                          }
                          pFVar20[1].Data.ArrayNum = iVar9 + 1;
                          pFVar21 = pFVar20[1].Data.AllocatorInstance.Data + (longlong)iVar9 * 0x38;
                          ::FString::FString((FString *)pFVar21,&FStack_108);
                          *(undefined2 *)&pFVar21[0x10].field_0x0 = uStack_f8;
                          TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
                          TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                                    ((TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                                      *)(pFVar21 + 0x18),
                                     (TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                                      *)&TStack_f0.TypedValue);
                          *(undefined4 *)&pFVar21[0x30].field_0x0 = 0;
                          *(undefined8 *)(pFVar21 + 0x28) = 0;
                          *(undefined4 *)(pFVar21 + 0x34) = 0xffffffff;
                          if (((FStack_e0.Data.ArrayMax != -1) &&
                              (::FString::FString((FString *)(pFVar21 + 0x28),&FStack_e0),
                              FStack_e0.Data.ArrayMax != -1)) &&
                             (FStack_e0.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0)) {
                            FMemory::Free(FStack_e0.Data.AllocatorInstance.Data);
                          }
                          if ((TStack_f0.TypedValue.ArrayMax != -1) &&
                             (TStack_f0.TypedValue.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0)) {
                            FMemory::Free((void *)TStack_f0.TypedValue.AllocatorInstance.Data);
                          }
                          if (FStack_108.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(FStack_108.Data.AllocatorInstance.Data);
                          }
                          goto LAB_14e6ba806;
                        }
                        iVar9 = *(int *)(*(longlong *)((longlong)param_1 + 8) + 0x10 +
                                        (longlong)iVar9 * 0x18);
                      } while (iVar9 != -1);
                    }
                  }
                  bVar7 = Assert::Private::ExecCheckImplInternal
                                    (&bGEnsureHasExecuted<5163310495276467483>,false,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                                     ,0x51b,"VariantMap.Contains(*VariantNames[VariantIndex])");
                  if (bVar7) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
LAB_14e6ba806:
                  uVar12 = (ulonglong)uStack_120;
                  puVar19 = puStack_d0 + 1;
                  puVar23 = puStack_c8;
                }
                piVar24 = piStack_110;
                if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
                  piVar24 = piStack_110;
                }
              }
              piVar24 = piVar24 + 6;
              uVar12 = (ulonglong)uStack_11c;
              puVar23 = puVar23 + 6;
            }
            lVar15 = lStack_c0 + 0xa0;
            puStack_128 = puStack_128 + 0x28;
            uVar12 = (ulonglong)uStack_118;
            lVar18 = lStack_98;
          }
        }
      }
      pFVar22 = pFStack_88;
      if (0 < (pFStack_88->Children).ArrayNum) {
        puVar2 = *(undefined8 **)((longlong)param_1 + 0x58);
        CheckCallable((void *)*puVar2);
        pcVar3 = (code *)*puVar2;
        plVar14 = (longlong *)puVar2[5];
        if ((longlong *)puVar2[5] == (longlong *)0x0) {
          plVar14 = puVar2 + 2;
        }
        uVar11 = (**(code **)(*plVar14 + 8))();
        (*pcVar3)(uVar11,&pFVar22->Children);
      }
    }
    pFVar21 = pFVar21 + 4;
    uVar12 = (ulonglong)uStack_114;
  } while( true );
}

// Call @ 14e6c0e60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGLTFTranslator::HandleGltfVariants'::__l2::<lambda_1>,void,TArray<int,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  FString *pFVar12;
  undefined8 uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  FNode *pFVar19;
  longlong lVar20;
  int *piVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackX_8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStackX_10;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  undefined4 uStack_6c;
  FString FStack_68;
  TStringView<wchar_t> TStack_58;
  
  lVar7 = *(longlong *)param_1;
  pFVar23 = (param_2->AllocatorInstance).Data;
  uVar3 = param_2->ArrayNum;
  uVar15 = (ulonglong)(int)uVar3;
  pFVar1 = pFVar23 + uVar15 * 4;
  pTStackX_10 = param_2;
  do {
    if (pTStackX_10->ArrayNum != (int)uVar15) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (pFVar23 == pFVar1) {
      return;
    }
    uVar4 = *(uint *)pFVar23;
    if ((-1 < (int)uVar4) && (lVar22 = *(longlong *)param_1, (int)uVar4 < *(int *)(lVar22 + 0xd8)))
    {
      uVar11 = 0;
      if ((int)uVar4 < *(int *)(lVar22 + 0xd8)) {
        uVar11 = ~uVar4 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar19 = (FNode *)((longlong)(int)uVar4 * 0x260 + *(longlong *)(lVar22 + 0xd0));
      if (pFVar19->Type == Mesh) {
        uVar4 = pFVar19->MeshIndex;
        if ((-1 < (int)uVar4) &&
           (lVar22 = *(longlong *)param_1, (int)uVar4 < *(int *)(lVar22 + 0xb8))) {
          uVar11 = 0;
          if ((int)uVar4 < *(int *)(lVar22 + 0xb8)) {
            uVar11 = ~uVar4 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar22 = (longlong)(int)uVar4 * 0xa8 + *(longlong *)(lVar22 + 0xb0);
          pFVar12 = TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                    ::Find((TMapBase<GLTF::FNode_const_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<GLTF::FNode_const_*,FString,0>_>
                            *)(*(longlong *)param_1 + 0x260),pFVar19);
          if (pFVar12 == (FString *)0x0) {
            bVar10 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5163310495276467379>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                                ,0x4b3,"NodeUidPtr");
            if (bVar10) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            goto LAB_14e6bb02b;
          }
          UInterchangeVariantSetNode::AddCustomDependencyUid
                    (*(UInterchangeVariantSetNode **)((longlong)param_1 + 8),pFVar12);
          uVar4 = *(uint *)(lVar22 + 0x18);
          uVar15 = (ulonglong)(int)uVar4;
          lVar20 = *(longlong *)(lVar22 + 0x10);
          lVar18 = uVar15 * 0xa0 + lVar20;
          while( true ) {
            if (*(int *)(lVar22 + 0x18) != (int)uVar15) {
              auStackX_18[0] = 0;
              `TCheckedPointerIterator<GLTF::FPrimitive_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(auStackX_18);
            }
            if (lVar20 == lVar18) break;
            iVar5 = *(int *)(lVar20 + 0x28);
            if (0 < iVar5) {
              piVar21 = *(int **)(lVar20 + 0x20);
              piVar2 = piVar21 + (longlong)iVar5 * 6;
              while( true ) {
                if (*(int *)(lVar20 + 0x28) != iVar5) {
                  auStackX_20[0] = 0;
                  `TCheckedPointerIterator<GLTF::FVariantMapping_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(auStackX_20);
                }
                if (piVar21 == piVar2) break;
                iVar14 = *piVar21;
                if ((iVar14 < 0) || (*(int *)(lVar7 + 0x168) <= iVar14)) {
                  bVar10 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<5163310495276467392>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Gltf\\InterchangeGltfTranslator.cpp"
                                      ,0x4c0,"Materials.IsValidIndex(VariantMapping.MaterialIndex)")
                  ;
                  if (bVar10) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
LAB_14e6bafc3:
                  piVar21 = piVar21 + 6;
                }
                else {
                  if ((iVar14 < 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  lVar17 = (longlong)iVar14 * 0x370 + *(longlong *)(lVar7 + 0x160);
                  TStack_58.DataPtr = *(wchar_t **)(lVar17 + 0x360);
                  iVar6 = *(int *)(lVar17 + 0x368);
                  iVar14 = iVar6 + -1;
                  if (iVar6 == 0) {
                    iVar14 = 0;
                  }
                  TStack_58._12_4_ = uStack_6c;
                  TStack_58.Size = iVar14;
                  UInterchangeShaderGraphNode::MakeNodeUid(&FStack_68,&TStack_58);
                  UInterchangeVariantSetNode::AddCustomDependencyUid
                            (*(UInterchangeVariantSetNode **)((longlong)param_1 + 8),&FStack_68);
                  if (FStack_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                  goto LAB_14e6bafc3;
                  FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
                  piVar21 = piVar21 + 6;
                }
              }
            }
            uVar15 = (ulonglong)uVar4;
            lVar20 = lVar20 + 0xa0;
          }
        }
      }
      if (0 < (pFVar19->Children).ArrayNum) {
        puVar8 = *(undefined8 **)((longlong)param_1 + 0x10);
        CheckCallable((void *)*puVar8);
        pcVar9 = (code *)*puVar8;
        plVar16 = (longlong *)puVar8[5];
        if ((longlong *)puVar8[5] == (longlong *)0x0) {
          plVar16 = puVar8 + 2;
        }
        uVar13 = (**(code **)(*plVar16 + 8))();
        (*pcVar9)(uVar13,&pFVar19->Children);
      }
    }
LAB_14e6bb02b:
    pFVar23 = pFVar23 + 4;
    uVar15 = (ulonglong)uVar3;
  } while( true );
}

// Call @ 14e6c0e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGLTFTranslator::GetAnimationPayloadData'::__l5::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UInterchangeGLTFTranslator::GetAnimationPayloadData'::__l5::<lambda_1>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 14e6c0e80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGroomFactory::CreatePayloadTasks'::__l32::<lambda_1>,void>::Call
          (void *param_1)

{
  FHairDescription *this;
  FHairDescription *pFVar1;
  bool bVar2;
  FHairDescription FStack_128;
  char cStack_18;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId71,"UInterchangeGroomFactory::GetGroomPayloadDataTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Groom\\InterchangeGroomFactory.cpp"
               ,0x47);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId71);
  }
  pFVar1 = (FHairDescription *)
           (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))
                     (*(longlong **)((longlong)param_1 + 8),&FStack_128,(longlong)param_1 + 0x10);
  this = *(FHairDescription **)param_1;
  if (pFVar1 != this) {
    if (*(char *)&pFVar1[1].VertexAttributesSet == '\0') {
      if (*(char *)&this[1].VertexAttributesSet != '\0') {
        FHairDescription::~FHairDescription(this);
        *(undefined1 *)&this[1].VertexAttributesSet = 0;
      }
    }
    else {
      if (*(char *)&this[1].VertexAttributesSet != '\0') {
        FHairDescription::~FHairDescription(this);
      }
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)this,(TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                          *)pFVar1);
      *(undefined4 *)&(this->VertexAttributesSet).field_0x50 =
           *(undefined4 *)&(pFVar1->VertexAttributesSet).field_0x50;
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)&this->StrandAttributesSet,
                 (TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)&pFVar1->StrandAttributesSet);
      *(undefined4 *)&(this->StrandAttributesSet).field_0x50 =
           *(undefined4 *)&(pFVar1->StrandAttributesSet).field_0x50;
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)&this->GroomAttributesSet,
                 (TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  *)&pFVar1->GroomAttributesSet);
      *(undefined4 *)&(this->GroomAttributesSet).field_0x50 =
           *(undefined4 *)&(pFVar1->GroomAttributesSet).field_0x50;
      this->NumVertices = pFVar1->NumVertices;
      this->NumStrands = pFVar1->NumStrands;
      *(undefined1 *)&this[1].VertexAttributesSet = 1;
    }
  }
  if (cStack_18 != '\0') {
    FHairDescription::~FHairDescription(&FStack_128);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14e6ebfd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(TObjectPtr<UMaterialInterface>_&),void,TObjectPtr<UMaterialInterface>_&>
::Call(void *param_1,TObjectPtr<UMaterialInterface> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6ebfd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14e6ebfe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FSkeletalMaterial_&),void,FSkeletalMaterial_&>::Call
          (void *param_1,FSkeletalMaterial *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6ebfe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14e6ebff0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FStaticMaterial_&),void,FStaticMaterial_&>::Call
          (void *param_1,FStaticMaterial *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014e6ebff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 14e6ec000

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FObjData_&,TStringView<wchar_t>),bool,FObjData_&,TStringView<wchar_t>_>
::Call(void *param_1,FObjData *param_2,TStringView<wchar_t> *param_3)

{
  undefined1 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_3->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  iStack_10 = param_3->Size;
  uStack_c = *(undefined4 *)&param_3->field_0xc;
  uVar1 = (**(code **)param_1)(param_2,&local_18);
  return (bool)uVar1;
}

// Call @ 14e6ec030

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<TObjectPtr<UMaterialInterface>_>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Interchange::Private::MeshHelper::FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_>_const_&>
::Call(void *param_1,FMeshMaterialViewer<TObjectPtr<UMaterialInterface>_> *param_2)

{
  uint uVar1;
  longlong *plVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  
  uVar1 = param_2->MaterialIndex;
  plVar2 = *(longlong **)param_1;
  if ((-1 < (int)uVar1) && ((int)uVar1 < param_2->Materials->ArrayNum)) {
    pTVar3 = param_2->MaterialSlotNames;
    uVar7 = 0;
    if ((int)uVar1 < pTVar3->ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    return *(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar1 * 8) == *plVar2;
  }
  return *plVar2 == 0;
}

// Call @ 14e6ec040

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FSkeletalMaterial>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Interchange::Private::MeshHelper::FMeshMaterialViewer<FSkeletalMaterial>_const_&>
::Call(void *param_1,FMeshMaterialViewer<FSkeletalMaterial> *param_2)

{
  int iVar1;
  longlong *plVar2;
  TArray<FSkeletalMaterial,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  
  iVar1 = param_2->MaterialIndex;
  plVar2 = *(longlong **)param_1;
  if (-1 < iVar1) {
    pTVar3 = param_2->Materials;
    if (iVar1 < pTVar3->ArrayNum) {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      lVar7 = *(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar1 * 0x30 + 8);
      goto LAB_14e6e3960;
    }
  }
  lVar7 = 0;
LAB_14e6e3960:
  return lVar7 == *plVar2;
}

// Call @ 14e6ec050

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FStaticMaterial>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,UE::Interchange::Private::MeshHelper::FMeshMaterialViewer<FStaticMaterial>_const_&>
::Call(void *param_1,FMeshMaterialViewer<FStaticMaterial> *param_2)

{
  int iVar1;
  longlong *plVar2;
  TArray<FStaticMaterial,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  
  iVar1 = param_2->MaterialIndex;
  plVar2 = *(longlong **)param_1;
  if (-1 < iVar1) {
    pTVar3 = param_2->Materials;
    if (iVar1 < pTVar3->ArrayNum) {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      lVar7 = *(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar1 * 0x38 + 8);
      goto LAB_14e6e39ed;
    }
  }
  lVar7 = 0;
LAB_14e6e39ed:
  return lVar7 == *plVar2;
}

// Call @ 14e6ec060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::ObjParserUtils::ParseFile'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  bVar1 = Interchange::ObjParserUtils::ParseLine
                    (*(FObjData **)param_1,&local_18,
                     *(TMap<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TFunction<bool___cdecl(FObjData_&,TStringView<wchar_t>)>,0>_>
                       **)((longlong)param_1 + 8));
  if (!bVar1) {
    **(undefined1 **)((longlong)param_1 + 0x10) = 0;
  }
  return;
}

// Call @ 14e6ec0a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeGeometryCacheFactory::CreatePayloadTasks'::__l12::<lambda_1>,void>::
Call(void *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  TTuple<FString,UE::Interchange::FAnimationPayloadData> *pTVar4;
  FAnimationPayloadData *pFVar5;
  FAnimationPayloadData *pFVar6;
  bool bVar7;
  undefined1 auStackX_8 [8];
  FAnimationPayloadData *pFStack_28;
  int iStack_20;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId122,
               "UInterchangeGeometryCacheFactory::GetAnimationPayloadSingleQuery",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeGeometryCacheFactory.cpp"
               ,0x7a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId122);
  }
  (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x18))
            (*(longlong **)((longlong)param_1 + 0x18),&pFStack_28,param_1);
  iVar2 = iStack_20;
  pFVar5 = pFStack_28 + iStack_20;
  pFVar6 = pFStack_28;
  while( true ) {
    if (iStack_20 != iVar2) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<UE::Interchange::FAnimationPayloadData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (pFVar6 == pFVar5) break;
    pTVar4 = TSet<TTuple<FString,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
             ::Find(*(TSet<TTuple<FString,UE::Interchange::FAnimationPayloadData>,TDefaultMapHashableKeyFuncs<FString,UE::Interchange::FAnimationPayloadData,0>,FDefaultSetAllocator>
                      **)((longlong)param_1 + 0x10),&pFVar6->SceneNodeUniqueID);
    if ((pTVar4 == (TTuple<FString,UE::Interchange::FAnimationPayloadData> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    Interchange::FAnimationPayloadData::operator=
              ((FAnimationPayloadData *)&pTVar4->field_0x10,pFVar6);
    pFVar6 = pFVar6 + 1;
  }
  DestructItems<UE::Interchange::FAnimationPayloadData,int>(pFStack_28,iStack_20);
  if (pFStack_28 != (FAnimationPayloadData *)0x0) {
    FMemory::Free(pFStack_28);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14e6ec0b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::operator()<`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l189::<lambda_3>_>'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::
  operator()<`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l189::<lambda_3>_>'
  ::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e6ec0c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::operator()<`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l191::<lambda_4>_>'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  ``UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l2::<lambda_2>::
  operator()<`UInterchangeGeometryCacheFactory::BeginImportAsset_GameThread'::__l191::<lambda_4>_>'
  ::__l2::<lambda_2>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e6ec0d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<TObjectPtr<UMaterialInterface>_>'::__l26::<lambda_2>,void>
::Call(void *param_1)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 14e6ec0e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FSkeletalMaterial>'::__l26::<lambda_2>,void>
::Call(void *param_1)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 14e6ec0f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::Private::MeshHelper::InternalMeshFactorySetupAssetMaterialArray<FStaticMaterial>'::__l26::<lambda_2>,void>
::Call(void *param_1)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 14e7108a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::Private::InterchangeTextureFactory::GetBlockedTexturePayloadDataFromSourceFiles'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Interchange::Private::InterchangeTextureFactory::GetBlockedTexturePayloadDataFromSourceFiles'
  ::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14e7108b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Interchange::FImportBlockedImage::MigrateDataFromImagesToRawData'::__l2::<lambda_1>,void,int>
::Call(void *param_1,int *param_2)

{
  `UE::Interchange::FImportBlockedImage::MigrateDataFromImagesToRawData'::__l2::<lambda_1>::
  operator()(param_1,*param_2);
  return;
}

// Call @ 14e7108c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UInterchangeStaticMeshFactory::CreatePayloadTasks'::__l34::<lambda_2>::operator()'::__l46::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FMeshPayloadData *pFVar4;
  FMeshPayloadData *this;
  bool bVar5;
  FMeshDescription FStack_358;
  FString *pFStack_98;
  int iStack_90;
  void *pvStack_80;
  FNaniteAssemblyDescription FStack_70;
  char cStack_20;
  char cStack_18;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId248,"UInterchangeStaticMeshFactory::GetMeshPayloadDataTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
               ,0xf8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId248);
  }
  if (*(char *)(*(longlong *)param_1 + 0x350) == '\0') {
    pFVar4 = (FMeshPayloadData *)
             (**(code **)(**(longlong **)((longlong)param_1 + 0x70) + 0x10))
                       (*(longlong **)((longlong)param_1 + 0x70),&FStack_358,
                        (longlong)param_1 + 0x78,(longlong)param_1 + 0x90);
    lVar1 = *(longlong *)param_1;
    this = (FMeshPayloadData *)(lVar1 + 0x10);
    if (pFVar4 != this) {
      if (*(char *)&pFVar4[1].MeshDescription.Elements == '\0') {
        if (*(char *)(lVar1 + 0x350) != '\0') {
          if (*(char *)(lVar1 + 0x348) != '\0') {
            Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
                      ((FNaniteAssemblyDescription *)(lVar1 + 0x2f8));
          }
          if (*(void **)(lVar1 + 0x2e8) != (void *)0x0) {
            FMemory::Free(*(void **)(lVar1 + 0x2e8));
          }
          DestructItems<FString,int>(*(FString **)(lVar1 + 0x2d0),*(int *)(lVar1 + 0x2d8));
          if (*(void **)(lVar1 + 0x2d0) != (void *)0x0) {
            FMemory::Free(*(void **)(lVar1 + 0x2d0));
          }
          FMeshDescription::~FMeshDescription((FMeshDescription *)this);
          *(undefined1 *)(lVar1 + 0x350) = 0;
        }
      }
      else {
        if (*(char *)(lVar1 + 0x350) != '\0') {
          if (*(char *)(lVar1 + 0x348) != '\0') {
            Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription
                      ((FNaniteAssemblyDescription *)(lVar1 + 0x2f8));
          }
          if (*(void **)(lVar1 + 0x2e8) != (void *)0x0) {
            FMemory::Free(*(void **)(lVar1 + 0x2e8));
          }
          DestructItems<FString,int>(*(FString **)(lVar1 + 0x2d0),*(int *)(lVar1 + 0x2d8));
          if (*(void **)(lVar1 + 0x2d0) != (void *)0x0) {
            FMemory::Free(*(void **)(lVar1 + 0x2d0));
          }
          FMeshDescription::~FMeshDescription((FMeshDescription *)this);
        }
        Interchange::FMeshPayloadData::FMeshPayloadData(this,pFVar4);
        *(undefined1 *)(lVar1 + 0x350) = 1;
      }
    }
    if (cStack_18 != '\0') {
      if (cStack_20 != '\0') {
        Interchange::FNaniteAssemblyDescription::~FNaniteAssemblyDescription(&FStack_70);
      }
      if (pvStack_80 != (void *)0x0) {
        FMemory::Free(pvStack_80);
      }
      DestructItems<FString,int>(pFStack_98,iStack_90);
      if (pFStack_98 != (FString *)0x0) {
        FMemory::Free(pFStack_98);
      }
      FMeshDescription::~FMeshDescription(&FStack_358);
    }
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8012982632876867335>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Mesh\\InterchangeStaticMeshFactory.cpp"
                       ,0xf9,"!Payload.PayloadData.IsSet()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 14e7108d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UInterchangeSparseVolumeTextureFactory::ImportAsset_Async'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

