// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 148431410

UClass * __cdecl USpecularProfile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpecularProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpecularProfile",
               &Z_Registration_Info_UClass_USpecularProfile.InnerSingleton,
               StaticRegisterNativesUSpecularProfile,0x458,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USpecularProfile>,
               InternalVTableHelperCtorCaller<USpecularProfile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpecularProfile.InnerSingleton;
}

// USpecularProfile @ 148444790

USpecularProfile * __thiscall
USpecularProfile::USpecularProfile(USpecularProfile *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USpecularProfile__6B_;
  FSpecularProfileStruct::FSpecularProfileStruct(&this->Settings);
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// USpecularProfile @ 1484447d0

USpecularProfile * __thiscall
USpecularProfile::USpecularProfile(USpecularProfile *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USpecularProfile__6B_;
  FSpecularProfileStruct::FSpecularProfileStruct(&this->Settings);
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~USpecularProfile @ 148446e50

void __thiscall USpecularProfile::~USpecularProfile(USpecularProfile *this)

{
  this->_padding_ = (longlong)&___7USpecularProfile__6B_;
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&(this->Settings).LightColor);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&(this->Settings).ViewColor);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14844a040

void __thiscall
`USpecularProfile::PostEditChangeProperty'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ESpecularProfileFormat EVar1;
  FTextureReference *pFVar2;
  USpecularProfile *pUVar3;
  int iVar4;
  FRuntimeCurveLinearColor local_840;
  FRuntimeCurveLinearColor local_638;
  UTexture2D *local_430;
  FSpecularProfileStruct local_428;
  
  EVar1 = *(ESpecularProfileFormat *)this;
  pFVar2 = *(FTextureReference **)((longlong)this + 0x428);
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
            (&local_840,(FRuntimeCurveLinearColor *)((longlong)this + 8));
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
            (&local_638,(FRuntimeCurveLinearColor *)((longlong)this + 0x210));
  local_430 = *(UTexture2D **)((longlong)this + 0x418);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_430 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_430);
  }
  pUVar3 = *(USpecularProfile **)((longlong)this + 0x420);
  local_428.Format = EVar1;
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_428.ViewColor,&local_840);
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_428.LightColor,&local_638);
  local_428.Texture.field0_0x0.DebugPtr = (TObjectPtr<UTexture2D>_u_0)local_430;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_430 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_430);
  }
  iVar4 = FSpecularProfileTextureManager::FindAllocationId
                    ((FSpecularProfileTextureManager *)&GSpecularProfileTextureManager,pUVar3);
  FSpecularProfileTextureManager::UpdateProfile
            ((FSpecularProfileTextureManager *)&GSpecularProfileTextureManager,iVar4,&local_428,
             pFVar2);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_638);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_840);
  return;
}

// BeginDestroy @ 1484563b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USpecularProfile::BeginDestroy(USpecularProfile *this)

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
  USpecularProfile *pUStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  USpecularProfile *pUStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USpecularProfile::BeginDestroy'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USpecularProfile::BeginDestroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pUStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_USpecularProfile::BeginDestroy_::__l2::TSTR_RemoveSpecularProfile535>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`USpecularProfile::BeginDestroy'::__l2::TSTR_RemoveSpecularProfile535>
             ::Get();
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

// GetPrivateStaticClass @ 14846da50

UClass * __cdecl USpecularProfile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpecularProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpecularProfile",
               &Z_Registration_Info_UClass_USpecularProfile.InnerSingleton,
               StaticRegisterNativesUSpecularProfile,0x458,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USpecularProfile>,
               InternalVTableHelperCtorCaller<USpecularProfile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpecularProfile.InnerSingleton;
}

// PostDuplicate @ 14847afa0

void __thiscall USpecularProfile::PostDuplicate(USpecularProfile *this,Type param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FGuid *pFVar4;
  FGuid local_18;
  
  (**(code **)(this->_padding_ + 0xf8))(this,param_1 == PIE);
  pFVar4 = FGuid::NewGuid(&local_18);
  uVar1 = pFVar4->B;
  uVar2 = pFVar4->C;
  uVar3 = pFVar4->D;
  (this->Guid).A = pFVar4->A;
  (this->Guid).B = uVar1;
  (this->Guid).C = uVar2;
  (this->Guid).D = uVar3;
  return;
}

