// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineCore
// Functions: 11

// FStreamlineCameraManager @ 14de701c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FStreamlineCameraManager * __thiscall
FStreamlineCameraManager::FStreamlineCameraManager(FStreamlineCameraManager *this)

{
  longlong lVar1;
  double dVar2;
  void *pvVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
  FVar5;
  longlong lVar6;
  undefined8 *puVar7;
  FName local_res10;
  FName local_res18;
  
  pvVar3 = ThreadLocalStoragePointer;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][1];
  puVar7 = (undefined8 *)&this->UpdateStates[0].Primitives.field_0x8;
  (this->PrevRenderedWorldToView).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->PrevRenderedWorldToView).M[0][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->PrevRenderedWorldToView).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->PrevRenderedWorldToView).M[0][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][1];
  lVar6 = 3;
  (this->PrevRenderedWorldToView).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->PrevRenderedWorldToView).M[1][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  (this->PrevRenderedWorldToView).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->PrevRenderedWorldToView).M[1][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->PrevRenderedWorldToView).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->PrevRenderedWorldToView).M[2][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->PrevRenderedWorldToView).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->PrevRenderedWorldToView).M[2][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->PrevRenderedWorldToView).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->PrevRenderedWorldToView).M[3][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->PrevRenderedWorldToView).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->PrevRenderedWorldToView).M[3][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->PrevRenderedViewToClip).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->PrevRenderedViewToClip).M[0][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->PrevRenderedViewToClip).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->PrevRenderedViewToClip).M[0][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->PrevRenderedViewToClip).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->PrevRenderedViewToClip).M[1][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->PrevRenderedViewToClip).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->PrevRenderedViewToClip).M[1][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->PrevRenderedViewToClip).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->PrevRenderedViewToClip).M[2][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->PrevRenderedViewToClip).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->PrevRenderedViewToClip).M[2][3] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->PrevRenderedViewToClip).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->PrevRenderedViewToClip).M[3][1] = dVar2;
  dVar2 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->PrevRenderedViewToClip).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->PrevRenderedViewToClip).M[3][3] = dVar2;
  lVar1 = *(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8);
  do {
    puVar7[-1] = 0;
    lVar6 = lVar6 + -1;
    *puVar7 = 0;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0x80;
    *(undefined4 *)(puVar7 + 5) = 0xffffffff;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
    puVar7[7] = 0;
    *(undefined4 *)(puVar7 + 8) = 0;
    puVar7[10] = 0;
    puVar7[0xe] = &TStatId::TStatId_NAME_None;
    puVar7[0x14] = 0;
    *(undefined4 *)(puVar7 + 0x15) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xac) = 8;
    puVar7[0x18] = 0;
    *(undefined4 *)(puVar7 + 0x19) = 0;
    *(undefined4 *)((longlong)puVar7 + 0xcc) = 4;
    *(undefined4 *)(puVar7 + 0xb) = 0x100;
    *(undefined4 *)((longlong)puVar7 + 100) = 0;
    puVar7[9] = 0;
    *(undefined1 *)((longlong)puVar7 + 0x79) = 1;
    *(undefined1 *)(puVar7 + 0xd) = 0;
    *(undefined2 *)((longlong)puVar7 + 0x5c) = 0;
    *(undefined1 *)((longlong)puVar7 + 0x5e) = 0;
    if ((*(int *)(lVar1 + 0x9d4c) <
         `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2
         ::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
      StatPtr_UnknownSceneQuery =
           (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
            )0x0;
      pFVar4 = ::FName::FName(&local_res10,"UnknownSceneQuery");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                  ::__l2::StatPtr_UnknownSceneQuery,*pFVar4,L"UnknownSceneQuery",
                 "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,false
                 ,MCR_Invalid);
      _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar5 = `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::
            __l2::StatPtr_UnknownSceneQuery;
    if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2
        ::StatPtr_UnknownSceneQuery ==
        (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
         )0x0) {
      pFVar4 = ::FName::FName(&local_res18,"UnknownSceneQuery");
      FVar5 = (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
               )FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                            ::__l2::StatPtr_UnknownSceneQuery,*pFVar4,L"UnknownSceneQuery",
                           "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,
                           true,false,MCR_Invalid);
    }
    *(FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
      *)(puVar7 + 0xe) = FVar5;
    *(undefined1 *)(puVar7 + 0xf) = 0;
    *(undefined2 *)((longlong)puVar7 + 0x5f) = 0x101;
    puVar7 = puVar7 + 0x3e;
  } while (lVar6 != 0);
  return this;
}

// ~FStreamlineCameraManager @ 14de70bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FStreamlineCameraManager::~FStreamlineCameraManager(FStreamlineCameraManager *this)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  
  FVar1 = this->UpdateStates[2].CollisionParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = this->UpdateStates[2].CollisionParams.IgnoreComponents.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&this->UpdateStates[2].Primitives.field_0x48 = 0;
  pvVar2 = *(void **)&this->UpdateStates[2].Primitives.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UpdateStates[2].Primitives);
  FVar1 = this->UpdateStates[1].CollisionParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = this->UpdateStates[1].CollisionParams.IgnoreComponents.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&this->UpdateStates[1].Primitives.field_0x48 = 0;
  pvVar2 = *(void **)&this->UpdateStates[1].Primitives.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UpdateStates[1].Primitives);
  FVar1 = this->UpdateStates[0].CollisionParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = this->UpdateStates[0].CollisionParams.IgnoreComponents.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&this->UpdateStates[0].Primitives.field_0x48 = 0;
  pvVar2 = *(void **)&this->UpdateStates[0].Primitives.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UpdateStates[0].Primitives);
  return;
}

// CacheSceneInfo @ 14de75450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineCameraManager::CacheSceneInfo
          (FStreamlineCameraManager *this,long64 param_1,USceneComponent *param_2,
          FCollisionQueryParams *param_3)

