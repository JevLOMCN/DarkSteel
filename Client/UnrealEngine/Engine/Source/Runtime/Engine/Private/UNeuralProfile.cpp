// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1484317a0

UClass * __cdecl UNeuralProfile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNeuralProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NeuralProfile",
               &Z_Registration_Info_UClass_UNeuralProfile.InnerSingleton,
               StaticRegisterNativesUNeuralProfile,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNeuralProfile>,InternalVTableHelperCtorCaller<UNeuralProfile>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNeuralProfile.InnerSingleton;
}

// UNeuralProfile @ 148444590

UNeuralProfile * __thiscall
UNeuralProfile::UNeuralProfile(UNeuralProfile *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNeuralProfile__6B_;
  (this->Settings).NNEModelData.field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined8 *)&(this->Settings).InputDimension.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Settings).InputDimension.field0_0x0 + 8) = 0;
  (this->Settings).TileSize = OneByOne;
  *(undefined8 *)&(this->Settings).OutputDimension.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Settings).OutputDimension.field0_0x0 + 8) = 0;
  (this->Settings).BatchSizeOverride = 1;
  (this->Settings).TileOverlap.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Settings).TileOverlapResolveType = Ignore;
  (this->Settings).InputFormat = Type32;
  (this->Settings).OutputFormat = Type32;
  (this->Settings).RuntimeType = NNERuntimeORTDml;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// UNeuralProfile @ 148444600

UNeuralProfile * __thiscall
UNeuralProfile::UNeuralProfile(UNeuralProfile *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNeuralProfile__6B_;
  (this->Settings).NNEModelData.field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined8 *)&(this->Settings).InputDimension.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Settings).InputDimension.field0_0x0 + 8) = 0;
  (this->Settings).TileSize = OneByOne;
  *(undefined8 *)&(this->Settings).OutputDimension.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->Settings).OutputDimension.field0_0x0 + 8) = 0;
  (this->Settings).BatchSizeOverride = 1;
  (this->Settings).TileOverlap.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Settings).TileOverlapResolveType = Ignore;
  (this->Settings).InputFormat = Type32;
  (this->Settings).OutputFormat = Type32;
  (this->Settings).RuntimeType = NNERuntimeORTDml;
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~UNeuralProfile @ 148446de0

void __thiscall UNeuralProfile::~UNeuralProfile(UNeuralProfile *this)

{
  this->_padding_ = (longlong)&___7UNeuralProfile__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14844aab0

void __thiscall
`UNeuralProfile::PostEditChangeProperty'::__l5::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  TUniquePtr<NeuralProfile::INeuralProfileManager,TDefaultDelete<NeuralProfile::INeuralProfileManager>_>
  TVar4;
  FString *pFVar5;
  undefined8 *puVar6;
  FString local_28;
  FString local_18;
  
  TVar4.Ptr = GNeuralProfileManager.Ptr;
  pcVar1 = *(code **)((longlong)*GNeuralProfileManager.Ptr + 0x38);
  pFVar5 = ::FString::FString(&local_28,
                              (wchar_t *)
                              (&PTR_u_NNERuntimeORTDm_151ac7040)
                              [*(byte *)(*(longlong *)this + 0x2a)]);
  puVar6 = (undefined8 *)
           (*pcVar1)(TVar4.Ptr,&local_18,*(undefined8 *)(*(longlong *)this + 0x30),pFVar5);
  uVar3 = puVar6[1];
  lVar2 = *(longlong *)this;
  *(undefined8 *)(lVar2 + 0x38) = *puVar6;
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  TVar4 = GNeuralProfileManager;
  pcVar1 = *(code **)((longlong)*GNeuralProfileManager.Ptr + 0x40);
  pFVar5 = ::FString::FString(&local_18,
                              (wchar_t *)
                              (&PTR_u_NNERuntimeORTDm_151ac7040)
                              [*(byte *)(*(longlong *)this + 0x2a)]);
  puVar6 = (undefined8 *)
           (*pcVar1)(TVar4.Ptr,&local_28,*(undefined8 *)(*(longlong *)this + 0x30),pFVar5);
  uVar3 = puVar6[1];
  lVar2 = *(longlong *)this;
  *(undefined8 *)(lVar2 + 0x48) = *puVar6;
  *(undefined8 *)(lVar2 + 0x50) = uVar3;
  return;
}

// BeginDestroy @ 148456240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UNeuralProfile::BeginDestroy(UNeuralProfile *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  UNeuralProfile *pUStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UNeuralProfile *pUStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNeuralProfile::BeginDestroy'::`2'::<lambda_1>,1,0>::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNeuralProfile::BeginDestroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pUStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNeuralProfile::BeginDestroy_::__l2::TSTR_RemoveNeuralProfile241>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pUStack_40 = pUStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UNeuralProfile::BeginDestroy'::__l2::TSTR_RemoveNeuralProfile241>::
             Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14846d820

UClass * __cdecl UNeuralProfile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNeuralProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NeuralProfile",
               &Z_Registration_Info_UClass_UNeuralProfile.InnerSingleton,
               StaticRegisterNativesUNeuralProfile,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNeuralProfile>,InternalVTableHelperCtorCaller<UNeuralProfile>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNeuralProfile.InnerSingleton;
}

