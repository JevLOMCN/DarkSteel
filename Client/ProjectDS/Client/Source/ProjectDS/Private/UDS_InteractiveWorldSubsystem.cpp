// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b4c8710

UClass * __cdecl UDS_InteractiveWorldSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractiveWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractiveWorldSubsystem",
               &Z_Registration_Info_UClass_UDS_InteractiveWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUDS_InteractiveWorldSubsystem,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractiveWorldSubsystem>,
               InternalVTableHelperCtorCaller<UDS_InteractiveWorldSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractiveWorldSubsystem.InnerSingleton;
}

// UDS_InteractiveWorldSubsystem @ 14b4cbb80

UDS_InteractiveWorldSubsystem * __thiscall
UDS_InteractiveWorldSubsystem::UDS_InteractiveWorldSubsystem
          (UDS_InteractiveWorldSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->Brushes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Brushes).ArrayNum = 0;
  (this->Brushes).ArrayMax = 0;
  (this->DrawingBoards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawingBoards).ArrayNum = 0;
  (this->DrawingBoards).ArrayMax = 0;
  this->BrushCullDistance = -1.0;
  return this;
}

// UDS_InteractiveWorldSubsystem @ 14b4cbbe0

UDS_InteractiveWorldSubsystem * __thiscall
UDS_InteractiveWorldSubsystem::UDS_InteractiveWorldSubsystem(UDS_InteractiveWorldSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  (this->Brushes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Brushes).ArrayNum = 0;
  (this->Brushes).ArrayMax = 0;
  (this->DrawingBoards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DrawingBoards).ArrayNum = 0;
  (this->DrawingBoards).ArrayMax = 0;
  this->BrushCullDistance = -1.0;
  return this;
}

// ~UDS_InteractiveWorldSubsystem @ 14b4cc1e0

void __thiscall
UDS_InteractiveWorldSubsystem::~UDS_InteractiveWorldSubsystem(UDS_InteractiveWorldSubsystem *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->DrawingBoards).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Brushes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 14b4cd4a0

UClass * __cdecl UDS_InteractiveWorldSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractiveWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractiveWorldSubsystem",
               &Z_Registration_Info_UClass_UDS_InteractiveWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUDS_InteractiveWorldSubsystem,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractiveWorldSubsystem>,
               InternalVTableHelperCtorCaller<UDS_InteractiveWorldSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractiveWorldSubsystem.InnerSingleton;
}

// GetStatId @ 14b4cd560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UDS_InteractiveWorldSubsystem::GetStatId(UDS_InteractiveWorldSubsystem *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_UDS_InteractiveWorldSubsystem::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_UDS_InteractiveWorldSubsystem::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_UDS_InteractiveWorldSubsystem::GetStatId(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_UInteractiveWorldSubsystem = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"UInteractiveWorldSubsystem");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_UDS_InteractiveWorldSubsystem::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_UInteractiveWorldSubsystem,*pFVar1,L"UInteractiveWorldSubsystem",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_UDS_InteractiveWorldSubsystem::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_UInteractiveWorldSubsystem;
  if (_StatPtr_UInteractiveWorldSubsystem == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UInteractiveWorldSubsystem");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_UDS_InteractiveWorldSubsystem::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_UInteractiveWorldSubsystem,*pFVar1,
                       L"UInteractiveWorldSubsystem","STATGROUP_Tickables","STATCAT_Advanced",
                       L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// IsTickable @ 14b4cd6d0

bool __thiscall UDS_InteractiveWorldSubsystem::IsTickable(UDS_InteractiveWorldSubsystem *this)

{
  bool bVar1;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)&this[-1]._padding_,
                     RF_ArchetypeObject|RF_ClassDefaultObject);
  return !bVar1;
}

// StaticRegisterNativesUDS_InteractiveWorldSubsystem @ 14b4cdc90

void __cdecl UDS_InteractiveWorldSubsystem::StaticRegisterNativesUDS_InteractiveWorldSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UDS_InteractiveWorldSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetRegisteredDrawingBoards @ 14b4ceb20

void __cdecl
UDS_InteractiveWorldSubsystem::execGetRegisteredDrawingBoards
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[2].field_0x10;
  _Src = *(void **)&param_1[2].field_0x8;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execGetRegisteredInteractBrushes @ 14b4cec10

void __cdecl
UDS_InteractiveWorldSubsystem::execGetRegisteredInteractBrushes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(param_1 + 2);
  _Src = *(void **)&param_1[1].field_0x20;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execRegisterBrush @ 14b4cf6b0

void __cdecl
UDS_InteractiveWorldSubsystem::execRegisterBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_InteractBrush *local_res10;
  
  local_res10 = (UDS_InteractBrush *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RegisterBrush((UDS_InteractiveWorldSubsystem *)param_1,local_res10);
  return;
}

// execRegisterDrawingBoard @ 14b4cf740

void __cdecl
UDS_InteractiveWorldSubsystem::execRegisterDrawingBoard
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ADS_WorldDrawingBoard *local_res10;
  
  local_res10 = (ADS_WorldDrawingBoard *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RegisterDrawingBoard((UDS_InteractiveWorldSubsystem *)param_1,local_res10);
  return;
}

// execUnregisterBrush @ 14b4cf8d0

void __cdecl
UDS_InteractiveWorldSubsystem::execUnregisterBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_InteractBrush *local_res10;
  
  local_res10 = (UDS_InteractBrush *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UnregisterBrush((UDS_InteractiveWorldSubsystem *)param_1,local_res10);
  return;
}

// execUnregisterDrawingBoard @ 14b4cf960

void __cdecl
UDS_InteractiveWorldSubsystem::execUnregisterDrawingBoard
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ADS_WorldDrawingBoard *local_res10;
  
  local_res10 = (ADS_WorldDrawingBoard *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UnregisterDrawingBoard((UDS_InteractiveWorldSubsystem *)param_1,local_res10);
  return;
}

// AllocateBrushes @ 14b99ac20

void __thiscall UDS_InteractiveWorldSubsystem::AllocateBrushes(UDS_InteractiveWorldSubsystem *this)