{
  int iVar1;
  UClass *pUVar2;
  int local_res18 [2];
  TPairInitializer<FPrimitiveSceneInfo_*_&,int_&&> local_28;
  int **local_18;
  int *local_10;
  
  if (param_2->bAbsoluteLocation != '\0' || param_2->bAbsoluteRotation != '\0') {
    `FStreamlineCameraManager::CacheSceneInfo'::__l2::<lambda_1>::operator()(local_res18);
  }
  pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((((iVar1 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) && (param_2 != (USceneComponent *)0x0)) &&
     (param_2[2]._padding_ != 0)) {
    FCollisionQueryParams::AddIgnoredComponent(param_3,(UPrimitiveComponent *)param_2);
    local_28.Value = *(int **)(param_2[2]._padding_ + 0x228);
    if (((local_28.Value != (int *)0x0) && (local_28.Value[0x62] != -1)) &&
       (local_28.Value[0x62] != 0x7fffffff)) {
      UPrimitiveComponent::SetRenderCustomDepth((UPrimitiveComponent *)param_2,true);
      UPrimitiveComponent::SetCustomDepthStencilValue((UPrimitiveComponent *)param_2,1);
      local_res18[0] = local_28.Value[0x62];
      local_18 = &local_28.Value;
      local_10 = local_res18;
      TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FPrimitiveSceneInfo_*_&,int_&&>_>
                ((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
                  *)&this->UpdateStates[(ulonglong)param_1 % 3].Primitives,&local_28,
                 (bool *)&local_18);
    }
  }
  return;
}

// GatherLateUpdatePrimitives @ 14de7a280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineCameraManager::GatherLateUpdatePrimitives
          (FStreamlineCameraManager *this,long64 param_1,USceneComponent *param_2,
          FCollisionQueryParams *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_38 [8];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_30;
  
  CacheSceneInfo(this,param_1,param_2,param_3);
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  USceneComponent::GetChildrenComponents(param_2,true,&local_30);
  iVar2 = local_30.ArrayNum;
  pFVar1 = local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8;
  FVar3.Data = local_30.AllocatorInstance.Data;
  while( true ) {
    if (local_30.ArrayNum != iVar2) {
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_38);
    }
    if (FVar3.Data == pFVar1) break;
    if (*(USceneComponent **)FVar3.Data != (USceneComponent *)0x0) {
      CacheSceneInfo(this,param_1,*(USceneComponent **)FVar3.Data,param_3);
    }
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

// LateUpdate_GameThread @ 14de7cf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineCameraManager::LateUpdate_GameThread
          (FStreamlineCameraManager *this,APlayerController *param_1,ulong64 param_2)

{
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *_Dst;
  TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *_Dst_00;
  FCollisionQueryParams *pFVar1;
  USceneComponent *this_00;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  int iVar5;
  bool bVar6;
  FDelegateHandle FVar7;
  longlong lVar8;
  APawn *pAVar9;
  FScriptContainerElement *pFVar10;
  UWorld *pUVar11;
  FName *pFVar12;
  FCollisionQueryParams *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  int *piVar17;
  undefined1 auStackY_178 [32];
  undefined1 local_118 [8];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_110;
  TStatId local_100;
  undefined1 local_f8 [8];
  FName local_f0;
  FName local_e8 [2];
  FCollisionQueryParams local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflexCamera.cpp"
                         ,0x100,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (ReflexCameraOnScreenMessagesDelegateHandle.ID == 0) {
    FVar7 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
            ::AddStatic<>(&FCoreDelegates::OnGetOnScreenMessages,
                          (_func___cdecl_void_TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_ptr
                           *)local_f8);
                    /* WARNING: Load size is inaccurate */
    ReflexCameraOnScreenMessagesDelegateHandle.ID = *FVar7.ID;
  }
  pTVar4 = CVarStreamlineReflexActorDebug.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    lVar8 = 4;
    if (!bVar6) goto LAB_14de7d02d;
  }
  lVar8 = 0;
LAB_14de7d02d:
  if (*(int *)((longlong)pTVar4->ShadowedValue + lVar8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&GameThreadDebugMessagesCS);
    DestructItems<FString,int>
              ((FString *)GameThreadDebugMessages.AllocatorInstance.Data,
               GameThreadDebugMessages.ArrayNum);
    GameThreadDebugMessages.ArrayNum = 0;
    if (GameThreadDebugMessages.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&GameThreadDebugMessages.AllocatorInstance,0,
                 &GameThreadDebugMessages.ArrayMax);
    }
    if (param_1 != (APlayerController *)0x0) {
      DumpActor(L"SetupViewPoint",(AActor *)param_1);
      pAVar9 = APlayerController::GetPawnOrSpectator(param_1);
      if (pAVar9 != (APawn *)0x0) {
        pAVar9 = APlayerController::GetPawnOrSpectator(param_1);
        DumpActor(L"SetupViewPoint",(AActor *)pAVar9);
      }
    }
    if (GameThreadDebugMessages.ArrayNum == GameThreadDebugMessages.ArrayMax) {
      GameThreadDebugMessages.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&GameThreadDebugMessages.AllocatorInstance,
                      &GameThreadDebugMessages.ArrayMax);
    }
    pFVar10 = GameThreadDebugMessages.AllocatorInstance.Data +
              (longlong)GameThreadDebugMessages.ArrayNum * 0x10;
    GameThreadDebugMessages.ArrayNum = GameThreadDebugMessages.ArrayNum + 1;
    *(undefined8 *)pFVar10 = 0;
    *(undefined8 *)(pFVar10 + 8) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&GameThreadDebugMessagesCS);
  }
  bVar6 = ForceTagStreamlineBuffers();
  if (((bVar6) && (param_1 != (APlayerController *)0x0)) &&
     (pAVar9 = APlayerController::GetPawnOrSpectator(param_1), pAVar9 != (APawn *)0x0)) {
    pAVar9 = APlayerController::GetPawnOrSpectator(param_1);
    this_00 = (USceneComponent *)pAVar9->_padding_;
    uVar14 = param_2 % 3;
    this->UpdateStates[uVar14].FrameID = param_2;
    TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FPrimitiveSceneInfo_*,int>,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>,FDefaultSetAllocator>
             *)&this->UpdateStates[uVar14].Primitives);
    pUVar11 = (UWorld *)this_00->_padding_;
    if (pUVar11 == (UWorld *)0x0) {
      pUVar11 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
    }
    uVar15 = (ulonglong)_tls_index;
    this->UpdateStates[uVar14].World = pUVar11;
    piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar15 * 8) + 0x9d4c);
    if ((*piVar17 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_CameraPen =
           (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FStreamlineCameraManager::LateUpdate_GameThread(APlayerController_const_*,unsigned___int64)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_CameraPen>
            )0x0;
      pFVar12 = ::FName::FName(&local_f0,"CameraPen");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_CameraPen,*pFVar12,L"CameraPen",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    local_100.StatIdPtr = (TStatIdData *)StatPtr_CameraPen;
    if (StatPtr_CameraPen ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_void___cdecl_FStreamlineCameraManager::LateUpdate_GameThread(APlayerController_const_*,unsigned___int64)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_CameraPen>
         )0x0) {
      pFVar12 = ::FName::FName(local_e8,"CameraPen");
      local_100.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_CameraPen,*pFVar12,L"CameraPen",
                      "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                      ST_int64,true,false,MCR_Invalid);
    }
    if ((*piVar17 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"CameraPen");
      _Init_thread_footer(&::_TSS0);
    }
    pFVar13 = FCollisionQueryParams::FCollisionQueryParams
                        (&local_d8,::StaticName,&local_100,false,(AActor *)param_1);
    pFVar1 = &this->UpdateStates[uVar14].CollisionParams;
    _Dst = &this->UpdateStates[uVar14].CollisionParams.IgnoreComponents;
    pFVar1->TraceTag = pFVar13->TraceTag;
    this->UpdateStates[uVar14].CollisionParams.OwnerTag = pFVar13->OwnerTag;
    this->UpdateStates[uVar14].CollisionParams.bTraceComplex = pFVar13->bTraceComplex;
    this->UpdateStates[uVar14].CollisionParams.bFindInitialOverlaps = pFVar13->bFindInitialOverlaps;
    this->UpdateStates[uVar14].CollisionParams.bReturnFaceIndex = pFVar13->bReturnFaceIndex;
    this->UpdateStates[uVar14].CollisionParams.bReturnPhysicalMaterial =
         pFVar13->bReturnPhysicalMaterial;
    this->UpdateStates[uVar14].CollisionParams.bIgnoreBlocks = pFVar13->bIgnoreBlocks;
    this->UpdateStates[uVar14].CollisionParams.bIgnoreTouches = pFVar13->bIgnoreTouches;
    this->UpdateStates[uVar14].CollisionParams.bSkipNarrowPhase = pFVar13->bSkipNarrowPhase;
    this->UpdateStates[uVar14].CollisionParams.bTraceIntoSubComponents =
         pFVar13->bTraceIntoSubComponents;
    this->UpdateStates[uVar14].CollisionParams.bReplaceHitWithSubComponents =
         pFVar13->bReplaceHitWithSubComponents;
    this->UpdateStates[uVar14].CollisionParams.MobilityType = pFVar13->MobilityType;
    this->UpdateStates[uVar14].CollisionParams.IgnoreMask = pFVar13->IgnoreMask;
    this->UpdateStates[uVar14].CollisionParams.StatId.StatIdPtr = (pFVar13->StatId).StatIdPtr;
    this->UpdateStates[uVar14].CollisionParams.bDebugQuery = pFVar13->bDebugQuery;
    this->UpdateStates[uVar14].CollisionParams.bComponentListUnique = pFVar13->bComponentListUnique;
    if (_Dst != &pFVar13->IgnoreComponents) {
      if ((pFVar13->IgnoreComponents).AllocatorInstance.SecondaryData ==
          (ForElementType<unsigned_int>)0x0) {
        memmove(_Dst,&pFVar13->IgnoreComponents,0x20);
      }
      FVar2 = this->UpdateStates[uVar14].CollisionParams.IgnoreComponents.AllocatorInstance.
              SecondaryData;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      this->UpdateStates[uVar14].CollisionParams.IgnoreComponents.AllocatorInstance.SecondaryData =
           (pFVar13->IgnoreComponents).AllocatorInstance.SecondaryData;
      (pFVar13->IgnoreComponents).AllocatorInstance.SecondaryData =
           (ForElementType<unsigned_int>)0x0;
      this->UpdateStates[uVar14].CollisionParams.IgnoreComponents.ArrayNum =
           (pFVar13->IgnoreComponents).ArrayNum;
      this->UpdateStates[uVar14].CollisionParams.IgnoreComponents.ArrayMax =
           (pFVar13->IgnoreComponents).ArrayMax;
      (pFVar13->IgnoreComponents).ArrayNum = 0;
      (pFVar13->IgnoreComponents).ArrayMax = 8;
    }
    _Dst_00 = &this->UpdateStates[uVar14].CollisionParams.IgnoreSourceObjects;
    if (_Dst_00 != &pFVar13->IgnoreSourceObjects) {
      if ((pFVar13->IgnoreSourceObjects).AllocatorInstance.SecondaryData ==
          (ForElementType<unsigned_int>)0x0) {
        memmove(_Dst_00,&pFVar13->IgnoreSourceObjects,0x10);
      }
      FVar2 = this->UpdateStates[uVar14].CollisionParams.IgnoreSourceObjects.AllocatorInstance.
              SecondaryData;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)FVar2);
      }
      this->UpdateStates[uVar14].CollisionParams.IgnoreSourceObjects.AllocatorInstance.SecondaryData
           = (pFVar13->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
      (pFVar13->IgnoreSourceObjects).AllocatorInstance.SecondaryData =
           (ForElementType<unsigned_int>)0x0;
      this->UpdateStates[uVar14].CollisionParams.IgnoreSourceObjects.ArrayNum =
           (pFVar13->IgnoreSourceObjects).ArrayNum;
      this->UpdateStates[uVar14].CollisionParams.IgnoreSourceObjects.ArrayMax =
           (pFVar13->IgnoreSourceObjects).ArrayMax;
      (pFVar13->IgnoreSourceObjects).ArrayNum = 0;
      (pFVar13->IgnoreSourceObjects).ArrayMax = 4;
    }
    if (local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
    CacheSceneInfo(this,param_2,this_00,pFVar1);
    local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.ArrayNum = 0;
    local_110.ArrayMax = 0;
    USceneComponent::GetChildrenComponents(this_00,true,&local_110);
    iVar5 = local_110.ArrayNum;
    pFVar10 = local_110.AllocatorInstance.Data + (longlong)local_110.ArrayNum * 8;
    FVar16.Data = local_110.AllocatorInstance.Data;
    while( true ) {
      if (local_110.ArrayNum != iVar5) {
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_118);
      }
      if (FVar16.Data == pFVar10) break;
      if (*(USceneComponent **)FVar16.Data != (USceneComponent *)0x0) {
        CacheSceneInfo(this,param_2,*(USceneComponent **)FVar16.Data,pFVar1);
      }
      FVar16.Data = FVar16.Data + 8;
    }
    if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.AllocatorInstance.Data);
    }
  }
  return;
}

// LateUpdate_RenderThread @ 14de7d580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineCameraManager::LateUpdate_RenderThread
          (FStreamlineCameraManager *this,FSceneInterface *param_1,ulong64 param_2,
          TMatrix<double> *param_3)

{
  TMap<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
  *this_00;
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  FPrimitiveSceneInfo *pFVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_b8 [8];
  int local_b0;
  TMap<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  undefined4 local_2c;
  
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflexCamera.cpp"
                         ,0x17b,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar7 = ForceTagStreamlineBuffers();
  if (bVar7) {
    uVar13 = param_2 % 3;
    iStack_80 = *(int *)&this->UpdateStates[uVar13].Primitives.field_0x8 -
                *(int *)&this->UpdateStates[uVar13].Primitives.field_0x34;
    if (iStack_80 != 0) {
      local_a8 = &this->UpdateStates[uVar13].Primitives;
      iVar3 = *(int *)&this->UpdateStates[uVar13].Primitives.field_0x28;
      local_98 = &this->UpdateStates[uVar13].Primitives.field_0x10;
      iStack_a0 = 0;
      local_88 = 0;
      iStack_8c = 0;
      uStack_9c = 1;
      if (iVar3 != 0) {
        puVar16 = *(uint **)&this->UpdateStates[uVar13].Primitives.field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)local_98;
        }
        uStack_9c = *puVar16;
        while (uStack_9c == 0) {
          lVar10 = (longlong)iStack_a0;
          local_88 = local_88 + 0x20;
          iStack_a0 = iStack_a0 + 1;
          iStack_8c = iVar3;
          uStack_9c = 1;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14de7d6b8;
          uStack_9c = puVar16[lVar10 + 1];
        }
        uStack_9c = -uStack_9c & uStack_9c;
        uVar2 = (ulonglong)uStack_9c * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_b0 = (int)lVar10;
        iStack_8c = local_88 + -1 + local_b0;
        if (iVar3 < iStack_8c) {
          iStack_8c = iVar3;
        }
      }
LAB_14de7d6b8:
      uVar14 = *(uint *)&this->UpdateStates[uVar13].Primitives.field_0x28;
      uStack_90 = 0xffffffff;
      TStack_70.CurrentBitIndex = iStack_8c;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      uVar17 = uVar14 & 0xffffffe0;
      TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
      uStack_84 = local_2c;
      iVar12 = (int)uVar14 >> 5;
      TStack_70._28_4_ = local_2c;
      TStack_70.BaseBitIndex = local_88;
      uStack_50 = CONCAT44(uStack_7c,iStack_80);
      local_78 = local_a8;
      TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
      if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar4 = *(uint *)&this->UpdateStates[uVar13].Primitives.field_0x28;
      if (uVar14 != uVar4) {
        puVar15 = *(undefined1 **)&this->UpdateStates[uVar13].Primitives.field_0x20;
        if (puVar15 == (undefined1 *)0x0) {
          puVar15 = &this->UpdateStates[uVar13].Primitives.field_0x10;
        }
        uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
        while (uVar14 == 0) {
          lVar10 = (longlong)iVar12;
          uVar17 = uVar17 + 0x20;
          iVar12 = iVar12 + 1;
          uVar14 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14de7d7c0;
          uVar14 = *(uint *)(puVar15 + lVar10 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar14 = (int)lVar10 + -1 + uVar17;
        if ((int)uVar4 < (int)uVar14) {
          uVar14 = uVar4;
        }
      }
LAB_14de7d7c0:
      while( true ) {
        pTVar6 = local_78;
        if (*(int *)(&local_78->field_0x0 + 8) - *(int *)(&local_78->field_0x0 + 0x34) !=
            (int)uStack_50) {
          `TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_b8);
        }
        this_00 = &this->UpdateStates[uVar13].Primitives;
        if (((TStack_70.CurrentBitIndex == uVar14) &&
            (TStack_70.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)
             &this->UpdateStates[uVar13].Primitives.field_0x10)) && (pTVar6 == this_00)) {
          return;
        }
        lVar10 = *(longlong *)&pTVar6->field_0x0;
        plVar1 = (longlong *)(lVar10 + (longlong)TStack_70.CurrentBitIndex * 0x18);
        lVar8 = (**(code **)(param_1->_padding_ + 0xe0))
                          (param_1,*(undefined4 *)
                                    (lVar10 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18));
        lVar10 = *plVar1;
        if (lVar10 != lVar8) break;
        if (*(longlong *)(lVar10 + 8) != 0) {
          *(undefined4 *)(plVar1 + 1) = 0xffffffff;
        }
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      }
      pFVar9 = (FPrimitiveSceneInfo *)(**(code **)(param_1->_padding_ + 0xe0))(param_1,0);
      iVar3 = 1;
      do {
        if (pFVar9 == (FPrimitiveSceneInfo *)0x0) {
          return;
        }
        if ((pFVar9->Proxy != (FPrimitiveSceneProxy *)0x0) &&
           (uVar14 = ((uint)((ulonglong)pFVar9 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar9 >> 4)) *
                     -0x7a143595, uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb,
           *(int *)&this->UpdateStates[uVar13].Primitives.field_0x8 !=
           *(int *)&this->UpdateStates[uVar13].Primitives.field_0x34)) {
          puVar15 = *(undefined1 **)&this->UpdateStates[uVar13].Primitives.field_0x40;
          puVar11 = &this->UpdateStates[uVar13].Primitives.field_0x38;
          if (puVar15 != (undefined1 *)0x0) {
            puVar11 = puVar15;
          }
          iVar12 = *(int *)(puVar11 +
                           (ulonglong)
                           (*(int *)&this->UpdateStates[uVar13].Primitives.field_0x48 - 1U &
                           (uVar14 >> 0x10 ^ uVar14)) * 4);
          if (iVar12 != -1) {
            lVar10 = *(longlong *)&this->UpdateStates[uVar13].Primitives;
            do {
              if (*(FPrimitiveSceneInfo **)(lVar10 + (longlong)iVar12 * 0x18) == pFVar9) {
                TMapBase<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
                ::FindChecked((TMapBase<FPrimitiveSceneInfo_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveSceneInfo_*,int,0>_>
                               *)this_00,pFVar9);
                break;
              }
              iVar12 = *(int *)(lVar10 + 0x10 + (longlong)iVar12 * 0x18);
            } while (iVar12 != -1);
          }
        }
        pFVar9 = (FPrimitiveSceneInfo *)(**(code **)(param_1->_padding_ + 0xe0))(param_1,iVar3);
        iVar3 = iVar3 + 1;
      } while( true );
    }
  }
  return;
}

// PostRenderView_RenderThread @ 14de7fa90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineCameraManager::PostRenderView_RenderThread
          (FStreamlineCameraManager *this,FSceneView *param_1,ulong64 param_2)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  
  pTVar2 = CVarStreamlineReflexActorDebug.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (pTVar2->ShadowedValue[1] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&RenderThreadDebugMessagesCS);
    DestructItems<FString,int>
              ((FString *)RenderThreadDebugMessages.AllocatorInstance.Data,
               RenderThreadDebugMessages.ArrayNum);
    RenderThreadDebugMessages.ArrayNum = 0;
    if (RenderThreadDebugMessages.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&RenderThreadDebugMessages.AllocatorInstance,0,
                 &RenderThreadDebugMessages.ArrayMax);
    }
    DumpActor(L"PostRenderView",(param_1->ViewActor).Actor);
    LeaveCriticalSection((LPCRITICAL_SECTION)&RenderThreadDebugMessagesCS);
  }
  return;
}

// PreRenderViewFamily_RenderThread @ 14de7fc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineCameraManager::PreRenderViewFamily_RenderThread
          (FStreamlineCameraManager *this,FSceneViewFamily *param_1,ulong64 param_2)

