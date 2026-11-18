// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 10

// CommitMaterialSetUpdate @ 149698bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPrimitiveComponentTarget::CommitMaterialSetUpdate
          (FPrimitiveComponentTarget *this,FComponentMaterialSet *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\ComponentSourceInterfaces.cpp"
                     ,0x79,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetMaterial @ 1496a32e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMaterialInterface * __thiscall
FPrimitiveComponentTarget::GetMaterial(FPrimitiveComponentTarget *this,int param_1)

{
  char cVar1;
  UMaterialInterface *pUVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001496a330c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UMaterialInterface *)
             (**(code **)(*(longlong *)this->Component + 0x690))(this->Component,param_1);
    return pUVar2;
  }
  return (UMaterialInterface *)0x0;
}

// GetMaterialSet @ 1496a35d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPrimitiveComponentTarget::GetMaterialSet
          (FPrimitiveComponentTarget *this,FComponentMaterialSet *param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined7 in_register_00000081;
  
  cVar3 = (**(code **)(this->_padding_ + 8))(this,param_1,CONCAT71(in_register_00000081,param_2));
  if (cVar3 != '\0') {
    uVar5 = (**(code **)(*(longlong *)this->Component + 0x810))();
    iVar7 = (param_1->Materials).ArrayNum;
    piVar1 = &(param_1->Materials).ArrayNum;
    lVar11 = (longlong)(int)uVar5;
    if (iVar7 < (int)uVar5) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar5 - iVar7,(ForAnyElementType *)param_1,piVar1,
                         &(param_1->Materials).ArrayMax);
      memset((param_1->Materials).AllocatorInstance.Data + (longlong)iVar6 * 8,0,
             (longlong)(int)(uVar5 - iVar7) << 3);
    }
    else {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if ((int)uVar5 < iVar7) {
        uVar9 = iVar7 - uVar5;
        if (((int)(uVar9 | uVar5) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (uVar9 != 0) {
          _Dst = (param_1->Materials).AllocatorInstance.Data + lVar11 * 8;
          iVar7 = (*piVar1 - uVar9) - uVar5;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar9 * 8,(longlong)iVar7 << 3);
          }
          *piVar1 = *piVar1 - uVar9;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)param_1,*piVar1,&(param_1->Materials).ArrayMax);
        }
      }
    }
    uVar5 = 0;
    if (0 < lVar11) {
      lVar10 = 0;
      do {
        uVar8 = (**(code **)(*(longlong *)this->Component + 0x690))(this->Component,uVar5);
        uVar9 = 0;
        if ((int)uVar5 < *piVar1) {
          uVar9 = ~uVar5 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = uVar5 + 1;
        *(undefined8 *)((param_1->Materials).AllocatorInstance.Data + lVar10 * 8) = uVar8;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar11);
    }
  }
  return;
}

// GetNumMaterials @ 1496a3890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall FPrimitiveComponentTarget::GetNumMaterials(FPrimitiveComponentTarget *this)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001496a38af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(longlong *)this->Component + 0x810))();
    return iVar2;
  }
  return 0;
}

// GetOwnerActor @ 1496a3a40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

AActor * __thiscall FPrimitiveComponentTarget::GetOwnerActor(FPrimitiveComponentTarget *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 8))();
  if (cVar1 != '\0') {
    return *(AActor **)&this->Component->field_0xa8;
  }
  return (AActor *)0x0;
}

// GetOwnerComponent @ 1496a3a80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UPrimitiveComponent * __thiscall
FPrimitiveComponentTarget::GetOwnerComponent(FPrimitiveComponentTarget *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 8))();
  if (cVar1 != '\0') {
    return this->Component;
  }
  return (UPrimitiveComponent *)0x0;
}