{
  ADS_WorldDrawingBoard *pAVar1;
  undefined8 *puVar2;
  UTextureRenderTarget2D *pUVar3;
  code *pcVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 local_178;
  undefined1 local_177 [7];
  ForAnyElementType local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_15f [7];
  longlong local_158;
  uint local_150;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> local_148;
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  FScriptContainerElement *local_128;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> local_120;
  TObjectPtr<UClass>_u_0 local_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  bVar9 = PrepareBrushes(this,&local_148);
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_150 = (this->DrawingBoards).ArrayNum;
  uVar14 = (ulonglong)(int)local_150;
  pFVar17 = (this->DrawingBoards).AllocatorInstance.Data;
  pFVar15 = pFVar17 + uVar14 * 8;
  local_128 = pFVar15;
  if (bVar9) {
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168 = 0;
    while( true ) {
      if ((this->DrawingBoards).ArrayNum != (int)uVar14) {
        local_178 = 0;
        `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_178);
      }
      if (pFVar17 == pFVar15) break;
      pAVar1 = *(ADS_WorldDrawingBoard **)pFVar17;
      if ((pAVar1->bDrawingBoardActiveAuto != false) && (pAVar1->bActive != false)) {
        ADS_WorldDrawingBoard::UpdateDrawingBoardState(pAVar1);
        bVar9 = (longlong)local_168 < 0;
        local_168 = local_168 & 0xffffffff00000000;
        if (bVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_170,0,(int *)((longlong)&local_168 + 4));
        }
        if ((pAVar1->bActive != false) &&
           ((pAVar1->bUseInteractVolume == false || (0 < (pAVar1->ActiveVolumes).ArrayNum)))) {
          iVar8 = local_148.ArrayNum;
          pFVar15 = local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 8;
          FVar16.Data = local_148.AllocatorInstance.Data;
          while( true ) {
            if (local_148.ArrayNum != iVar8) {
              local_177[0] = 0;
              `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_177);
            }
            if (FVar16.Data == pFVar15) break;
            lVar11 = *(longlong *)FVar16.Data;
            puVar2 = *(undefined8 **)(lVar11 + 1000);
            for (puVar12 = puVar2; local_158 = lVar11, puVar12 != puVar2 + *(int *)(lVar11 + 0x3f0);
                puVar12 = puVar12 + 1) {
              if ((ADS_WorldDrawingBoard *)*puVar12 == pAVar1) {
                if ((int)((longlong)puVar12 - (longlong)puVar2 >> 3) != -1) goto LAB_14b99ae3c;
                break;
              }
            }
            if (pAVar1->bUseInteractVolume == false) {
              if (*(char *)(lVar11 + 0x288) != '\0') {
                local_110 = (TObjectPtr<UClass>_u_0)pAVar1->_padding_;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_110.DebugPtr != (UClass *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_110.DebugPtr);
                }
                iVar10 = TArray<TSubclassOf<ADS_WorldDrawingBoard>,TSizedDefaultAllocator<32>_>::
                         Find((TArray<TSubclassOf<ADS_WorldDrawingBoard>,TSizedDefaultAllocator<32>_>
                               *)(lVar11 + 0x290),
                              (TSubclassOf<ADS_WorldDrawingBoard> *)&local_110.ObjectPtr);
                if (iVar10 == -1) goto LAB_14b99b015;
              }
LAB_14b99ae3c:
              lVar11 = local_158;
              local_108 = *(double *)(local_158 + 0x2d0);
              dStack_100 = *(double *)(local_158 + 0x2d8);
              local_d8 = *(undefined8 *)(local_158 + 0x2c0);
              uStack_d0 = *(undefined8 *)(local_158 + 0x2c8);
              local_f8 = *(undefined8 *)(local_158 + 0x2e0);
              uStack_b0 = *(undefined8 *)(local_158 + 0x2e8);
              local_e8 = *(undefined8 *)(local_158 + 0x2b0);
              uStack_e0 = *(undefined8 *)(local_158 + 0x2b8);
              local_98 = *(undefined8 *)(local_158 + 0x300);
              uStack_90 = *(undefined8 *)(local_158 + 0x308);
              dVar5 = local_108 - (pAVar1->CanvasWorldLocation).field0_0x0._s_0.X;
              local_a8 = *(undefined8 *)(local_158 + 0x2f0);
              uStack_a0 = *(undefined8 *)(local_158 + 0x2f8);
              dVar21 = dStack_100 - (pAVar1->CanvasWorldLocation).field0_0x0._s_0.Y;
              local_c8 = local_108;
              dStack_c0 = dStack_100;
              local_b8 = local_f8;
              __libm_sse2_sincos_();
              dVar20 = extraout_XMM0_Qb * dVar5 - extraout_XMM0_Qa * dVar21;
              dVar5 = extraout_XMM0_Qb * dVar21 + extraout_XMM0_Qa * dVar5;
              dVar21 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar7,
                                        SUB84(dVar20,0) & uVar6) -
                       (pAVar1->CanvasWorldSize).field0_0x0._s_0.X;
              dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar7,
                                       SUB84(dVar5,0) & uVar6) -
                      (pAVar1->CanvasWorldSize).field0_0x0._s_0.Y;
              if (dVar21 <= 0.0) {
                dVar21 = 0.0;
              }
              if (dVar5 <= 0.0) {
                dVar5 = 0.0;
              }
              if (*(char *)(lVar11 + 0x260) == '\0') {
                auVar18._0_8_ = *(double *)(lVar11 + 0x250) * *(double *)(lVar11 + 0x250);
                auVar18._8_8_ = 0;
                auVar19._8_8_ = 0;
                auVar19._0_8_ =
                     *(double *)(lVar11 + 600) * *(double *)(lVar11 + 600) + auVar18._0_8_;
                auVar19 = sqrtpd(auVar18,auVar19);
                dVar20 = auVar19._0_8_;
              }
              else {
                dVar20 = (double)*(float *)(lVar11 + 0x264);
              }
              if ((float)SQRT(dVar21 * dVar21 + dVar5 * dVar5) < (float)dVar20) {
                if (((local_170.Data <= (FScriptContainerElement *)&local_158) &&
                    ((FScriptContainerElement *)&local_158 <
                     local_170.Data + (longlong)local_168._4_4_ * 8)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), lVar11 = local_158, bVar9)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if ((int)local_168 == local_168._4_4_) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_170,(int *)((longlong)&local_168 + 4));
                  local_168 = CONCAT44(local_168._4_4_,iVar10);
                  lVar11 = local_158;
                }
                lVar13 = (longlong)(int)local_168;
                local_168 = CONCAT44(local_168._4_4_,(int)local_168 + 1);
                *(longlong *)(local_170.Data + lVar13 * 8) = lVar11;
              }
            }