{
  double *pdVar1;
  TMatrix<double> *pTVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  TConsoleVariableData<bool> *pTVar14;
  bool bVar15;
  undefined4 extraout_EAX;
  int iVar16;
  TInverseRotationMatrix<double> *pTVar17;
  uint uVar18;
  ulonglong uVar19;
  TTransform<double> *this_00;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar27;
  uint uVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auStackY_718 [32];
  TTransform<double> local_6e8;
  TMatrix<double> local_668;
  TTransform<double> local_5e8;
  TMatrix<double> local_588;
  TMatrix<double> local_508;
  TMatrix<double> local_488;
  TTransform<double> local_408;
  TMatrix<double> local_3a8;
  TTransform<double> local_328;
  TMatrix<double> local_2c8;
  TMatrix<double> local_248;
  TMatrix<double> local_1c8;
  TInverseRotationMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_718;
  bVar15 = IsInRenderingThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflexCamera.cpp"
                          ,0x150,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar15 = ForceTagStreamlineBuffers();
  if (bVar15) {
    if (((param_1->Views).ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar20 = *(longlong *)(param_1->Views).AllocatorInstance.Data;
    if ((lVar20 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("MainView",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflexCamera.cpp"
                            ,0x157,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar14 = CVarStreamlineReflexPredictiveRendering.Ref;
    if ((*(char *)(lVar20 + 0x11cc) == '\0') && (param_2 != 0)) {
      bVar15 = IsInParallelRenderingThread();
      if ((!bVar15) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pTVar14->ShadowedValue[1] != false) {
        uVar19 = param_2 % 3;
        if (this->UpdateStates[uVar19].FrameID != param_2) {
          return;
        }
        uVar18 = *(uint *)(lVar20 + 0xc30);
        uVar11 = *(uint *)(lVar20 + 0xc34);
        uVar12 = *(uint *)(lVar20 + 0xc38);
        uVar13 = *(uint *)(lVar20 + 0xc3c);
        uVar3 = *(undefined8 *)(lVar20 + 0xc40);
        pTVar17 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                            (&local_148,(TRotator<double> *)(lVar20 + 0xc48));
        dVar8 = _UNK_150689518;
        dVar7 = ___xmm_00000000000000003ff0000000000000;
        local_3a8.M[2][0] = ___xmm_3ff00000000000000000000000000000;
        local_3a8.M[2][1] = _UNK_15061cbc8;
        local_3a8.M[0][0] = 0.0;
        local_3a8.M[0][1] = 0.0;
        local_3a8.M[1][2] = 0.0;
        local_3a8.M[1][3] = 0.0;
        local_3a8.M[2][2] = 0.0;
        local_3a8.M[2][3] = 0.0;
        local_3a8.M[3][0] = 0.0;
        local_3a8.M[3][1] = 0.0;
        local_3a8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
        local_3a8.M[3][3] = _UNK_15061cbc8;
        local_3a8.M[0][2] = ___xmm_00000000000000003ff0000000000000;
        local_3a8.M[0][3] = _UNK_150689518;
        local_3a8.M[1][0] = ___xmm_00000000000000003ff0000000000000;
        local_3a8.M[1][1] = _UNK_150689518;
        VectorMatrixMultiply(&local_2c8,(TMatrix<double> *)pTVar17,&local_3a8);
        dVar6 = __real_3ff0000000000000;
        local_588.M[1][0] = ___xmm_3ff00000000000000000000000000000;
        local_588.M[1][1] = _UNK_15061cbc8;
        local_588.M[0][2] = 0.0;
        local_588.M[0][3] = 0.0;
        local_588.M[1][2] = 0.0;
        local_588.M[1][3] = 0.0;
        local_588.M[2][0] = 0.0;
        local_588.M[2][1] = 0.0;
        uVar27 = (uint)__xmm_80000000000000008000000000000000;
        uVar31 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        local_588.M[3][0] = (double)CONCAT44(uVar11 ^ uVar31,uVar18 ^ uVar27);
        local_588.M[3][1] = (double)CONCAT44(uVar13 ^ uVar31,uVar12 ^ uVar27);
        local_588.M[3][3] = __real_3ff0000000000000;
        local_588.M[3][2] =
             (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar31,(uint)uVar3 ^ uVar27);
        local_588.M[0][0] = dVar7;
        local_588.M[0][1] = dVar8;
        local_588.M[2][2] = dVar7;
        local_588.M[2][3] = dVar8;
        VectorMatrixMultiply(&local_248,&local_588,&local_2c8);
        pdVar1 = this->UpdateStates[uVar19].UpdatedWorldToView.M[0] + 2;
        local_508.M[0][2] = *pdVar1;
        local_508.M[0][3] = pdVar1[1];
        pTVar2 = &this->UpdateStates[uVar19].UpdatedWorldToView;
        local_508.M[0][0] = pTVar2->M[0][0];
        local_508.M[0][1] = pTVar2->M[0][1];
        pdVar1 = this->UpdateStates[uVar19].UpdatedWorldToView.M[1] + 2;
        local_508.M[1][2] = *pdVar1;
        local_508.M[1][3] = pdVar1[1];
        pTVar2 = &this->UpdateStates[uVar19].UpdatedWorldToView;
        local_508.M[1][0] = pTVar2->M[1][0];
        local_508.M[1][1] = pTVar2->M[1][1];
        pdVar1 = this->UpdateStates[uVar19].UpdatedWorldToView.M[2] + 2;
        local_508.M[2][2] = *pdVar1;
        local_508.M[2][3] = pdVar1[1];
        pTVar2 = &this->UpdateStates[uVar19].UpdatedWorldToView;
        local_508.M[2][0] = pTVar2->M[2][0];
        local_508.M[2][1] = pTVar2->M[2][1];
        local_508.M[3][3] = this->UpdateStates[uVar19].UpdatedWorldToView.M[3][3];
        local_508.M[3][0] = 0.0;
        local_508.M[3][1] = 0.0;
        local_488.M[0][2] = 0.0;
        local_488.M[0][3] = 0.0;
        local_488.M[1][2] = 0.0;
        local_488.M[1][3] = 0.0;
        pTVar2 = &this->UpdateStates[uVar19].UpdatedWorldToView;
        local_488.M[3][0] = pTVar2->M[3][0];
        local_488.M[3][1] = pTVar2->M[3][1];
        local_508.M[3][2] = 0.0;
        local_488.M[1][0] = ___xmm_3ff00000000000000000000000000000;
        local_488.M[1][1] = _UNK_15061cbc8;
        local_488.M[3][2] = this->UpdateStates[uVar19].UpdatedWorldToView.M[3][2];
        local_488.M[2][0] = 0.0;
        local_488.M[2][1] = 0.0;
        local_488.M[3][3] = dVar6;
        local_488.M[0][0] = dVar7;
        local_488.M[0][1] = dVar8;
        local_488.M[2][2] = dVar7;
        local_488.M[2][3] = dVar8;
        VectorMatrixMultiply(&local_1c8,&local_488,&local_508);
        UE::Math::TTransform<double>::SetFromMatrix(&local_328,&local_248);
        this_00 = &local_6e8;
        UE::Math::TTransform<double>::SetFromMatrix(this_00,&local_1c8);
        auVar32._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              local_6e8.Scale3D.ZW.m128d_f64[0]._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              local_6e8.Scale3D.ZW.m128d_f64[0]._0_4_);
        auVar32._8_4_ = _UNK_15061cc88 & local_6e8.Scale3D.ZW.m128d_f64[1]._0_4_;
        auVar32._12_4_ = _UNK_15061cc8c & local_6e8.Scale3D.ZW.m128d_f64[1]._4_4_;
        auVar43._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar32._8_8_);
        auVar43._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar32._0_8_);
        uVar18 = movmskpd((int)this_00,auVar43);
        auVar33._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              local_6e8.Scale3D.XY.m128d_f64[0]._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              local_6e8.Scale3D.XY.m128d_f64[0]._0_4_);
        auVar33._8_4_ = _UNK_15061cc88 & local_6e8.Scale3D.XY.m128d_f64[1]._0_4_;
        auVar33._12_4_ = _UNK_15061cc8c & local_6e8.Scale3D.XY.m128d_f64[1]._4_4_;
        auVar28._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar33._8_8_);
        auVar28._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar33._0_8_);
        iVar16 = movmskpd(extraout_EAX,auVar28);
        if ((uVar18 & 0x3fffffff) == 0 && iVar16 == 0) {
          local_5e8.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_5e8.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_5e8.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_5e8.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_5e8.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_5e8.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          auVar50._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                local_6e8.Scale3D.XY.m128d_f64[0]._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                local_6e8.Scale3D.XY.m128d_f64[0]._0_4_);
          auVar50._8_4_ = _UNK_15061cc88 & local_6e8.Scale3D.XY.m128d_f64[1]._0_4_;
          auVar50._12_4_ = _UNK_15061cc8c & local_6e8.Scale3D.XY.m128d_f64[1]._4_4_;
          local_6e8.Rotation.ZW.m128d_f64[0] =
               local_6e8.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          local_6e8.Rotation.ZW.m128d_f64[1] =
               local_6e8.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar47 = (undefined4)((ulonglong)local_6e8.Rotation.ZW.m128d_f64[1] >> 0x20);
          lVar20 = -(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                      local_6e8.Scale3D.ZW.m128d_f64[0]._4_4_,
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                      local_6e8.Scale3D.ZW.m128d_f64[0]._0_4_) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          (undefined1  [16])local_6e8.Scale3D.XY.m128d_f64);
          lVar21 = -(ulonglong)
                    (auVar50._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar22 = -(ulonglong)
                    (auVar50._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          local_5e8.Scale3D.XY.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar28._4_4_,
                                ~(uint)lVar21 & auVar28._0_4_);
          local_5e8.Scale3D.XY.m128d_f64[1]._0_4_ = ~(uint)lVar22 & auVar28._8_4_;
          local_5e8.Scale3D.XY.m128d_f64[1]._4_4_ =
               ~(uint)((ulonglong)lVar22 >> 0x20) & auVar28._12_4_;
          auVar5._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar5._0_8_ = local_6e8.Scale3D.ZW.m128d_f64[0];
          auVar5._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar5);
          local_6e8.Translation.XY.m128d_f64[0] =
               local_5e8.Scale3D.XY.m128d_f64[0] * local_6e8.Translation.XY.m128d_f64[0];
          dVar8 = (double)CONCAT44(local_5e8.Scale3D.XY.m128d_f64[1]._4_4_,
                                   local_5e8.Scale3D.XY.m128d_f64[1]._0_4_);
          dVar8 = dVar8 * local_6e8.Translation.XY.m128d_f64[1];
          uVar40 = (undefined4)((ulonglong)dVar8 >> 0x20);
          local_6e8.Rotation.XY.m128d_f64[0] =
               local_6e8.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          local_6e8.Rotation.XY.m128d_f64[1] =
               local_6e8.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          uVar48 = SUB84(local_6e8.Rotation.XY.m128d_f64[1],0);
          uVar49 = (undefined4)((ulonglong)local_6e8.Rotation.XY.m128d_f64[1] >> 0x20);
          local_5e8.Scale3D.ZW.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar28._4_4_,
                                ~(uint)lVar20 & auVar28._0_4_);
          auVar34._8_4_ = uVar48;
          auVar34._0_8_ = local_6e8.Rotation.XY.m128d_f64[0];
          auVar34._12_4_ = uVar49;
          dVar37 = auVar34._8_8_;
          local_6e8.Translation.ZW.m128d_f64[0] =
               local_5e8.Scale3D.ZW.m128d_f64[0] * local_6e8.Translation.ZW.m128d_f64[0];
          local_6e8.Translation.ZW.m128d_f64[1] = local_6e8.Translation.ZW.m128d_f64[1] * 0.0;
          auVar23._8_4_ = SUB84(local_6e8.Rotation.ZW.m128d_f64[0],0);
          auVar23._0_8_ = dVar37;
          auVar23._12_4_ = (int)((ulonglong)local_6e8.Rotation.ZW.m128d_f64[0] >> 0x20);
          auVar44._8_4_ = SUB84(dVar8,0);
          auVar44._0_8_ = local_6e8.Translation.XY.m128d_f64[0];
          auVar44._12_4_ = uVar40;
          auVar42._8_4_ = uVar48;
          auVar42._0_8_ = local_6e8.Rotation.XY.m128d_f64[0];
          auVar42._12_4_ = uVar49;
          auVar10._8_4_ = SUB84(local_6e8.Rotation.ZW.m128d_f64[1],0);
          auVar10._0_8_ = local_6e8.Rotation.ZW.m128d_f64[0];
          auVar10._12_4_ = uVar47;
          auVar43 = blendpd(auVar42,auVar10,2);
          auVar45._0_8_ =
               auVar44._8_8_ * local_6e8.Rotation.XY.m128d_f64[0] -
               dVar37 * local_6e8.Translation.XY.m128d_f64[0];
          auVar45._8_8_ =
               local_6e8.Translation.ZW.m128d_f64[0] * local_6e8.Rotation.XY.m128d_f64[1] -
               auVar23._8_8_ * dVar8;
          auVar29._8_4_ = SUB84(dVar8,0);
          auVar29._0_8_ = local_6e8.Translation.XY.m128d_f64[0];
          auVar29._12_4_ = uVar40;
          auVar9._8_4_ = SUB84(local_6e8.Translation.ZW.m128d_f64[1],0);
          auVar9._0_8_ = local_6e8.Translation.ZW.m128d_f64[0];
          auVar9._12_4_ = (int)((ulonglong)local_6e8.Translation.ZW.m128d_f64[1] >> 0x20);
          auVar28 = blendpd(auVar29,auVar9,2);
          auVar30._0_8_ =
               auVar28._0_8_ * local_6e8.Rotation.ZW.m128d_f64[0] -
               auVar43._0_8_ * local_6e8.Translation.ZW.m128d_f64[0];
          auVar30._8_8_ =
               auVar28._8_8_ * local_6e8.Rotation.ZW.m128d_f64[1] -
               auVar43._8_8_ * local_6e8.Translation.ZW.m128d_f64[1];
          dVar6 = auVar45._8_8_ + auVar45._8_8_;
          dVar7 = auVar30._0_8_ + auVar30._0_8_;
          uVar40 = SUB84(dVar7,0);
          uVar41 = (undefined4)((ulonglong)dVar7 >> 0x20);
          auVar28 = blendpd(auVar45,auVar30,2);
          auVar46._0_8_ = auVar28._0_8_ + auVar28._0_8_;
          auVar46._8_8_ = auVar28._8_8_ + auVar28._8_8_;
          auVar38._8_4_ = uVar40;
          auVar38._0_8_ = dVar6;
          auVar38._12_4_ = uVar41;
          auVar24._8_4_ = uVar40;
          auVar24._0_8_ = dVar6;
          auVar24._12_4_ = uVar41;
          auVar35._8_4_ = uVar40;
          auVar35._0_8_ = dVar6;
          auVar35._12_4_ = uVar41;
          auVar28 = blendpd(auVar35,auVar46,2);
          auVar39._0_8_ = auVar38._8_8_ * local_6e8.Rotation.XY.m128d_f64[0] - dVar6 * dVar37;
          auVar39._8_8_ =
               auVar46._0_8_ * local_6e8.Rotation.XY.m128d_f64[1] -
               auVar24._8_8_ * local_6e8.Rotation.ZW.m128d_f64[0];
          auVar25._8_4_ = SUB84(auVar46._8_8_,0);
          auVar25._0_8_ = auVar46._0_8_;
          auVar25._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
          auVar36._0_8_ =
               auVar28._0_8_ * local_6e8.Rotation.ZW.m128d_f64[0] - auVar46._0_8_ * auVar43._0_8_;
          auVar36._8_8_ =
               auVar28._8_8_ * local_6e8.Rotation.ZW.m128d_f64[1] - auVar25._8_8_ * auVar43._8_8_;
          auVar26._8_4_ = SUB84(auVar39._8_8_,0);
          auVar26._0_8_ = auVar39._0_8_;
          auVar26._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
          auVar28 = blendpd(auVar39,auVar36,2);
          local_5e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar48;
          local_5e8.Rotation.XY.m128d_f64[0] = local_6e8.Rotation.XY.m128d_f64[0];
          local_5e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar49;
          local_5e8.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(local_6e8.Rotation.ZW.m128d_f64[1],0);
          local_5e8.Rotation.ZW.m128d_f64[0] = local_6e8.Rotation.ZW.m128d_f64[0];
          local_5e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar47;
          local_5e8.Translation.ZW.m128d_f64[1] = 0.0;
          local_5e8.Translation.ZW.m128d_f64[0] =
               0.0 - (auVar46._0_8_ * local_6e8.Rotation.ZW.m128d_f64[1] +
                      local_6e8.Translation.ZW.m128d_f64[0] + auVar28._0_8_);
          local_5e8.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_5e8.Translation.XY.m128d_f64[1] =
               0.0 - (dVar7 * local_6e8.Rotation.ZW.m128d_f64[1] + dVar8 + auVar36._0_8_);
          local_5e8.Translation.XY.m128d_f64[0] =
               0.0 - (dVar6 * local_6e8.Rotation.ZW.m128d_f64[1] +
                      local_6e8.Translation.XY.m128d_f64[0] + auVar26._8_8_);
        }
        local_408.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_408.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_408.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_408.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_408.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_408.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_408.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_408.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_408.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_408.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_408.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_408.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_408,&local_328,&local_5e8);
        UE::Math::TTransform<double>::ToMatrixWithScale(&local_408,&local_668);
        LateUpdate_RenderThread(this,param_1->Scene,param_2,&local_668);
        return;
      }
    }
    LateUpdate_RenderThread(this,param_1->Scene,param_2,&UE::Math::TMatrix<double>::Identity);
  }
  return;
}

