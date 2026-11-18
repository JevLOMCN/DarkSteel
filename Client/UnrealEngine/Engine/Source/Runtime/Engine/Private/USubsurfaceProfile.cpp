// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 148430540

UClass * __cdecl USubsurfaceProfile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubsurfaceProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SubsurfaceProfile",
               &Z_Registration_Info_UClass_USubsurfaceProfile.InnerSingleton,
               StaticRegisterNativesUSubsurfaceProfile,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubsurfaceProfile>,
               InternalVTableHelperCtorCaller<USubsurfaceProfile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubsurfaceProfile.InnerSingleton;
}

// USubsurfaceProfile @ 148444810

USubsurfaceProfile * __thiscall
USubsurfaceProfile::USubsurfaceProfile(USubsurfaceProfile *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USubsurfaceProfile__6B_;
  FSubsurfaceProfileStruct::FSubsurfaceProfileStruct(&this->Settings);
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// USubsurfaceProfile @ 148444850

USubsurfaceProfile * __thiscall
USubsurfaceProfile::USubsurfaceProfile(USubsurfaceProfile *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USubsurfaceProfile__6B_;
  FSubsurfaceProfileStruct::FSubsurfaceProfileStruct(&this->Settings);
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  return this;
}

// ~USubsurfaceProfile @ 148446e90

void __thiscall USubsurfaceProfile::~USubsurfaceProfile(USubsurfaceProfile *this)

{
  this->_padding_ = (longlong)&___7USubsurfaceProfile__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14844a160

void __thiscall
`USubsurfaceProfile::PostEditChangeProperty'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  FLinearColor_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = *(undefined8 *)this;
  uVar2 = *(undefined8 *)((longlong)this + 8);
  uVar3 = *(undefined8 *)((longlong)this + 0x10);
  uVar4 = *(undefined8 *)((longlong)this + 0x18);
  uVar5 = *(undefined8 *)((longlong)this + 0x20);
  uVar6 = *(undefined8 *)((longlong)this + 0x28);
  uVar7 = *(undefined8 *)((longlong)this + 0x30);
  uVar8 = *(undefined8 *)((longlong)this + 0x38);
  uVar9 = *(undefined8 *)((longlong)this + 0x40);
  uVar10 = *(undefined8 *)((longlong)this + 0x48);
  uVar11 = *(undefined8 *)((longlong)this + 0x50);
  uVar12 = *(undefined8 *)((longlong)this + 0x58);
  uVar13 = *(undefined8 *)((longlong)this + 0x60);
  uVar14 = *(undefined8 *)((longlong)this + 0x68);
  uVar15 = *(undefined8 *)((longlong)this + 0x80);
  uVar16 = *(undefined8 *)((longlong)this + 0x88);
  uVar17 = *(undefined8 *)((longlong)this + 0x70);
  uVar18 = *(undefined8 *)((longlong)this + 0x78);
  uVar19 = *(undefined8 *)((longlong)this + 0x90);
  uVar20 = *(undefined8 *)((longlong)this + 0x98);
  iVar21 = FSubsurfaceProfileTexture::FindAllocationId
                     ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,
                      *(USubsurfaceProfile **)((longlong)this + 0xa0));
  local_a8._0_8_ = uVar1;
  local_a8._8_8_ = uVar2;
  local_98 = uVar3;
  uStack_90 = uVar4;
  local_88 = uVar5;
  uStack_80 = uVar6;
  local_78 = uVar7;
  uStack_70 = uVar8;
  local_68 = uVar9;
  uStack_60 = uVar10;
  local_58 = uVar11;
  uStack_50 = uVar12;
  local_48 = uVar13;
  uStack_40 = uVar14;
  local_38 = uVar17;
  uStack_30 = uVar18;
  local_28 = uVar15;
  uStack_20 = uVar16;
  local_18 = uVar19;
  uStack_10 = uVar20;
  FSubsurfaceProfileTexture::UpdateProfile
            ((FSubsurfaceProfileTexture *)&GSubsurfaceProfileTextureObject,iVar21,
             (FSubsurfaceProfileStruct *)&local_a8._s_0);
  return;
}

// BeginDestroy @ 148456520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USubsurfaceProfile::BeginDestroy(USubsurfaceProfile *this)

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
  USubsurfaceProfile *pUStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  USubsurfaceProfile *pUStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubsurfaceProfile::BeginDestroy'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubsurfaceProfile::BeginDestroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pUStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_USubsurfaceProfile::BeginDestroy_::__l2::TSTR_RemoveSubsurfaceProfile818>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
             TRenderCommandTag<`USubsurfaceProfile::BeginDestroy'::__l2::TSTR_RemoveSubsurfaceProfile818>
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

// GetPrivateStaticClass @ 14846db00

UClass * __cdecl USubsurfaceProfile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubsurfaceProfile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SubsurfaceProfile",
               &Z_Registration_Info_UClass_USubsurfaceProfile.InnerSingleton,
               StaticRegisterNativesUSubsurfaceProfile,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubsurfaceProfile>,
               InternalVTableHelperCtorCaller<USubsurfaceProfile>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubsurfaceProfile.InnerSingleton;
}

// PostDuplicate @ 14847afe0

void __thiscall USubsurfaceProfile::PostDuplicate(USubsurfaceProfile *this,Type param_1)

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

// PostEditChangeProperty @ 14847b6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USubsurfaceProfile::PostEditChangeProperty(USubsurfaceProfile *this,FPropertyChangedEvent *param_1)

{
  code *pcVar1;
  bool bVar2;
  IRendererModule *pIVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStack_1f8 [32];
  code *local_1d8;
  code *pcStack_1d0;
  code *local_1c8;
  code *pcStack_1c0;
  code *local_1b8;
  code *pcStack_1b0;
  code *local_1a8;
  code *pcStack_1a0;
  code *local_198;
  code *pcStack_190;
  code *local_188;
  code *pcStack_180;
  code *local_178;
  code *pcStack_170;
  code *local_168;
  code *pcStack_160;
  code *local_158;
  code *pcStack_150;
  code *local_148;
  code *pcStack_140;
  USubsurfaceProfile *local_138;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  code *pcStack_110;
  code *local_108;
  code *pcStack_100;
  code *local_f8;
  code *pcStack_f0;
  code *local_e8;
  code *pcStack_e0;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  code *pcStack_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_128 = *(code **)&(this->Settings).SurfaceAlbedo.field0_0x0;
  pcStack_120 = *(code **)((longlong)&(this->Settings).SurfaceAlbedo.field0_0x0 + 8);
  local_118 = *(code **)&(this->Settings).MeanFreePathColor.field0_0x0;
  pcStack_110 = *(code **)((longlong)&(this->Settings).MeanFreePathColor.field0_0x0 + 8);
  local_108 = *(code **)&(this->Settings).MeanFreePathDistance;
  pcStack_100 = *(code **)&(this->Settings).bEnableBurley;
  local_f8 = *(code **)((longlong)&(this->Settings).Tint.field0_0x0 + 4);
  pcStack_f0 = *(code **)((longlong)&(this->Settings).Tint.field0_0x0 + 0xc);
  local_e8 = *(code **)&(this->Settings).SubsurfaceColor.field0_0x0;
  pcStack_e0 = *(code **)((longlong)&(this->Settings).SubsurfaceColor.field0_0x0 + 8);
  local_d8 = *(code **)&(this->Settings).FalloffColor.field0_0x0;
  pcStack_d0 = *(code **)((longlong)&(this->Settings).FalloffColor.field0_0x0 + 8);
  local_c8 = *(code **)&(this->Settings).BoundaryColorBleed.field0_0x0;
  pcStack_c0 = *(code **)((longlong)&(this->Settings).BoundaryColorBleed.field0_0x0 + 8);
  local_a8 = *(code **)&(this->Settings).IOR;
  pcStack_a0 = *(code **)&(this->Settings).Roughness1;
  local_b8 = *(code **)&(this->Settings).Implementation;
  pcStack_b0 = *(code **)&(this->Settings).NormalScale;
  local_98 = *(code **)&(this->Settings).TransmissionTintColor.field0_0x0;
  pcStack_90 = *(code **)((longlong)&(this->Settings).TransmissionTintColor.field0_0x0 + 8);
  pIVar3 = GetRendererModule();
  (**(code **)((longlong)*pIVar3 + 0x220))(pIVar3,1);
  local_88[0] = (code *)0x0;
  local_1d8 = local_128;
  pcStack_1d0 = pcStack_120;
  local_1c8 = local_118;
  pcStack_1c0 = pcStack_110;
  local_1b8 = local_108;
  pcStack_1b0 = pcStack_100;
  local_1a8 = local_f8;
  pcStack_1a0 = pcStack_f0;
  local_198 = local_e8;
  pcStack_190 = pcStack_e0;
  local_188 = local_d8;
  pcStack_180 = pcStack_d0;
  local_178 = local_c8;
  pcStack_170 = pcStack_c0;
  local_168 = local_b8;
  pcStack_160 = pcStack_b0;
  local_158 = local_a8;
  pcStack_150 = pcStack_a0;
  local_148 = local_98;
  pcStack_140 = pcStack_90;
  local_138 = this;
  local_60 = FMemory::Malloc(0xb0,8);
  *local_60 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`USubsurfaceProfile::PostEditChangeProperty'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_60[1] = local_1d8;
  local_60[2] = pcStack_1d0;
  local_60[3] = local_1c8;
  local_60[4] = pcStack_1c0;
  local_60[5] = local_1b8;
  local_60[6] = pcStack_1b0;
  local_60[7] = local_1a8;
  local_60[8] = pcStack_1a0;
  local_60[9] = local_198;
  local_60[10] = pcStack_190;
  local_60[0xb] = local_188;
  local_60[0xc] = pcStack_180;
  local_60[0xd] = local_178;
  local_60[0xe] = pcStack_170;
  local_60[0xf] = local_168;
  local_60[0x10] = pcStack_160;
  local_60[0x11] = local_158;
  local_60[0x12] = pcStack_150;
  local_60[0x13] = local_148;
  local_60[0x14] = pcStack_140;
  local_60[0x15] = (code *)local_138;
  if (local_60 + 1 != (code **)0x0) {
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USubsurfaceProfile::PostEditChangeProperty'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_USubsurfaceProfile::PostEditChangeProperty_::__l2::TSTR_UpdateSubsurfaceProfile832>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_60 = (code **)0x0;
    local_58._16_8_ = local_78[0];
    local_58._24_8_ = local_78[1];
    local_58._32_8_ = local_78[2];
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`USubsurfaceProfile::PostEditChangeProperty'::__l2::TSTR_UpdateSubsurfaceProfile832>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar6 = (ulonglong)local_28;
    if (2 < uVar6) {
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
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        ppcVar5 = (code **)(local_58 + 0x10);
        if (local_30 != (code **)0x0) {
          ppcVar5 = local_30;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    ppcVar5 = local_88 + 2;
    if (local_60 != (code **)0x0) {
      ppcVar5 = local_60;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  return;
}

// PostLoad @ 14847b9f0

void __thiscall USubsurfaceProfile::PostLoad(USubsurfaceProfile *this)

{
  UObject::PostLoad((UObject *)this);
  UpgradeSubsurfaceProfileParameters(&this->Settings);
  return;
}

// Serialize @ 148491980

void __thiscall USubsurfaceProfile::Serialize(USubsurfaceProfile *this,FArchive *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FGuid *pFVar5;
  FString local_38;
  TStringView<wchar_t> local_28;
  FGuid local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if ((iVar4 < 0xa9) && ((param_1->field_0x28 & 1) != 0)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
    local_28.Size = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      local_28.Size = 0;
    }
    local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    pFVar5 = FGuid::NewDeterministicGuid(&local_18,&local_28,0x7b);
    uVar1 = pFVar5->B;
    uVar2 = pFVar5->C;
    uVar3 = pFVar5->D;
    (this->Guid).A = pFVar5->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Serialize @ 148491a40

void __thiscall
USubsurfaceProfile::Serialize(USubsurfaceProfile *this,FStructuredArchiveRecord param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FArchiveState *this_00;
  FGuid *pFVar5;
  FSlotBase local_res10 [3];
  FString local_38;
  TStringView<wchar_t> local_28;
  FGuid local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  iVar4 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if ((iVar4 < 0xa9) && (this_00->ArIsLoading != 0)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_38,(UObject *)0x0);
    local_28.Size = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      local_28.Size = 0;
    }
    local_28.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
    pFVar5 = FGuid::NewDeterministicGuid(&local_18,&local_28,0x7b);
    uVar1 = pFVar5->B;
    uVar2 = pFVar5->C;
    uVar3 = pFVar5->D;
    (this->Guid).A = pFVar5->A;
    (this->Guid).B = uVar1;
    (this->Guid).C = uVar2;
    (this->Guid).D = uVar3;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUSubsurfaceProfile @ 1484960b0

void __cdecl USubsurfaceProfile::StaticRegisterNativesUSubsurfaceProfile(void)

{
  return;
}