LAB_14b99b015:
            FVar16.Data = FVar16.Data + 8;
          }
        }
        FVar16.Data = local_170.Data;
        lVar11 = (longlong)(int)local_168;
        local_138.Data = (FScriptContainerElement *)0x0;
        local_130 = (int)local_168;
        if ((int)local_168 == 0) {
          local_12c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(int)local_168,0,&local_138,(int)local_168,&local_12c);
          memcpy(local_138.Data,FVar16.Data,lVar11 << 3);
        }
        if (local_130 < 1) {
          ADS_WorldDrawingBoard::PrepareForSimulate(pAVar1);
        }
        else {
          pAVar1->TimeFromLastDraw = 0.0;
          ADS_WorldDrawingBoard::PreSimulate(pAVar1);
          FVar16.Data = local_138.Data;
          pUVar3 = pAVar1->RTBrushDrawOn;
          if (pUVar3 != (UTextureRenderTarget2D *)0x0) {
            lVar11 = (longlong)local_130;
            local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_120.ArrayNum = local_130;
            if (local_130 == 0) {
              local_120.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_130,0,&local_120.AllocatorInstance,local_130,&local_120.ArrayMax)
              ;
              memcpy(local_120.AllocatorInstance.Data,FVar16.Data,lVar11 << 3);
            }
            ADS_WorldDrawingBoard::DrawBrushes(pAVar1,&local_120,pUVar3);
          }
          ADS_WorldDrawingBoard::PostSimulate(pAVar1);
          dVar5 = (pAVar1->CanvasWorldLocation).field0_0x0._s_0.X;
          dVar21 = (pAVar1->CanvasWorldLocation).field0_0x0._s_0.Y;
          pAVar1->PreviousCanvasWorldYaw = pAVar1->CanvasWorldYaw;
          (pAVar1->PreviousCanvasWorldLocation).field0_0x0._s_0.X = dVar5;
          (pAVar1->PreviousCanvasWorldLocation).field0_0x0._s_0.Y = dVar21;
          dVar5 = (pAVar1->CanvasWorldSize).field0_0x0._s_0.Y;
          (pAVar1->PreviousCanvasWorldSize).field0_0x0._s_0.X =
               (pAVar1->CanvasWorldSize).field0_0x0._s_0.X;
          (pAVar1->PreviousCanvasWorldSize).field0_0x0._s_0.Y = dVar5;
          dVar5 = (pAVar1->PixelWorldSize).field0_0x0._s_0.Y;
          (pAVar1->PreviousPixelWorldSize).field0_0x0._s_0.X =
               (pAVar1->PixelWorldSize).field0_0x0._s_0.X;
          (pAVar1->PreviousPixelWorldSize).field0_0x0._s_0.Y = dVar5;
          dVar5 = (pAVar1->RTSize).field0_0x0._s_0.Y;
          (pAVar1->PreviousRTSize).field0_0x0._s_0.X = (pAVar1->RTSize).field0_0x0._s_0.X;
          (pAVar1->PreviousRTSize).field0_0x0._s_0.Y = dVar5;
        }
        pFVar15 = local_128;
        if (local_138.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data);
          pFVar15 = local_128;
        }
      }
      uVar14 = (ulonglong)local_150;
      pFVar17 = pFVar17 + 8;
    }
    iVar8 = local_148.ArrayNum;
    uVar14 = (ulonglong)local_148.ArrayNum;
    pFVar15 = local_148.AllocatorInstance.Data + uVar14 * 8;
    FVar16.Data = local_148.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar8) {
        `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_160);
      }
      if (FVar16.Data == pFVar15) break;
      lVar11 = *(longlong *)FVar16.Data;
      *(char *)(lVar11 + 0x3fa) = *(char *)(lVar11 + 0x3f9);
      *(undefined8 *)(lVar11 + 0x310) = *(undefined8 *)(lVar11 + 0x2b0);
      *(undefined8 *)(lVar11 + 0x318) = *(undefined8 *)(lVar11 + 0x2b8);
      *(undefined8 *)(lVar11 + 800) = *(undefined8 *)(lVar11 + 0x2c0);
      *(undefined8 *)(lVar11 + 0x328) = *(undefined8 *)(lVar11 + 0x2c8);
      *(undefined8 *)(lVar11 + 0x330) = *(undefined8 *)(lVar11 + 0x2d0);
      *(undefined8 *)(lVar11 + 0x338) = *(undefined8 *)(lVar11 + 0x2d8);
      *(undefined8 *)(lVar11 + 0x340) = *(undefined8 *)(lVar11 + 0x2e0);
      *(undefined8 *)(lVar11 + 0x348) = *(undefined8 *)(lVar11 + 0x2e8);
      *(undefined8 *)(lVar11 + 0x350) = *(undefined8 *)(lVar11 + 0x2f0);
      *(undefined8 *)(lVar11 + 0x358) = *(undefined8 *)(lVar11 + 0x2f8);
      *(undefined8 *)(lVar11 + 0x360) = *(undefined8 *)(lVar11 + 0x300);
      *(undefined8 *)(lVar11 + 0x368) = *(undefined8 *)(lVar11 + 0x308);
      if (*(char *)(lVar11 + 0x3f9) != '\0') {
        *(undefined8 *)(lVar11 + 0x370) = *(undefined8 *)(lVar11 + 0x2b0);
        *(undefined8 *)(lVar11 + 0x378) = *(undefined8 *)(lVar11 + 0x2b8);
        *(undefined8 *)(lVar11 + 0x380) = *(undefined8 *)(lVar11 + 0x2c0);
        *(undefined8 *)(lVar11 + 0x388) = *(undefined8 *)(lVar11 + 0x2c8);
        *(undefined8 *)(lVar11 + 0x390) = *(undefined8 *)(lVar11 + 0x2d0);
        *(undefined8 *)(lVar11 + 0x398) = *(undefined8 *)(lVar11 + 0x2d8);
        *(undefined8 *)(lVar11 + 0x3a0) = *(undefined8 *)(lVar11 + 0x2e0);
        *(undefined8 *)(lVar11 + 0x3a8) = *(undefined8 *)(lVar11 + 0x2e8);
        *(undefined8 *)(lVar11 + 0x3b0) = *(undefined8 *)(lVar11 + 0x2f0);
        *(undefined8 *)(lVar11 + 0x3b8) = *(undefined8 *)(lVar11 + 0x2f8);
        *(undefined8 *)(lVar11 + 0x3c0) = *(undefined8 *)(lVar11 + 0x300);
        *(undefined8 *)(lVar11 + 0x3c8) = *(undefined8 *)(lVar11 + 0x308);
      }
      uVar14 = local_148._8_8_ & 0xffffffff;
      FVar16.Data = FVar16.Data + 8;
    }
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
  }
  else {
    while( true ) {
      pFVar15 = local_128;
      if ((this->DrawingBoards).ArrayNum != (int)uVar14) {
        `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_15f);
      }
      if (pFVar17 == pFVar15) break;
      pAVar1 = *(ADS_WorldDrawingBoard **)pFVar17;
      ADS_WorldDrawingBoard::UpdateDrawingBoardState(pAVar1);
      ADS_WorldDrawingBoard::PrepareForSimulate(pAVar1);
      uVar14 = (ulonglong)local_150;
      pFVar17 = pFVar17 + 8;
    }
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  return;
}