// PreRenderView_RenderThread @ 14de80580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineCameraManager::PreRenderView_RenderThread
          (FStreamlineCameraManager *this,FSceneView *param_1,ulong64 param_2)

{
  double dVar1;
  code *pcVar2;
  TMatrix<double> *pTVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  TRotator<double> *pTVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStackY_f8 [32];
  TRotator<double> local_c8;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflexCamera.cpp"
                         ,0x1bf,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar5 = ForceTagStreamlineBuffers();
  pTVar4 = CVarStreamlineReflexPredictiveRendering.Ref;
  if (((bVar5) && (param_1->bCameraCut == false)) && (param_2 != 0)) {
    bVar5 = IsInParallelRenderingThread();
    if ((!bVar5) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pTVar4->ShadowedValue[1] != false) &&
       (uVar7 = param_2 % 3, this->UpdateStates[uVar7].FrameID == param_2)) {
      FSceneView::UpdateProjectionMatrix(param_1,&this->UpdateStates[uVar7].UpdatedViewToClip);
      dVar1 = this->UpdateStates[uVar7].UpdatedWorldToView.M[3][2];
      pTVar3 = &this->UpdateStates[uVar7].UpdatedWorldToView;
      uVar11 = SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar12 = (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      uVar8 = *(uint *)((longlong)pTVar3->M[3] + 4) ^ __xmm_80000000000000008000000000000000._4_4_;
      uVar9 = *(uint *)(pTVar3->M[3] + 1) ^ _UNK_15066df78;
      uVar10 = *(uint *)((longlong)pTVar3->M[3] + 0xc) ^ _UNK_15066df7c;
      *(uint *)&(param_1->ViewLocation).field0_0x0 =
           *(uint *)pTVar3->M[3] ^ (uint)__xmm_80000000000000008000000000000000;
      *(uint *)((longlong)&(param_1->ViewLocation).field0_0x0 + 4) = uVar8;
      *(uint *)((longlong)&(param_1->ViewLocation).field0_0x0 + 8) = uVar9;
      *(uint *)((longlong)&(param_1->ViewLocation).field0_0x0 + 0xc) = uVar10;
      (param_1->ViewLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar12,uVar11);
      local_a8.M[0][0] = this->UpdateStates[uVar7].UpdatedWorldToView.M[0][2];
      local_a8.M[0][1] = this->UpdateStates[uVar7].UpdatedWorldToView.M[1][2];
      local_a8.M[0][2] = this->UpdateStates[uVar7].UpdatedWorldToView.M[2][2];
      local_a8.M[1][0] = this->UpdateStates[uVar7].UpdatedWorldToView.M[0][0];
      local_a8.M[1][1] = this->UpdateStates[uVar7].UpdatedWorldToView.M[1][0];
      local_a8.M[1][2] = this->UpdateStates[uVar7].UpdatedWorldToView.M[2][0];
      local_a8.M[2][0] = this->UpdateStates[uVar7].UpdatedWorldToView.M[0][1];
      local_a8.M[2][1] = this->UpdateStates[uVar7].UpdatedWorldToView.M[1][1];
      local_a8.M[2][2] = this->UpdateStates[uVar7].UpdatedWorldToView.M[2][1];
      local_a8.M[3][0] = 0.0;
      local_a8.M[3][1] = 0.0;
      local_a8.M[0][3] = 0.0;
      local_a8.M[1][3] = 0.0;
      local_a8.M[2][3] = 0.0;
      local_a8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
      local_a8.M[3][3] = _UNK_15061cbc8;
      pTVar6 = UE::Math::TMatrix<double>::Rotator(&local_a8,&local_c8);
      dVar1 = pTVar6->Yaw;
      (param_1->ViewRotation).Pitch = pTVar6->Pitch;
      (param_1->ViewRotation).Yaw = dVar1;
      (param_1->ViewRotation).Roll = pTVar6->Roll;
      FSceneView::UpdateViewMatrix(param_1);
    }
  }
  return;
}

// SetCameraData @ 14de81f00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FStreamlineCameraManager::SetCameraData
          (FStreamlineCameraManager *this,FSceneView *param_1,ulong64 param_2)