// PostEditChangeProperty @ 14847b3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USpecularProfile::PostEditChangeProperty(USpecularProfile *this,FPropertyChangedEvent *param_1)

{
  bool bVar1;
  IRendererModule *pIVar2;
  code **ppcVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined1 auStack_8f8 [32];
  code *local_8d8 [2];
  code *local_8c8 [3];
  code **local_8b0;
  undefined1 local_8a8 [40];
  code **local_880;
  byte local_878;
  ESpecularProfileFormat local_868;
  FRuntimeCurveLinearColor local_860;
  FRuntimeCurveLinearColor local_658;
  UTexture2D *local_450;
  USpecularProfile *local_448;
  code *local_440;
  ESpecularProfileFormat local_438;
  FRuntimeCurveLinearColor local_430;
  FRuntimeCurveLinearColor local_228;
  UTexture2D *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_8f8;
  local_438 = (this->Settings).Format;
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_430,&(this->Settings).ViewColor);
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_228,&(this->Settings).LightColor);
  local_20 = (this->Settings).Texture.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_20);
  }
  pIVar2 = GetRendererModule();
  (**(code **)((longlong)*pIVar2 + 0x220))(pIVar2,1);
  pcVar6 = (code *)0x0;
  if (local_20 != (UTexture2D *)0x0) {
    pcVar6 = (code *)local_20->_padding_;
  }
  local_868 = local_438;
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_860,&local_430);
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&local_658,&local_228);
  local_450 = local_20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_20);
  }
  local_8d8[0] = (code *)0x0;
  local_448 = this;
  local_440 = pcVar6;
  ppcVar3 = FMemory::Malloc(0x438,8);
  *ppcVar3 = (code *)&UE::Core::Private::Function::
                      TFunction_OwnedObject<`USpecularProfile::PostEditChangeProperty'::`2'::<lambda_1>,1,1>
                      ::_vftable_;
  *(ESpecularProfileFormat *)(ppcVar3 + 1) = local_868;
  local_8b0 = ppcVar3;
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
            ((FRuntimeCurveLinearColor *)(ppcVar3 + 2),&local_860);
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor
            ((FRuntimeCurveLinearColor *)(ppcVar3 + 0x43),&local_658);
  ppcVar3[0x84] = (code *)local_450;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_450 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_450);
  }
  ppcVar3[0x85] = (code *)local_448;
  ppcVar3[0x86] = local_440;
  if (ppcVar3 + 1 != (code **)0x0) {
    local_8d8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`USpecularProfile::PostEditChangeProperty'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_USpecularProfile::PostEditChangeProperty_::__l2::TSTR_UpdateSpecularProfile556>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_8d8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_8a8._0_8_ = local_8d8[0];
    local_880 = local_8b0;
    local_8b0 = (code **)0x0;
    local_8a8._16_8_ = local_8c8[0];
    local_8a8._24_8_ = local_8c8[1];
    local_8a8._32_8_ = local_8c8[2];
    local_8d8[0] = (code *)0x0;
    local_878 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`USpecularProfile::PostEditChangeProperty'::__l2::TSTR_UpdateSpecularProfile556>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_8a8,pFVar4);
    uVar5 = (ulonglong)local_878;
    if (2 < uVar5) {
      bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar1) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_8a8._0_8_ != (code *)0x0) {
        ppcVar3 = (code **)(local_8a8 + 0x10);
        if (local_880 != (code **)0x0) {
          ppcVar3 = local_880;
        }
        (**(code **)(*ppcVar3 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_8a8);
    }
  }
  if (local_8d8[0] != (code *)0x0) {
    ppcVar3 = local_8d8 + 2;
    if (local_8b0 != (code **)0x0) {
      ppcVar3 = local_8b0;
    }
    (**(code **)(*ppcVar3 + 0x10))();
  }
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_658);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_860);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_228);
  FRuntimeCurveLinearColor::~FRuntimeCurveLinearColor(&local_430);
  return;
}

// StaticRegisterNativesUSpecularProfile @ 1484960a0

void __cdecl USpecularProfile::StaticRegisterNativesUSpecularProfile(void)

{
  return;
}

