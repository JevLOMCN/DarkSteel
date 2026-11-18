// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 9

// GetShadowIndirectOnly @ 145ee6180

bool __thiscall UStaticMeshComponent::GetShadowIndirectOnly(UStaticMeshComponent *this)

{
  return (this->LightmassSettings).bShadowIndirectOnly;
}

// GetStreamingScale @ 145ee6270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall UStaticMeshComponent::GetStreamingScale(UStaticMeshComponent *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar8 [16];
  
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)((longlong)&this->_padding_ + 4);
  auVar8._0_8_ = CONCAT44(uVar9,uVar7);
  auVar8._8_4_ = _UNK_15061cc88 & (uint)this->_padding_;
  auVar8._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)this->_padding_;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_ & *(uint *)((longlong)&this->_padding_ + 4);
  uVar12 = _UNK_15061cc88 & (uint)this->_padding_;
  uVar13 = _UNK_15061cc8c & *(uint *)((longlong)&this->_padding_ + 4);
  auVar5._12_4_ = uVar11;
  auVar5._8_4_ = uVar10;
  auVar5._0_8_ = auVar8._0_8_;
  auVar4._4_4_ = uVar13;
  auVar4._0_4_ = uVar12;
  auVar3._4_4_ = uVar11;
  auVar3._0_4_ = uVar10;
  auVar3._8_4_ = uVar12;
  auVar3._12_4_ = uVar13;
  auVar4._8_4_ = uVar7;
  auVar4._12_4_ = uVar9;
  auVar4 = maxpd(auVar3,auVar4);
  auVar5 = maxpd(auVar4,auVar5);
  auVar2._4_4_ = uVar11;
  auVar2._0_4_ = uVar10;
  auVar2._8_4_ = uVar12;
  auVar2._12_4_ = uVar13;
  auVar1._4_4_ = uVar13;
  auVar1._0_4_ = uVar12;
  auVar4 = blendpd(auVar2,auVar8,2);
  auVar6._8_4_ = auVar8._8_4_;
  auVar6._0_8_ = auVar8._0_8_;
  auVar6._12_4_ = auVar8._12_4_;
  auVar4 = maxpd(auVar6,auVar4);
  auVar1._8_4_ = auVar8._8_4_;
  auVar1._12_4_ = auVar8._12_4_;
  maxpd(auVar4,auVar1);
  return (float)auVar5._0_8_;
}

// IsNavigationRelevant`adjustor{592}' @ 145ee78c0

/* [thunk]:public: virtual bool __cdecl UStaticMeshComponent::IsNavigationRelevant`adjustor{592}'
   (void)const __ptr64 */

bool __thiscall
UStaticMeshComponent::IsNavigationRelevant_adjustor_592__(UStaticMeshComponent *this)

{
  bool bVar1;
  
  bVar1 = IsNavigationRelevant((UStaticMeshComponent *)&this[-1]._padding_);
  return bVar1;
}

// OnGetNaniteResources @ 145ee7db0

TDelegate<Nanite::FResources_const_*___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UStaticMeshComponent::OnGetNaniteResources(UStaticMeshComponent *this)

{
  return &this->OnGetNaniteResourcesEvent;
}

// OnGetNaniteResources @ 145ee7dc0

TDelegate<Nanite::FResources_const_*___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UStaticMeshComponent::OnGetNaniteResources(UStaticMeshComponent *this)

{
  return &this->OnGetNaniteResourcesEvent;
}

// ShouldCollideWhenPlacing @ 145eeb9c0

bool __thiscall UStaticMeshComponent::ShouldCollideWhenPlacing(UStaticMeshComponent *this)

{
  return false;
}

// StaticClass @ 145eecf30

UClass * __cdecl UStaticMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshComponent",
               &Z_Registration_Info_UClass_UStaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUStaticMeshComponent,0x650,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_UStaticMeshComponent,L"Engine",InternalConstructor<UStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UStaticMeshComponent>,aFStackX_8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshComponent.InnerSingleton;
}

// SupportsStaticLighting @ 145eed280

bool __thiscall UStaticMeshComponent::SupportsStaticLighting(UStaticMeshComponent *this)

{
  return true;
}

// SupportsWorldPositionOffsetVelocity @ 145eed2f0

bool __thiscall
UStaticMeshComponent::SupportsWorldPositionOffsetVelocity(UStaticMeshComponent *this)

{
  return this->bWorldPositionOffsetWritesVelocity;
}