{
  double *pdVar1;
  TMatrix<double> *pTVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  uint uVar26;
  TConsoleVariableData<bool> *pTVar27;
  TConsoleVariableData<float> *pTVar28;
  bool bVar29;
  FStreamlineRHI *this_00;
  FrameToken *pFVar30;
  float4x4 *pfVar31;
  TQuat<double> *pTVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar40;
  double dVar41;
  undefined4 uVar58;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar59;
  undefined4 uVar68;
  undefined1 auVar61 [16];
  double dVar67;
  undefined1 auVar62 [16];
  double dVar60;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar69;
  double dVar70;
  undefined1 auVar71 [16];
  double dVar74;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar75;
  float fVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar85;
  undefined1 auVar83 [16];
  double dVar86;
  undefined1 auVar84 [16];
  uint uVar87;
  undefined4 uVar88;
  uint uVar89;
  undefined4 uVar90;
  float fVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined1 auStackY_12a8 [32];
  double dStack_11e0;
  double dStack_11c0;
  FCollisionShape local_1118;
  TVector<double>_u_0 local_1108;
  double local_10f0;
  undefined1 local_10e8 [16];
  double local_10d8;
  double dStack_10d0;
  TVector<double>_u_0 local_10c8;
  undefined1 local_10a8 [16];
  undefined1 local_1098 [16];
  undefined1 local_1088 [16];
  undefined1 local_1078 [16];
  ulong64 local_1068;
  float fStack_1060;
  undefined4 uStack_105c;
  double local_1028;
  float fStack_1020;
  undefined4 uStack_101c;
  undefined1 local_1018 [16];
  double local_1008;
  double dStack_1000;
  double local_ff8;
  double dStack_ff0;
  double local_fe8;
  double dStack_fe0;
  FHitResult local_fd8;
  TQuat<double> local_ed8;
  float4x4 local_eb8;
  float4x4 local_e78;
  float4x4 local_e38;
  float4x4 local_df8;
  ReflexCameraData local_db8;
  double local_c98;
  double dStack_c90;
  double local_c88;
  double dStack_c80;
  double local_c78;
  double dStack_c70;
  double local_c68;
  double dStack_c60;
  undefined1 local_c58 [16];
  double local_c48;
  double dStack_c40;
  undefined1 local_c38 [16];
  double local_c28;
  double dStack_c20;
  undefined1 local_c18 [24];
  longlong local_c00;
  uint local_bf8;
  double local_be8;
  double dStack_be0;
  double local_bd8;
  double dStack_bd0;
  double local_bc8;
  double dStack_bc0;
  double local_bb8;
  double dStack_bb0;
  double local_ba8;
  double dStack_ba0;
  double local_b98;
  double dStack_b90;
  double local_b88;
  double dStack_b80;
  double local_b78;
  double dStack_b70;
  TMatrix<float> local_b68;
  TMatrix<float> local_b28;
  TMatrix<float> local_ae8;
  TMatrix<float> local_aa8;
  TMatrix<double> local_a68;
  TMatrix<double> local_9e8;
  double local_968;
  double dStack_960;
  double local_958;
  double dStack_950;
  double local_948;
  double dStack_940;
  double local_938;
  double dStack_930;
  double local_928;
  double dStack_920;
  double local_918;
  double dStack_910;
  double local_908;
  double dStack_900;
  double local_8f8;
  double dStack_8f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double local_7d0;
  double local_7c8;
  double dStack_7c0;
  double local_7b8;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_110;
  double local_108;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_12a8;
  bVar29 = IsInGameThread();
  if ((!bVar29) &&
     (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineCore\\Private\\StreamlineReflexCamera.cpp"
                          ,0x1e9,L""), bVar29)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar29 = ForceTagStreamlineBuffers();
  if (!bVar29) {
    return;
  }
  if (this->ViewPredictionData[0].FrameID == param_2) {
    return;
  }
  memcpy(&local_968,&param_1->ViewMatrices,0x880);
  dVar45 = local_158;
  dVar44 = uStack_160;
  dVar4 = local_168;
  dVar24 = __real_3ff0000000000000;
  uVar58 = SUB84(__real_3ff0000000000000,0);
  uVar21 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  local_c98 = local_968;
  dStack_c90 = dStack_960;
  local_c88 = local_958;
  dStack_c80 = dStack_950;
  local_c78 = local_948;
  dStack_c70 = dStack_940;
  local_c68 = local_938;
  dStack_c60 = dStack_930;
  local_c58._8_8_ = dStack_920;
  local_c58._0_8_ = local_928;
  local_c48 = local_918;
  dStack_c40 = dStack_910;
  local_c38._8_8_ = dStack_900;
  local_c38._0_8_ = local_908;
  local_c28 = local_8f8;
  dStack_c20 = dStack_8f0;
  if (__real_3ff0000000000000 <= dStack_8f0) {
    dVar79 = dStack_900 - local_108;
    dVar11 = local_908 - local_110;
    local_c38._8_4_ = SUB84(dVar79,0);
    local_c38._0_8_ = dVar11;
    local_c38._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
    dVar42 = local_928;
    dVar39 = dStack_920;
  }
  else {
    dVar39 = dStack_920 - local_108;
    local_c58._8_4_ = SUB84(dVar39,0);
    local_c58._0_8_ = local_928 - local_110;
    local_c58._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    dVar42 = local_928 - local_110;
    dVar11 = local_908;
    dVar79 = dStack_900;
  }
  uVar90 = (undefined4)((ulonglong)dVar79 >> 0x20);
  uVar88 = (undefined4)((ulonglong)dVar39 >> 0x20);
  this_00 = GetPlatformStreamlineRHI();
  pFVar30 = FStreamlineRHI::GetFrameToken(this_00,param_2);
  local_db8.worldToViewMatrix.row[0].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.worldToViewMatrix.row[0].y = _UNK_150a1c8e4;
  local_db8.worldToViewMatrix.row[0].z = _UNK_150a1c8e8;
  local_db8.worldToViewMatrix.row[0].w = _UNK_150a1c8ec;
  local_db8._padding_ = 0;
  local_db8._padding_._0_4_ = 0xc83cbb02;
  local_db8._padding_._4_4_ = 0x4260b4e2;
  local_db8._padding_._0_4_ = 0xc3d0a29c;
  local_db8._padding_._4_4_ = 0x84963ade;
  local_db8._padding_ = 1;
  local_db8.worldToViewMatrix.row[1].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.worldToViewMatrix.row[1].y = _UNK_150a1c8e4;
  local_db8.worldToViewMatrix.row[1].z = _UNK_150a1c8e8;
  local_db8.worldToViewMatrix.row[1].w = _UNK_150a1c8ec;
  local_db8.worldToViewMatrix.row[2].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.worldToViewMatrix.row[2].y = _UNK_150a1c8e4;
  local_db8.worldToViewMatrix.row[2].z = _UNK_150a1c8e8;
  local_db8.worldToViewMatrix.row[2].w = _UNK_150a1c8ec;
  local_db8.worldToViewMatrix.row[3].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.worldToViewMatrix.row[3].y = _UNK_150a1c8e4;
  local_db8.worldToViewMatrix.row[3].z = _UNK_150a1c8e8;
  local_db8.worldToViewMatrix.row[3].w = _UNK_150a1c8ec;
  local_db8.viewToClipMatrix.row[0].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.viewToClipMatrix.row[0].y = _UNK_150a1c8e4;
  local_db8.viewToClipMatrix.row[0].z = _UNK_150a1c8e8;
  local_db8.viewToClipMatrix.row[0].w = _UNK_150a1c8ec;
  local_db8.viewToClipMatrix.row[1].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.viewToClipMatrix.row[1].y = _UNK_150a1c8e4;
  local_db8.viewToClipMatrix.row[1].z = _UNK_150a1c8e8;
  local_db8.viewToClipMatrix.row[1].w = _UNK_150a1c8ec;
  local_db8.viewToClipMatrix.row[2].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.viewToClipMatrix.row[2].y = _UNK_150a1c8e4;
  local_db8.viewToClipMatrix.row[2].z = _UNK_150a1c8e8;
  local_db8.viewToClipMatrix.row[2].w = _UNK_150a1c8ec;
  local_db8.viewToClipMatrix.row[3].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.viewToClipMatrix.row[3].y = _UNK_150a1c8e4;
  local_db8.viewToClipMatrix.row[3].z = _UNK_150a1c8e8;
  local_db8.viewToClipMatrix.row[3].w = _UNK_150a1c8ec;
  local_db8.prevRenderedWorldToViewMatrix.row[0].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.prevRenderedWorldToViewMatrix.row[0].y = _UNK_150a1c8e4;
  local_db8.prevRenderedWorldToViewMatrix.row[0].z = _UNK_150a1c8e8;
  local_db8.prevRenderedWorldToViewMatrix.row[0].w = _UNK_150a1c8ec;
  local_db8.prevRenderedWorldToViewMatrix.row[1].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.prevRenderedWorldToViewMatrix.row[1].y = _UNK_150a1c8e4;
  local_db8.prevRenderedWorldToViewMatrix.row[1].z = _UNK_150a1c8e8;
  local_db8.prevRenderedWorldToViewMatrix.row[1].w = _UNK_150a1c8ec;
  local_db8.prevRenderedWorldToViewMatrix.row[2].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.prevRenderedWorldToViewMatrix.row[2].y = _UNK_150a1c8e4;
  local_db8.prevRenderedWorldToViewMatrix.row[2].z = _UNK_150a1c8e8;
  local_db8.prevRenderedWorldToViewMatrix.row[2].w = _UNK_150a1c8ec;
  local_db8.prevRenderedWorldToViewMatrix.row[3].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.prevRenderedWorldToViewMatrix.row[3].y = _UNK_150a1c8e4;
  local_db8.prevRenderedWorldToViewMatrix.row[3].z = _UNK_150a1c8e8;
  local_db8.prevRenderedWorldToViewMatrix.row[3].w = _UNK_150a1c8ec;
  local_db8.prevRenderedViewToClipMatrix.row[0].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.prevRenderedViewToClipMatrix.row[0].y = _UNK_150a1c8e4;
  local_db8.prevRenderedViewToClipMatrix.row[0].z = _UNK_150a1c8e8;
  local_db8.prevRenderedViewToClipMatrix.row[0].w = _UNK_150a1c8ec;
  local_db8.prevRenderedViewToClipMatrix.row[1].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.prevRenderedViewToClipMatrix.row[1].y = _UNK_150a1c8e4;
  local_db8.prevRenderedViewToClipMatrix.row[1].z = _UNK_150a1c8e8;
  local_db8.prevRenderedViewToClipMatrix.row[1].w = _UNK_150a1c8ec;
  local_db8.prevRenderedViewToClipMatrix.row[2].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.prevRenderedViewToClipMatrix.row[2].y = _UNK_150a1c8e4;
  local_db8.prevRenderedViewToClipMatrix.row[2].z = _UNK_150a1c8e8;
  local_db8.prevRenderedViewToClipMatrix.row[2].w = _UNK_150a1c8ec;
  local_db8.prevRenderedViewToClipMatrix.row[3].x = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
  local_db8.prevRenderedViewToClipMatrix.row[3].y = _UNK_150a1c8e4;
  local_db8.prevRenderedViewToClipMatrix.row[3].z = _UNK_150a1c8e8;
  local_db8.prevRenderedViewToClipMatrix.row[3].w = _UNK_150a1c8ec;
  local_b68.M[0][0] = (float)(this->PrevRenderedWorldToView).M[0][0];
  local_b68.M[0][1] = (float)(this->PrevRenderedWorldToView).M[0][1];
  local_b68.M[0][3] = (float)(this->PrevRenderedWorldToView).M[0][3];
  local_b68.M[0][2] = (float)(this->PrevRenderedWorldToView).M[0][2];
  local_b68.M[1][0] = (float)(this->PrevRenderedWorldToView).M[1][0];
  local_b68.M[1][1] = (float)(this->PrevRenderedWorldToView).M[1][1];
  local_b68.M[1][3] = (float)(this->PrevRenderedWorldToView).M[1][3];
  local_b68.M[1][2] = (float)(this->PrevRenderedWorldToView).M[1][2];
  local_b68.M[2][0] = (float)(this->PrevRenderedWorldToView).M[2][0];
  local_b68.M[2][1] = (float)(this->PrevRenderedWorldToView).M[2][1];
  local_b68.M[2][3] = (float)(this->PrevRenderedWorldToView).M[2][3];
  local_b68.M[2][2] = (float)(this->PrevRenderedWorldToView).M[2][2];
  local_b68.M[3][0] = (float)(this->PrevRenderedWorldToView).M[3][0];
  local_b68.M[3][1] = (float)(this->PrevRenderedWorldToView).M[3][1];
  local_b68.M[3][3] = (float)(this->PrevRenderedWorldToView).M[3][3];
  local_b68.M[3][2] = (float)(this->PrevRenderedWorldToView).M[3][2];
  pfVar31 = ToSL(&local_eb8,&local_b68,false);
  local_db8.prevRenderedWorldToViewMatrix.row[0].x = pfVar31->row[0].x;
  local_db8.prevRenderedWorldToViewMatrix.row[0].y = pfVar31->row[0].y;
  local_db8.prevRenderedWorldToViewMatrix.row[0].z = pfVar31->row[0].z;
  local_db8.prevRenderedWorldToViewMatrix.row[0].w = pfVar31->row[0].w;
  local_db8.prevRenderedWorldToViewMatrix.row[1].x = pfVar31->row[1].x;
  local_db8.prevRenderedWorldToViewMatrix.row[1].y = pfVar31->row[1].y;
  local_db8.prevRenderedWorldToViewMatrix.row[1].z = pfVar31->row[1].z;
  local_db8.prevRenderedWorldToViewMatrix.row[1].w = pfVar31->row[1].w;
  local_db8.prevRenderedWorldToViewMatrix.row[2].x = pfVar31->row[2].x;
  local_db8.prevRenderedWorldToViewMatrix.row[2].y = pfVar31->row[2].y;
  local_db8.prevRenderedWorldToViewMatrix.row[2].z = pfVar31->row[2].z;
  local_db8.prevRenderedWorldToViewMatrix.row[2].w = pfVar31->row[2].w;
  local_db8.prevRenderedWorldToViewMatrix.row[3].x = pfVar31->row[3].x;
  local_db8.prevRenderedWorldToViewMatrix.row[3].y = pfVar31->row[3].y;
  local_db8.prevRenderedWorldToViewMatrix.row[3].z = pfVar31->row[3].z;
  local_db8.prevRenderedWorldToViewMatrix.row[3].w = pfVar31->row[3].w;
  local_b28.M[0][0] = (float)(this->PrevRenderedViewToClip).M[0][0];
  local_b28.M[0][1] = (float)(this->PrevRenderedViewToClip).M[0][1];
  local_b28.M[0][3] = (float)(this->PrevRenderedViewToClip).M[0][3];
  local_b28.M[0][2] = (float)(this->PrevRenderedViewToClip).M[0][2];
  local_b28.M[1][0] = (float)(this->PrevRenderedViewToClip).M[1][0];
  local_b28.M[1][1] = (float)(this->PrevRenderedViewToClip).M[1][1];
  local_b28.M[1][3] = (float)(this->PrevRenderedViewToClip).M[1][3];
  local_b28.M[1][2] = (float)(this->PrevRenderedViewToClip).M[1][2];
  local_b28.M[2][0] = (float)(this->PrevRenderedViewToClip).M[2][0];
  local_b28.M[2][1] = (float)(this->PrevRenderedViewToClip).M[2][1];
  local_b28.M[2][3] = (float)(this->PrevRenderedViewToClip).M[2][3];
  local_b28.M[2][2] = (float)(this->PrevRenderedViewToClip).M[2][2];
  local_b28.M[3][0] = (float)(this->PrevRenderedViewToClip).M[3][0];
  local_b28.M[3][1] = (float)(this->PrevRenderedViewToClip).M[3][1];
  local_b28.M[3][3] = (float)(this->PrevRenderedViewToClip).M[3][3];
  local_b28.M[3][2] = (float)(this->PrevRenderedViewToClip).M[3][2];
  pfVar31 = ToSL(&local_e78,&local_b28,false);
  local_db8.prevRenderedViewToClipMatrix.row[0].x = pfVar31->row[0].x;
  local_db8.prevRenderedViewToClipMatrix.row[0].y = pfVar31->row[0].y;
  local_db8.prevRenderedViewToClipMatrix.row[0].z = pfVar31->row[0].z;
  local_db8.prevRenderedViewToClipMatrix.row[0].w = pfVar31->row[0].w;
  local_be8 = local_7e8;
  dStack_be0 = dStack_7e0;
  local_db8.prevRenderedViewToClipMatrix.row[1].x = pfVar31->row[1].x;
  local_db8.prevRenderedViewToClipMatrix.row[1].y = pfVar31->row[1].y;
  local_db8.prevRenderedViewToClipMatrix.row[1].z = pfVar31->row[1].z;
  local_db8.prevRenderedViewToClipMatrix.row[1].w = pfVar31->row[1].w;
  local_db8.prevRenderedViewToClipMatrix.row[2].x = pfVar31->row[2].x;
  local_db8.prevRenderedViewToClipMatrix.row[2].y = pfVar31->row[2].y;
  local_db8.prevRenderedViewToClipMatrix.row[2].z = pfVar31->row[2].z;
  local_db8.prevRenderedViewToClipMatrix.row[2].w = pfVar31->row[2].w;
  local_db8.prevRenderedViewToClipMatrix.row[3].x = pfVar31->row[3].x;
  local_db8.prevRenderedViewToClipMatrix.row[3].y = pfVar31->row[3].y;
  local_db8.prevRenderedViewToClipMatrix.row[3].z = pfVar31->row[3].z;
  local_db8.prevRenderedViewToClipMatrix.row[3].w = pfVar31->row[3].w;
  local_bd8 = local_7d8;
  dStack_bd0 = local_7d0;
  local_ae8.M[0][2] = (float)local_7d8;
  local_ae8.M[0][3] = (float)local_7d0;
  local_ae8.M[0][0] = (float)local_7e8;
  local_ae8.M[0][1] = (float)dStack_7e0;
  local_bc8 = local_7c8;
  dStack_bc0 = dStack_7c0;
  local_ae8.M[1][0] = (float)local_7c8;
  local_ae8.M[1][1] = (float)dStack_7c0;
  local_bb8 = local_7b8;
  dStack_bb0 = local_7d0;
  local_ae8.M[1][2] = (float)local_7b8;
  local_ae8.M[1][3] = (float)local_7d0;
  local_ba8 = local_7a8;
  dStack_ba0 = dStack_7a0;
  local_ae8.M[2][0] = (float)local_7a8;
  local_ae8.M[2][1] = (float)dStack_7a0;
  local_b98 = local_798;
  dStack_b90 = local_7d0;
  local_ae8.M[2][2] = (float)local_798;
  local_ae8.M[2][3] = (float)local_7d0;
  local_b88 = local_168;
  dStack_b80 = uStack_160;
  local_ae8.M[3][0] = (float)local_168;
  local_ae8.M[3][1] = (float)uStack_160;
  local_b78 = dVar45;
  dStack_b70 = dVar24;
  local_ae8.M[3][2] = (float)dVar45;
  local_ae8.M[3][3] = (float)dVar24;
  pfVar31 = ToSL(&local_e38,&local_ae8,false);
  local_db8.worldToViewMatrix.row[0].x = pfVar31->row[0].x;
  local_db8.worldToViewMatrix.row[0].y = pfVar31->row[0].y;
  local_db8.worldToViewMatrix.row[0].z = pfVar31->row[0].z;
  local_db8.worldToViewMatrix.row[0].w = pfVar31->row[0].w;
  local_db8.worldToViewMatrix.row[1].x = pfVar31->row[1].x;
  local_db8.worldToViewMatrix.row[1].y = pfVar31->row[1].y;
  local_db8.worldToViewMatrix.row[1].z = pfVar31->row[1].z;
  local_db8.worldToViewMatrix.row[1].w = pfVar31->row[1].w;
  local_db8.worldToViewMatrix.row[2].x = pfVar31->row[2].x;
  local_db8.worldToViewMatrix.row[2].y = pfVar31->row[2].y;
  local_db8.worldToViewMatrix.row[2].z = pfVar31->row[2].z;
  local_db8.worldToViewMatrix.row[2].w = pfVar31->row[2].w;
  local_db8.worldToViewMatrix.row[3].x = pfVar31->row[3].x;
  local_db8.worldToViewMatrix.row[3].y = pfVar31->row[3].y;
  local_db8.worldToViewMatrix.row[3].z = pfVar31->row[3].z;
  local_db8.worldToViewMatrix.row[3].w = pfVar31->row[3].w;
  local_aa8.M[0][2] = (float)local_958;
  local_aa8.M[0][3] = (float)dStack_950;
  local_aa8.M[0][0] = (float)local_968;
  local_aa8.M[0][1] = (float)dStack_960;
  local_aa8.M[1][0] = (float)local_948;
  local_aa8.M[1][1] = (float)dStack_940;
  local_aa8.M[1][2] = (float)local_938;
  local_aa8.M[1][3] = (float)dStack_930;
  local_aa8.M[2][2] = (float)local_918;
  local_aa8.M[2][3] = (float)dStack_910;
  local_aa8.M[2][0] = (float)dVar42;
  local_aa8.M[2][1] = (float)dVar39;
  local_aa8.M[3][0] = (float)dVar11;
  local_aa8.M[3][1] = (float)dVar79;
  local_aa8.M[3][2] = (float)local_8f8;
  local_aa8.M[3][3] = (float)dStack_8f0;
  pfVar31 = ToSL(&local_df8,&local_aa8,false);
  local_c18._0_8_ = 0;
  local_c00 = 1;
  local_bf8 = 0;
  local_db8.viewToClipMatrix.row[0].x = pfVar31->row[0].x;
  local_db8.viewToClipMatrix.row[0].y = pfVar31->row[0].y;
  local_db8.viewToClipMatrix.row[0].z = pfVar31->row[0].z;
  local_db8.viewToClipMatrix.row[0].w = pfVar31->row[0].w;
  local_db8.viewToClipMatrix.row[1].x = pfVar31->row[1].x;
  local_db8.viewToClipMatrix.row[1].y = pfVar31->row[1].y;
  local_db8.viewToClipMatrix.row[1].z = pfVar31->row[1].z;
  local_db8.viewToClipMatrix.row[1].w = pfVar31->row[1].w;
  local_db8.viewToClipMatrix.row[2].x = pfVar31->row[2].x;
  local_db8.viewToClipMatrix.row[2].y = pfVar31->row[2].y;
  local_db8.viewToClipMatrix.row[2].z = pfVar31->row[2].z;
  local_db8.viewToClipMatrix.row[2].w = pfVar31->row[2].w;
  local_db8.viewToClipMatrix.row[3].x = pfVar31->row[3].x;
  local_db8.viewToClipMatrix.row[3].y = pfVar31->row[3].y;
  local_db8.viewToClipMatrix.row[3].z = pfVar31->row[3].z;
  local_db8.viewToClipMatrix.row[3].w = pfVar31->row[3].w;
  local_c18._8_4_ = sl::ViewportHandle::s_structType.data1;
  local_c18._12_2_ = sl::ViewportHandle::s_structType.data2;
  local_c18._14_2_ = sl::ViewportHandle::s_structType.data3;
  local_c18[0x10] = sl::ViewportHandle::s_structType.data4[0];
  local_c18[0x11] = sl::ViewportHandle::s_structType.data4[1];
  local_c18[0x12] = sl::ViewportHandle::s_structType.data4[2];
  local_c18[0x13] = sl::ViewportHandle::s_structType.data4[3];
  local_c18[0x14] = sl::ViewportHandle::s_structType.data4[4];
  local_c18[0x15] = sl::ViewportHandle::s_structType.data4[5];
  local_c18[0x16] = sl::ViewportHandle::s_structType.data4[6];
  local_c18[0x17] = sl::ViewportHandle::s_structType.data4[7];
  CallSLFeatureFn<enum_sl::Result_(__cdecl*)(sl::ViewportHandle_const_&,sl::FrameToken_const_&,sl::ReflexCameraData_const_&),sl::ViewportHandle,sl::FrameToken_&,sl::ReflexCameraData_&>
            (3,"slReflexSetCameraData",(ViewportHandle *)local_c18,pFVar30,&local_db8);
  local_a68.M[1][2] = local_7b8;
  local_a68.M[1][3] = local_7d0;
  fVar36 = (float)(double)FApp::DeltaTime;
  local_a68.M[1][0] = local_7c8;
  local_a68.M[1][1] = dStack_7c0;
  local_a68.M[0][2] = local_7d8;
  local_a68.M[0][3] = local_7d0;
  local_a68.M[2][0] = local_7a8;
  local_a68.M[2][1] = dStack_7a0;
  local_a68.M[3][3] = dVar24;
  local_a68.M[3][2] = 0.0;
  local_a68.M[3][0] = 0.0;
  local_a68.M[3][1] = 0.0;
  local_a68.M[0][0] = local_7e8;
  local_a68.M[0][1] = dStack_7e0;
  local_a68.M[2][2] = local_798;
  local_a68.M[2][3] = local_7d0;
  local_1068 = param_2;
  fStack_1060 = fVar36;
  pTVar32 = UE::Math::TMatrix<double>::ToQuat(&local_a68,&local_ed8);
  pdVar1 = (param_1->ViewMatrices).ProjectionMatrix.M[3] + 3;
  dVar22 = pTVar32->Z;
  dVar23 = pTVar32->W;
  auVar52._0_8_ = pTVar32->X;
  auVar52._8_8_ = pTVar32->Y;
  uVar92 = (undefined4)auVar52._0_8_;
  uVar93 = (undefined4)((ulonglong)auVar52._0_8_ >> 0x20);
  uVar68 = (undefined4)auVar52._8_8_;
  uVar94 = (undefined4)((ulonglong)auVar52._8_8_ >> 0x20);
  local_1028 = dVar45;
  local_10d8 = local_168;
  dStack_10d0 = uStack_160;
  fVar37 = __real_3f800000;
  if (*pdVar1 <= dVar24 && dVar24 != *pdVar1) {
    fVar37 = (float)(param_1->ViewMatrices).InvProjectionMatrix.M[0][0];
  }
  local_10e8 = auVar52;
  fVar37 = atanf(fVar37);
  pTVar27 = CVarStreamlineReflexPredictiveRendering.Ref;
  fStack_1020 = fVar37;
  if (param_1->bCameraCut == false) {
    bVar29 = IsInParallelGameThread();
    if (((!bVar29) && (bVar29 = IsInGameThread(), !bVar29)) &&
       (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar29)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((pTVar27->ShadowedValue[0] != false) &&
        (lVar7 = this->ViewPredictionData[0].FrameID,
        this->ViewPredictionData[1].FrameID + 1 == lVar7)) && (lVar7 + 1U == param_2)) {
      uVar33 = param_2 % 3;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      pTVar2->M[0][0] = local_7e8;
      pTVar2->M[0][1] = dStack_7e0;
      pdVar1 = this->UpdateStates[uVar33].UpdatedWorldToView.M[0] + 2;
      *pdVar1 = local_7d8;
      pdVar1[1] = local_7d0;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      pTVar2->M[1][0] = local_7c8;
      pTVar2->M[1][1] = dStack_7c0;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedViewToClip;
      pTVar2->M[0][0] = local_968;
      pTVar2->M[0][1] = dStack_960;
      pdVar1 = this->UpdateStates[uVar33].UpdatedViewToClip.M[0] + 2;
      *pdVar1 = local_958;
      pdVar1[1] = dStack_950;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedViewToClip;
      pTVar2->M[1][0] = local_948;
      pTVar2->M[1][1] = dStack_940;
      dVar75 = __real_bff0000000000000;
      uVar92 = SUB84(__real_bff0000000000000,0);
      uVar35 = (ulonglong)__real_bff0000000000000 >> 0x20;
      pdVar1 = this->UpdateStates[uVar33].UpdatedWorldToView.M[1] + 2;
      *pdVar1 = local_7b8;
      pdVar1[1] = local_7d0;
      pdVar1 = this->UpdateStates[uVar33].UpdatedViewToClip.M[1] + 2;
      *pdVar1 = local_938;
      pdVar1[1] = dStack_930;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      pTVar2->M[2][0] = local_7a8;
      pTVar2->M[2][1] = dStack_7a0;
      pdVar1 = this->UpdateStates[uVar33].UpdatedWorldToView.M[2] + 2;
      *pdVar1 = local_798;
      pdVar1[1] = local_7d0;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      pTVar2->M[3][0] = dVar4;
      pTVar2->M[3][1] = dVar44;
      pdVar1 = this->UpdateStates[uVar33].UpdatedWorldToView.M[3] + 2;
      *pdVar1 = dVar45;
      pdVar1[1] = dVar24;
      auVar10._8_4_ = SUB84(dVar39,0);
      auVar10._0_8_ = dVar42;
      auVar10._12_4_ = uVar88;
      *(undefined1 (*) [16])this->UpdateStates[uVar33].UpdatedViewToClip.M[2] = auVar10;
      pdVar1 = this->UpdateStates[uVar33].UpdatedViewToClip.M[2] + 2;
      *pdVar1 = local_918;
      pdVar1[1] = dStack_910;
      auVar12._8_4_ = SUB84(dVar79,0);
      auVar12._0_8_ = dVar11;
      auVar12._12_4_ = uVar90;
      *(undefined1 (*) [16])this->UpdateStates[uVar33].UpdatedViewToClip.M[3] = auVar12;
      pdVar1 = this->UpdateStates[uVar33].UpdatedViewToClip.M[3] + 2;
      *pdVar1 = local_8f8;
      pdVar1[1] = dStack_8f0;
      pTVar27 = CVarStreamlineReflexCameraPredictor.Ref;
      local_1008 = this->ViewPredictionData[1].Rotation.Z;
      dStack_1000 = this->ViewPredictionData[1].Rotation.W;
      local_1018._0_8_ = this->ViewPredictionData[1].Rotation.X;
      local_1018._8_8_ = this->ViewPredictionData[1].Rotation.Y;
      uVar5 = this->ViewPredictionData[0].Rotation.Z;
      uVar6 = this->ViewPredictionData[0].Rotation.W;
      dVar11 = this->ViewPredictionData[0].Rotation.X;
      dStack_ff0 = this->ViewPredictionData[0].Rotation.Y;
      fVar3 = this->ViewPredictionData[0].DeltaTime;
      auVar19._4_8_ = local_7d0;
      auVar19._0_4_ = (int)((ulonglong)uVar5 >> 0x20);
      auVar81._0_8_ = auVar19._0_8_ << 0x20;
      auVar81._8_4_ = (int)uVar6;
      auVar81._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
      auVar20._4_8_ = uVar6;
      auVar20._0_4_ = (int)((ulonglong)local_1018._0_8_ >> 0x20);
      auVar46._0_8_ = auVar20._0_8_ << 0x20;
      auVar46._8_4_ = (int)local_1018._8_8_;
      auVar46._12_4_ = (int)((ulonglong)local_1018._8_8_ >> 0x20);
      if (0.0 <= auVar81._8_8_ * dStack_1000 + (double)uVar5 * local_1008 +
                 dStack_ff0 * auVar46._8_8_ + dVar11 * (double)local_1018._0_8_) {
        dVar75 = dVar24;
      }
      dStack_fe0 = auVar81._8_8_ * dVar75;
      dStack_ff0 = dStack_ff0 * dVar75;
      local_fe8 = (double)uVar5 * dVar75;
      auVar71._0_8_ = dVar11 * dVar75;
      uVar93 = (int)uVar35;
      if (0.0 <= dVar23 * dStack_fe0 + dVar22 * local_fe8 +
                 (double)auVar52._8_8_ * dStack_ff0 + (double)auVar52._0_8_ * auVar71._0_8_) {
        uVar92 = uVar58;
        uVar93 = (int)uVar21;
      }
      dVar15 = local_1008 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar79 = dStack_1000 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar86 = (double)local_1018._0_8_ *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar43 = (double)local_1018._8_8_ *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar17 = dVar22 * (double)CONCAT44(uVar93,uVar92);
      dVar40 = (double)CONCAT44(uVar93,uVar92) * (double)auVar52._0_8_;
      auVar82._8_4_ = SUB84(dStack_fe0,0);
      auVar82._0_8_ = local_fe8;
      uVar68 = (undefined4)((ulonglong)dStack_fe0 >> 0x20);
      auVar82._12_4_ = uVar68;
      dVar85 = auVar82._8_8_;
      dVar18 = local_fe8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar78 = dStack_fe0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar41 = (double)CONCAT44(uVar93,uVar92) * (double)auVar52._8_8_;
      dVar42 = (double)CONCAT44(uVar93,uVar92) * dVar23;
      uVar58 = (undefined4)((ulonglong)dStack_ff0 >> 0x20);
      auVar71._8_4_ = SUB84(dStack_ff0,0);
      auVar71._12_4_ = uVar58;
      dVar74 = auVar71._8_8_;
      auVar61._8_4_ = SUB84(dStack_ff0,0);
      auVar61._0_8_ = dVar74;
      auVar61._12_4_ = uVar58;
      auVar47._8_4_ = SUB84(dStack_fe0,0);
      auVar47._0_8_ = dVar85;
      auVar47._12_4_ = uVar68;
      dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      auVar48._8_4_ = SUB84(local_fe8,0);
      auVar48._0_8_ = local_fe8;
      auVar48._12_4_ = (int)((ulonglong)local_fe8 >> 0x20);
      uVar92 = SUB84(dVar42,0);
      uVar93 = (undefined4)((ulonglong)dVar42 >> 0x20);
      dVar77 = local_fe8 * dVar79;
      dVar42 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar39 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar59 = auVar71._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar67 = dStack_ff0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar75 = auVar71._0_8_ * dVar79 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar85 * dVar86 +
               dVar74 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               local_fe8 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar79 = auVar71._0_8_ * dVar15 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar47._8_8_ * dVar43 +
               auVar61._8_8_ * dVar79 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar48._8_8_ * dVar86 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar83._8_4_ = uVar92;
      auVar83._0_8_ = dVar17;
      auVar83._12_4_ = uVar93;
      uVar58 = (undefined4)((ulonglong)dVar41 >> 0x20);
      auVar13._8_4_ = SUB84(dVar79,0);
      auVar13._0_8_ = dVar75;
      auVar13._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
      auVar72._8_4_ = SUB84(dVar41,0);
      auVar72._0_8_ = dVar40;
      auVar72._12_4_ = uVar58;
      dVar60 = auVar72._8_8_;
      auVar16._8_4_ = uVar92;
      auVar16._0_8_ = dVar17;
      auVar16._12_4_ = uVar93;
      dVar70 = auVar83._8_8_;
      auVar49._8_4_ = uVar92;
      auVar49._0_8_ = dVar70;
      auVar49._12_4_ = uVar93;
      auVar62._8_4_ = SUB84(dVar41,0);
      auVar62._0_8_ = dVar60;
      auVar62._12_4_ = uVar58;
      auVar50._8_4_ = SUB84(dVar17,0);
      auVar50._0_8_ = dVar17;
      auVar50._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      dVar79 = dVar40 * dVar67 * dVar11 + dVar70 * dVar18 + dVar60 * dVar59 * dVar39 +
               dVar17 * dVar78 * dVar42;
      dVar60 = dVar40 * dVar78 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar70 * dVar59 +
               dVar60 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar17 * dVar67 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar18 = dVar40 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar49._8_8_ * dVar67 +
               auVar62._8_8_ * dVar78 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar50._8_8_ * dVar59 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_ff8 = auVar71._0_8_;
      bVar29 = IsInParallelGameThread();
      if (((!bVar29) && (bVar29 = IsInGameThread(), !bVar29)) &&
         (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar29)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar59 = (double)fVar36;
      dVar78 = (double)(__real_40000000 / fVar36);
      dVar67 = dVar24 / dVar59;
      if (pTVar27->ShadowedValue[0] == false) {
        dStack_11c0 = auVar13._8_8_;
        dVar70 = (double)(__real_40000000 / fVar3);
        dVar79 = dVar78 * dVar79;
        dVar60 = dVar78 * dVar60;
        dVar78 = dVar78 * dVar18;
        dVar60 = (dVar60 - dVar70 * dVar75) * dVar67 * dVar59 + dVar60;
        dVar79 = (dVar79 - dVar70 * (auVar71._0_8_ * dVar43 * dVar11 + dVar85 * dVar15 +
                                     dVar74 * dVar86 * dVar39 + dVar77 * dVar42)) * dVar67 * dVar59
                 + dVar79;
        dVar78 = (dVar78 - dVar70 * dStack_11c0) * dVar67 * dVar59 + dVar78;
      }
      else {
        dVar60 = dVar78 * dVar60;
        dVar79 = dVar78 * dVar79;
        dVar78 = dVar78 * dVar18;
      }
      auVar51._0_8_ = dVar78 * dVar78;
      auVar51._8_8_ = 0;
      local_1098._8_8_ = UE::Math::TQuat<double>::Identity.W;
      local_1098._0_8_ = UE::Math::TQuat<double>::Identity.Z;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar60 * dVar60 + auVar51._0_8_ + dVar79 * dVar79;
      auVar52 = sqrtpd(auVar51,auVar9);
      fVar76 = (float)auVar52._0_8_;
      local_10a8 = (undefined1  [16])UE::Math::TQuat<double>::Identity._0_16_;
      dVar11 = UE::Math::TQuat<double>::Identity.Z;
      dVar42 = UE::Math::TQuat<double>::Identity.W;
      if (0.0 < fVar76) {
        fVar69 = fVar76 * fVar36 * __real_3f000000;
        if (fVar69 < 0.0) {
          fVar38 = fVar69 * __real_3e22f983 - __real_3f000000;
        }
        else {
          fVar38 = fVar69 * __real_3e22f983 + __real_3f000000;
        }
        fVar69 = fVar69 - (float)(longlong)fVar38 * __real_40c90fdb;
        fVar38 = __real_40490fdb;
        if ((__real_3fc90fdb < fVar69) ||
           (fVar91 = __real_3f800000, fVar38 = __real_c0490fdb, fVar69 < __real_bfc90fdb)) {
          fVar69 = fVar38 - fVar69;
          fVar91 = __real_bf800000;
        }
        fVar38 = fVar69 * fVar69;
        dVar42 = dVar24 / (double)fVar76;
        dVar39 = (double)((((((__real_3638b88e - fVar38 * __real_32cd365b) * fVar38 -
                             __real_39500bf1) * fVar38 + ___real_3c088886) * fVar38 -
                           __real_3e2aaaab) * fVar38 + __real_3f800000) * fVar69);
        dVar11 = dVar79 * dVar39 * dVar42;
        local_10a8._8_8_ = dVar39 * dVar78 * dVar42;
        local_10a8._0_8_ = dVar39 * dVar60 * dVar42;
        dVar42 = (double)((((((__real_37cfb4c2 - fVar38 * ___real_348bdd11) * fVar38 -
                             ___real_3ab609aa) * fVar38 + ___real_3d2aaaa3) * fVar38 -
                           __real_3f000000) * fVar38 + __real_3f800000) * fVar91);
        local_1098._8_4_ = SUB84(dVar42,0);
        local_1098._0_8_ = dVar11;
        local_1098._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      }
      uVar58 = (undefined4)((ulonglong)dVar42 >> 0x20);
      dStack_11e0 = auVar16._8_8_;
      dVar60 = local_10a8._0_8_;
      dVar86 = local_10a8._8_8_;
      auVar73._8_4_ = SUB84(dVar42,0);
      auVar73._0_8_ = dVar11;
      auVar73._12_4_ = uVar58;
      dVar75 = auVar73._8_8_;
      auVar53._8_4_ = SUB84(dVar42,0);
      auVar53._0_8_ = dVar75;
      auVar53._12_4_ = uVar58;
      auVar63._8_4_ = local_10a8._8_4_;
      auVar63._0_8_ = dVar86;
      auVar63._12_4_ = local_10a8._12_4_;
      auVar80._8_8_ = dVar17;
      auVar80._0_8_ = dStack_11e0;
      auVar54._8_4_ = SUB84(dVar11,0);
      auVar54._0_8_ = dVar11;
      auVar54._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      local_10f0 = __real_3e45798ee0000000;
      dVar39 = dVar60 * dStack_11e0 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar75 * dVar40 +
               dVar86 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar11 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar79 = dVar60 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar53._8_8_ * dVar41 +
               auVar63._8_8_ * dStack_11e0 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar54._8_8_ * dVar40 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      auVar64._8_4_ = SUB84(dVar79,0);
      auVar64._0_8_ = dVar39;
      auVar64._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
      dVar75 = dVar60 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar75 * dVar17 +
               dVar86 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar11 * dStack_11e0 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar11 = dVar60 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar42 * dStack_11e0 +
               dVar86 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar11 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar55._8_4_ = SUB84(dVar11,0);
      auVar55._0_8_ = dVar75;
      auVar55._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      dVar42 = dVar39 * dVar39 + dVar75 * dVar75;
      dVar60 = auVar64._8_8_ * dVar79 + auVar55._8_8_ * dVar11;
      auVar56._8_4_ = SUB84(dVar60,0);
      auVar56._0_8_ = dVar42;
      auVar56._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
      auVar57._0_8_ = auVar56._8_8_ + dVar42;
      auVar57._8_8_ = dVar42 + dVar60;
      auVar52 = sqrtpd(auVar80,auVar57);
      uVar34 = -(ulonglong)(__real_3e45798ee0000000 <= auVar57._0_8_);
      uVar35 = -(ulonglong)(__real_3e45798ee0000000 <= auVar57._8_8_);
      uVar87 = (uint)(uVar34 >> 0x20);
      uVar89 = (uint)(uVar35 >> 0x20);
      auVar84 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar52);
      auVar65._0_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar65._4_4_ =
           ~uVar87 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar65._8_4_ = ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar65._12_4_ =
           ~uVar89 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_1088._0_8_ = uVar34 & (ulonglong)(auVar84._0_8_ * dVar39);
      uVar21 = uVar35 & (ulonglong)(auVar84._8_8_ * dVar79);
      local_1088._8_4_ = (undefined4)uVar21;
      local_1088._12_4_ = (undefined4)(uVar21 >> 0x20);
      local_1088 = local_1088 | auVar65;
      auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar52);
      local_1078._0_4_ =
           ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      local_1078._4_4_ =
           ~uVar87 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      local_1078._8_4_ =
           ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_1078._12_4_ =
           ~uVar89 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar66._0_8_ = (ulonglong)(auVar52._0_8_ * dVar75) & uVar34;
      uVar35 = (ulonglong)(auVar52._8_8_ * dVar11) & uVar35;
      auVar66._8_4_ = (undefined4)uVar35;
      auVar66._12_4_ = (undefined4)(uVar35 >> 0x20);
      local_1078 = local_1078 | auVar66;
      UE::Math::TQuat<double>::ToMatrix((TQuat<double> *)local_1088,&local_9e8);
      dVar11 = this->ViewPredictionData[1].Translation.field0_0x0._s_0.Z;
      dVar79 = this->ViewPredictionData[1].Translation.field0_0x0._s_0.X;
      dVar75 = this->ViewPredictionData[1].Translation.field0_0x0._s_0.Y;
      dVar60 = this->ViewPredictionData[0].Translation.field0_0x0._s_0.X;
      dVar86 = this->ViewPredictionData[0].Translation.field0_0x0._s_0.Y;
      dVar42 = this->ViewPredictionData[0].Translation.field0_0x0._s_0.Z;
      dVar39 = dVar24 / (double)fVar3;
      dVar43 = (dVar4 - dVar60) * dVar67;
      dVar44 = (dVar44 - dVar86) * dVar67;
      dVar45 = (dVar45 - dVar42) * dVar67;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      pTVar2->M[0][0] = local_9e8.M[0][0];
      pTVar2->M[0][1] = local_9e8.M[0][1];
      this->UpdateStates[uVar33].UpdatedWorldToView.M[0][2] = local_9e8.M[0][2];
      this->UpdateStates[uVar33].UpdatedWorldToView.M[0][3] = 0.0;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      pTVar2->M[1][0] = local_9e8.M[1][0];
      pTVar2->M[1][1] = local_9e8.M[1][1];
      this->UpdateStates[uVar33].UpdatedWorldToView.M[1][2] = local_9e8.M[1][2];
      this->UpdateStates[uVar33].UpdatedWorldToView.M[1][3] = 0.0;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      pTVar2->M[2][0] = local_9e8.M[2][0];
      pTVar2->M[2][1] = local_9e8.M[2][1];
      this->UpdateStates[uVar33].UpdatedWorldToView.M[2][2] = local_9e8.M[2][2];
      this->UpdateStates[uVar33].UpdatedWorldToView.M[2][3] = 0.0;
      dVar4 = __real_3fe0000000000000;
      this->UpdateStates[uVar33].UpdatedWorldToView.M[3][0] =
           ((dVar43 - (dVar60 - dVar79) * dVar39) * __real_3fe0000000000000 * dVar67 * dVar59 +
           dVar43) * dVar59 + local_168;
      this->UpdateStates[uVar33].UpdatedWorldToView.M[3][1] =
           ((dVar44 - (dVar86 - dVar75) * dVar39) * dVar4 * dVar67 * dVar59 + dVar44) * dVar59 +
           uStack_160;
      this->UpdateStates[uVar33].UpdatedWorldToView.M[3][2] =
           ((dVar45 - (dVar42 - dVar11) * dVar39) * dVar4 * dVar67 * dVar59 + dVar45) * dVar59 +
           local_158;
      this->UpdateStates[uVar33].UpdatedWorldToView.M[3][3] = 1.0;
      pTVar27 = CVarStreamlineReflexClipCorrection.Ref;
      bVar29 = IsInParallelGameThread();
      if (((!bVar29) && (bVar29 = IsInGameThread(), !bVar29)) &&
         (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar29)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar26 = _UNK_15066df7c;
      uVar25 = _UNK_15066df78;
      uVar89 = __xmm_80000000000000008000000000000000._4_4_;
      uVar87 = (uint)__xmm_80000000000000008000000000000000;
      if (pTVar27->ShadowedValue[0] != false) {
        local_1108._0_4_ = (uint)local_168 ^ (uint)__xmm_80000000000000008000000000000000;
        local_1108._4_4_ = local_168._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
        local_1108._8_4_ = (uint)uStack_160 ^ _UNK_15066df78;
        local_1108._12_4_ = uStack_160._4_4_ ^ _UNK_15066df7c;
        pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
        local_1108._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)local_158 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(local_158,0) ^ (uint)__xmm_80000000000000008000000000000000);
        local_10c8._0_4_ = *(uint *)pTVar2->M[3] ^ (uint)__xmm_80000000000000008000000000000000;
        local_10c8._4_4_ =
             *(uint *)((longlong)pTVar2->M[3] + 4) ^ __xmm_80000000000000008000000000000000._4_4_;
        local_10c8._8_4_ = *(uint *)(pTVar2->M[3] + 1) ^ _UNK_15066df78;
        local_10c8._12_4_ = *(uint *)((longlong)pTVar2->M[3] + 0xc) ^ _UNK_15066df7c;
        dVar4 = this->UpdateStates[uVar33].UpdatedWorldToView.M[3][2];
        local_10c8._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000);
        memset(&local_fd8,0,0x100);
        pTVar28 = CVarStreamlineReflexClipRadius.Ref;
        local_fd8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
        local_fd8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
        local_fd8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
        local_fd8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
        local_fd8.HitObjectHandle.InstanceIndex = -1;
        local_fd8.HitObjectHandle.ResolutionStatus = Invalid;
        local_fd8.HitObjectHandle._29_3_ = 0;
        local_fd8.Time = 1.0;
        local_fd8.MyItem = -1;
        local_fd8.HitObjectHandle.ManagerInterface.InterfaceInstance =
             (IActorInstanceManagerInterface *)0x0;
        bVar29 = IsInParallelGameThread();
        if (((!bVar29) && (bVar29 = IsInGameThread(), !bVar29)) &&
           (bVar29 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar29)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_1118.field1_0x4.Box.HalfExtentX = pTVar28->ShadowedValue[0];
        local_1118.ShapeType = Sphere;
        bVar29 = UWorld::SweepSingleByChannel
                           (this->UpdateStates[uVar33].World,&local_fd8,
                            (TVector<double> *)&local_1108._s_0,(TVector<double> *)&local_10c8._s_0,
                            &UE::Math::TQuat<double>::Identity,ECC_Camera,&local_1118,
                            &this->UpdateStates[uVar33].CollisionParams,
                            &FCollisionResponseParams::DefaultResponseParam);
        if (bVar29) {
          pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
          *(uint *)pTVar2->M[3] = local_fd8.Location._0_4_ ^ uVar87;
          *(uint *)((longlong)pTVar2->M[3] + 4) = local_fd8.Location._4_4_ ^ uVar89;
          *(uint *)(pTVar2->M[3] + 1) = local_fd8.Location._8_4_ ^ uVar25;
          *(uint *)((longlong)pTVar2->M[3] + 0xc) = local_fd8.Location._12_4_ ^ uVar26;
          this->UpdateStates[uVar33].UpdatedWorldToView.M[3][2] =
               (double)CONCAT44(local_fd8.Location._20_4_ ^ uVar89,
                                local_fd8.Location._16_4_ ^ uVar87);
        }
      }
      pdVar1 = (param_1->ViewMatrices).ProjectionMatrix.M[3] + 3;
      if (*pdVar1 <= dVar24 && dVar24 != *pdVar1) {
        dVar45 = tan((double)(((fVar37 - this->ViewPredictionData[0].HFov) / fVar36) * fVar36 +
                             fVar37));
        dVar4 = this->UpdateStates[uVar33].UpdatedViewToClip.M[1][1];
        dVar44 = this->UpdateStates[uVar33].UpdatedViewToClip.M[0][0];
        this->UpdateStates[uVar33].UpdatedViewToClip.M[0][0] = (double)(float)(dVar24 / dVar45);
        this->UpdateStates[uVar33].UpdatedViewToClip.M[1][1] =
             (double)((float)(dVar24 / dVar45) * (float)(dVar4 / dVar44));
      }
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      dVar24 = pTVar2->M[0][1];
      (this->PrevRenderedWorldToView).M[0][0] = pTVar2->M[0][0];
      (this->PrevRenderedWorldToView).M[0][1] = dVar24;
      pdVar1 = this->UpdateStates[uVar33].UpdatedWorldToView.M[0] + 2;
      dVar24 = pdVar1[1];
      (this->PrevRenderedWorldToView).M[0][2] = *pdVar1;
      (this->PrevRenderedWorldToView).M[0][3] = dVar24;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      dVar24 = pTVar2->M[1][1];
      (this->PrevRenderedWorldToView).M[1][0] = pTVar2->M[1][0];
      (this->PrevRenderedWorldToView).M[1][1] = dVar24;
      pdVar1 = this->UpdateStates[uVar33].UpdatedWorldToView.M[1] + 2;
      dVar24 = pdVar1[1];
      (this->PrevRenderedWorldToView).M[1][2] = *pdVar1;
      (this->PrevRenderedWorldToView).M[1][3] = dVar24;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      dVar24 = pTVar2->M[2][1];
      (this->PrevRenderedWorldToView).M[2][0] = pTVar2->M[2][0];
      (this->PrevRenderedWorldToView).M[2][1] = dVar24;
      pdVar1 = this->UpdateStates[uVar33].UpdatedWorldToView.M[2] + 2;
      dVar24 = pdVar1[1];
      (this->PrevRenderedWorldToView).M[2][2] = *pdVar1;
      (this->PrevRenderedWorldToView).M[2][3] = dVar24;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedWorldToView;
      dVar24 = pTVar2->M[3][1];
      (this->PrevRenderedWorldToView).M[3][0] = pTVar2->M[3][0];
      (this->PrevRenderedWorldToView).M[3][1] = dVar24;
      pdVar1 = this->UpdateStates[uVar33].UpdatedWorldToView.M[3] + 2;
      dVar24 = pdVar1[1];
      (this->PrevRenderedWorldToView).M[3][2] = *pdVar1;
      (this->PrevRenderedWorldToView).M[3][3] = dVar24;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedViewToClip;
      dVar24 = pTVar2->M[0][1];
      (this->PrevRenderedViewToClip).M[0][0] = pTVar2->M[0][0];
      (this->PrevRenderedViewToClip).M[0][1] = dVar24;
      pdVar1 = this->UpdateStates[uVar33].UpdatedViewToClip.M[0] + 2;
      dVar24 = pdVar1[1];
      (this->PrevRenderedViewToClip).M[0][2] = *pdVar1;
      (this->PrevRenderedViewToClip).M[0][3] = dVar24;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedViewToClip;
      dVar24 = pTVar2->M[1][1];
      (this->PrevRenderedViewToClip).M[1][0] = pTVar2->M[1][0];
      (this->PrevRenderedViewToClip).M[1][1] = dVar24;
      pdVar1 = this->UpdateStates[uVar33].UpdatedViewToClip.M[1] + 2;
      dVar24 = pdVar1[1];
      (this->PrevRenderedViewToClip).M[1][2] = *pdVar1;
      (this->PrevRenderedViewToClip).M[1][3] = dVar24;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedViewToClip;
      dVar24 = pTVar2->M[2][1];
      (this->PrevRenderedViewToClip).M[2][0] = pTVar2->M[2][0];
      (this->PrevRenderedViewToClip).M[2][1] = dVar24;
      pdVar1 = this->UpdateStates[uVar33].UpdatedViewToClip.M[2] + 2;
      dVar24 = pdVar1[1];
      (this->PrevRenderedViewToClip).M[2][2] = *pdVar1;
      (this->PrevRenderedViewToClip).M[2][3] = dVar24;
      pTVar2 = &this->UpdateStates[uVar33].UpdatedViewToClip;
      dVar24 = pTVar2->M[3][1];
      (this->PrevRenderedViewToClip).M[3][0] = pTVar2->M[3][0];
      (this->PrevRenderedViewToClip).M[3][1] = dVar24;
      pdVar1 = this->UpdateStates[uVar33].UpdatedViewToClip.M[3] + 2;
      dVar24 = pdVar1[1];
      (this->PrevRenderedViewToClip).M[3][2] = *pdVar1;
      (this->PrevRenderedViewToClip).M[3][3] = dVar24;
      uVar92 = local_10e8._0_4_;
      uVar93 = local_10e8._4_4_;
      uVar68 = local_10e8._8_4_;
      uVar94 = local_10e8._12_4_;
      goto LAB_14de8358c;
    }
  }
  (this->PrevRenderedWorldToView).M[0][0] = local_7e8;
  (this->PrevRenderedWorldToView).M[0][1] = dStack_7e0;
  (this->PrevRenderedWorldToView).M[0][2] = local_7d8;
  (this->PrevRenderedWorldToView).M[0][3] = local_7d0;
  (this->PrevRenderedWorldToView).M[1][0] = local_7c8;
  (this->PrevRenderedWorldToView).M[1][1] = dStack_7c0;
  (this->PrevRenderedWorldToView).M[1][2] = local_7b8;
  (this->PrevRenderedWorldToView).M[1][3] = local_7d0;
  (this->PrevRenderedViewToClip).M[0][0] = local_968;
  (this->PrevRenderedViewToClip).M[0][1] = dStack_960;
  (this->PrevRenderedWorldToView).M[2][0] = local_7a8;
  (this->PrevRenderedWorldToView).M[2][1] = dStack_7a0;
  (this->PrevRenderedViewToClip).M[0][2] = local_958;
  (this->PrevRenderedViewToClip).M[0][3] = dStack_950;
  (this->PrevRenderedViewToClip).M[1][0] = local_948;
  (this->PrevRenderedViewToClip).M[1][1] = dStack_940;
  (this->PrevRenderedWorldToView).M[2][2] = local_798;
  (this->PrevRenderedWorldToView).M[2][3] = local_7d0;
  (this->PrevRenderedViewToClip).M[1][2] = local_938;
  (this->PrevRenderedViewToClip).M[1][3] = dStack_930;
  auVar84._8_4_ = SUB84(dVar39,0);
  auVar84._0_8_ = dVar42;
  auVar84._12_4_ = uVar88;
  *(undefined1 (*) [16])(this->PrevRenderedViewToClip).M[2] = auVar84;
  (this->PrevRenderedWorldToView).M[3][0] = dVar4;
  (this->PrevRenderedWorldToView).M[3][1] = dVar44;
  (this->PrevRenderedViewToClip).M[2][2] = local_918;
  (this->PrevRenderedViewToClip).M[2][3] = dStack_910;
  auVar14._8_4_ = SUB84(dVar79,0);
  auVar14._0_8_ = dVar11;
  auVar14._12_4_ = uVar90;
  *(undefined1 (*) [16])(this->PrevRenderedViewToClip).M[3] = auVar14;
  (this->PrevRenderedWorldToView).M[3][2] = dVar45;
  (this->PrevRenderedWorldToView).M[3][3] = dVar24;
  (this->PrevRenderedViewToClip).M[3][2] = local_8f8;
  (this->PrevRenderedViewToClip).M[3][3] = dStack_8f0;