// GetWorldTransform @ 1496ab390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTransform<double> * __thiscall
FPrimitiveComponentTarget::GetWorldTransform
          (FPrimitiveComponentTarget *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  TTransform<double> *pTVar6;
  
  cVar5 = (**(code **)(this->_padding_ + 8))();
  if (cVar5 == '\0') {
    pTVar6 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar6 = (TTransform<double> *)&this->Component->field_0x1f0;
  }
  dVar1 = (pTVar6->Rotation).XY.m128d_f64[1];
  dVar2 = (pTVar6->Rotation).ZW.m128d_f64[0];
  dVar3 = (pTVar6->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar6->Translation).XY.m128d_f64[0];
  dVar4 = (pTVar6->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (pTVar6->Translation).ZW.m128d_f64[0];
  dVar3 = (pTVar6->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (pTVar6->Scale3D).XY.m128d_f64[0];
  dVar4 = (pTVar6->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (pTVar6->Scale3D).ZW.m128d_f64[0];
  dVar3 = (pTVar6->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// HitTest @ 1496aba20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FPrimitiveComponentTarget::HitTest
          (FPrimitiveComponentTarget *this,TRay<double> *param_1,FHitResult *param_2)

{
  double dVar1;
  double dVar2;
  UPrimitiveComponent *pUVar3;
  code *pcVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:___cdecl__public:_bool___cdecl_FPrimitiveComponentTarget::HitTest(UE::Math::TRay<double>_const_&,FHitResult_&)const_::_3_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
  FVar12;
  bool bVar13;
  undefined1 auStackY_1b8 [32];
  TStatId local_158;
  FName local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  FCollisionQueryParams local_108;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar13 = false;
  local_158.StatIdPtr = local_158.StatIdPtr & 0xffffffff00000000;
  dVar7 = (param_1->Direction).field0_0x0._s_0.X * __real_4290000000000000;
  dVar6 = (param_1->Direction).field0_0x0._s_0.Z * __real_4290000000000000;
  dVar8 = (param_1->Direction).field0_0x0._s_0.Y * __real_4290000000000000 +
          (param_1->Origin).field0_0x0._s_0.Y;
  dVar1 = (param_1->Origin).field0_0x0._s_0.X;
  dVar2 = (param_1->Origin).field0_0x0._s_0.Z;
  cVar10 = (**(code **)(this->_padding_ + 8))();
  if (cVar10 != '\0') {
    pUVar3 = this->Component;
    pcVar4 = *(code **)(*(longlong *)pUVar3 + 0xa30);
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_HitTest =
           (FThreadSafeStaticStat<_public:___cdecl__public:_bool___cdecl_FPrimitiveComponentTarget::HitTest(UE::Math::TRay<double>_const_&,FHitResult_&)const_::_3_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
            )0x0;
      pFVar11 = ::FName::FName(&local_150,"HitTest");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_HitTest,*pFVar11,L"HitTest",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    FVar12 = StatPtr_HitTest;
    if (StatPtr_HitTest ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_bool___cdecl_FPrimitiveComponentTarget::HitTest(UE::Math::TRay<double>_const_&,FHitResult_&)const_::_3_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
         )0x0) {
      pFVar11 = ::FName::FName(&local_150,"HitTest");
      FVar12 = (FThreadSafeStaticStat<_public:___cdecl__public:_bool___cdecl_FPrimitiveComponentTarget::HitTest(UE::Math::TRay<double>_const_&,FHitResult_&)const_::_3_::<lambda_2>::operator()(void)const_::_2_::FStat_HitTest>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_HitTest,*pFVar11,L"HitTest",
                            "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                            ST_int64,true,false,MCR_Invalid);
    }
    local_158.StatIdPtr = (TStatIdData *)FVar12;
    if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"HitTest");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_108,::StaticName,&local_158,true,(AActor *)0x0);
    local_148 = *(undefined4 *)&(param_1->Origin).field0_0x0;
    uStack_144 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 4);
    uStack_140 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 8);
    uStack_13c = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0xc);
    local_138 = (param_1->Origin).field0_0x0._s_0.Z;
    bVar13 = true;
    local_128._8_4_ = SUB84(dVar8,0);
    local_128._0_8_ = dVar7 + dVar1;
    local_128._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_118 = dVar6 + dVar2;
    cVar10 = (*pcVar4)(pUVar3,param_2,&local_148,local_128);
    if (cVar10 != '\0') {
      bVar9 = true;
      goto LAB_1496abc27;
    }
  }
  bVar9 = false;
LAB_1496abc27:
  if (bVar13) {
    if (local_108.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_108.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_108.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_108.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar9;
}

// IsValid @ 1496ae450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FPrimitiveComponentTarget::IsValid(FPrimitiveComponentTarget *this)

{
  UPrimitiveComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FUObjectItem *pFVar5;
  
  pUVar1 = this->Component;
  if (pUVar1 == (UPrimitiveComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Test",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                       ,0x760,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((*(uint *)&pUVar1->field_0x8 >> 0x1e & 1) == 0) {
    pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->Component->field_0xc);
    if (((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
      bVar3 = UObjectBase::IsValidLowLevel((UObjectBase *)this->Component);
      if (bVar3) {
        return true;
      }
    }
  }
  return false;
}

// SetOwnerVisibility @ 1496bdd10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPrimitiveComponentTarget::SetOwnerVisibility(FPrimitiveComponentTarget *this,bool param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 8))();
  if (cVar1 != '\0') {
    USceneComponent::SetVisibility((USceneComponent *)this->Component,param_1,DirtyOnly);
  }
  return;
}