// OnWorldBeginPlay @ 14b9bf550

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
UDS_InteractiveWorldSubsystem::OnWorldBeginPlay(UDS_InteractiveWorldSubsystem *this,UWorld *param_1)

{
  UDS_InteractiveWorldSubsystem *apUStackX_8 [4];
  
  if ((this->_padding_ & 2) != 0) {
    apUStackX_8[0] = this;
    `UWorldSubsystem::OnWorldBeginPlay'::__l2::<lambda_1>::operator()(apUStackX_8);
    *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
    return;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 2;
  return;
}

// PrepareBrushes @ 14b9c0860

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDS_InteractiveWorldSubsystem::PrepareBrushes
          (UDS_InteractiveWorldSubsystem *this,
          TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  UWorld *pUVar11;
  APlayerCameraManager *pAVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  UDS_InteractBrush *pUVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 local_res20 [8];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5 [5];
  ForAnyElementType local_f0;
  uint local_e8;
  uint uStack_e4;
  UDS_InteractBrush *local_e0;
  UDS_InteractBrush *local_d8;
  ForAnyElementType local_d0;
  uint local_c8;
  uint uStack_c4;
  TArray<TSubclassOf<ADS_WorldDrawingBoard>,TSizedDefaultAllocator<32>_> local_c0;
  longlong local_b0;
  UDS_InteractBrush *local_a8;
  UObject *local_a0;
  FScriptContainerElement *local_98;
  longlong local_90;
  FScriptContainerElement *local_88;
  double local_80;
  double local_78;
  double local_68;
  double dStack_60;
  longlong local_58;
  
  pFVar18 = (this->DrawingBoards).AllocatorInstance.Data;
  iVar3 = (this->DrawingBoards).ArrayNum;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  pFVar20 = pFVar18 + (longlong)iVar3 * 8;
  local_c8 = 0;
  uStack_c4 = 0;
  while( true ) {
    if ((this->DrawingBoards).ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    uVar6 = local_c8;
    if (pFVar18 == pFVar20) break;
    local_90 = *(longlong *)pFVar18;
    if (local_90 == 0) {
      if (((local_d0.Data <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 < local_d0.Data + (longlong)(int)uStack_c4 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (local_c8 == uStack_c4) {
        local_c8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_d0,(int *)&uStack_c4);
      }
      lVar13 = (longlong)(int)local_c8;
      pFVar18 = pFVar18 + 8;
      local_c8 = local_c8 + 1;
      *(longlong *)(local_d0.Data + lVar13 * 8) = local_90;
    }
    else {
      if (*(char *)(local_90 + 0x381) == '\0') {
        local_a0 = *(UObject **)(local_90 + 0x10);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_a0);
        }
        if (((local_c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_a0) &&
            ((FScriptContainerElement *)&local_a0 <
             local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (local_c0.ArrayNum == local_c0.ArrayMax) {
          local_c0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
        }
        lVar13 = (longlong)local_c0.ArrayNum;
        local_c0.ArrayNum = local_c0.ArrayNum + 1;
        *(UObject **)(local_c0.AllocatorInstance.Data + lVar13 * 8) = local_a0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_a0);
        }
      }
      pFVar18 = pFVar18 + 8;
    }
  }
  uVar14 = (ulonglong)(int)local_c8;
  pFVar20 = local_d0.Data + uVar14 * 8;
  FVar17.Data = local_d0.Data;
  local_88 = pFVar20;
  while( true ) {
    local_98 = FVar17.Data;
    if (local_c8 != (uint)uVar14) {
      local_f8 = 0;
      `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_f8);
    }
    if (FVar17.Data == pFVar20) break;
    pFVar18 = (this->DrawingBoards).AllocatorInstance.Data;
    local_b0 = *(longlong *)FVar17.Data;
    if (((pFVar18 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 <
         pFVar18 + (longlong)(this->DrawingBoards).ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar3 = (this->DrawingBoards).ArrayNum;
    if (iVar3 != 0) {
      pFVar20 = (this->DrawingBoards).AllocatorInstance.Data;
      iVar21 = 0;
      lVar13 = 0;
      bVar7 = *(longlong *)pFVar20 != local_b0;
      lVar15 = local_b0;
      iVar10 = 0;
      do {
        iVar19 = iVar10;
        do {
          lVar13 = lVar13 + 1;
          iVar19 = iVar19 + 1;
          if (iVar3 <= lVar13) break;
        } while (bVar7 == (*(longlong *)(pFVar20 + lVar13 * 8) != lVar15));
        if (bVar7 != false) {
          if (iVar21 != iVar10) {
            memmove(pFVar20 + (longlong)iVar21 * 8,pFVar20 + (longlong)iVar10 * 8,
                    (longlong)(iVar19 - iVar10) << 3);
            lVar15 = local_b0;
          }
          iVar21 = iVar21 + (iVar19 - iVar10);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar10 = iVar19;
      } while (lVar13 < iVar3);
      (this->DrawingBoards).ArrayNum = iVar21;
      FVar17.Data = local_98;
      pFVar20 = local_88;
    }
    uVar14 = (ulonglong)uVar6;
    FVar17.Data = FVar17.Data + 8;
  }
  piVar1 = &param_1->ArrayMax;
  bVar7 = false;
  param_1->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  uStack_e4 = 0;
  if (0.0 < this->BrushCullDistance || this->BrushCullDistance == 0.0) {
    pUVar11 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    pAVar12 = UGameplayStatics::GetPlayerCameraManager((UObject *)pUVar11,0);
    (**(code **)(pAVar12->_padding_ + 0x848))(pAVar12,&local_80);
    pFVar18 = (this->Brushes).AllocatorInstance.Data;
    iVar3 = (this->Brushes).ArrayNum;
    pFVar20 = pFVar18 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Brushes).ArrayNum != iVar3) {
        local_f6 = 0;
        `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_f6);
      }
      if (pFVar18 == pFVar20) break;
      local_e0 = *(UDS_InteractBrush **)pFVar18;
      if (local_e0 == (UDS_InteractBrush *)0x0) {
        if (((local_f0.Data <= (FScriptContainerElement *)&local_e0) &&
            ((FScriptContainerElement *)&local_e0 < local_f0.Data + (longlong)(int)uStack_e4 * 8))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (local_e8 == uStack_e4) {
          local_e8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_f0,(int *)&uStack_e4);
        }
        *(UDS_InteractBrush **)(local_f0.Data + (longlong)(int)local_e8 * 8) = local_e0;
        local_e8 = local_e8 + 1;
LAB_14b9c100c:
        pFVar18 = pFVar18 + 8;
      }
      else {
        local_68 = (double)local_e0->_padding_;
        dStack_60 = (double)local_e0->_padding_;
        local_58 = local_e0->_padding_;
        if (local_e0->bOverrideCullRadius == false) {
          dVar22 = (local_e0->Size).field0_0x0._s_0.X;
          dVar2 = (local_e0->Size).field0_0x0._s_0.Y;
          auVar23._0_8_ = dVar22 * dVar22;
          auVar23._8_8_ = 0;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = dVar2 * dVar2 + auVar23._0_8_;
          auVar24 = sqrtpd(auVar23,auVar24);
          dVar22 = auVar24._0_8_;
        }
        else {
          dVar22 = (double)local_e0->CullRadiusOverride;
        }
        if (((double)((float)dVar22 + this->BrushCullDistance) <
             SQRT((dStack_60 - local_78) * (dStack_60 - local_78) +
                  (local_68 - local_80) * (local_68 - local_80))) ||
           (bVar9 = UDS_InteractBrush::PrepareForDrawing(local_e0,&local_c0), !bVar9))
        goto LAB_14b9c100c;
        pFVar4 = (param_1->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)&local_e0) &&
           (((FScriptContainerElement *)&local_e0 < pFVar4 + (longlong)*piVar1 * 8 &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)))) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,piVar1);
        }
        pFVar18 = pFVar18 + 8;
        param_1->ArrayNum = iVar10 + 1;
        bVar7 = true;
        *(UDS_InteractBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_e0
        ;
      }
    }
  }
  else {
    pFVar18 = (this->Brushes).AllocatorInstance.Data;
    iVar3 = (this->Brushes).ArrayNum;
    pFVar20 = pFVar18 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->Brushes).ArrayNum != iVar3) {
        local_f7 = 0;
        `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_f7);
      }
      if (pFVar18 == pFVar20) break;
      local_d8 = *(UDS_InteractBrush **)pFVar18;
      if (local_d8 == (UDS_InteractBrush *)0x0) {
        if (((local_f0.Data <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 < local_f0.Data + (longlong)(int)uStack_e4 * 8))
           && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        if (local_e8 == uStack_e4) {
          local_e8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_f0,(int *)&uStack_e4);
        }
        lVar13 = (longlong)(int)local_e8;
        local_e8 = local_e8 + 1;
        *(UDS_InteractBrush **)(local_f0.Data + lVar13 * 8) = local_d8;
LAB_14b9c0db4:
        pFVar18 = pFVar18 + 8;
      }
      else {
        bVar9 = UDS_InteractBrush::PrepareForDrawing(local_d8,&local_c0);
        if (!bVar9) goto LAB_14b9c0db4;
        pFVar4 = (param_1->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,piVar1);
        }
        pFVar18 = pFVar18 + 8;
        param_1->ArrayNum = iVar10 + 1;
        bVar7 = true;
        *(UDS_InteractBrush **)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_d8
        ;
      }
    }
  }
  uVar6 = local_e8;
  uVar14 = (ulonglong)(int)local_e8;
  pFVar20 = local_f0.Data + uVar14 * 8;
  FVar17.Data = local_f0.Data;
  local_88 = pFVar20;
  do {
    local_98 = FVar17.Data;
    if (local_e8 != (uint)uVar14) {
      local_f5[0] = 0;
      `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f5);
    }
    if (FVar17.Data == pFVar20) {
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.AllocatorInstance.Data);
      }
      return bVar7;
    }
    pFVar18 = (this->Brushes).AllocatorInstance.Data;
    local_a8 = *(UDS_InteractBrush **)FVar17.Data;
    if (((pFVar18 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar18 + (longlong)(this->Brushes).ArrayMax * 8))
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar3 = (this->Brushes).ArrayNum;
    if (iVar3 != 0) {
      pFVar20 = (this->Brushes).AllocatorInstance.Data;
      iVar21 = 0;
      lVar13 = 0;
      bVar9 = *(UDS_InteractBrush **)pFVar20 != local_a8;
      pUVar16 = local_a8;
      iVar10 = 0;
      do {
        iVar19 = iVar10;
        do {
          lVar13 = lVar13 + 1;
          iVar19 = iVar19 + 1;
          if (iVar3 <= lVar13) break;
        } while (bVar9 == (*(UDS_InteractBrush **)(pFVar20 + lVar13 * 8) != pUVar16));
        if (bVar9 != false) {
          if (iVar21 != iVar10) {
            memmove(pFVar20 + (longlong)iVar21 * 8,pFVar20 + (longlong)iVar10 * 8,
                    (longlong)(iVar19 - iVar10) << 3);
            pUVar16 = local_a8;
          }
          iVar21 = iVar21 + (iVar19 - iVar10);
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar10 = iVar19;
      } while (lVar13 < iVar3);
      (this->Brushes).ArrayNum = iVar21;
      FVar17.Data = local_98;
      pFVar20 = local_88;
    }
    uVar14 = (ulonglong)uVar6;
    FVar17.Data = FVar17.Data + 8;
  } while( true );
}

// RegisterBrush @ 14b9c16a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractiveWorldSubsystem::RegisterBrush
          (UDS_InteractiveWorldSubsystem *this,UDS_InteractBrush *param_1)

{
  FName local_res8;
  UDS_InteractBrush *local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UDS_InteractBrush_*_const_&>(&this->Brushes,local_res10);
  if (4 < (byte)LogTemp._0_1_) {
    local_res8 = (FName)local_res10[0]->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RegisterDrawingBoard @ 14b9c1720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractiveWorldSubsystem::RegisterDrawingBoard
          (UDS_InteractiveWorldSubsystem *this,ADS_WorldDrawingBoard *param_1)

{
  FName local_res8;
  ADS_WorldDrawingBoard *local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<ADS_WorldDrawingBoard_*_const_&>(&this->DrawingBoards,local_res10);
  if (4 < (byte)LogTemp._0_1_) {
    local_res8 = (FName)local_res10[0]->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Tick @ 14b9c7bd0

void __thiscall
UDS_InteractiveWorldSubsystem::Tick(UDS_InteractiveWorldSubsystem *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  ADS_WorldDrawingBoard *pAVar2;
  UTextureRenderTarget2D *pUVar3;
  code *pcVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ForAnyElementType FVar16;
  undefined8 *puVar17;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 uStack_178;
  undefined1 auStack_177 [7];
  ForAnyElementType FStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined1 auStack_15f [7];
  longlong lStack_158;
  uint uStack_150;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> TStack_148;
  ForAnyElementType FStack_138;
  int iStack_130;
  int iStack_12c;
  undefined8 *puStack_128;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> TStack_120;
  TObjectPtr<UClass>_u_0 TStack_110;
  double dStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((int)this->_padding_ < 1) {
    return;
  }
  TStack_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_148.ArrayNum = 0;
  TStack_148.ArrayMax = 0;
  bVar9 = PrepareBrushes((UDS_InteractiveWorldSubsystem *)&this[-1]._padding_,&TStack_148);
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uStack_150 = (uint)this->_padding_;
  uVar14 = (ulonglong)(int)uStack_150;
  puVar17 = (undefined8 *)this->_padding_;
  puVar15 = puVar17 + uVar14;
  puStack_128 = puVar15;
  if (bVar9) {
    FStack_170.Data = (FScriptContainerElement *)0x0;
    uStack_168 = 0;
    while( true ) {
      if ((int)this->_padding_ != (int)uVar14) {
        uStack_178 = 0;
        `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&uStack_178);
      }
      if (puVar17 == puVar15) break;
      pAVar2 = (ADS_WorldDrawingBoard *)*puVar17;
      if ((pAVar2->bDrawingBoardActiveAuto != false) && (pAVar2->bActive != false)) {
        ADS_WorldDrawingBoard::UpdateDrawingBoardState(pAVar2);
        bVar9 = (longlong)uStack_168 < 0;
        uStack_168 = uStack_168 & 0xffffffff00000000;
        if (bVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&FStack_170,0,(int *)((longlong)&uStack_168 + 4));
        }
        if ((pAVar2->bActive != false) &&
           ((pAVar2->bUseInteractVolume == false || (0 < (pAVar2->ActiveVolumes).ArrayNum)))) {
          iVar8 = TStack_148.ArrayNum;
          pFVar1 = TStack_148.AllocatorInstance.Data + (longlong)TStack_148.ArrayNum * 8;
          FVar16.Data = TStack_148.AllocatorInstance.Data;
          while( true ) {
            if (TStack_148.ArrayNum != iVar8) {
              auStack_177[0] = 0;
              `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(auStack_177);
            }
            if (FVar16.Data == pFVar1) break;
            lVar11 = *(longlong *)FVar16.Data;
            puVar15 = *(undefined8 **)(lVar11 + 1000);
            for (puVar12 = puVar15; lStack_158 = lVar11,
                puVar12 != puVar15 + *(int *)(lVar11 + 0x3f0); puVar12 = puVar12 + 1) {
              if ((ADS_WorldDrawingBoard *)*puVar12 == pAVar2) {
                if ((int)((longlong)puVar12 - (longlong)puVar15 >> 3) != -1) goto LAB_14b99ae3c;
                break;
              }
            }
            if (pAVar2->bUseInteractVolume == false) {
              if (*(char *)(lVar11 + 0x288) != '\0') {
                TStack_110 = (TObjectPtr<UClass>_u_0)pAVar2->_padding_;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (TStack_110.DebugPtr != (UClass *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)TStack_110.DebugPtr);
                }
                iVar10 = TArray<TSubclassOf<ADS_WorldDrawingBoard>,TSizedDefaultAllocator<32>_>::
                         Find((TArray<TSubclassOf<ADS_WorldDrawingBoard>,TSizedDefaultAllocator<32>_>
                               *)(lVar11 + 0x290),
                              (TSubclassOf<ADS_WorldDrawingBoard> *)&TStack_110.ObjectPtr);
                if (iVar10 == -1) goto LAB_14b99b015;
              }
LAB_14b99ae3c:
              lVar11 = lStack_158;
              dStack_108 = *(double *)(lStack_158 + 0x2d0);
              dStack_100 = *(double *)(lStack_158 + 0x2d8);
              uStack_d8 = *(undefined8 *)(lStack_158 + 0x2c0);
              uStack_d0 = *(undefined8 *)(lStack_158 + 0x2c8);
              uStack_f8 = *(undefined8 *)(lStack_158 + 0x2e0);
              uStack_b0 = *(undefined8 *)(lStack_158 + 0x2e8);
              uStack_e8 = *(undefined8 *)(lStack_158 + 0x2b0);
              uStack_e0 = *(undefined8 *)(lStack_158 + 0x2b8);
              uStack_98 = *(undefined8 *)(lStack_158 + 0x300);
              uStack_90 = *(undefined8 *)(lStack_158 + 0x308);
              dVar5 = dStack_108 - (pAVar2->CanvasWorldLocation).field0_0x0._s_0.X;
              uStack_a8 = *(undefined8 *)(lStack_158 + 0x2f0);
              uStack_a0 = *(undefined8 *)(lStack_158 + 0x2f8);
              dVar21 = dStack_100 - (pAVar2->CanvasWorldLocation).field0_0x0._s_0.Y;
              dStack_c8 = dStack_108;
              dStack_c0 = dStack_100;
              uStack_b8 = uStack_f8;
              __libm_sse2_sincos_();
              dVar20 = extraout_XMM0_Qb * dVar5 - extraout_XMM0_Qa * dVar21;
              dVar5 = extraout_XMM0_Qb * dVar21 + extraout_XMM0_Qa * dVar5;
              dVar21 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar7,
                                        SUB84(dVar20,0) & uVar6) -
                       (pAVar2->CanvasWorldSize).field0_0x0._s_0.X;
              dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar7,
                                       SUB84(dVar5,0) & uVar6) -
                      (pAVar2->CanvasWorldSize).field0_0x0._s_0.Y;
              if (dVar21 <= 0.0) {
                dVar21 = 0.0;
              }
              if (dVar5 <= 0.0) {
                dVar5 = 0.0;
              }
              if (*(char *)(lVar11 + 0x260) == '\0') {
                auVar18._0_8_ = *(double *)(lVar11 + 0x250) * *(double *)(lVar11 + 0x250);
                auVar18._8_8_ = 0;
                auVar19._8_8_ = 0;
                auVar19._0_8_ =
                     *(double *)(lVar11 + 600) * *(double *)(lVar11 + 600) + auVar18._0_8_;
                auVar19 = sqrtpd(auVar18,auVar19);
                dVar20 = auVar19._0_8_;
              }
              else {
                dVar20 = (double)*(float *)(lVar11 + 0x264);
              }
              if ((float)SQRT(dVar21 * dVar21 + dVar5 * dVar5) < (float)dVar20) {
                if (((FStack_170.Data <= (FScriptContainerElement *)&lStack_158) &&
                    ((FScriptContainerElement *)&lStack_158 <
                     FStack_170.Data + (longlong)uStack_168._4_4_ * 8)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), lVar11 = lStack_158, bVar9)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if ((int)uStack_168 == uStack_168._4_4_) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&FStack_170,(int *)((longlong)&uStack_168 + 4));
                  uStack_168 = CONCAT44(uStack_168._4_4_,iVar10);
                  lVar11 = lStack_158;
                }
                lVar13 = (longlong)(int)uStack_168;
                uStack_168 = CONCAT44(uStack_168._4_4_,(int)uStack_168 + 1);
                *(longlong *)(FStack_170.Data + lVar13 * 8) = lVar11;
              }
            }
LAB_14b99b015:
            FVar16.Data = FVar16.Data + 8;
          }
        }
        FVar16.Data = FStack_170.Data;
        lVar11 = (longlong)(int)uStack_168;
        FStack_138.Data = (FScriptContainerElement *)0x0;
        iStack_130 = (int)uStack_168;
        if ((int)uStack_168 == 0) {
          iStack_12c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(int)uStack_168,0,&FStack_138,(int)uStack_168,&iStack_12c);
          memcpy(FStack_138.Data,FVar16.Data,lVar11 << 3);
        }
        if (iStack_130 < 1) {
          ADS_WorldDrawingBoard::PrepareForSimulate(pAVar2);
        }
        else {
          pAVar2->TimeFromLastDraw = 0.0;
          ADS_WorldDrawingBoard::PreSimulate(pAVar2);
          FVar16.Data = FStack_138.Data;
          pUVar3 = pAVar2->RTBrushDrawOn;
          if (pUVar3 != (UTextureRenderTarget2D *)0x0) {
            lVar11 = (longlong)iStack_130;
            TStack_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TStack_120.ArrayNum = iStack_130;
            if (iStack_130 == 0) {
              TStack_120.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iStack_130,0,&TStack_120.AllocatorInstance,iStack_130,
                         &TStack_120.ArrayMax);
              memcpy(TStack_120.AllocatorInstance.Data,FVar16.Data,lVar11 << 3);
            }
            ADS_WorldDrawingBoard::DrawBrushes(pAVar2,&TStack_120,pUVar3);
          }
          ADS_WorldDrawingBoard::PostSimulate(pAVar2);
          dVar5 = (pAVar2->CanvasWorldLocation).field0_0x0._s_0.X;
          dVar21 = (pAVar2->CanvasWorldLocation).field0_0x0._s_0.Y;
          pAVar2->PreviousCanvasWorldYaw = pAVar2->CanvasWorldYaw;
          (pAVar2->PreviousCanvasWorldLocation).field0_0x0._s_0.X = dVar5;
          (pAVar2->PreviousCanvasWorldLocation).field0_0x0._s_0.Y = dVar21;
          dVar5 = (pAVar2->CanvasWorldSize).field0_0x0._s_0.Y;
          (pAVar2->PreviousCanvasWorldSize).field0_0x0._s_0.X =
               (pAVar2->CanvasWorldSize).field0_0x0._s_0.X;
          (pAVar2->PreviousCanvasWorldSize).field0_0x0._s_0.Y = dVar5;
          dVar5 = (pAVar2->PixelWorldSize).field0_0x0._s_0.Y;
          (pAVar2->PreviousPixelWorldSize).field0_0x0._s_0.X =
               (pAVar2->PixelWorldSize).field0_0x0._s_0.X;
          (pAVar2->PreviousPixelWorldSize).field0_0x0._s_0.Y = dVar5;
          dVar5 = (pAVar2->RTSize).field0_0x0._s_0.Y;
          (pAVar2->PreviousRTSize).field0_0x0._s_0.X = (pAVar2->RTSize).field0_0x0._s_0.X;
          (pAVar2->PreviousRTSize).field0_0x0._s_0.Y = dVar5;
        }
        puVar15 = puStack_128;
        if (FStack_138.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_138.Data);
          puVar15 = puStack_128;
        }
      }
      uVar14 = (ulonglong)uStack_150;
      puVar17 = puVar17 + 1;
    }
    iVar8 = TStack_148.ArrayNum;
    uVar14 = (ulonglong)TStack_148.ArrayNum;
    pFVar1 = TStack_148.AllocatorInstance.Data + uVar14 * 8;
    FVar16.Data = TStack_148.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar8) {
        `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&uStack_160);
      }
      if (FVar16.Data == pFVar1) break;
      lVar11 = *(longlong *)FVar16.Data;
      *(char *)(lVar11 + 0x3fa) = *(char *)(lVar11 + 0x3f9);
      *(undefined8 *)(lVar11 + 0x310) = *(undefined8 *)(lVar11 + 0x2b0);
      *(undefined8 *)(lVar11 + 0x318) = *(undefined8 *)(lVar11 + 0x2b8);
      *(undefined8 *)(lVar11 + 800) = *(undefined8 *)(lVar11 + 0x2c0);
      *(undefined8 *)(lVar11 + 0x328) = *(undefined8 *)(lVar11 + 0x2c8);
      *(undefined8 *)(lVar11 + 0x330) = *(undefined8 *)(lVar11 + 0x2d0);
      *(undefined8 *)(lVar11 + 0x338) = *(undefined8 *)(lVar11 + 0x2d8);
      *(undefined8 *)(lVar11 + 0x340) = *(undefined8 *)(lVar11 + 0x2e0);
      *(undefined8 *)(lVar11 + 0x348) = *(undefined8 *)(lVar11 + 0x2e8);
      *(undefined8 *)(lVar11 + 0x350) = *(undefined8 *)(lVar11 + 0x2f0);
      *(undefined8 *)(lVar11 + 0x358) = *(undefined8 *)(lVar11 + 0x2f8);
      *(undefined8 *)(lVar11 + 0x360) = *(undefined8 *)(lVar11 + 0x300);
      *(undefined8 *)(lVar11 + 0x368) = *(undefined8 *)(lVar11 + 0x308);
      if (*(char *)(lVar11 + 0x3f9) != '\0') {
        *(undefined8 *)(lVar11 + 0x370) = *(undefined8 *)(lVar11 + 0x2b0);
        *(undefined8 *)(lVar11 + 0x378) = *(undefined8 *)(lVar11 + 0x2b8);
        *(undefined8 *)(lVar11 + 0x380) = *(undefined8 *)(lVar11 + 0x2c0);
        *(undefined8 *)(lVar11 + 0x388) = *(undefined8 *)(lVar11 + 0x2c8);
        *(undefined8 *)(lVar11 + 0x390) = *(undefined8 *)(lVar11 + 0x2d0);
        *(undefined8 *)(lVar11 + 0x398) = *(undefined8 *)(lVar11 + 0x2d8);
        *(undefined8 *)(lVar11 + 0x3a0) = *(undefined8 *)(lVar11 + 0x2e0);
        *(undefined8 *)(lVar11 + 0x3a8) = *(undefined8 *)(lVar11 + 0x2e8);
        *(undefined8 *)(lVar11 + 0x3b0) = *(undefined8 *)(lVar11 + 0x2f0);
        *(undefined8 *)(lVar11 + 0x3b8) = *(undefined8 *)(lVar11 + 0x2f8);
        *(undefined8 *)(lVar11 + 0x3c0) = *(undefined8 *)(lVar11 + 0x300);
        *(undefined8 *)(lVar11 + 0x3c8) = *(undefined8 *)(lVar11 + 0x308);
      }
      uVar14 = TStack_148._8_8_ & 0xffffffff;
      FVar16.Data = FVar16.Data + 8;
    }
    if (FStack_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_170.Data);
    }
  }
  else {
    while( true ) {
      puVar15 = puStack_128;
      if ((int)this->_padding_ != (int)uVar14) {
        `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStack_15f);
      }
      if (puVar17 == puVar15) break;
      pAVar2 = (ADS_WorldDrawingBoard *)*puVar17;
      ADS_WorldDrawingBoard::UpdateDrawingBoardState(pAVar2);
      ADS_WorldDrawingBoard::PrepareForSimulate(pAVar2);
      uVar14 = (ulonglong)uStack_150;
      puVar17 = puVar17 + 1;
    }
  }
  if (TStack_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_148.AllocatorInstance.Data);
  }
  return;
}

// UnregisterBrush @ 14b9c85f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractiveWorldSubsystem::UnregisterBrush
          (UDS_InteractiveWorldSubsystem *this,UDS_InteractBrush *param_1)

{
  FName local_res8;
  UDS_InteractBrush *local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::Remove(&this->Brushes,local_res10);
  if (4 < (byte)LogTemp._0_1_) {
    local_res8 = (FName)local_res10[0]->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UnregisterDrawingBoard @ 14b9c8670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractiveWorldSubsystem::UnregisterDrawingBoard
          (UDS_InteractiveWorldSubsystem *this,ADS_WorldDrawingBoard *param_1)

{
  FName local_res8;
  ADS_WorldDrawingBoard *local_res10 [3];
  FString local_18;
  
  local_res10[0] = param_1;
  TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->DrawingBoards,local_res10);
  if (4 < (byte)LogTemp._0_1_) {
    local_res8 = (FName)local_res10[0]->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