LAB_14de8358c:
  fVar37 = this->ViewPredictionData[0].DeltaTime;
  uVar58 = *(undefined4 *)&this->ViewPredictionData[0].field_0xc;
  dVar24 = this->ViewPredictionData[0].Rotation.X;
  dVar4 = this->ViewPredictionData[0].Rotation.Y;
  this->ViewPredictionData[1].FrameID = this->ViewPredictionData[0].FrameID;
  this->ViewPredictionData[1].DeltaTime = fVar37;
  *(undefined4 *)&this->ViewPredictionData[1].field_0xc = uVar58;
  dVar44 = this->ViewPredictionData[0].Rotation.Z;
  dVar45 = this->ViewPredictionData[0].Rotation.W;
  this->ViewPredictionData[1].Rotation.X = dVar24;
  this->ViewPredictionData[1].Rotation.Y = dVar4;
  dVar24 = this->ViewPredictionData[0].Translation.field0_0x0._s_0.X;
  dVar4 = this->ViewPredictionData[0].Translation.field0_0x0._s_0.Y;
  this->ViewPredictionData[1].Rotation.Z = dVar44;
  this->ViewPredictionData[1].Rotation.W = dVar45;
  dVar44 = this->ViewPredictionData[0].Translation.field0_0x0._s_0.Z;
  fVar37 = this->ViewPredictionData[0].HFov;
  uVar58 = *(undefined4 *)&this->ViewPredictionData[0].field_0x4c;
  this->ViewPredictionData[1].Translation.field0_0x0._s_0.X = dVar24;
  this->ViewPredictionData[1].Translation.field0_0x0._s_0.Y = dVar4;
  this->ViewPredictionData[0].FrameID = local_1068;
  *(ulonglong *)&this->ViewPredictionData[0].DeltaTime = CONCAT44(uStack_105c,fStack_1060);
  *(undefined4 *)&this->ViewPredictionData[0].Rotation.X = uVar92;
  *(undefined4 *)((longlong)&this->ViewPredictionData[0].Rotation.X + 4) = uVar93;
  *(undefined4 *)&this->ViewPredictionData[0].Rotation.Y = uVar68;
  *(undefined4 *)((longlong)&this->ViewPredictionData[0].Rotation.Y + 4) = uVar94;
  this->ViewPredictionData[1].Translation.field0_0x0._s_0.Z = dVar44;
  this->ViewPredictionData[1].HFov = fVar37;
  *(undefined4 *)&this->ViewPredictionData[1].field_0x4c = uVar58;
  this->ViewPredictionData[0].Rotation.Z = dVar22;
  this->ViewPredictionData[0].Rotation.W = dVar23;
  this->ViewPredictionData[0].Translation.field0_0x0._s_0.X = local_10d8;
  this->ViewPredictionData[0].Translation.field0_0x0._s_0.Y = dStack_10d0;
  this->ViewPredictionData[0].Translation.field0_0x0._s_0.Z = local_1028;
  *(ulonglong *)&this->ViewPredictionData[0].HFov = CONCAT44(uStack_101c,fStack_1020);
  return;
}

// operator() @ 150590140

bool __thiscall `FStreamlineCameraManager::CacheSceneInfo'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3908076186709786927>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3908076186709786927>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