// PostEditChangeProperty @ 14847b020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNeuralProfile::PostEditChangeProperty(UNeuralProfile *this,FPropertyChangedEvent *param_1)

{
  ENeuralProfileFormat EVar1;
  ENeuralProfileFormat EVar2;
  ENeuralProfileRuntimeType EVar3;
  int iVar4;
  TObjectPtr<UObject>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  code *pcVar7;
  bool bVar8;
  IRendererModule *pIVar9;
  code **ppcVar10;
  FRenderCommandList *pFVar11;
  FCommandList *pFVar12;
  FRenderCommandTag *pFVar13;
  undefined ***pppuVar14;
  ulonglong uVar15;
  undefined1 auStack_208 [32];
  ENeuralModelTileType local_1e8;
  ETileOverlapResolveType local_1e7;
  FNeuralProfileStruct local_1e0;
  UNeuralProfile *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  code *local_118 [2];
  code *local_108 [3];
  code **local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  UNeuralProfile *pUStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [40];
  code **local_90;
  byte local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  UNeuralProfile *pUStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  EVar1 = (this->Settings).InputFormat;
  EVar2 = (this->Settings).OutputFormat;
  EVar3 = (this->Settings).RuntimeType;
  TVar5 = (TObjectPtr<UObject>_u_0)(this->Settings).NNEModelData.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar5.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar5.DebugPtr);
  }
  local_190 = *(undefined8 *)&(this->Settings).InputDimension.field0_0x0;
  uStack_188 = *(undefined8 *)((longlong)&(this->Settings).InputDimension.field0_0x0 + 8);
  local_1e8 = (this->Settings).TileSize;
  iVar4 = (this->Settings).BatchSizeOverride;
  TVar6 = (this->Settings).TileOverlap.field0_0x0;
  local_1e7 = (this->Settings).TileOverlapResolveType;
  local_180 = *(undefined8 *)&(this->Settings).OutputDimension.field0_0x0;
  uStack_178 = *(undefined8 *)((longlong)&(this->Settings).OutputDimension.field0_0x0 + 8);
  local_158 = local_190;
  uStack_150 = uStack_188;
  local_148 = local_180;
  uStack_140 = uStack_178;
  pIVar9 = GetRendererModule();
  (**(code **)((longlong)*pIVar9 + 0x220))(pIVar9,1);
  local_1e0.InputFormat = EVar1;
  local_1e0.OutputFormat = EVar2;
  local_1e0.RuntimeType = EVar3;
  local_1e0.NNEModelData.field0_0x0 = TVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar5.DebugPtr);
  }
  local_1e0.TileSize = local_1e8;
  local_1e0.TileOverlapResolveType = local_1e7;
  local_1e0.InputDimension.field0_0x0._0_8_ = local_190;
  local_1e0.InputDimension.field0_0x0._8_8_ = uStack_188;
  local_1e0.OutputDimension.field0_0x0._0_8_ = local_180;
  local_1e0.OutputDimension.field0_0x0._8_8_ = uStack_178;
  local_118[0] = (code *)0x0;
  local_1e0.BatchSizeOverride = iVar4;
  local_1e0.TileOverlap.field0_0x0 = TVar6;
  local_198 = this;
  ppcVar10 = FMemory::Malloc(0x58,8);
  *ppcVar10 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_f0 = ppcVar10;
  FNeuralProfileStruct::FNeuralProfileStruct((FNeuralProfileStruct *)(ppcVar10 + 1),&local_1e0);
  ppcVar10[10] = (code *)this;
  if ((FNeuralProfileStruct *)(ppcVar10 + 1) != (FNeuralProfileStruct *)0x0) {
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UNeuralProfile::PostEditChangeProperty'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
  }
  pFVar11 = FRenderCommandList::GetInstanceTLS();
  if (pFVar11 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNeuralProfile::PostEditChangeProperty_::__l2::TSTR_UpdateNeuralProfile256>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
  }
  else {
    pFVar12 = FRenderCommandList::GetRenderThread(pFVar11);
    local_b8._0_8_ = local_118[0];
    local_90 = local_f0;
    local_f0 = (code **)0x0;
    local_b8._16_8_ = local_108[0];
    local_b8._24_8_ = local_108[1];
    local_b8._32_8_ = local_108[2];
    local_118[0] = (code *)0x0;
    local_88 = 2;
    pFVar13 = (FRenderCommandTag *)
              TRenderCommandTag<`UNeuralProfile::PostEditChangeProperty'::__l2::TSTR_UpdateNeuralProfile256>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar12,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_b8,pFVar13);
    uVar15 = (ulonglong)local_88;
    if (2 < uVar15) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_b8._0_8_ != (code *)0x0) {
        ppcVar10 = (code **)(local_b8 + 0x10);
        if (local_90 != (code **)0x0) {
          ppcVar10 = local_90;
        }
        (**(code **)(*ppcVar10 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(local_b8);
    }
  }
  if (local_118[0] != (code *)0x0) {
    ppcVar10 = local_118 + 2;
    if (local_f0 != (code **)0x0) {
      ppcVar10 = local_f0;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  if (GNeuralProfileManager.Ptr != (INeuralProfileManager *)0x0) {
    local_c0 = (undefined ***)0x0;
    local_d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNeuralProfile::PostEditChangeProperty'::`5'::<lambda_2>,1,0>
                ::_vftable_;
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNeuralProfile::PostEditChangeProperty'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
                  ::Call;
    pUStack_d0 = this;
    pFVar11 = FRenderCommandList::GetInstanceTLS();
    if (pFVar11 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNeuralProfile::PostEditChangeProperty_::__l5::TSTR_UpdateDimensionParams265>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
    }
    else {
      pFVar12 = FRenderCommandList::GetRenderThread(pFVar11);
      local_78._0_8_ = local_e8[0];
      local_50 = local_c0;
      local_68 = local_d8;
      pUStack_60 = pUStack_d0;
      local_58 = local_c8;
      local_e8[0] = (code *)0x0;
      local_48 = 2;
      pFVar13 = (FRenderCommandTag *)
                TRenderCommandTag<`UNeuralProfile::PostEditChangeProperty'::__l5::TSTR_UpdateDimensionParams265>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar12,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar13);
      uVar15 = (ulonglong)local_48;
      if (2 < uVar15) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar14 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar14 = local_50;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar15])(local_78);
      }
    }
    if (local_e8[0] != (code *)0x0) {
      pppuVar14 = &local_d8;
      if (local_c0 != (undefined ***)0x0) {
        pppuVar14 = local_c0;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  return;
}

// StaticRegisterNativesUNeuralProfile @ 148496070

void __cdecl UNeuralProfile::StaticRegisterNativesUNeuralProfile(void)

{
  return;
}

