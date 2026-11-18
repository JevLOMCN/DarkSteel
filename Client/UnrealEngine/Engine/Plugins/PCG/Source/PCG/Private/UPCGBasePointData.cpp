// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 185

// StaticClass @ 14978d550

UClass * __cdecl UPCGBasePointData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBasePointData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBasePointData",
               &Z_Registration_Info_UClass_UPCGBasePointData.InnerSingleton,
               StaticRegisterNativesUPCGBasePointData,0x1b0,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBasePointData>,
               InternalVTableHelperCtorCaller<UPCGBasePointData>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBasePointData.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14978dce0

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> __cdecl
`UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  int iVar1;
  FName FVar2;
  undefined8 *puVar3;
  bool bVar4;
  FName FVar5;
  UEnum *this;
  long64 lVar6;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar7;
  undefined7 in_register_00000081;
  undefined8 *local_res8;
  
  FVar5 = (FName)CastChecked<UPCGBasePointData,UPCGData>((UPCGData *)param_2);
  param_1->_padding_ = 0;
  iVar1 = *(int *)(CONCAT71(in_register_00000081,param_3) + 8);
  if (iVar1 == 3) {
    FVar2 = *(FName *)(CONCAT71(in_register_00000081,param_3) + 0x1c);
    this = StaticEnum<enum_EPCGPointNativeProperties>();
    lVar6 = UEnum::GetValueByName(this,FVar2,None);
    if (lVar6 == -1) {
      bVar4 = PCGPointCustomPropertyNames::IsCustomPropertyName(FVar2);
      if (!bVar4) {
        return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
               (IPCGAttributeAccessor *)param_1;
      }
      TVar7 = PCGBasePointData::CreateCustomPropertyAccessor((UPCGBasePointData *)&local_res8,FVar5)
      ;
    }
    else {
      TVar7 = PCGBasePointData::CreatePropertyAccessor
                        ((UPCGBasePointData *)&local_res8,FVar5.ComparisonIndex.Value.Value,
                         SUB81(lVar6,0));
    }
    if (param_1 != (UPCGData *)TVar7.Ptr) {
      puVar3 = (undefined8 *)param_1->_padding_;
      param_1->_padding_ = ((UPCGData *)TVar7.Ptr)->_padding_;
      ((UPCGData *)TVar7.Ptr)->_padding_ = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  else if (iVar1 == 0) {
    (**(code **)(*(longlong *)FVar5 + 0x498))(FVar5,0x80);
  }
  return (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>)
         (IPCGAttributeAccessor *)param_1;
}

// <lambda_invoker_cdecl> @ 14978df00

TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> __cdecl
`UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  FName FVar1;
  bool bVar2;
  FName FVar3;
  UEnum *this;
  long64 lVar4;
  TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> TVar5;
  longlong lVar6;
  undefined7 in_register_00000081;
  undefined8 *local_res8;
  IPCGAttributeAccessor local_28;
  
  FVar3 = (FName)CastChecked<UPCGBasePointData,UPCGData_const_>((UPCGData *)param_2);
  lVar6 = 0;
  if (*(int *)(CONCAT71(in_register_00000081,param_3) + 8) == 3) {
    FVar1 = *(FName *)(CONCAT71(in_register_00000081,param_3) + 0x1c);
    this = StaticEnum<enum_EPCGPointNativeProperties>();
    lVar4 = UEnum::GetValueByName(this,FVar1,None);
    if (lVar4 == -1) {
      bVar2 = PCGPointCustomPropertyNames::IsCustomPropertyName(FVar1);
      if (!bVar2) goto LAB_14978dfa6;
      TVar5 = PCGBasePointData::CreateConstCustomPropertyAccessor
                        ((UPCGBasePointData *)&local_res8,FVar3);
    }
    else {
      TVar5 = PCGBasePointData::CreateConstPropertyAccessor
                        ((UPCGBasePointData *)&local_res8,FVar3.ComparisonIndex.Value.Value,
                         SUB81(lVar4,0));
    }
    if (&local_28 != TVar5.Ptr) {
      lVar6 = (TVar5.Ptr)->_padding_;
      (TVar5.Ptr)->_padding_ = 0;
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
LAB_14978dfa6:
  param_1->_padding_ = lVar6;
  return (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>)
         (IPCGAttributeAccessor *)param_1;
}

// <lambda_invoker_cdecl> @ 14978e230

TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> __cdecl
`UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  int iVar1;
  UPCGBasePointData *pUVar2;
  FPCGAttributeAccessorKeysPointIndices *pFVar3;
  undefined7 in_register_00000081;
  EPCGMetadataDomainFlag local_18 [4];
  int local_14;
  
  (**(code **)(param_2->_padding_ + 0x348))(param_2,local_18);
  if ((local_18[0] == Default) ||
     ((local_18[0] == PCGMetadataDomainID::Elements.Flag &&
      (local_14 == PCGMetadataDomainID::Elements.CustomFlag)))) {
    pUVar2 = CastChecked<UPCGBasePointData,UPCGData>((UPCGData *)param_2);
    iVar1 = *(int *)(CONCAT71(in_register_00000081,param_3) + 8);
    pFVar3 = ::operator_new(0x58);
    if (pFVar3 != (FPCGAttributeAccessorKeysPointIndices *)0x0) {
      pFVar3 = FPCGAttributeAccessorKeysPointIndices::FPCGAttributeAccessorKeysPointIndices
                         (pFVar3,pUVar2,iVar1 == 0);
      goto LAB_14978e2ab;
    }
  }
  pFVar3 = (FPCGAttributeAccessorKeysPointIndices *)0x0;
LAB_14978e2ab:
  param_1->_padding_ = (longlong)pFVar3;
  return (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>)
         (IPCGAttributeAccessorKeys *)param_1;
}

// <lambda_invoker_cdecl> @ 14978e3a0

TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
__cdecl `UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_4>::<lambda_invoker_cdecl>
                  (UPCGData *param_1,FPCGAttributePropertySelector *param_2,bool param_3)

{
  undefined8 uVar1;
  UPCGBasePointData *pUVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  EPCGMetadataDomainFlag local_38 [4];
  int local_34;
  undefined1 local_28 [32];
  
  (**(code **)(param_2->_padding_ + 0x348))(param_2,local_38);
  if ((local_38[0] != Default) &&
     ((local_38[0] != PCGMetadataDomainID::Elements.Flag ||
      (local_34 != PCGMetadataDomainID::Elements.CustomFlag)))) {
    param_1->_padding_ = 0;
    return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
            )(IPCGAttributeAccessorKeys *)param_1;
  }
  pUVar2 = CastChecked<UPCGBasePointData,UPCGData_const_>((UPCGData *)param_2);
  puVar3 = ::operator_new(0x58);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar3 + 1) = 1;
    puVar3[2] = pUVar2;
    *puVar3 = &___7FPCGAttributeAccessorKeysPointIndices__6B_;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0;
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)puVar3[2] + 0x538))((longlong *)puVar3[2],local_28);
    uVar1 = puVar4[1];
    puVar3[7] = *puVar4;
    puVar3[8] = uVar1;
    uVar1 = puVar4[3];
    puVar3[9] = puVar4[2];
    puVar3[10] = uVar1;
  }
  param_1->_padding_ = (longlong)puVar3;
  return (TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
          )(IPCGAttributeAccessorKeys *)param_1;
}

// operator()<int> @ 14978fbe0

void __thiscall
`UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<int>
          (void *this,TPCGValueRange<int,TStridedView<int,int>_> *param_1,
          TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *param_2,
          EPCGPointNativeProperties param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  if (((*(EPCGPointNativeProperties *)((longlong)this + 0x10) & param_3) == param_3) &&
     (uVar11 = 0, 0 < *(int *)((longlong)this + 0x14))) {
    lVar10 = 0;
    do {
      plVar2 = *(longlong **)this;
      uVar7 = 0;
      if ((int)uVar11 < (int)plVar2[1]) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *plVar2;
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar7 = 0;
      if ((int)uVar11 < (int)plVar2[1]) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *plVar2;
      piVar8 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                         (param_2,*(int *)(lVar3 + lVar10 * 4));
      uVar7 = *(uint *)(lVar4 + lVar10 * 4);
      iVar1 = *piVar8;
      uVar9 = 0;
      if ((int)uVar7 < param_1->NumElements) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = (int)uVar7 % (param_1->ElementView).NumElements;
      if (uVar7 == uVar9) {
        piVar8 = (int *)((longlong)(param_1->ElementView).BytesBetweenElements *
                         (longlong)(int)uVar9 + (longlong)(param_1->ElementView).FirstElementPtr);
      }
      else {
        piVar8 = &param_1->StubValue;
      }
      uVar11 = uVar11 + 1;
      *piVar8 = iVar1;
      lVar10 = lVar10 + 1;
    } while ((int)uVar11 < *(int *)((longlong)this + 0x14));
  }
  return;
}

// operator()<float> @ 149790140

void __thiscall
`UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<float>
          (void *this,TPCGValueRange<float,TStridedView<float,int>_> *param_1,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *param_2,
          EPCGPointNativeProperties param_3)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  if (((*(EPCGPointNativeProperties *)((longlong)this + 0x10) & param_3) == param_3) &&
     (uVar11 = 0, 0 < *(int *)((longlong)this + 0x14))) {
    lVar10 = 0;
    do {
      plVar2 = *(longlong **)this;
      uVar7 = 0;
      if ((int)uVar11 < (int)plVar2[1]) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *plVar2;
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar7 = 0;
      if ((int)uVar11 < (int)plVar2[1]) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *plVar2;
      pfVar8 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                         (param_2,*(int *)(lVar3 + lVar10 * 4));
      uVar7 = *(uint *)(lVar4 + lVar10 * 4);
      fVar1 = *pfVar8;
      uVar9 = 0;
      if ((int)uVar7 < param_1->NumElements) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = (int)uVar7 % (param_1->ElementView).NumElements;
      if (uVar7 == uVar9) {
        pfVar8 = (float *)((longlong)(param_1->ElementView).BytesBetweenElements *
                           (longlong)(int)uVar9 + (longlong)(param_1->ElementView).FirstElementPtr);
      }
      else {
        pfVar8 = &param_1->StubValue;
      }
      uVar11 = uVar11 + 1;
      *pfVar8 = fVar1;
      lVar10 = lVar10 + 1;
    } while ((int)uVar11 < *(int *)((longlong)this + 0x14));
  }
  return;
}

// operator()<float> @ 1497906b0

void __thiscall
`UPCGBasePointData::AddToCrc'::__l9::<lambda_1>::operator()<float>
          (void *this,FArchiveCrc32 *param_1,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (param_2->ElementView).NumElements;
  iVar4 = 0;
  if (param_2->NumElements < iVar3) {
    iVar3 = param_2->NumElements;
  }
  if (0 < iVar3) {
    do {
      pfVar2 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                         (param_2,iVar4);
      pfVar1 = *(float **)param_1->_padding_;
      if ((float *)((undefined8 *)param_1->_padding_)[1] < pfVar1 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,pfVar2,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)pfVar2);
        }
      }
      else {
        *pfVar2 = *pfVar1;
        *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
      }
      iVar3 = (param_2->ElementView).NumElements;
      iVar4 = iVar4 + 1;
      if (param_2->NumElements < iVar3) {
        iVar3 = param_2->NumElements;
      }
    } while (iVar4 < iVar3);
  }
  return;
}

// operator()<UE::Math::TTransform<double>_> @ 149790b20

void __thiscall
`UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<UE::Math::TTransform<double>_>
          (void *this,
          TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
          *param_1,TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                   *param_2,EPCGPointNativeProperties param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  bool bVar29;
  uint uVar30;
  TTransform<double> *pTVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  
  if (((*(EPCGPointNativeProperties *)((longlong)this + 0x10) & param_3) == param_3) &&
     (uVar34 = 0, 0 < *(int *)((longlong)this + 0x14))) {
    lVar33 = 0;
    do {
      plVar1 = *(longlong **)this;
      uVar30 = 0;
      if ((int)uVar34 < (int)plVar1[1]) {
        uVar30 = ~uVar34 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *plVar1;
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar30 = 0;
      if ((int)uVar34 < (int)plVar1[1]) {
        uVar30 = ~uVar34 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *plVar1;
      pTVar31 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                ::GetElement(param_2,*(int *)(lVar2 + lVar33 * 4));
      uVar30 = *(uint *)(lVar3 + lVar33 * 4);
      uVar5 = *(undefined4 *)(pTVar31->Rotation).XY.m128d_f64;
      uVar6 = *(undefined4 *)((longlong)(pTVar31->Rotation).XY.m128d_f64 + 4);
      uVar7 = *(undefined4 *)((pTVar31->Rotation).XY.m128d_f64 + 1);
      uVar8 = *(undefined4 *)((longlong)(pTVar31->Rotation).XY.m128d_f64 + 0xc);
      uVar9 = *(undefined4 *)(pTVar31->Rotation).ZW.m128d_f64;
      uVar10 = *(undefined4 *)((longlong)(pTVar31->Rotation).ZW.m128d_f64 + 4);
      uVar11 = *(undefined4 *)((pTVar31->Rotation).ZW.m128d_f64 + 1);
      uVar12 = *(undefined4 *)((longlong)(pTVar31->Rotation).ZW.m128d_f64 + 0xc);
      uVar13 = *(undefined4 *)(pTVar31->Translation).XY.m128d_f64;
      uVar14 = *(undefined4 *)((longlong)(pTVar31->Translation).XY.m128d_f64 + 4);
      uVar15 = *(undefined4 *)((pTVar31->Translation).XY.m128d_f64 + 1);
      uVar16 = *(undefined4 *)((longlong)(pTVar31->Translation).XY.m128d_f64 + 0xc);
      uVar17 = *(undefined4 *)(pTVar31->Translation).ZW.m128d_f64;
      uVar18 = *(undefined4 *)((longlong)(pTVar31->Translation).ZW.m128d_f64 + 4);
      uVar19 = *(undefined4 *)((pTVar31->Translation).ZW.m128d_f64 + 1);
      uVar20 = *(undefined4 *)((longlong)(pTVar31->Translation).ZW.m128d_f64 + 0xc);
      uVar21 = *(undefined4 *)(pTVar31->Scale3D).XY.m128d_f64;
      uVar22 = *(undefined4 *)((longlong)(pTVar31->Scale3D).XY.m128d_f64 + 4);
      uVar23 = *(undefined4 *)((pTVar31->Scale3D).XY.m128d_f64 + 1);
      uVar24 = *(undefined4 *)((longlong)(pTVar31->Scale3D).XY.m128d_f64 + 0xc);
      uVar25 = *(undefined4 *)(pTVar31->Scale3D).ZW.m128d_f64;
      uVar26 = *(undefined4 *)((longlong)(pTVar31->Scale3D).ZW.m128d_f64 + 4);
      uVar27 = *(undefined4 *)((pTVar31->Scale3D).ZW.m128d_f64 + 1);
      uVar28 = *(undefined4 *)((longlong)(pTVar31->Scale3D).ZW.m128d_f64 + 0xc);
      uVar32 = 0;
      if ((int)uVar30 < param_1->NumElements) {
        uVar32 = ~uVar30 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar29)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar32 = (int)uVar30 % (param_1->ElementView).NumElements;
      if (uVar30 == uVar32) {
        pTVar31 = (TTransform<double> *)
                  ((longlong)(((param_1->ElementView).FirstElementPtr)->Rotation).XY.m128d_f64 +
                  (longlong)(param_1->ElementView).BytesBetweenElements * (longlong)(int)uVar32);
      }
      else {
        pTVar31 = &param_1->StubValue;
      }
      *(undefined4 *)(pTVar31->Rotation).XY.m128d_f64 = uVar5;
      *(undefined4 *)((longlong)(pTVar31->Rotation).XY.m128d_f64 + 4) = uVar6;
      *(undefined4 *)((pTVar31->Rotation).XY.m128d_f64 + 1) = uVar7;
      *(undefined4 *)((longlong)(pTVar31->Rotation).XY.m128d_f64 + 0xc) = uVar8;
      uVar34 = uVar34 + 1;
      *(undefined4 *)(pTVar31->Rotation).ZW.m128d_f64 = uVar9;
      *(undefined4 *)((longlong)(pTVar31->Rotation).ZW.m128d_f64 + 4) = uVar10;
      *(undefined4 *)((pTVar31->Rotation).ZW.m128d_f64 + 1) = uVar11;
      *(undefined4 *)((longlong)(pTVar31->Rotation).ZW.m128d_f64 + 0xc) = uVar12;
      lVar33 = lVar33 + 1;
      *(undefined4 *)(pTVar31->Translation).XY.m128d_f64 = uVar13;
      *(undefined4 *)((longlong)(pTVar31->Translation).XY.m128d_f64 + 4) = uVar14;
      *(undefined4 *)((pTVar31->Translation).XY.m128d_f64 + 1) = uVar15;
      *(undefined4 *)((longlong)(pTVar31->Translation).XY.m128d_f64 + 0xc) = uVar16;
      *(undefined4 *)(pTVar31->Translation).ZW.m128d_f64 = uVar17;
      *(undefined4 *)((longlong)(pTVar31->Translation).ZW.m128d_f64 + 4) = uVar18;
      *(undefined4 *)((pTVar31->Translation).ZW.m128d_f64 + 1) = uVar19;
      *(undefined4 *)((longlong)(pTVar31->Translation).ZW.m128d_f64 + 0xc) = uVar20;
      *(undefined4 *)(pTVar31->Scale3D).XY.m128d_f64 = uVar21;
      *(undefined4 *)((longlong)(pTVar31->Scale3D).XY.m128d_f64 + 4) = uVar22;
      *(undefined4 *)((pTVar31->Scale3D).XY.m128d_f64 + 1) = uVar23;
      *(undefined4 *)((longlong)(pTVar31->Scale3D).XY.m128d_f64 + 0xc) = uVar24;
      *(undefined4 *)(pTVar31->Scale3D).ZW.m128d_f64 = uVar25;
      *(undefined4 *)((longlong)(pTVar31->Scale3D).ZW.m128d_f64 + 4) = uVar26;
      *(undefined4 *)((pTVar31->Scale3D).ZW.m128d_f64 + 1) = uVar27;
      *(undefined4 *)((longlong)(pTVar31->Scale3D).ZW.m128d_f64 + 0xc) = uVar28;
    } while ((int)uVar34 < *(int *)((longlong)this + 0x14));
  }
  return;
}

// operator()<UE::Math::TVector4<double>_> @ 149790d40

void __thiscall
`UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>
          (void *this,
          TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
          *param_1,TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                   *param_2,EPCGPointNativeProperties param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  TVector4<double> *pTVar15;
  TVector4<double>_u_0 *pTVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  
  if (((*(EPCGPointNativeProperties *)((longlong)this + 0x10) & param_3) == param_3) &&
     (uVar19 = 0, 0 < *(int *)((longlong)this + 0x14))) {
    lVar18 = 0;
    do {
      plVar1 = *(longlong **)this;
      uVar14 = 0;
      if ((int)uVar19 < (int)plVar1[1]) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *plVar1;
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar14 = 0;
      if ((int)uVar19 < (int)plVar1[1]) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *plVar1;
      pTVar15 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                ::GetElement(param_2,*(int *)(lVar2 + lVar18 * 4));
      uVar14 = *(uint *)(lVar3 + lVar18 * 4);
      uVar5 = *(undefined4 *)&pTVar15->field0_0x0;
      uVar6 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 4);
      uVar7 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 8);
      uVar8 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 0xc);
      uVar9 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 0x10);
      uVar10 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 0x14);
      uVar11 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 0x18);
      uVar12 = *(undefined4 *)((longlong)&pTVar15->field0_0x0 + 0x1c);
      uVar17 = 0;
      if ((int)uVar14 < param_1->NumElements) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar17 = (int)uVar14 % (param_1->ElementView).NumElements;
      if (uVar14 == uVar17) {
        pTVar16 = (TVector4<double>_u_0 *)
                  ((longlong)&((param_1->ElementView).FirstElementPtr)->field0_0x0 +
                  (longlong)(param_1->ElementView).BytesBetweenElements * (longlong)(int)uVar17);
      }
      else {
        pTVar16 = &(param_1->StubValue).field0_0x0;
      }
      *(undefined4 *)pTVar16 = uVar5;
      *(undefined4 *)((longlong)pTVar16 + 4) = uVar6;
      *(undefined4 *)((longlong)pTVar16 + 8) = uVar7;
      *(undefined4 *)((longlong)pTVar16 + 0xc) = uVar8;
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 1;
      *(undefined4 *)((longlong)pTVar16 + 0x10) = uVar9;
      *(undefined4 *)((longlong)pTVar16 + 0x14) = uVar10;
      *(undefined4 *)((longlong)pTVar16 + 0x18) = uVar11;
      *(undefined4 *)((longlong)pTVar16 + 0x1c) = uVar12;
    } while ((int)uVar19 < *(int *)((longlong)this + 0x14));
  }
  return;
}

// operator()<UE::Math::TVector4<double>_> @ 149790f10

void __thiscall
`UPCGBasePointData::AddToCrc'::__l9::<lambda_1>::operator()<UE::Math::TVector4<double>_>
          (void *this,FArchiveCrc32 *param_1,
          TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
          *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TVector4<double> *pTVar4;
  FArchive *pFVar5;
  int iVar6;
  int iVar7;
  float local_res18 [2];
  float local_res20 [2];
  float local_38;
  float local_34 [3];
  
  iVar6 = (param_2->ElementView).NumElements;
  iVar7 = 0;
  if (param_2->NumElements < iVar6) {
    iVar6 = param_2->NumElements;
  }
  if (0 < iVar6) {
    do {
      pTVar4 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
               ::GetElement(param_2,iVar7);
      if ((int)((ulonglong)param_1->_padding_ >> 0x20) < 0x3ec) {
        if (((param_1->_padding_ & 1) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                               ,0x272,L"float -> double conversion applied outside of load!"), bVar3
           )) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = (longlong *)param_1->_padding_;
        if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
          if ((param_1->_padding_ & 0x10000) == 0) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,local_34,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_34);
          }
        }
        else {
          local_34[0] = *(float *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_1->_padding_;
        if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
          if ((param_1->_padding_ & 0x10000) == 0) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res18);
          }
        }
        else {
          local_res18[0] = *(float *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_1->_padding_;
        if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
          if ((param_1->_padding_ & 0x10000) == 0) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res20);
          }
        }
        else {
          local_res20[0] = *(float *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_1->_padding_;
        if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
          if ((param_1->_padding_ & 0x10000) == 0) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_38,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)&local_38);
          }
        }
        else {
          local_38 = *(float *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        (pTVar4->field0_0x0)._s_0.X = (double)local_34[0];
        (pTVar4->field0_0x0)._s_0.Y = (double)local_res18[0];
        (pTVar4->field0_0x0)._s_0.Z = (double)local_res20[0];
        (pTVar4->field0_0x0)._s_0.W = (double)local_38;
      }
      else {
        pFVar5 = ::operator<<((FArchive *)param_1,(double *)pTVar4);
        pFVar5 = ::operator<<(pFVar5,&(pTVar4->field0_0x0)._s_0.Y);
        pFVar5 = ::operator<<(pFVar5,&(pTVar4->field0_0x0)._s_0.Z);
        ::operator<<(pFVar5,&(pTVar4->field0_0x0)._s_0.W);
      }
      iVar6 = (param_2->ElementView).NumElements;
      iVar7 = iVar7 + 1;
      if (param_2->NumElements < iVar6) {
        iVar6 = param_2->NumElements;
      }
    } while (iVar7 < iVar6);
  }
  return;
}

// operator()<UE::Math::TVector<double>_> @ 149791160

void __thiscall
`UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>
          (void *this,
          TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
          *param_1,TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                   *param_2,EPCGPointNativeProperties param_3)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  TVector<double>_u_0 *pTVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  
  if (((*(EPCGPointNativeProperties *)((longlong)this + 0x10) & param_3) == param_3) &&
     (uVar16 = 0, 0 < *(int *)((longlong)this + 0x14))) {
    lVar15 = 0;
    do {
      plVar2 = *(longlong **)this;
      uVar11 = 0;
      if ((int)uVar16 < (int)plVar2[1]) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *plVar2;
      plVar2 = *(longlong **)((longlong)this + 8);
      uVar11 = 0;
      if ((int)uVar16 < (int)plVar2[1]) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *plVar2;
      pTVar12 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                ::GetElement(param_2,*(int *)(lVar3 + lVar15 * 4));
      uVar11 = *(uint *)(lVar4 + lVar15 * 4);
      uVar6 = *(undefined4 *)&pTVar12->field0_0x0;
      uVar7 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
      uVar8 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
      uVar9 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
      dVar1 = (pTVar12->field0_0x0)._s_0.Z;
      uVar14 = 0;
      if ((int)uVar11 < param_1->NumElements) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar14 = (int)uVar11 % (param_1->ElementView).NumElements;
      if (uVar11 == uVar14) {
        pTVar13 = (TVector<double>_u_0 *)
                  ((longlong)&((param_1->ElementView).FirstElementPtr)->field0_0x0 +
                  (longlong)(param_1->ElementView).BytesBetweenElements * (longlong)(int)uVar14);
      }
      else {
        pTVar13 = &(param_1->StubValue).field0_0x0;
      }
      *(undefined4 *)pTVar13 = uVar6;
      *(undefined4 *)((longlong)pTVar13 + 4) = uVar7;
      *(undefined4 *)((longlong)pTVar13 + 8) = uVar8;
      *(undefined4 *)((longlong)pTVar13 + 0xc) = uVar9;
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 1;
      *(double *)((longlong)pTVar13 + 0x10) = dVar1;
    } while ((int)uVar16 < *(int *)((longlong)this + 0x14));
  }
  return;
}

// operator()<UE::Math::TVector<double>_> @ 149791330

void __thiscall
`UPCGBasePointData::AddToCrc'::__l9::<lambda_1>::operator()<UE::Math::TVector<double>_>
          (void *this,FArchiveCrc32 *param_1,
          TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
          *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  int iVar5;
  int iVar6;
  float local_res18 [2];
  float local_res20 [2];
  float local_38 [4];
  
  iVar5 = (param_2->ElementView).NumElements;
  iVar6 = 0;
  if (param_2->NumElements < iVar5) {
    iVar5 = param_2->NumElements;
  }
  if (0 < iVar5) {
    do {
      pTVar4 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
               ::GetElement(param_2,iVar6);
      if ((int)((ulonglong)param_1->_padding_ >> 0x20) < 0x3ec) {
        if (((param_1->_padding_ & 1) == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ar.IsLoading()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x4e8,L"float -> double conversion applied outside of load!"), bVar3
           )) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = (longlong *)param_1->_padding_;
        if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
          if ((param_1->_padding_ & 0x10000) == 0) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,local_38,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_38);
          }
        }
        else {
          local_38[0] = *(float *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_1->_padding_;
        if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
          if ((param_1->_padding_ & 0x10000) == 0) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res18,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res18);
          }
        }
        else {
          local_res18[0] = *(float *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        plVar1 = (longlong *)param_1->_padding_;
        if ((float *)plVar1[1] < (float *)*plVar1 + 1) {
          if ((param_1->_padding_ & 0x10000) == 0) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res20,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)local_res20);
          }
        }
        else {
          local_res20[0] = *(float *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
        (pTVar4->field0_0x0)._s_0.X = (double)local_38[0];
        (pTVar4->field0_0x0)._s_0.Y = (double)local_res18[0];
        (pTVar4->field0_0x0)._s_0.Z = (double)local_res20[0];
      }
      else {
        ::operator<<((FArchive *)param_1,(double *)pTVar4);
        ::operator<<((FArchive *)param_1,&(pTVar4->field0_0x0)._s_0.Y);
        ::operator<<((FArchive *)param_1,&(pTVar4->field0_0x0)._s_0.Z);
      }
      iVar5 = (param_2->ElementView).NumElements;
      iVar6 = iVar6 + 1;
      if (param_2->NumElements < iVar5) {
        iVar5 = param_2->NumElements;
      }
    } while (iVar6 < iVar5);
  }
  return;
}

// operator()<__int64> @ 1497919f0

void __thiscall
`UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<__int64>
          (void *this,TPCGValueRange<__int64,TStridedView<__int64,int>_> *param_1,
          TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *param_2,
          EPCGPointNativeProperties param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  long64 lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  long64 *plVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  if (((*(EPCGPointNativeProperties *)((longlong)this + 0x10) & param_3) == param_3) &&
     (uVar11 = 0, 0 < *(int *)((longlong)this + 0x14))) {
    lVar10 = 0;
    do {
      plVar1 = *(longlong **)this;
      uVar7 = 0;
      if ((int)uVar11 < (int)plVar1[1]) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar2 = *plVar1;
      plVar1 = *(longlong **)((longlong)this + 8);
      uVar7 = 0;
      if ((int)uVar11 < (int)plVar1[1]) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *plVar1;
      plVar8 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                         (param_2,*(int *)(lVar2 + lVar10 * 4));
      uVar7 = *(uint *)(lVar3 + lVar10 * 4);
      lVar4 = *plVar8;
      uVar9 = 0;
      if ((int)uVar7 < param_1->NumElements) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = (int)uVar7 % (param_1->ElementView).NumElements;
      if (uVar7 == uVar9) {
        plVar8 = (long64 *)
                 ((longlong)(param_1->ElementView).BytesBetweenElements * (longlong)(int)uVar9 +
                 (longlong)(param_1->ElementView).FirstElementPtr);
      }
      else {
        plVar8 = &param_1->StubValue;
      }
      uVar11 = uVar11 + 1;
      *plVar8 = lVar4;
      lVar10 = lVar10 + 1;
    } while ((int)uVar11 < *(int *)((longlong)this + 0x14));
  }
  return;
}

// GetConstValueRange<1> @ 1497bc1f0

TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
* __thiscall
UPCGBasePointData::GetConstValueRange<1>
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
          *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x500))();
  return __return_storage_ptr__;
}

// GetConstValueRange<2> @ 1497bc220

TPCGValueRange<float_const_,TStridedView<float_const_,int>_> * __thiscall
UPCGBasePointData::GetConstValueRange<2>
          (UPCGBasePointData *this,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x508))();
  return __return_storage_ptr__;
}

// GetConstValueRange<4> @ 1497bc250

TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
* __thiscall
UPCGBasePointData::GetConstValueRange<4>
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
          *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x510))();
  return __return_storage_ptr__;
}

// GetConstValueRange<8> @ 1497bc280

TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
* __thiscall
UPCGBasePointData::GetConstValueRange<8>
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
          *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x518))();
  return __return_storage_ptr__;
}

// GetConstValueRange<16> @ 1497bc2b0

TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
* __thiscall
UPCGBasePointData::GetConstValueRange<16>
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
          *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x520))();
  return __return_storage_ptr__;
}

// GetConstValueRange<32> @ 1497bc2e0

TPCGValueRange<float_const_,TStridedView<float_const_,int>_> * __thiscall
UPCGBasePointData::GetConstValueRange<32>
          (UPCGBasePointData *this,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x528))();
  return __return_storage_ptr__;
}

// GetConstValueRange<64> @ 1497bc310

TPCGValueRange<int_const_,TStridedView<int_const_,int>_> * __thiscall
UPCGBasePointData::GetConstValueRange<64>
          (UPCGBasePointData *this,
          TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x530))();
  return __return_storage_ptr__;
}

// GetConstValueRange<128> @ 1497bc340

TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> * __thiscall
UPCGBasePointData::GetConstValueRange<128>
          (UPCGBasePointData *this,
          TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *__return_storage_ptr__)

{
  (**(code **)(this->_padding_ + 0x538))();
  return __return_storage_ptr__;
}

// GetValueRange<1> @ 1497c0620

TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_> *
__thiscall
UPCGBasePointData::GetValueRange<1>
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  (**(code **)(this->_padding_ + 0x4c0))();
  return __return_storage_ptr__;
}

// GetValueRange<2> @ 1497c0650

TPCGValueRange<float,TStridedView<float,int>_> * __thiscall
UPCGBasePointData::GetValueRange<2>
          (UPCGBasePointData *this,
          TPCGValueRange<float,TStridedView<float,int>_> *__return_storage_ptr__,bool param_1)

{
  (**(code **)(this->_padding_ + 0x4c8))();
  return __return_storage_ptr__;
}

// GetValueRange<4> @ 1497c0680

TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> * __thiscall
UPCGBasePointData::GetValueRange<4>
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  (**(code **)(this->_padding_ + 0x4d0))();
  return __return_storage_ptr__;
}

// GetValueRange<8> @ 1497c06b0

TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> * __thiscall
UPCGBasePointData::GetValueRange<8>
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  (**(code **)(this->_padding_ + 0x4d8))();
  return __return_storage_ptr__;
}

// GetValueRange<16> @ 1497c06e0

TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_> *
__thiscall
UPCGBasePointData::GetValueRange<16>
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  (**(code **)(this->_padding_ + 0x4e0))();
  return __return_storage_ptr__;
}

// GetValueRange<32> @ 1497c0710

TPCGValueRange<float,TStridedView<float,int>_> * __thiscall
UPCGBasePointData::GetValueRange<32>
          (UPCGBasePointData *this,
          TPCGValueRange<float,TStridedView<float,int>_> *__return_storage_ptr__,bool param_1)

{
  (**(code **)(this->_padding_ + 0x4e8))();
  return __return_storage_ptr__;
}

// GetValueRange<64> @ 1497c0740

TPCGValueRange<int,TStridedView<int,int>_> * __thiscall
UPCGBasePointData::GetValueRange<64>
          (UPCGBasePointData *this,
          TPCGValueRange<int,TStridedView<int,int>_> *__return_storage_ptr__,bool param_1)

{
  (**(code **)(this->_padding_ + 0x4f0))();
  return __return_storage_ptr__;
}

// GetValueRange<128> @ 1497c0770

TPCGValueRange<__int64,TStridedView<__int64,int>_> * __thiscall
UPCGBasePointData::GetValueRange<128>
          (UPCGBasePointData *this,
          TPCGValueRange<__int64,TStridedView<__int64,int>_> *__return_storage_ptr__,bool param_1)

{
  (**(code **)(this->_padding_ + 0x4f8))();
  return __return_storage_ptr__;
}

// UPCGBasePointData @ 1497e0280

UPCGBasePointData * __thiscall
UPCGBasePointData::UPCGBasePointData(UPCGBasePointData *this,FVTableHelper *param_1)

{
  UPCGSpatialData::UPCGSpatialData((UPCGSpatialData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGBasePointData__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedDataLock,4000);
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>(&this->PCGPointOctree);
  (this->Bounds).IsValid = '\0';
  this->bOctreeIsDirty = true;
  this->bBoundsAreDirty = true;
  return this;
}

// UPCGBasePointData @ 1497e02e0

UPCGBasePointData * __thiscall
UPCGBasePointData::UPCGBasePointData(UPCGBasePointData *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPCGBasePointData *pUVar3;
  FPCGMetadataDomainID local_58;
  FPCGAttributePropertySelector local_48;
  
  UPCGSpatialData::UPCGSpatialData((UPCGSpatialData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGBasePointData__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CachedDataLock,4000);
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>(&this->PCGPointOctree);
  (this->Bounds).IsValid = '\0';
  this->bOctreeIsDirty = true;
  this->bBoundsAreDirty = true;
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                       ,0x20d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGBasePointData *)(*pcVar1)();
      return pUVar3;
    }
  }
  local_58 = PCGMetadataDomainID::Elements;
  UPCGMetadata::SetupDomain((UPCGMetadata *)this->_padding_,&local_58,true);
  local_48._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
  local_48.Selection = Attribute;
  local_48.DomainName.ComparisonIndex.Value = 0;
  local_48.DomainName.Number = 0;
  local_48.AttributeName.ComparisonIndex.Value = 0;
  local_48.AttributeName.Number = 0;
  local_48.PropertyName.ComparisonIndex.Value = 0;
  local_48.PropertyName.Number = 0;
  local_48.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ExtraNames.ArrayNum = 0;
  local_48.ExtraNames.ArrayMax = 0;
  local_48.ExtraProperty = Index;
  FPCGAttributePropertySelector::SetPointProperty(&local_48,Position,true);
  UPCGSpatialData::SetLastSelector((UPCGSpatialData *)this,&local_48);
  DestructItems<FString,int>
            ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
  if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
  }
  return this;
}

// ~UPCGBasePointData @ 1497e2bb0

void __thiscall UPCGBasePointData::~UPCGBasePointData(UPCGBasePointData *this)

{
  this->_padding_ = (longlong)&___7UPCGBasePointData__6B_;
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
  ~TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>(&this->PCGPointOctree);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CachedDataLock);
  UPCGSpatialData::~UPCGSpatialData((UPCGSpatialData *)this);
  return;
}

// AddSinglePointFromActor @ 1497ed5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPCGBasePointData::AddSinglePointFromActor(UPCGBasePointData *this,AActor *param_1,bool *param_2)

{
  FName *pFVar1;
  USceneComponent *pUVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  TTransform<double> *pTVar28;
  long64 lVar29;
  FPCGMetadataDomain *this_00;
  FPCGMetadataAttribute<FSoftObjectPath> *this_01;
  uint uVar30;
  int iVar31;
  uint uVar32;
  undefined4 *puVar33;
  double *pdVar34;
  int *piVar35;
  long64 *plVar36;
  ForAnyElementType FVar37;
  FName *pFVar38;
  uint uVar39;
  code *pcVar40;
  ulonglong uVar41;
  undefined8 uVar42;
  longlong lVar43;
  undefined1 auStackY_5c8 [32];
  undefined1 local_598 [8];
  undefined4 local_590;
  undefined4 local_58c;
  FSoftObjectPath local_588;
  FSoftObjectPath local_568;
  double local_548;
  double local_540;
  bool *local_538;
  longlong local_530;
  int local_528;
  int local_524;
  int local_520;
  undefined4 local_51c;
  longlong local_518;
  int local_510;
  int local_50c;
  int local_508;
  int local_504 [3];
  FName local_4f8;
  FPCGMetadataDomainID local_4f0;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  longlong local_4b8;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  long64 local_4a0;
  float *local_498;
  int local_48c;
  int iStack_488;
  int *local_480;
  int local_474;
  int iStack_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double dStack_448;
  double local_440;
  longlong *local_438;
  int local_42c;
  int iStack_428;
  longlong local_418;
  int local_410;
  int local_40c;
  int local_408;
  double local_400 [3];
  longlong local_3e8;
  int local_3e0;
  int local_3dc;
  int local_3d8;
  double local_3d0 [3];
  FParseTagResult local_3b8;
  double local_368;
  double dStack_360;
  double local_358;
  double local_348;
  double dStack_340;
  double local_338;
  double local_318;
  double *local_310;
  int local_304;
  int iStack_300;
  double *local_2e0;
  int local_2d4;
  int iStack_2d0;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  TVector<double>_u_0 local_228;
  double local_210;
  double dStack_208;
  double local_200;
  longlong local_1e8;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  double local_1c8 [12];
  double *local_168;
  int local_15c;
  int iStack_158;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_538 = param_2;
  if (param_1 == (AActor *)0x0) {
    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                       ("InActor",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                        ,0x431,L"");
    if (bVar23) {
      pcVar40 = (code *)swi(3);
      (*pcVar40)();
      return;
    }
  }
  uVar25 = (**(code **)(this->_padding_ + 0x488))(this);
  (**(code **)(this->_padding_ + 0x490))(this,uVar25 + 1,1);
  pUVar2 = (param_1->RootComponent).field0_0x0.DebugPtr;
  if (pUVar2 == (USceneComponent *)0x0) {
    pTVar28 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar28 = &pUVar2->ComponentToWorld;
  }
  dVar15 = (pTVar28->Translation).XY.m128d_f64[0];
  dVar16 = (pTVar28->Translation).XY.m128d_f64[1];
  local_4d8 = (pTVar28->Rotation).ZW.m128d_f64[0];
  dStack_4d0 = (pTVar28->Rotation).ZW.m128d_f64[1];
  dVar17 = (pTVar28->Rotation).XY.m128d_f64[0];
  dVar18 = (pTVar28->Rotation).XY.m128d_f64[1];
  dVar19 = (pTVar28->Scale3D).XY.m128d_f64[0];
  dVar20 = (pTVar28->Scale3D).XY.m128d_f64[1];
  dVar21 = (pTVar28->Scale3D).ZW.m128d_f64[0];
  dVar22 = (pTVar28->Scale3D).ZW.m128d_f64[1];
  local_4c8 = (pTVar28->Translation).ZW.m128d_f64[0];
  dStack_4c0 = (pTVar28->Translation).ZW.m128d_f64[1];
  local_450 = dVar15;
  dStack_448 = dVar16;
  local_440 = local_4c8;
  iVar26 = PCGHelpers::ComputeSeed((int)dVar15,(int)dVar16,(int)local_4c8);
  PCGHelpers::GetActorLocalBounds((TBox<double> *)&local_228._s_0,param_1,true);
  local_548 = local_228._s_0.Z;
  local_2a0 = local_228._s_0.Z;
  local_540 = local_200;
  local_318 = local_200;
  lVar29 = UPCGMetadata::AddEntry((UPCGMetadata *)this->_padding_,-1);
  pcVar40 = *(code **)(this->_padding_ + 0x528);
  (*pcVar40)(this,&local_498);
  if (iStack_488 < local_48c) {
    local_48c = iStack_488;
  }
  if (((local_48c == 1) && (0 < iStack_488)) && (*local_498 != __real_3f800000)) {
    uVar41 = 1;
  }
  else {
    uVar41 = (ulonglong)pcVar40 & 0xffffffffffffff00;
  }
  (**(code **)(this->_padding_ + 0x4e8))(this,&local_530,uVar41);
  (**(code **)(this->_padding_ + 0x500))(this,&local_168);
  if (iStack_158 < local_15c) {
    local_15c = iStack_158;
  }
  if ((local_15c == 1) && (0 < iStack_158)) {
    local_268 = local_168[6];
    dStack_260 = local_168[7];
    local_278 = local_168[4];
    dStack_270 = local_168[5];
    local_298 = *local_168;
    dStack_290 = local_168[1];
    local_288 = local_168[2];
    dStack_280 = local_168[3];
    local_258 = local_168[8];
    dStack_250 = local_168[9];
    local_248 = local_168[10];
    dStack_240 = local_168[0xb];
    local_468 = __real_3f1a36e2e0000000;
    lVar43 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)(dStack_260 - dStack_4c0) >> 0x20) & _UNK_15061cc8c
                               ,SUB84(dStack_260 - dStack_4c0,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar43;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)(local_268 - local_4c8) >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_268 - local_4c8,0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar3._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    uVar30 = movmskpd(iStack_158,auVar3);
    lVar43 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)(dStack_270 - dVar16) >> 0x20) & _UNK_15061cc8c,
                               SUB84(dStack_270 - dVar16,0) & _UNK_15061cc88));
    auVar9._8_4_ = (int)lVar43;
    auVar9._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)(local_278 - dVar15) >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(local_278 - dVar15,0) &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar9._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
    iVar27 = movmskpd((int)local_168,auVar9);
    if ((uVar30 & 0x3fffffff) == 0 && iVar27 == 0) {
      local_460 = __real_3f1a36e2e0000000;
      lVar43 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)(dStack_280 - dStack_4d0) >> 0x20) &
                                 _UNK_15061cc8c,SUB84(dStack_280 - dStack_4d0,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar43;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)(local_288 - local_4d8) >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_288 - local_4d8,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      iVar31 = movmskpd(0,auVar4);
      lVar43 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)(dStack_290 - dVar18) >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dStack_290 - dVar18,0) & _UNK_15061cc88));
      auVar5._8_4_ = (int)lVar43;
      auVar5._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)(local_298 - dVar17) >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_298 - dVar17,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar5._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      uVar30 = movmskpd(iVar27,auVar5);
      uVar32 = iVar31 << 2 | uVar30;
      if (uVar32 != 0) {
        lVar43 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)(dStack_280 + dStack_4d0) >> 0x20) &
                                   _UNK_15061cc8c,SUB84(dStack_280 + dStack_4d0,0) & _UNK_15061cc88)
                  );
        auVar6._8_4_ = (int)lVar43;
        auVar6._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)(local_288 + local_4d8) >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(local_288 + local_4d8,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar6._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
        uVar32 = movmskpd(uVar32,auVar6);
        lVar43 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)(dStack_290 + dVar18) >> 0x20) & _UNK_15061cc8c
                                   ,SUB84(dStack_290 + dVar18,0) & _UNK_15061cc88));
        auVar8._8_4_ = (int)lVar43;
        auVar8._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)(local_298 + dVar17) >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(local_298 + dVar17,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar8._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
        uVar30 = movmskpd(uVar30,auVar8);
        if ((uVar32 & 0x3fffffff) != 0 || uVar30 != 0) goto LAB_1497ed954;
      }
      local_458 = __real_3f1a36e2e0000000;
      dVar13 = local_248 - dVar21;
      dVar14 = dStack_240 - dVar22;
      dVar11 = local_258 - dVar19;
      dVar12 = dStack_250 - dVar20;
      lVar43 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar14,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar43;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar13,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      uVar32 = movmskpd(0,auVar7);
      lVar43 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar12,0) & _UNK_15061cc88));
      auVar10._8_4_ = (int)lVar43;
      auVar10._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar10._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
      iVar27 = movmskpd(uVar30,auVar10);
      if ((uVar32 & 0x3fffffff) == 0 && iVar27 == 0) goto LAB_1497ed959;
    }
LAB_1497ed954:
    uVar42 = 1;
  }
  else {
LAB_1497ed959:
    uVar42 = 0;
  }
  (**(code **)(this->_padding_ + 0x4c0))(this,&local_1e8,uVar42);
  (**(code **)(this->_padding_ + 0x530))(this,&local_480);
  if (iStack_470 < local_474) {
    local_474 = iStack_470;
  }
  if (((local_474 == 1) && (0 < iStack_470)) && (*local_480 != iVar26)) {
    uVar42 = 1;
  }
  else {
    uVar42 = 0;
  }
  (**(code **)(this->_padding_ + 0x4f0))(this,&local_518,uVar42);
  (**(code **)(this->_padding_ + 0x510))(this,&local_310);
  if (iStack_300 < local_304) {
    local_304 = iStack_300;
  }
  if ((local_304 == 1) && (0 < iStack_300)) {
    local_368 = *local_310;
    dStack_360 = local_310[1];
    local_358 = local_310[2];
    if ((local_368 == local_228._s_0.X) &&
       ((dStack_360 == local_228._s_0.Y && (local_358 == local_2a0)))) goto LAB_1497eda56;
    uVar42 = 1;
  }
  else {
LAB_1497eda56:
    uVar42 = 0;
  }
  (**(code **)(this->_padding_ + 0x4d0))(this,&local_418,uVar42);
  (**(code **)(this->_padding_ + 0x518))(this,&local_2e0);
  if (iStack_2d0 < local_2d4) {
    local_2d4 = iStack_2d0;
  }
  if ((local_2d4 == 1) && (0 < iStack_2d0)) {
    local_348 = *local_2e0;
    dStack_340 = local_2e0[1];
    local_338 = local_2e0[2];
    if ((local_348 != local_210) || ((dStack_340 != dStack_208 || (local_338 != local_318)))) {
      uVar42 = 1;
      goto LAB_1497edaed;
    }
  }
  uVar42 = 0;
LAB_1497edaed:
  (**(code **)(this->_padding_ + 0x4d8))(this,&local_3e8,uVar42);
  (**(code **)(this->_padding_ + 0x538))(this,&local_438);
  if (iStack_428 < local_42c) {
    local_42c = iStack_428;
  }
  if (((local_42c == 1) && (0 < iStack_428)) && (*local_438 != lVar29)) {
    uVar42 = 1;
  }
  else {
    uVar42 = 0;
  }
  (**(code **)(this->_padding_ + 0x4f8))(this,&local_4b8,uVar42);
  FVar37.Data = (FScriptContainerElement *)0x0;
  uVar32 = 0;
  uVar39 = ~uVar25 >> 0x1f;
  uVar30 = uVar32;
  if ((int)uVar25 < local_520) {
    uVar30 = uVar39;
  }
  if ((uVar30 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar23)) {
    pcVar40 = (code *)swi(3);
    (*pcVar40)();
    return;
  }
  if (uVar25 == (int)uVar25 % local_524) {
    puVar33 = (undefined4 *)((longlong)((int)uVar25 % local_524) * (longlong)local_528 + local_530);
  }
  else {
    puVar33 = &local_51c;
  }
  *puVar33 = 0x3f800000;
  uVar30 = uVar32;
  if ((int)uVar25 < local_1d8) {
    uVar30 = uVar39;
  }
  if ((uVar30 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar23)) {
    pcVar40 = (code *)swi(3);
    (*pcVar40)();
    return;
  }
  if (uVar25 == (int)uVar25 % local_1dc) {
    pdVar34 = (double *)((longlong)((int)uVar25 % local_1dc) * (longlong)local_1e0 + local_1e8);
  }
  else {
    pdVar34 = local_1c8;
  }
  *pdVar34 = dVar17;
  pdVar34[1] = dVar18;
  pdVar34[2] = local_4d8;
  pdVar34[3] = dStack_4d0;
  pdVar34[4] = dVar15;
  pdVar34[5] = dVar16;
  pdVar34[6] = local_4c8;
  pdVar34[7] = dStack_4c0;
  pdVar34[8] = dVar19;
  pdVar34[9] = dVar20;
  pdVar34[10] = dVar21;
  pdVar34[0xb] = dVar22;
  if ((int)uVar25 < local_508) {
    uVar32 = uVar39;
  }
  if ((uVar32 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar23)) {
    pcVar40 = (code *)swi(3);
    (*pcVar40)();
    return;
  }
  if (uVar25 == (int)uVar25 % local_50c) {
    piVar35 = (int *)((longlong)((int)uVar25 % local_50c) * (longlong)local_510 + local_518);
  }
  else {
    piVar35 = local_504;
  }
  *piVar35 = iVar26;
  uVar32 = 0;
  uVar30 = uVar32;
  if ((int)uVar25 < local_408) {
    uVar30 = uVar39;
  }
  if ((uVar30 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar23)) {
    pcVar40 = (code *)swi(3);
    (*pcVar40)();
    return;
  }
  if (uVar25 == (int)uVar25 % local_40c) {
    pdVar34 = (double *)((longlong)((int)uVar25 % local_40c) * (longlong)local_410 + local_418);
  }
  else {
    pdVar34 = local_400;
  }
  *pdVar34 = local_228._s_0.X;
  pdVar34[1] = local_228._s_0.Y;
  pdVar34[2] = local_548;
  uVar30 = uVar32;
  if ((int)uVar25 < local_3d8) {
    uVar30 = uVar39;
  }
  if ((uVar30 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar23)) {
    pcVar40 = (code *)swi(3);
    (*pcVar40)();
    return;
  }
  if (uVar25 == (int)uVar25 % local_3dc) {
    pdVar34 = (double *)((longlong)((int)uVar25 % local_3dc) * (longlong)local_3e0 + local_3e8);
  }
  else {
    pdVar34 = local_3d0;
  }
  *pdVar34 = local_210;
  pdVar34[1] = dStack_208;
  pdVar34[2] = local_540;
  if ((int)uVar25 < local_4a8) {
    uVar32 = uVar39;
  }
  if ((uVar32 == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < NumElements)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                          ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar23)) {
    pcVar40 = (code *)swi(3);
    (*pcVar40)();
    return;
  }
  if (uVar25 == (int)uVar25 % local_4ac) {
    plVar36 = (long64 *)((longlong)((int)uVar25 % local_4ac) * (longlong)local_4b0 + local_4b8);
  }
  else {
    plVar36 = &local_4a0;
  }
  *plVar36 = lVar29;
  local_4f8 = PCGPointDataConstants::ActorReferenceAttribute;
  local_4f0.Flag = PCGMetadataDomainID::Default.Flag;
  local_4f0._1_3_ = PCGMetadataDomainID::Default._1_3_;
  local_4f0.CustomFlag = PCGMetadataDomainID::Default.CustomFlag;
  local_4f0.DebugName = PCGMetadataDomainID::Default.DebugName;
  local_568.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_568.AssetPath.PackageName.Number = 0;
  local_568.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_568.AssetPath.AssetName.Number = 0;
  local_568.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_568.SubPathString.Data.ArrayNum = 0;
  local_568.SubPathString.Data.ArrayMax = 0;
  this_00 = UPCGMetadata::FindOrCreateMetadataDomain((UPCGMetadata *)this->_padding_,&local_4f0);
  this_01 = (FPCGMetadataAttribute<FSoftObjectPath> *)FVar37.Data;
  if (this_00 != (FPCGMetadataDomain *)0x0) {
    this_01 = FPCGMetadataDomain::FindOrCreateAttribute<FSoftObjectPath>
                        (this_00,local_4f8,&local_568,false,false,false);
    FVar37.Data = local_568.SubPathString.Data.AllocatorInstance.Data;
  }
  if ((FPCGMetadataAttribute<FSoftObjectPath> *)FVar37.Data !=
      (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
    FMemory::Free(FVar37.Data);
  }
  if (this_01 != (FPCGMetadataAttribute<FSoftObjectPath> *)0x0) {
    local_588.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_588.AssetPath.PackageName.Number = 0;
    local_588.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_588.AssetPath.AssetName.Number = 0;
    local_588.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_588.SubPathString.Data.ArrayNum = 0;
    local_588.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_588,(UObject *)param_1);
    FPCGMetadataAttribute<FSoftObjectPath>::SetValue(this_01,lVar29,&local_588);
    if (local_588.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  pFVar38 = (FName *)(param_1->Tags).AllocatorInstance.Data;
  bVar23 = false;
  iVar26 = (param_1->Tags).ArrayNum;
  pFVar1 = pFVar38 + iVar26;
  while( true ) {
    if ((param_1->Tags).ArrayNum != iVar26) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_598);
    }
    if (pFVar38 == pFVar1) break;
    PCG::Private::FParseTagResult::FParseTagResult(&local_3b8,*pFVar38);
    local_590 = 0xffffffff;
    local_58c = 0;
    bVar24 = PCG::Private::SetAttributeFromTag
                       (&local_3b8,(UPCGMetadata *)this->_padding_,lVar29,CreateAttribute,
                        (TOptional<FName>)&local_590);
    if (bVar24) {
      bVar23 = (bool)(bVar23 | local_3b8.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1
                     );
    }
    if ((local_3b8.Value.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       ((void *)CONCAT44(local_3b8.Value.field0_0x0._4_4_,local_3b8.Value.field0_0x0._0_4_) !=
        (void *)0x0)) {
      FMemory::Free((void *)CONCAT44(local_3b8.Value.field0_0x0._4_4_,
                                     local_3b8.Value.field0_0x0._0_4_));
    }
    if ((local_3b8.OriginalAttribute.field0_0x0.TypedValue.Data.ArrayMax != -1) &&
       (local_3b8.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_3b8.OriginalAttribute.field0_0x0.TypedValue.Data.AllocatorInstance
                            .Data);
    }
    if (local_3b8.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Attribute.Data.AllocatorInstance.Data);
    }
    pFVar38 = pFVar38 + 1;
  }
  if (local_538 != (bool *)0x0) {
    *local_538 = bVar23;
  }
  return;
}

// AddToCrc @ 1497ee040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGBasePointData::AddToCrc(UPCGBasePointData *this,FArchiveCrc32 *param_1,bool param_2)

{
  longlong *plVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  ulonglong uVar7;
  UClass *this_00;
  TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
  *this_01;
  TTransform<double> *pTVar8;
  TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *pTVar9;
  TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
  *pTVar10;
  TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *this_02;
  uint *puVar11;
  TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
  *pTVar12;
  UPCGMetadata *this_03;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  bool local_1d7;
  uint local_1d4 [3];
  FString local_1c8;
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [48];
  undefined1 local_140 [56];
  undefined1 local_108 [64];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1d7 = param_2;
  UPCGSpatialData::AddToCrc((UPCGSpatialData *)this,param_1,param_2);
  pTVar5 = CVarCacheFullPointDataCrc.Ref;
  if (!param_2) goto LAB_1497ee3d0;
  bVar6 = IsInParallelGameThread();
  uVar14 = 0;
  if (bVar6) {
LAB_1497ee09a:
    uVar7 = uVar14;
  }
  else {
    bVar6 = IsInGameThread();
    uVar7 = 1;
    if (bVar6) goto LAB_1497ee09a;
  }
  if (pTVar5->ShadowedValue[uVar7] != false) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1443,"UPCGBasePointData::AddToCrc",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                 ,0x5a3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1443);
    }
    this_00 = StaticClass();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_1c8,(UObject *)0x0);
    ::operator<<((FArchive *)param_1,&local_1c8);
    local_1d4[0] = (**(code **)(this->_padding_ + 0x488))(this);
    if (local_1d4[0] != 0) {
      plVar1 = (longlong *)param_1->_padding_;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->_padding_ & 0x10000) == 0) {
          (**(code **)(param_1->_padding_ + 0x188))(param_1,local_1d4,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_1d4);
        }
      }
      else {
        local_1d4[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      this_01 = (TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                 *)(**(code **)(this->_padding_ + 0x500))(this,local_c8);
      iVar13 = (this_01->ElementView).NumElements;
      if (this_01->NumElements < iVar13) {
        iVar13 = this_01->NumElements;
      }
      uVar7 = uVar14;
      if (0 < iVar13) {
        do {
          pTVar8 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                   ::GetElement(this_01,(int)uVar7);
          UE::Math::operator<<((FArchive *)param_1,(TQuat<double> *)pTVar8);
          UE::Math::operator<<((FArchive *)param_1,(TVector<double> *)&pTVar8->Translation);
          UE::Math::operator<<((FArchive *)param_1,(TVector<double> *)&pTVar8->Scale3D);
          if ((param_1->_padding_ & 1) != 0) {
            dVar3 = (pTVar8->Translation).ZW.m128d_f64[0];
            dVar4 = (pTVar8->Translation).XY.m128d_f64[1];
            (pTVar8->Translation).XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
            (pTVar8->Translation).XY.m128d_f64[1] = dVar4;
            (pTVar8->Translation).ZW.m128d_f64[0] = dVar3;
            (pTVar8->Translation).ZW.m128d_f64[1] = 0.0;
            dVar3 = (pTVar8->Scale3D).ZW.m128d_f64[0];
            dVar4 = (pTVar8->Scale3D).XY.m128d_f64[1];
            (pTVar8->Scale3D).XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
            (pTVar8->Scale3D).XY.m128d_f64[1] = dVar4;
            (pTVar8->Scale3D).ZW.m128d_f64[0] = dVar3;
            (pTVar8->Scale3D).ZW.m128d_f64[1] = 0.0;
          }
          iVar13 = (this_01->ElementView).NumElements;
          uVar15 = (int)uVar7 + 1;
          if (this_01->NumElements < iVar13) {
            iVar13 = this_01->NumElements;
          }
          uVar7 = (ulonglong)uVar15;
        } while ((int)uVar15 < iVar13);
      }
      pTVar9 = (TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *)
               (**(code **)(this->_padding_ + 0x508))(this,local_1b8);
      `UPCGBasePointData::AddToCrc'::__l9::<lambda_1>::operator()<float>(&local_1d8,param_1,pTVar9);
      pTVar10 = (TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                 *)(**(code **)(this->_padding_ + 0x510))(this,local_170);
      `UPCGBasePointData::AddToCrc'::__l9::<lambda_1>::operator()<UE::Math::TVector<double>_>
                (&local_1d8,param_1,pTVar10);
      pTVar10 = (TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                 *)(**(code **)(this->_padding_ + 0x518))(this,local_140);
      `UPCGBasePointData::AddToCrc'::__l9::<lambda_1>::operator()<UE::Math::TVector<double>_>
                (&local_1d8,param_1,pTVar10);
      pTVar9 = (TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *)
               (**(code **)(this->_padding_ + 0x528))(this,local_1a0);
      `UPCGBasePointData::AddToCrc'::__l9::<lambda_1>::operator()<float>(&local_1d8,param_1,pTVar9);
      this_02 = (TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *)
                (**(code **)(this->_padding_ + 0x530))(this,local_188);
      iVar13 = (this_02->ElementView).NumElements;
      if (this_02->NumElements < iVar13) {
        iVar13 = this_02->NumElements;
      }
      if (0 < iVar13) {
        do {
          puVar11 = (uint *)TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                                      (this_02,(int)uVar14);
          puVar2 = *(uint **)param_1->_padding_;
          if ((uint *)((undefined8 *)param_1->_padding_)[1] < puVar2 + 1) {
            if ((param_1->_padding_ & 0x10000) == 0) {
              (**(code **)(param_1->_padding_ + 0x188))(param_1,puVar11,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)param_1,puVar11);
            }
          }
          else {
            *puVar11 = *puVar2;
            *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
          }
          iVar13 = (this_02->ElementView).NumElements;
          uVar15 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar15;
          if (this_02->NumElements < iVar13) {
            iVar13 = this_02->NumElements;
          }
        } while ((int)uVar15 < iVar13);
      }
      pTVar12 = (TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                 *)(**(code **)(this->_padding_ + 0x520))(this,local_108);
      `UPCGBasePointData::AddToCrc'::__l9::<lambda_1>::operator()<UE::Math::TVector4<double>_>
                (&local_1d8,param_1,pTVar12);
      this_03 = (UPCGMetadata *)(**(code **)(this->_padding_ + 800))(this);
      if (this_03 != (UPCGMetadata *)0x0) {
        UPCGMetadata::AddToCrc(this_03,param_1,local_1d7);
      }
    }
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      return;
    }
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
LAB_1497ee3d0:
  UPCGData::AddUIDToCrc((UPCGData *)this,param_1);
  return;
}

// AllocateProperties @ 1497ee650

void __thiscall
UPCGBasePointData::AllocateProperties(UPCGBasePointData *this,EPCGPointNativeProperties param_1)

{
  return;
}

// BP_SetPointsFrom @ 1497f0050

void __thiscall
UPCGBasePointData::BP_SetPointsFrom
          (UPCGBasePointData *this,UPCGBasePointData *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<int_const_,int> local_18;
  
  local_18.DataPtr = (int *)(param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  SetPoints(param_1,this,&local_18,false);
  return;
}

// CopyPointsTo @ 1497f6b50

void __thiscall
UPCGBasePointData::CopyPointsTo
          (UPCGBasePointData *this,UPCGBasePointData *param_1,TArrayView<int_const_,int> *param_2,
          TArrayView<int_const_,int> *param_3)

{
  (**(code **)(this->_padding_ + 0x620))();
  return;
}

// CopyPointsTo @ 1497f6b70

void __thiscall
UPCGBasePointData::CopyPointsTo
          (UPCGBasePointData *this,UPCGBasePointData *param_1,int param_2,int param_3,int param_4)

{
  (**(code **)(this->_padding_ + 0x628))();
  return;
}

// CopyPropertiesTo @ 1497f6ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGBasePointData::CopyPropertiesTo
          (UPCGBasePointData *this,UPCGBasePointData *param_1,TArrayView<int_const_,int> *param_2,
          TArrayView<int_const_,int> *param_3,EPCGPointNativeProperties param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStack_388 [32];
  TArrayView<int_const_,int> *local_368;
  TArrayView<int_const_,int> *local_360;
  EPCGPointNativeProperties local_358;
  int local_354;
  TPCGValueRange<float_const_,TStridedView<float_const_,int>_> local_350;
  TPCGValueRange<float,TStridedView<float,int>_> local_338;
  TPCGValueRange<float_const_,TStridedView<float_const_,int>_> local_320;
  TPCGValueRange<float,TStridedView<float,int>_> local_308;
  TPCGValueRange<int_const_,TStridedView<int_const_,int>_> local_2f0;
  TPCGValueRange<int,TStridedView<int,int>_> local_2d8;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> local_2c0;
  TPCGValueRange<__int64,TStridedView<__int64,int>_> local_2a0;
  TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
  local_280;
  TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> local_250;
  TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
  local_220;
  TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> local_1f0;
  TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
  local_1b8;
  TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_> local_178
  ;
  TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
  local_138;
  TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
  local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (((param_4 == None) || (iVar1 = param_2->ArrayNum, iVar1 == 0)) || (iVar1 != param_3->ArrayNum)
     ) {
    if (param_2->ArrayNum != param_3->ArrayNum) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReadIndices.Num() == WriteIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                         ,0x2a5,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x500))(this,&local_138);
    (**(code **)(this->_padding_ + 0x528))(this,&local_320);
    (**(code **)(this->_padding_ + 0x508))(this,&local_350);
    (**(code **)(this->_padding_ + 0x510))(this,&local_280);
    (**(code **)(this->_padding_ + 0x518))(this,&local_220);
    (**(code **)(this->_padding_ + 0x520))(this,&local_1b8);
    (**(code **)(this->_padding_ + 0x538))(this,&local_2c0);
    (**(code **)(this->_padding_ + 0x530))(this,&local_2f0);
    (**(code **)(param_1->_padding_ + 0x498))(param_1,param_4);
    (**(code **)(param_1->_padding_ + 0x4c0))(param_1,&local_b8,0);
    (**(code **)(param_1->_padding_ + 0x4e8))(param_1,&local_308,0);
    (**(code **)(param_1->_padding_ + 0x4c8))(param_1,&local_338,0);
    (**(code **)(param_1->_padding_ + 0x4d0))(param_1,&local_250,0);
    (**(code **)(param_1->_padding_ + 0x4d8))(param_1,&local_1f0,0);
    (**(code **)(param_1->_padding_ + 0x4e0))(param_1,&local_178,0);
    (**(code **)(param_1->_padding_ + 0x4f8))(param_1,&local_2a0,0);
    (**(code **)(param_1->_padding_ + 0x4f0))(param_1,&local_2d8,0);
    local_358 = param_4;
    local_368 = param_2;
    local_360 = param_3;
    local_354 = iVar1;
    `UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::
    operator()<UE::Math::TTransform<double>_>(&local_368,&local_b8,&local_138,Transform);
    `UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<float>
              (&local_368,&local_338,&local_350,Density);
    `UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>
              (&local_368,&local_250,&local_280,BoundsMin);
    `UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<UE::Math::TVector<double>_>
              (&local_368,&local_1f0,&local_220,BoundsMax);
    `UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<UE::Math::TVector4<double>_>
              (&local_368,&local_178,&local_1b8,Color);
    `UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<float>
              (&local_368,&local_308,&local_320,Steepness);
    `UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<int>
              (&local_368,&local_2d8,&local_2f0,Seed);
    `UPCGBasePointData::CopyPropertiesTo'::__l2::<lambda_1>::operator()<__int64>
              (&local_368,&local_2a0,&local_2c0,MetadataEntry);
    (**(code **)(param_1->_padding_ + 0x648))(param_1);
  }
  return;
}

// CopyPropertiesTo @ 1497f6ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPCGBasePointData::CopyPropertiesTo
          (UPCGBasePointData *this,UPCGBasePointData *param_1,int param_2,int param_3,int param_4,
          EPCGPointNativeProperties param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  code *pcVar3;
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
  bool bVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined1 auStack_428 [32];
  ulonglong local_408;
  longlong local_400;
  int local_3f8;
  ulonglong local_3f0;
  int local_3e8;
  longlong local_3e0;
  int local_3d8;
  int local_3d4;
  int local_3d0;
  undefined4 local_3cc;
  longlong local_3c8;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  undefined4 local_3b4;
  longlong local_3b0;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  ulonglong local_398;
  longlong local_390;
  int local_388;
  int local_384;
  int local_380;
  longlong local_378;
  int local_370;
  int local_36c;
  int local_368;
  longlong local_360;
  int local_358;
  int local_354;
  int local_350;
  longlong local_348;
  int local_340;
  int local_33c;
  int local_338;
  undefined8 local_330;
  longlong local_328;
  int local_320;
  int local_31c;
  int local_318;
  UPCGBasePointData *local_308;
  longlong local_300;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  undefined8 local_2e8 [3];
  longlong local_2d0;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  undefined8 local_2b8 [3];
  longlong local_2a0;
  int local_298;
  int local_294;
  int local_290;
  longlong local_270;
  int local_268;
  int local_264;
  int local_260;
  longlong local_238;
  int local_230;
  int local_22c;
  int local_228;
  undefined8 local_218 [4];
  longlong local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  longlong local_1b8;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  undefined8 local_198 [12];
  longlong local_138;
  int local_130;
  int local_12c;
  int local_128;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_428;
  uVar29 = (ulonglong)param_2;
  uVar23 = (ulonglong)param_3;
  if ((param_5 != None) && (uVar33 = (ulonglong)(uint)param_4, 0 < param_4)) {
    local_3f8 = param_2;
    local_308 = param_1;
    (**(code **)(this->_padding_ + 0x500))(this,&local_138);
    (**(code **)(this->_padding_ + 0x528))(this,&local_378);
    (**(code **)(this->_padding_ + 0x508))(this,&local_390);
    (**(code **)(this->_padding_ + 0x510))(this,&local_2a0);
    (**(code **)(this->_padding_ + 0x518))(this,&local_270);
    (**(code **)(this->_padding_ + 0x520))(this,&local_1f8);
    (**(code **)(this->_padding_ + 0x538))(this,&local_328);
    (**(code **)(this->_padding_ + 0x530))(this,&local_360);
    (**(code **)(param_1->_padding_ + 0x498))(param_1,param_5);
    (**(code **)(param_1->_padding_ + 0x4c0))(param_1,&local_1b8,0);
    (**(code **)(param_1->_padding_ + 0x4e8))(param_1,&local_3c8,0);
    (**(code **)(param_1->_padding_ + 0x4c8))(param_1,&local_3e0,0);
    (**(code **)(param_1->_padding_ + 0x4d0))(param_1,&local_300,0);
    (**(code **)(param_1->_padding_ + 0x4d8))(param_1,&local_2d0,0);
    (**(code **)(param_1->_padding_ + 0x4e0))(param_1,&local_238,0);
    (**(code **)(param_1->_padding_ + 0x4f8))(param_1,&local_348,0);
    (**(code **)(param_1->_padding_ + 0x4f0))(param_1,&local_3b0,0);
    iVar16 = (**(code **)(this->_padding_ + 0x488))(this);
    if (((iVar16 < param_4 + param_2) ||
        (iVar16 = (**(code **)(param_1->_padding_ + 0x488))(param_1), iVar16 < param_3 + param_4))
       && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("ReadStartIndex + Count <= GetNumPoints() && WriteStartIndex + Count <= To->GetNumPoints()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                               ,0x271,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_5 == All) {
      lVar27 = uVar29 - uVar23;
      local_3e8 = param_2 - param_3;
      uVar26 = uVar23;
      uVar30 = uVar29;
      local_398 = uVar33;
      do {
        uVar25 = (uint)uVar23;
        uVar24 = uVar25 + local_3e8;
        uVar31 = ~uVar24 >> 0x1f;
        uVar21 = 0;
        if ((int)uVar30 < local_128) {
          uVar21 = uVar31;
        }
        local_3f0 = uVar29;
        if ((uVar21 == 0) &&
           (local_408 = uVar29, local_400 = (longlong)local_128,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar32 = ~uVar25 >> 0x1f;
        lVar17 = (longlong)((int)uVar24 % local_12c) * (longlong)local_130;
        uVar2 = *(undefined8 *)(lVar17 + local_138);
        uVar4 = ((undefined8 *)(lVar17 + local_138))[1];
        puVar18 = (undefined8 *)(lVar17 + 0x10 + local_138);
        uVar5 = *puVar18;
        uVar6 = puVar18[1];
        puVar18 = (undefined8 *)(lVar17 + 0x20 + local_138);
        uVar7 = *puVar18;
        uVar8 = puVar18[1];
        puVar18 = (undefined8 *)(lVar17 + 0x30 + local_138);
        uVar9 = *puVar18;
        uVar10 = puVar18[1];
        puVar18 = (undefined8 *)(lVar17 + 0x40 + local_138);
        uVar11 = *puVar18;
        uVar12 = puVar18[1];
        puVar18 = (undefined8 *)(lVar17 + 0x50 + local_138);
        uVar13 = *puVar18;
        uVar14 = puVar18[1];
        uVar21 = 0;
        if ((int)uVar25 < local_1a8) {
          uVar21 = uVar32;
        }
        if ((uVar21 == 0) &&
           (local_408 = uVar26, local_400 = (longlong)local_1a8,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar21 = (int)uVar25 >> 0x1f;
        uVar22 = (uint)((longlong)((ulonglong)uVar21 << 0x20 | uVar23 & 0xffffffff) %
                       (longlong)local_1ac);
        if (uVar25 == uVar22) {
          puVar18 = (undefined8 *)((longlong)(int)uVar22 * (longlong)local_1b0 + local_1b8);
        }
        else {
          puVar18 = local_198;
        }
        *puVar18 = uVar2;
        puVar18[1] = uVar4;
        puVar18[2] = uVar5;
        puVar18[3] = uVar6;
        puVar18[4] = uVar7;
        puVar18[5] = uVar8;
        puVar18[6] = uVar9;
        puVar18[7] = uVar10;
        puVar18[8] = uVar11;
        puVar18[9] = uVar12;
        puVar18[10] = uVar13;
        puVar18[0xb] = uVar14;
        uVar22 = 0;
        if ((int)uVar24 < local_380) {
          uVar22 = uVar31;
        }
        if (uVar22 == 0) {
          local_408 = lVar27 + uVar26;
          local_400 = (longlong)local_380;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar1 = *(undefined4 *)
                 ((longlong)((int)uVar24 % local_384) * (longlong)local_388 + local_390);
        uVar22 = 0;
        if ((int)uVar25 < local_3d0) {
          uVar22 = uVar32;
        }
        if ((uVar22 == 0) &&
           (local_408 = uVar26, local_400 = (longlong)local_3d0,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = (uint)((longlong)((ulonglong)uVar21 << 0x20 | uVar23 & 0xffffffff) %
                       (longlong)local_3d4);
        if (uVar25 == uVar22) {
          puVar19 = (undefined4 *)((longlong)(int)uVar22 * (longlong)local_3d8 + local_3e0);
        }
        else {
          puVar19 = &local_3cc;
        }
        *puVar19 = uVar1;
        uVar22 = 0;
        if ((int)uVar24 < local_290) {
          uVar22 = uVar31;
        }
        if (uVar22 == 0) {
          local_408 = lVar27 + uVar26;
          local_400 = (longlong)local_290;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar17 = (longlong)((int)uVar24 % local_294) * (longlong)local_298;
        puVar18 = (undefined8 *)(lVar17 + local_2a0);
        uVar4 = *puVar18;
        uVar5 = puVar18[1];
        uVar2 = *(undefined8 *)(lVar17 + 0x10 + local_2a0);
        uVar22 = 0;
        if ((int)uVar25 < local_2f0) {
          uVar22 = uVar32;
        }
        if ((uVar22 == 0) &&
           (local_408 = uVar26, local_400 = (longlong)local_2f0,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = (uint)((longlong)((ulonglong)uVar21 << 0x20 | uVar23 & 0xffffffff) %
                       (longlong)local_2f4);
        if (uVar25 == uVar22) {
          puVar18 = (undefined8 *)((longlong)(int)uVar22 * (longlong)local_2f8 + local_300);
        }
        else {
          puVar18 = local_2e8;
        }
        *puVar18 = uVar4;
        puVar18[1] = uVar5;
        puVar18[2] = uVar2;
        uVar22 = 0;
        if ((int)uVar24 < local_260) {
          uVar22 = uVar31;
        }
        if (uVar22 == 0) {
          local_408 = lVar27 + uVar26;
          local_400 = (longlong)local_260;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar17 = (longlong)((int)uVar24 % local_264) * (longlong)local_268;
        puVar18 = (undefined8 *)(lVar17 + local_270);
        uVar4 = *puVar18;
        uVar5 = puVar18[1];
        uVar2 = *(undefined8 *)(lVar17 + 0x10 + local_270);
        uVar22 = 0;
        if ((int)uVar25 < local_2c0) {
          uVar22 = uVar32;
        }
        if ((uVar22 == 0) &&
           (local_408 = uVar26, local_400 = (longlong)local_2c0,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = (uint)((longlong)((ulonglong)uVar21 << 0x20 | uVar23 & 0xffffffff) %
                       (longlong)local_2c4);
        if (uVar25 == uVar22) {
          puVar18 = (undefined8 *)((longlong)(int)uVar22 * (longlong)local_2c8 + local_2d0);
        }
        else {
          puVar18 = local_2b8;
        }
        *puVar18 = uVar4;
        puVar18[1] = uVar5;
        puVar18[2] = uVar2;
        uVar22 = 0;
        if ((int)uVar24 < local_1e8) {
          uVar22 = uVar31;
        }
        if (uVar22 == 0) {
          local_408 = lVar27 + uVar26;
          local_400 = (longlong)local_1e8;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar17 = (longlong)((int)uVar24 % local_1ec) * (longlong)local_1f0;
        puVar18 = (undefined8 *)(lVar17 + local_1f8);
        uVar2 = *puVar18;
        uVar4 = puVar18[1];
        puVar18 = (undefined8 *)(lVar17 + 0x10 + local_1f8);
        uVar5 = *puVar18;
        uVar6 = puVar18[1];
        uVar22 = 0;
        if ((int)uVar25 < local_228) {
          uVar22 = uVar32;
        }
        if ((uVar22 == 0) &&
           (local_408 = uVar26, local_400 = (longlong)local_228,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = (uint)((longlong)((ulonglong)uVar21 << 0x20 | uVar23 & 0xffffffff) %
                       (longlong)local_22c);
        if (uVar25 == uVar22) {
          puVar18 = (undefined8 *)((longlong)(int)uVar22 * (longlong)local_230 + local_238);
        }
        else {
          puVar18 = local_218;
        }
        *puVar18 = uVar2;
        puVar18[1] = uVar4;
        puVar18[2] = uVar5;
        puVar18[3] = uVar6;
        uVar22 = 0;
        if ((int)uVar24 < local_368) {
          uVar22 = uVar31;
        }
        if (uVar22 == 0) {
          local_408 = lVar27 + uVar26;
          local_400 = (longlong)local_368;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar1 = *(undefined4 *)
                 ((longlong)((int)uVar24 % local_36c) * (longlong)local_370 + local_378);
        uVar22 = 0;
        if ((int)uVar25 < local_3b8) {
          uVar22 = uVar32;
        }
        if ((uVar22 == 0) &&
           (local_408 = uVar26, local_400 = (longlong)local_3b8,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = (uint)((longlong)((ulonglong)uVar21 << 0x20 | uVar23 & 0xffffffff) %
                       (longlong)local_3bc);
        if (uVar25 == uVar22) {
          puVar19 = (undefined4 *)((longlong)(int)uVar22 * (longlong)local_3c0 + local_3c8);
        }
        else {
          puVar19 = &local_3b4;
        }
        *puVar19 = uVar1;
        uVar22 = 0;
        if ((int)uVar24 < local_350) {
          uVar22 = uVar31;
        }
        if (uVar22 == 0) {
          local_408 = lVar27 + uVar26;
          local_400 = (longlong)local_350;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_3f8 = *(int *)((longlong)((int)uVar24 % local_354) * (longlong)local_358 + local_360);
        uVar22 = 0;
        if ((int)uVar25 < local_3a0) {
          uVar22 = uVar32;
        }
        if ((uVar22 == 0) &&
           (local_408 = uVar26, local_400 = (longlong)local_3a0,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar22 = (uint)((longlong)((ulonglong)uVar21 << 0x20 | uVar23 & 0xffffffff) %
                       (longlong)local_3a4);
        if (uVar25 == uVar22) {
          piVar20 = (int *)((longlong)(int)uVar22 * (longlong)local_3a8 + local_3b0);
        }
        else {
          piVar20 = &local_39c;
        }
        *piVar20 = local_3f8;
        uVar22 = 0;
        if ((int)uVar24 < local_318) {
          uVar22 = uVar31;
        }
        if (uVar22 == 0) {
          local_408 = lVar27 + uVar26;
          local_400 = (longlong)local_318;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar2 = *(undefined8 *)
                 ((longlong)((int)uVar24 % local_31c) * (longlong)local_320 + local_328);
        uVar24 = 0;
        if ((int)uVar25 < local_338) {
          uVar24 = uVar32;
        }
        if ((uVar24 == 0) &&
           (local_408 = uVar26, local_400 = (longlong)local_338,
           bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar15)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar21 = (uint)((longlong)((ulonglong)uVar21 << 0x20 | uVar23 & 0xffffffff) %
                       (longlong)local_33c);
        if (uVar25 == uVar21) {
          puVar18 = (undefined8 *)((longlong)(int)uVar21 * (longlong)local_340 + local_348);
        }
        else {
          puVar18 = &local_330;
        }
        uVar30 = (ulonglong)((int)uVar30 + 1);
        uVar23 = (ulonglong)(uVar25 + 1);
        *puVar18 = uVar2;
        uVar26 = uVar26 + 1;
        local_398 = local_398 - 1;
        uVar29 = local_3f0 + 1;
      } while (local_398 != 0);
      local_398 = 0;
      local_3f0 = uVar29;
    }
    else {
      if ((param_5 & Transform) != None) {
        iVar16 = param_2 - param_3;
        uVar26 = uVar23;
        uVar25 = param_3;
        do {
          uVar21 = uVar25 + iVar16;
          uVar24 = 0;
          if ((int)uVar21 < local_128) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if (uVar24 == 0) {
            local_408 = uVar26 + (uVar29 - uVar23);
            local_400 = (longlong)local_128;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar27 = (longlong)((int)uVar21 % local_12c) * (longlong)local_130;
          uVar2 = *(undefined8 *)(lVar27 + local_138);
          uVar4 = ((undefined8 *)(lVar27 + local_138))[1];
          puVar18 = (undefined8 *)(lVar27 + 0x10 + local_138);
          uVar5 = *puVar18;
          uVar6 = puVar18[1];
          puVar18 = (undefined8 *)(lVar27 + 0x20 + local_138);
          uVar7 = *puVar18;
          uVar8 = puVar18[1];
          puVar18 = (undefined8 *)(lVar27 + 0x30 + local_138);
          uVar9 = *puVar18;
          uVar10 = puVar18[1];
          puVar18 = (undefined8 *)(lVar27 + 0x40 + local_138);
          uVar11 = *puVar18;
          uVar12 = puVar18[1];
          puVar18 = (undefined8 *)(lVar27 + 0x50 + local_138);
          uVar13 = *puVar18;
          uVar14 = puVar18[1];
          uVar21 = 0;
          if ((int)uVar25 < local_1a8) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_408 = uVar26, local_400 = (longlong)local_1a8,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar15)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar25 == (int)uVar25 % local_1ac) {
            puVar18 = (undefined8 *)
                      ((longlong)((int)uVar25 % local_1ac) * (longlong)local_1b0 + local_1b8);
          }
          else {
            puVar18 = local_198;
          }
          *puVar18 = uVar2;
          puVar18[1] = uVar4;
          uVar25 = uVar25 + 1;
          puVar18[2] = uVar5;
          puVar18[3] = uVar6;
          uVar26 = uVar26 + 1;
          puVar18[4] = uVar7;
          puVar18[5] = uVar8;
          puVar18[6] = uVar9;
          puVar18[7] = uVar10;
          puVar18[8] = uVar11;
          puVar18[9] = uVar12;
          puVar18[10] = uVar13;
          puVar18[0xb] = uVar14;
          uVar33 = uVar33 - 1;
          param_2 = local_3f8;
        } while (uVar33 != 0);
      }
      iVar16 = param_2;
      if ((param_5 & Density) != None) {
        uVar33 = (ulonglong)(uint)param_4;
        uVar29 = uVar23;
        uVar25 = param_3;
        do {
          uVar21 = uVar25 + (param_2 - param_3);
          uVar24 = 0;
          if ((int)uVar21 < local_380) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if (uVar24 == 0) {
            local_408 = uVar29 + ((longlong)param_2 - uVar23);
            local_400 = (longlong)local_380;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar1 = *(undefined4 *)
                   ((longlong)((int)uVar21 % local_384) * (longlong)local_388 + local_390);
          uVar21 = 0;
          if ((int)uVar25 < local_3d0) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_408 = uVar29, local_400 = (longlong)local_3d0,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar15)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar25 == (int)uVar25 % local_3d4) {
            puVar19 = (undefined4 *)
                      ((longlong)((int)uVar25 % local_3d4) * (longlong)local_3d8 + local_3e0);
          }
          else {
            puVar19 = &local_3cc;
          }
          uVar25 = uVar25 + 1;
          *puVar19 = uVar1;
          uVar29 = uVar29 + 1;
          uVar33 = uVar33 - 1;
          iVar16 = local_3f8;
        } while (uVar33 != 0);
      }
      iVar28 = iVar16;
      if ((param_5 & BoundsMin) != None) {
        uVar33 = (ulonglong)(uint)param_4;
        uVar29 = uVar23;
        uVar25 = param_3;
        do {
          uVar21 = uVar25 + (iVar16 - param_3);
          uVar24 = 0;
          if ((int)uVar21 < local_290) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if (uVar24 == 0) {
            local_408 = uVar29 + ((longlong)iVar16 - uVar23);
            local_400 = (longlong)local_290;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar27 = (longlong)((int)uVar21 % local_294) * (longlong)local_298;
          puVar18 = (undefined8 *)(lVar27 + local_2a0);
          uVar4 = *puVar18;
          uVar5 = puVar18[1];
          uVar2 = *(undefined8 *)(lVar27 + 0x10 + local_2a0);
          uVar21 = 0;
          if ((int)uVar25 < local_2f0) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_408 = uVar29, local_400 = (longlong)local_2f0,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar15)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar25 == (int)uVar25 % local_2f4) {
            puVar18 = (undefined8 *)
                      ((longlong)((int)uVar25 % local_2f4) * (longlong)local_2f8 + local_300);
          }
          else {
            puVar18 = local_2e8;
          }
          uVar25 = uVar25 + 1;
          uVar29 = uVar29 + 1;
          *puVar18 = uVar4;
          puVar18[1] = uVar5;
          puVar18[2] = uVar2;
          uVar33 = uVar33 - 1;
          iVar28 = local_3f8;
        } while (uVar33 != 0);
      }
      iVar16 = iVar28;
      if ((param_5 & BoundsMax) != None) {
        uVar33 = (ulonglong)(uint)param_4;
        uVar29 = uVar23;
        uVar25 = param_3;
        do {
          uVar21 = (iVar28 - param_3) + uVar25;
          uVar24 = 0;
          if ((int)uVar21 < local_260) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if (uVar24 == 0) {
            local_408 = uVar29 + ((longlong)iVar28 - uVar23);
            local_400 = (longlong)local_260;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar27 = (longlong)((int)uVar21 % local_264) * (longlong)local_268;
          puVar18 = (undefined8 *)(lVar27 + local_270);
          uVar4 = *puVar18;
          uVar5 = puVar18[1];
          uVar2 = *(undefined8 *)(lVar27 + 0x10 + local_270);
          uVar21 = 0;
          if ((int)uVar25 < local_2c0) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_408 = uVar29, local_400 = (longlong)local_2c0,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar15)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar25 == (int)uVar25 % local_2c4) {
            puVar18 = (undefined8 *)
                      ((longlong)local_2c8 * (longlong)((int)uVar25 % local_2c4) + local_2d0);
          }
          else {
            puVar18 = local_2b8;
          }
          uVar25 = uVar25 + 1;
          uVar29 = uVar29 + 1;
          *puVar18 = uVar4;
          puVar18[1] = uVar5;
          puVar18[2] = uVar2;
          uVar33 = uVar33 - 1;
          iVar16 = local_3f8;
        } while (uVar33 != 0);
      }
      iVar28 = iVar16;
      if ((param_5 & Color) != None) {
        uVar33 = (ulonglong)(uint)param_4;
        uVar29 = uVar23;
        uVar25 = param_3;
        do {
          uVar21 = (iVar16 - param_3) + uVar25;
          uVar24 = 0;
          if ((int)uVar21 < local_1e8) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if (uVar24 == 0) {
            local_408 = uVar29 + ((longlong)iVar16 - uVar23);
            local_400 = (longlong)local_1e8;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          lVar27 = (longlong)((int)uVar21 % local_1ec) * (longlong)local_1f0;
          puVar18 = (undefined8 *)(lVar27 + local_1f8);
          uVar2 = *puVar18;
          uVar4 = puVar18[1];
          puVar18 = (undefined8 *)(lVar27 + 0x10 + local_1f8);
          uVar5 = *puVar18;
          uVar6 = puVar18[1];
          uVar21 = 0;
          if ((int)uVar25 < local_228) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_408 = uVar29, local_400 = (longlong)local_228,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar15)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar25 == (int)uVar25 % local_22c) {
            puVar18 = (undefined8 *)
                      ((longlong)((int)uVar25 % local_22c) * (longlong)local_230 + local_238);
          }
          else {
            puVar18 = local_218;
          }
          uVar25 = uVar25 + 1;
          *puVar18 = uVar2;
          puVar18[1] = uVar4;
          uVar29 = uVar29 + 1;
          puVar18[2] = uVar5;
          puVar18[3] = uVar6;
          uVar33 = uVar33 - 1;
          iVar28 = local_3f8;
        } while (uVar33 != 0);
      }
      iVar16 = iVar28;
      if ((param_5 & Steepness) != None) {
        uVar33 = (ulonglong)(uint)param_4;
        uVar29 = uVar23;
        uVar25 = param_3;
        do {
          uVar21 = uVar25 + (iVar28 - param_3);
          uVar24 = 0;
          if ((int)uVar21 < local_368) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if (uVar24 == 0) {
            local_408 = uVar29 + ((longlong)iVar28 - uVar23);
            local_400 = (longlong)local_368;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar1 = *(undefined4 *)
                   ((longlong)((int)uVar21 % local_36c) * (longlong)local_370 + local_378);
          uVar21 = 0;
          if ((int)uVar25 < local_3b8) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_408 = uVar29, local_400 = (longlong)local_3b8,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar15)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar25 == (int)uVar25 % local_3bc) {
            puVar19 = (undefined4 *)
                      ((longlong)((int)uVar25 % local_3bc) * (longlong)local_3c0 + local_3c8);
          }
          else {
            puVar19 = &local_3b4;
          }
          uVar25 = uVar25 + 1;
          *puVar19 = uVar1;
          uVar29 = uVar29 + 1;
          uVar33 = uVar33 - 1;
          iVar16 = local_3f8;
        } while (uVar33 != 0);
      }
      iVar28 = iVar16;
      if ((param_5 & Seed) != None) {
        uVar33 = (ulonglong)(uint)param_4;
        uVar29 = uVar23;
        uVar25 = param_3;
        do {
          uVar21 = uVar25 + (iVar16 - param_3);
          uVar24 = 0;
          if ((int)uVar21 < local_350) {
            uVar24 = ~uVar21 >> 0x1f;
          }
          if (uVar24 == 0) {
            local_408 = uVar29 + ((longlong)iVar16 - uVar23);
            local_400 = (longlong)local_350;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar28 = *(int *)((longlong)((int)uVar21 % local_354) * (longlong)local_358 + local_360);
          uVar21 = 0;
          if ((int)uVar25 < local_3a0) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_408 = uVar29, local_400 = (longlong)local_3a0,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar15)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar25 == (int)uVar25 % local_3a4) {
            piVar20 = (int *)((longlong)((int)uVar25 % local_3a4) * (longlong)local_3a8 + local_3b0)
            ;
          }
          else {
            piVar20 = &local_39c;
          }
          uVar25 = uVar25 + 1;
          *piVar20 = iVar28;
          uVar29 = uVar29 + 1;
          uVar33 = uVar33 - 1;
          iVar28 = local_3f8;
        } while (uVar33 != 0);
      }
      if ((char)param_5 < '\0') {
        uVar33 = (ulonglong)(uint)param_4;
        lVar27 = (longlong)iVar28 - uVar23;
        uVar29 = uVar23;
        do {
          uVar25 = (uint)uVar23;
          uVar24 = uVar25 + (iVar28 - param_3);
          uVar21 = 0;
          if ((int)uVar24 < local_318) {
            uVar21 = ~uVar24 >> 0x1f;
          }
          if (uVar21 == 0) {
            local_408 = uVar29 + lVar27;
            local_400 = (longlong)local_318;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar15) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar2 = *(undefined8 *)
                   ((longlong)((int)uVar24 % local_31c) * (longlong)local_320 + local_328);
          uVar21 = 0;
          if ((int)uVar25 < local_338) {
            uVar21 = ~uVar25 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (local_408 = uVar29, local_400 = (longlong)local_338,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar15)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar21 = (uint)((longlong)
                          ((ulonglong)(uint)((int)uVar25 >> 0x1f) << 0x20 | uVar23 & 0xffffffff) %
                         (longlong)local_33c);
          if (uVar25 == uVar21) {
            puVar18 = (undefined8 *)((longlong)local_340 * (longlong)(int)uVar21 + local_348);
          }
          else {
            puVar18 = &local_330;
          }
          uVar23 = (ulonglong)(uVar25 + 1);
          *puVar18 = uVar2;
          uVar29 = uVar29 + 1;
          uVar33 = uVar33 - 1;
        } while (uVar33 != 0);
      }
    }
    (**(code **)(local_308->_padding_ + 0x648))();
  }
  return;
}

// CopyUnallocatedPropertiesFrom @ 1497fab50

void __thiscall
UPCGBasePointData::CopyUnallocatedPropertiesFrom(UPCGBasePointData *this,UPCGBasePointData *param_1)

{
  return;
}

// DirtyCache @ 1497fff10

void __thiscall UPCGBasePointData::DirtyCache(UPCGBasePointData *this)

{
  this->bOctreeIsDirty = true;
  this->bBoundsAreDirty = true;
  return;
}

// Flatten @ 1498059c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPCGBasePointData::Flatten(UPCGBasePointData *this)

{
  code *pcVar1;
  UPCGMetadata *this_00;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_188 [32];
  ForAnyElementType local_138;
  undefined8 local_130;
  longlong local_128;
  int local_120;
  int local_11c;
  int iStack_118;
  undefined8 local_110;
  TPairInitializer<FPCGMetadataDomainID_const_&,TArrayView<__int64_const_,int>_const_&> local_108;
  TArrayView<__int64_const_,int> local_f8;
  initializer_list<TPairInitializer<FPCGMetadataDomainID_const_&,TArrayView<__int64_const_,int>_const_&>_>
  local_e8;
  longlong local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  ulonglong local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  undefined1 local_98 [32];
  undefined1 local_78 [72];
  undefined4 local_30;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    iVar3 = UPCGMetadata::GetAttributeCount((UPCGMetadata *)this->_padding_);
    pcVar1 = *(code **)(this->_padding_ + 0x538);
    if (iVar3 == 0) {
      (*pcVar1)(this,local_98);
      (**(code **)(this->_padding_ + 0x4a0))(this,0x80);
      (**(code **)(this->_padding_ + 0x4f8))(this,&local_128,0);
      uVar7 = 0;
      iVar3 = local_11c;
      if (iStack_118 < local_11c) {
        iVar3 = iStack_118;
      }
      if (0 < iVar3) {
        do {
          uVar4 = 0;
          if ((int)uVar7 < iStack_118) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (uVar7 == (int)uVar7 % local_11c) {
            puVar5 = (undefined8 *)
                     ((longlong)local_120 * (longlong)((int)uVar7 % local_11c) + local_128);
          }
          else {
            puVar5 = &local_110;
          }
          *puVar5 = 0xffffffffffffffff;
          uVar7 = uVar7 + 1;
          iVar3 = local_11c;
          if (iStack_118 < local_11c) {
            iVar3 = iStack_118;
          }
        } while ((int)uVar7 < iVar3);
      }
    }
    else {
      (*pcVar1)(this,&local_b8);
      uVar11 = 0;
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = 0;
      uVar7 = (**(code **)(this->_padding_ + 0x488))(this);
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      uVar10 = uVar11;
      if (local_130._4_4_ < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar7,&local_138,(int)local_130,(int *)((longlong)&local_130 + 4));
      }
      while( true ) {
        iVar9 = (int)uVar10;
        iVar3 = (int)local_130;
        if (iVar9 == local_a8) break;
        pFVar8 = (FScriptContainerElement *)
                 ((longlong)(iVar9 % local_ac) * (longlong)local_b0 + local_b8);
        if (*(longlong *)pFVar8 != -1) {
          if (((local_138.Data <= pFVar8) &&
              (pFVar8 < local_138.Data + (longlong)local_130._4_4_ * 8)) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          iVar3 = (int)local_130;
          if ((int)local_130 == local_130._4_4_) {
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_138,(int *)((longlong)&local_130 + 4));
          }
          local_130 = CONCAT44(local_130._4_4_,iVar3 + 1);
          *(longlong *)(local_138.Data + (longlong)iVar3 * 8) = *(longlong *)pFVar8;
        }
        uVar10 = (ulonglong)(iVar9 + 1);
      }
      this_00 = (UPCGMetadata *)this->_padding_;
      local_f8.DataPtr = (long64 *)local_138.Data;
      if (((int)local_130 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_f8.ArrayNum = iVar3;
      local_108.Key = &PCGMetadataDomainID::Elements;
      local_108.Value = &local_f8;
      local_e8._First = &local_108;
      local_e8._Last =
           (TPairInitializer<FPCGMetadataDomainID_const_&,TArrayView<__int64_const_,int>_const_&> *)
           &local_f8;
      TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
      ::
      TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
                ((TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
                  *)local_78,&local_e8);
      bVar2 = UPCGMetadata::FlattenAndCompress
                        (this_00,(TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
                                  *)local_78);
      local_30 = 0;
      if ((void *)local_78._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_78._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TArrayView<__int64_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TArrayView<__int64_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FPCGMetadataDomainID,TArrayView<__int64_const_,int>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_78);
      if (bVar2) {
        (**(code **)(this->_padding_ + 0x4f8))(this,&local_d8,1);
        uVar10 = uVar11;
        while (iVar3 = (int)uVar11, iVar3 != local_c8) {
          if (iVar3 == iVar3 % local_cc) {
            puVar6 = (ulonglong *)((longlong)local_d0 * (longlong)(iVar3 % local_cc) + local_d8);
          }
          else {
            puVar6 = &local_c0;
          }
          uVar12 = uVar10;
          if (*puVar6 != 0xffffffffffffffff) {
            uVar12 = uVar10 + 1;
            *puVar6 = uVar10;
          }
          uVar10 = uVar12;
          uVar11 = (ulonglong)(iVar3 + 1);
        }
      }
      if (local_138.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data);
      }
    }
  }
  return;
}

// FreeProperties @ 14980f410

void __thiscall
UPCGBasePointData::FreeProperties(UPCGBasePointData *this,EPCGPointNativeProperties param_1)

{
  return;
}

// GetAllSupportedMetadataDomainIDs @ 14980f870

TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBasePointData::GetAllSupportedMetadataDomainIDs
          (UPCGBasePointData *this,
          TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FPCGMetadataDomainID FVar2;
  FPCGMetadataDomainID FVar3;
  undefined8 local_48;
  FName FStack_40;
  undefined8 local_38;
  FName FStack_30;
  
  FVar3 = PCGMetadataDomainID::Data;
  FVar2 = PCGMetadataDomainID::Elements;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,&__return_storage_ptr__->AllocatorInstance,2,
             &__return_storage_ptr__->ArrayMax);
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = FVar3._0_8_;
  FStack_40 = FVar3.DebugName;
  *(undefined8 *)pFVar1 = local_48;
  *(FName *)(pFVar1 + 8) = FStack_40;
  local_38 = FVar2._0_8_;
  FStack_30 = FVar2.DebugName;
  *(undefined8 *)(pFVar1 + 0x10) = local_38;
  *(FName *)(pFVar1 + 0x18) = FStack_30;
  return __return_storage_ptr__;
}

// GetAllocatedProperties @ 14980f900

EPCGPointNativeProperties __thiscall
UPCGBasePointData::GetAllocatedProperties(UPCGBasePointData *this,bool param_1)

{
  return All;
}

// GetBounds @ 149810350

TBox<double> * __thiscall
UPCGBasePointData::GetBounds(UPCGBasePointData *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  if (this->bBoundsAreDirty != false) {
    RecomputeBounds(this);
  }
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->Bounds).IsValid;
  uVar6 = (this->Bounds).Pad[0];
  uVar7 = (this->Bounds).Pad[1];
  uVar8 = (this->Bounds).Pad[2];
  uVar9 = (this->Bounds).Pad[3];
  uVar10 = (this->Bounds).Pad[4];
  uVar11 = (this->Bounds).Pad[5];
  uVar12 = (this->Bounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetBoundsMax @ 1498103b0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall UPCGBasePointData::GetBoundsMax(UPCGBasePointData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> *pTVar4;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  (**(code **)(this->_padding_ + 0x518))(this,&local_38);
  if (-1 < param_1) {
    if (param_1 < local_28) {
      uVar3 = 0;
      if (param_1 < local_28) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TVector<double> *)(*pcVar1)();
          return pTVar4;
        }
      }
      return (TVector<double> *)((longlong)(param_1 % local_2c) * (longlong)local_30 + local_38);
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:_struct_UE::Math::TVector<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<8>(int)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return &`public:_struct_UE::Math::TVector<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<8>(int)const___ptr64'
          ::__l7::Invalid;
}

// GetBoundsMaxValueRange @ 149810470

TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> * __thiscall
UPCGBasePointData::GetBoundsMaxValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x92,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TVector<double> *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetBoundsMaxValuesFromRange @ 1498104c0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
UPCGBasePointData::GetBoundsMaxValuesFromRange
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGPointInputRange *param_1)

{
  PCGBasePointData::GetInputRangeValues<8>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetBoundsMin @ 1498104e0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector<double> * __thiscall UPCGBasePointData::GetBoundsMin(UPCGBasePointData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> *pTVar4;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  (**(code **)(this->_padding_ + 0x510))(this,&local_38);
  if (-1 < param_1) {
    if (param_1 < local_28) {
      uVar3 = 0;
      if (param_1 < local_28) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TVector<double> *)(*pcVar1)();
          return pTVar4;
        }
      }
      return (TVector<double> *)((longlong)(param_1 % local_2c) * (longlong)local_30 + local_38);
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:_struct_UE::Math::TVector<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<4>(int)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return &`public:_struct_UE::Math::TVector<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<4>(int)const___ptr64'
          ::__l7::Invalid;
}

// GetBoundsMinValueRange @ 1498105a0

TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> * __thiscall
UPCGBasePointData::GetBoundsMinValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x91,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TVector<double> *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetBoundsMinValuesFromRange @ 1498105f0

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __cdecl
UPCGBasePointData::GetBoundsMinValuesFromRange
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGPointInputRange *param_1)

{
  PCGBasePointData::GetInputRangeValues<4>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetColor @ 1498122c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector4<double> * __thiscall UPCGBasePointData::GetColor(UPCGBasePointData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector4<double> *pTVar4;
  longlong local_48;
  int local_40;
  int local_3c;
  int local_38;
  
  (**(code **)(this->_padding_ + 0x520))(this,&local_48);
  if (-1 < param_1) {
    if (param_1 < local_38) {
      uVar3 = 0;
      if (param_1 < local_38) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TVector4<double> *)(*pcVar1)();
          return pTVar4;
        }
      }
      return (TVector4<double> *)((longlong)(param_1 % local_3c) * (longlong)local_40 + local_48);
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:_struct_UE::Math::TVector4<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<16>(int)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_UE::Math::TVector4<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<16>(int)const___ptr64'
      ::__l7::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_UE::Math::TVector4<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<16>(int)const___ptr64'
                         ::__l7::_thread_safe_static_guard_0__);
    if (`public:_struct_UE::Math::TVector4<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<16>(int)const___ptr64'
        ::__l7::_thread_safe_static_guard_0__ == -1) {
      `public:_struct_UE::Math::TVector4<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<16>(int)const___ptr64'
      ::__l7::Invalid.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
      `public:_struct_UE::Math::TVector4<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<16>(int)const___ptr64'
      ::__l7::Invalid.field0_0x0._s_0.W = _UNK_15061cbc8;
      `public:_struct_UE::Math::TVector4<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<16>(int)const___ptr64'
      ::__l7::Invalid.field0_0x0._s_0.X = 0.0;
      `public:_struct_UE::Math::TVector4<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<16>(int)const___ptr64'
      ::__l7::Invalid.field0_0x0._s_0.Y = 0.0;
      _Init_thread_footer(&`public:_struct_UE::Math::TVector4<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<16>(int)const___ptr64'
                           ::__l7::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_struct_UE::Math::TVector4<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<16>(int)const___ptr64'
          ::__l7::Invalid;
}

// GetColorValueRange @ 1498123e0

TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_> *
__thiscall
UPCGBasePointData::GetColorValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x93,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TVector4<double> *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// GetColorValuesFromRange @ 149812440

TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> * __cdecl
UPCGBasePointData::GetColorValuesFromRange
          (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGPointInputRange *param_1)

{
  PCGBasePointData::GetInputRangeValues<16>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetConstBoundsMaxValueRange @ 149812470

TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
* __thiscall
UPCGBasePointData::GetConstBoundsMaxValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
          *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0xa2,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TVector<double> *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetConstBoundsMinValueRange @ 1498124c0

TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
* __thiscall
UPCGBasePointData::GetConstBoundsMinValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
          *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0xa1,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TVector<double> *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetConstColorValueRange @ 149812510

TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
* __thiscall
UPCGBasePointData::GetConstColorValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
          *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0xa3,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TVector4<double> *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// GetConstDensityValueRange @ 149812570

TPCGValueRange<float_const_,TStridedView<float_const_,int>_> * __thiscall
UPCGBasePointData::GetConstDensityValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0xa0,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (float *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetConstMetadataEntryValueRange @ 1498125c0

TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> * __thiscall
UPCGBasePointData::GetConstMetadataEntryValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0xa6,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (long64 *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetConstSeedValueRange @ 149812610

TPCGValueRange<int_const_,TStridedView<int_const_,int>_> * __thiscall
UPCGBasePointData::GetConstSeedValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0xa5,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (int *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetConstSteepnessValueRange @ 149812660

TPCGValueRange<float_const_,TStridedView<float_const_,int>_> * __thiscall
UPCGBasePointData::GetConstSteepnessValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0xa4,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (float *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetConstTransformValueRange @ 1498126b0

TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
* __thiscall
UPCGBasePointData::GetConstTransformValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
          *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x9f,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TTransform<double> *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->StubValue).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->StubValue).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->StubValue).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->StubValue).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->StubValue).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->StubValue).Translation.XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->StubValue).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->StubValue).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->StubValue).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->StubValue).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->StubValue).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->StubValue).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return __return_storage_ptr__;
}

// GetDataType @ 149812d00

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGBasePointData::GetDataType(UPCGBasePointData *this)

{
  return Point;
}

// GetDataTypeId @ 149812d30

FPCGDataTypeBaseId * __thiscall UPCGBasePointData::GetDataTypeId(UPCGBasePointData *this)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPoint::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPoint::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPoint::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPoint.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_PCG();
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPoint.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoPoint,(UObject *)pUVar1,
                             L"PCGDataTypeInfoPoint");
      }
      FPCGDataTypeBaseId::FPCGDataTypeBaseId
                (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPoint::AsId(void)'
                  ::__l2::Id,Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoPoint.OuterSingleton)
      ;
      _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPoint::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPoint::AsId(void)'
              ::__l2::Id;
    }
  }
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoPoint::AsId(void)'
          ::__l2::Id;
}

// GetDefaultMetadataDomainID @ 149812ec0

FPCGMetadataDomainID * __thiscall
UPCGBasePointData::GetDefaultMetadataDomainID
          (UPCGBasePointData *this,FPCGMetadataDomainID *__return_storage_ptr__)

{
  *__return_storage_ptr__ = PCGMetadataDomainID::Elements;
  return __return_storage_ptr__;
}

// GetDensity @ 149812ee0

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall UPCGBasePointData::GetDensity(UPCGBasePointData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  longlong local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  (**(code **)(this->_padding_ + 0x508))(this,&local_28);
  if (-1 < param_1) {
    if (param_1 < local_18) {
      uVar3 = 0;
      if (param_1 < local_18) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pfVar4 = (float *)(*pcVar1)();
          return pfVar4;
        }
      }
      return (float *)((longlong)(param_1 % local_1c) * (longlong)local_20 + local_28);
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:_float_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<2>(int)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return &`public:_float_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<2>(int)const___ptr64'
          ::__l7::Invalid;
}

// GetDensityBounds @ 149813200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
UPCGBasePointData::GetDensityBounds
          (UPCGBasePointData *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          int param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TBoxSphereBounds<double,double> *pTVar5;
  uint uVar6;
  undefined1 auStackY_178 [32];
  longlong local_148;
  int local_140;
  int local_13c;
  int local_138;
  longlong local_130;
  int local_128;
  int local_124;
  int local_120;
  longlong local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  longlong local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  (**(code **)(this->_padding_ + 0x500))(this,&local_c8);
  (**(code **)(this->_padding_ + 0x528))(this,&local_148);
  (**(code **)(this->_padding_ + 0x510))(this,&local_100);
  (**(code **)(this->_padding_ + 0x518))(this,&local_130);
  uVar6 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < local_120) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar4 = 0;
  if (param_1 < local_f0) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  uVar4 = 0;
  if (param_1 < local_138) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  fVar1 = *(float *)((longlong)(param_1 % local_13c) * (longlong)local_140 + local_148);
  uVar4 = 0;
  if (param_1 < local_b8) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TBoxSphereBounds<double,double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  PCGPointHelpers::GetDensityBounds
            (__return_storage_ptr__,
             (TTransform<double> *)((longlong)(param_1 % local_bc) * (longlong)local_c0 + local_c8),
             fVar1,(TVector<double> *)
                   ((longlong)(param_1 % local_f4) * (longlong)local_f8 + local_100),
             (TVector<double> *)((longlong)(param_1 % local_124) * (longlong)local_128 + local_130))
  ;
  return __return_storage_ptr__;
}

// GetDensityValueRange @ 149813450

TPCGValueRange<float,TStridedView<float,int>_> * __thiscall
UPCGBasePointData::GetDensityValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<float,TStridedView<float,int>_> *__return_storage_ptr__,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x90,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (float *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetDensityValuesFromRange @ 1498134a0

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UPCGBasePointData::GetDensityValuesFromRange
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGPointInputRange *param_1)

{
  PCGBasePointData::GetInputRangeValues<2>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetDimension @ 1498136f0

int __thiscall UPCGBasePointData::GetDimension(UPCGBasePointData *this)

{
  return 0;
}

// GetExtents @ 149814990

TVector<double> * __thiscall
UPCGBasePointData::GetExtents
          (UPCGBasePointData *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  longlong lVar8;
  double *pdVar9;
  double dVar10;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_58;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  (**(code **)(this->_padding_ + 0x510))(this,&local_38);
  (**(code **)(this->_padding_ + 0x518))(this,&local_68);
  uVar6 = 0;
  if (param_1 < local_58) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pdVar9 = (double *)((longlong)(param_1 % local_5c) * (longlong)local_60 + local_68);
  uVar6 = 0;
  if (param_1 < local_28) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  dVar4 = __real_3fe0000000000000;
  lVar8 = (longlong)(param_1 % local_2c) * (longlong)local_30;
  dVar10 = (pdVar9[2] - *(double *)(lVar8 + 0x10 + local_38)) * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (*pdVar9 - *(double *)(lVar8 + local_38)) * __real_3fe0000000000000;
  dVar1 = pdVar9[1];
  dVar2 = *(double *)(lVar8 + 8 + local_38);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 - dVar2) * dVar4;
  return __return_storage_ptr__;
}

// GetLocalBounds @ 1498157e0

TBox<double> * __thiscall
UPCGBasePointData::GetLocalBounds
          (UPCGBasePointData *this,TBox<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TBox<double> *pTVar8;
  longlong lVar9;
  double *pdVar10;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_58;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  (**(code **)(this->_padding_ + 0x510))(this,&local_38);
  (**(code **)(this->_padding_ + 0x518))(this,&local_68);
  uVar7 = 0;
  if (param_1 < local_58) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TBox<double> *)(*pcVar3)();
      return pTVar8;
    }
  }
  pdVar10 = (double *)((longlong)(param_1 % local_5c) * (longlong)local_60 + local_68);
  uVar7 = 0;
  if (param_1 < local_28) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TBox<double> *)(*pcVar3)();
      return pTVar8;
    }
  }
  __return_storage_ptr__->IsValid = '\x01';
  lVar9 = (longlong)(param_1 % local_2c) * (longlong)local_30;
  pdVar1 = (double *)(lVar9 + local_38);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar9 + 0x10 + local_38);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = *pdVar1;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar4;
  dVar4 = *pdVar10;
  dVar5 = pdVar10[1];
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  dVar2 = pdVar10[2];
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetLocalCenter @ 149815930

TVector<double> * __thiscall
UPCGBasePointData::GetLocalCenter
          (UPCGBasePointData *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  longlong lVar8;
  double *pdVar9;
  double dVar10;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_58;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  (**(code **)(this->_padding_ + 0x510))(this,&local_38);
  (**(code **)(this->_padding_ + 0x518))(this,&local_68);
  uVar6 = 0;
  if (param_1 < local_58) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  pdVar9 = (double *)((longlong)(param_1 % local_5c) * (longlong)local_60 + local_68);
  uVar6 = 0;
  if (param_1 < local_28) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar3)();
      return pTVar7;
    }
  }
  dVar4 = __real_3fe0000000000000;
  lVar8 = (longlong)(param_1 % local_2c) * (longlong)local_30;
  dVar10 = (*(double *)(lVar8 + 0x10 + local_38) + pdVar9[2]) * __real_3fe0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (*(double *)(lVar8 + local_38) + *pdVar9) * __real_3fe0000000000000;
  dVar1 = *(double *)(lVar8 + 8 + local_38);
  dVar2 = pdVar9[1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 + dVar2) * dVar4;
  return __return_storage_ptr__;
}

// GetLocalDensityBounds @ 149815aa0

TBox<double> * __thiscall
UPCGBasePointData::GetLocalDensityBounds
          (UPCGBasePointData *this,TBox<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TBox<double> *pTVar10;
  double *pdVar11;
  double *pdVar12;
  uint uVar13;
  double dVar14;
  longlong local_98;
  int local_90;
  int local_8c;
  int local_88;
  longlong local_80;
  int local_78;
  int local_74;
  int local_70;
  longlong local_50;
  int local_48;
  int local_44;
  int local_40;
  
  (**(code **)(this->_padding_ + 0x528))(this,&local_98);
  (**(code **)(this->_padding_ + 0x510))(this,&local_50);
  (**(code **)(this->_padding_ + 0x518))(this,&local_80);
  uVar13 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < local_70) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TBox<double> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pdVar12 = (double *)((longlong)(param_1 % local_74) * (longlong)local_78 + local_80);
  uVar9 = 0;
  if (param_1 < local_40) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TBox<double> *)(*pcVar4)();
      return pTVar10;
    }
  }
  pdVar11 = (double *)((longlong)(param_1 % local_44) * (longlong)local_48 + local_50);
  uVar9 = 0;
  if (param_1 < local_88) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TBox<double> *)(*pcVar4)();
      return pTVar10;
    }
  }
  dVar6 = pdVar12[1];
  dVar7 = pdVar12[2];
  dVar14 = (double)(__real_40000000 -
                   *(float *)((longlong)(param_1 % local_8c) * (longlong)local_90 + local_98));
  dVar1 = *pdVar12;
  dVar2 = pdVar11[1];
  dVar3 = pdVar11[2];
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar14 * *pdVar11;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar14 * dVar2;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar14 * dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar14 * dVar1;
  auVar5._8_4_ = SUB84(dVar14 * dVar7,0);
  auVar5._0_8_ = dVar14 * dVar6;
  auVar5._12_4_ = (int)((ulonglong)(dVar14 * dVar7) >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = auVar5;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// GetLocalSize @ 149815ca0

TVector<double> * __thiscall
UPCGBasePointData::GetLocalSize
          (UPCGBasePointData *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  longlong lVar9;
  double *pdVar10;
  longlong local_68;
  int local_60;
  int local_5c;
  int local_58;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  (**(code **)(this->_padding_ + 0x510))(this,&local_38);
  (**(code **)(this->_padding_ + 0x518))(this,&local_68);
  uVar7 = 0;
  if (param_1 < local_58) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar5)();
      return pTVar8;
    }
  }
  pdVar10 = (double *)((longlong)(param_1 % local_5c) * (longlong)local_60 + local_68);
  uVar7 = 0;
  if (param_1 < local_28) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar5)();
      return pTVar8;
    }
  }
  dVar1 = pdVar10[1];
  lVar9 = (longlong)(param_1 % local_2c) * (longlong)local_30;
  dVar2 = *(double *)(lVar9 + 8 + local_38);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar10 - *(double *)(lVar9 + local_38);
  dVar3 = pdVar10[2];
  dVar4 = *(double *)(lVar9 + 0x10 + local_38);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 - dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar4;
  return __return_storage_ptr__;
}

// GetMetadataDomainIDFromSelector @ 149816020

FPCGMetadataDomainID * __thiscall
UPCGBasePointData::GetMetadataDomainIDFromSelector
          (UPCGBasePointData *this,FPCGMetadataDomainID *__return_storage_ptr__,
          FPCGAttributePropertySelector *param_1)

{
  if (param_1->DomainName == PCGPointDataConstants::ElementsDomainName) {
    *__return_storage_ptr__ = PCGMetadataDomainID::Elements;
    return __return_storage_ptr__;
  }
  UPCGData::GetMetadataDomainIDFromSelector((UPCGData *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMetadataEntry @ 149816060

/* WARNING: Enum "Type": Some values do not have unique names */

long64 * __thiscall UPCGBasePointData::GetMetadataEntry(UPCGBasePointData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 *plVar4;
  longlong local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  (**(code **)(this->_padding_ + 0x538))(this,&local_28);
  if (-1 < param_1) {
    if (param_1 < local_18) {
      uVar3 = 0;
      if (param_1 < local_18) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          plVar4 = (long64 *)(*pcVar1)();
          return plVar4;
        }
      }
      return (long64 *)((longlong)(param_1 % local_1c) * (longlong)local_20 + local_28);
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:___int64_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<128>(int)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return &`public:___int64_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<128>(int)const___ptr64'
          ::__l7::Invalid;
}

// GetMetadataEntryValueRange @ 149816410

TPCGValueRange<__int64,TStridedView<__int64,int>_> * __thiscall
UPCGBasePointData::GetMetadataEntryValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<__int64,TStridedView<__int64,int>_> *__return_storage_ptr__,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x96,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (long64 *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetMetadataEntryValuesFromRange @ 149816460

TArray<__int64,TSizedDefaultAllocator<32>_> * __cdecl
UPCGBasePointData::GetMetadataEntryValuesFromRange
          (TArray<__int64,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGPointInputRange *param_1)

{
  PCGBasePointData::GetInputRangeValues<128>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetNumPoints @ 149816600

int __thiscall UPCGBasePointData::GetNumPoints(UPCGBasePointData *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x6c,L"Pure virtual not implemented (%s)");
  return 0;
}

// GetPointAccessorMethods @ 149816ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPCGAttributeAccessorMethods * __cdecl
UPCGBasePointData::GetPointAccessorMethods(FPCGAttributeAccessorMethods *__return_storage_ptr__)

{
  undefined ***pppuVar1;
  code *pcVar2;
  undefined1 auStack_f8 [32];
  code *local_d8;
  undefined **local_c8;
  code *pcStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  code *local_a8;
  undefined **local_98;
  code *pcStack_90;
  undefined8 local_88;
  undefined ***local_80;
  code *local_78;
  undefined **local_68;
  code *pcStack_60;
  undefined8 local_58;
  undefined ***local_50;
  code *local_48;
  TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
  local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessorKeys__U__TDefaultDelete_VIPCGAttributeAccessorKeys______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pcStack_60 = `UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_3>::
               <lambda_invoker_cdecl>;
  local_c8 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_38._padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessorKeys__U__TDefaultDelete___CBVIPCGAttributeAccessorKeys______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pcStack_c0 = `UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
  local_98 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessor__U__TDefaultDelete___CBVIPCGAttributeAccessor______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&__return_storage_ptr__->CreateAccessorFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
       ::Call;
  pcStack_90 = `UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_2>::
               <lambda_invoker_cdecl>;
  local_38.Obj = `UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_4>::
                 <lambda_invoker_cdecl>;
  pcVar2 = (code *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->CreateAccessorFunc).field_0x28 = 0;
  *(undefined ***)&(__return_storage_ptr__->CreateAccessorFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessor__U__TDefaultDelete_VIPCGAttributeAccessor______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&(__return_storage_ptr__->CreateAccessorFunc).field_0x18 =
       `UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  *(undefined8 *)&(__return_storage_ptr__->CreateAccessorFunc).field_0x20 = local_b8;
  *(code **)&__return_storage_ptr__->CreateConstAccessorFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
       ::Call;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  if (*(longlong *)&__return_storage_ptr__->CreateAccessorFunc != 0) {
    local_d8 = pcVar2;
  }
  *(undefined8 *)&(__return_storage_ptr__->CreateConstAccessorFunc).field_0x28 = 0;
  *(undefined ***)&(__return_storage_ptr__->CreateConstAccessorFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr___CBVIPCGAttributeAccessor__U__TDefaultDelete___CBVIPCGAttributeAccessor______PEBVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&(__return_storage_ptr__->CreateConstAccessorFunc).field_0x18 =
       `UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_b0 = (undefined ***)0x0;
  *(undefined8 *)&(__return_storage_ptr__->CreateConstAccessorFunc).field_0x20 = local_88;
  *(code **)&__return_storage_ptr__->CreateAccessorKeysFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
       ::Call;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  if (*(longlong *)&__return_storage_ptr__->CreateConstAccessorFunc != 0) {
    local_a8 = pcVar2;
  }
  *(undefined8 *)&(__return_storage_ptr__->CreateAccessorKeysFunc).field_0x28 = 0;
  *(undefined ***)&(__return_storage_ptr__->CreateAccessorKeysFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VIPCGAttributeAccessorKeys__U__TDefaultDelete_VIPCGAttributeAccessorKeys______PEAVUPCGData__AEBUFPCGAttributePropertySelector___N_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(code **)&(__return_storage_ptr__->CreateAccessorKeysFunc).field_0x18 =
       `UPCGBasePointData::GetPointAccessorMethods'::__l2::<lambda_3>::<lambda_invoker_cdecl>;
  *(undefined8 *)&(__return_storage_ptr__->CreateAccessorKeysFunc).field_0x20 = local_58;
  *(code **)&__return_storage_ptr__->CreateConstAccessorKeysFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>,UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool>
       ::Call;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>_(__cdecl*)(UPCGData_*,FPCGAttributePropertySelector_const_&,bool),TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>,UPCGData_*,FPCGAttributePropertySelector_const_&,bool>
             ::Call;
  if (*(longlong *)&__return_storage_ptr__->CreateAccessorKeysFunc != 0) {
    local_78 = pcVar2;
  }
  *(undefined8 *)&(__return_storage_ptr__->CreateConstAccessorKeysFunc).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->CreateConstAccessorKeysFunc).field_0x10 = 0x51ef85b8;
  *(undefined4 *)&(__return_storage_ptr__->CreateConstAccessorKeysFunc).field_0x14 = 1;
  *(undefined4 *)&(__return_storage_ptr__->CreateConstAccessorKeysFunc).field_0x18 = 0x4978e3a0;
  *(undefined4 *)&(__return_storage_ptr__->CreateConstAccessorKeysFunc).field_0x1c = 1;
  local_80 = (undefined ***)0x0;
  *(undefined8 *)&(__return_storage_ptr__->CreateConstAccessorKeysFunc).field_0x20 = local_28;
  local_50 = (undefined ***)0x0;
  local_20 = 0;
  if (*(longlong *)&__return_storage_ptr__->CreateConstAccessorKeysFunc == 0) {
    UE::Core::Private::Function::
    TFunction_OwnedObject<TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>_(__cdecl*)(UPCGData_const_*,FPCGAttributePropertySelector_const_&,bool),0,0>
    ::Destroy(&local_38);
  }
  else {
    local_48 = (code *)0x0;
  }
  if (local_78 != (code *)0x0) {
    pppuVar1 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar1 = local_50;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_a8 != (code *)0x0) {
    pppuVar1 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar1 = local_80;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if (local_d8 != (code *)0x0) {
    pppuVar1 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar1 = local_b0;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return __return_storage_ptr__;
}

// GetPointFromRange @ 149816ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FPCGPoint * __cdecl
UPCGBasePointData::GetPointFromRange
          (FPCGPoint *__return_storage_ptr__,FPCGPointInputRange *param_1,int param_2)

{
  float fVar1;
  UPCGBasePointData *pUVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  TTransform<double> *pTVar7;
  TVector<double> *pTVar8;
  TVector4<double> *pTVar9;
  long64 *plVar10;
  undefined1 auStack_1e8 [32];
  FConstPCGPointValueRanges local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pUVar2 = (param_1->PointData).field0_0x0.DebugPtr;
  if (pUVar2 == (UPCGBasePointData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    if ((-1 < param_2) && (iVar4 = (**(code **)(pUVar2->_padding_ + 0x488))(), param_2 < iVar4)) {
      FConstPCGPointValueRanges::FConstPCGPointValueRanges
                (&local_1c8,(param_1->PointData).field0_0x0.DebugPtr);
      piVar5 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                         (&local_1c8.SeedRange,param_2);
      iVar4 = *piVar5;
      pfVar6 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                         (&local_1c8.DensityRange,param_2);
      fVar1 = *pfVar6;
      pTVar7 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
               ::GetElement(&local_1c8.TransformRange,param_2);
      FPCGPoint::FPCGPoint(__return_storage_ptr__,pTVar7,fVar1,iVar4);
      pTVar8 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
               ::GetElement(&local_1c8.BoundsMinRange,param_2);
      dVar3 = (pTVar8->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->BoundsMin).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
      (__return_storage_ptr__->BoundsMin).field0_0x0._s_0.Y = dVar3;
      (__return_storage_ptr__->BoundsMin).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
      pTVar8 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
               ::GetElement(&local_1c8.BoundsMaxRange,param_2);
      dVar3 = (pTVar8->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->BoundsMax).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
      (__return_storage_ptr__->BoundsMax).field0_0x0._s_0.Y = dVar3;
      (__return_storage_ptr__->BoundsMax).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
      pfVar6 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                         (&local_1c8.SteepnessRange,param_2);
      __return_storage_ptr__->Steepness = *pfVar6;
      pTVar9 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
               ::GetElement(&local_1c8.ColorRange,param_2);
      dVar3 = (pTVar9->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->Color).field0_0x0._s_0.X = (pTVar9->field0_0x0)._s_0.X;
      (__return_storage_ptr__->Color).field0_0x0._s_0.Y = dVar3;
      dVar3 = (pTVar9->field0_0x0)._s_0.W;
      (__return_storage_ptr__->Color).field0_0x0._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
      (__return_storage_ptr__->Color).field0_0x0._s_0.W = dVar3;
      plVar10 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                          (&local_1c8.MetadataEntryRange,param_2);
      __return_storage_ptr__->MetadataEntry = *plVar10;
      return __return_storage_ptr__;
    }
    if (1 < (byte)LogPCG._0_1_) {
      (**(code **)(((param_1->PointData).field0_0x0.DebugPtr)->_padding_ + 0x488))();
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  memset(__return_storage_ptr__,0,0xd0);
  FPCGPoint::FPCGPoint(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPointOctree @ 1498170c0

TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> * __thiscall
UPCGBasePointData::GetPointOctree(UPCGBasePointData *this)

{
  if (this->bOctreeIsDirty != false) {
    RebuildOctree(this);
    return &this->PCGPointOctree;
  }
  return &this->PCGPointOctree;
}

// GetPrivateStaticClass @ 149817210

UClass * __cdecl UPCGBasePointData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBasePointData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGBasePointData",
               &Z_Registration_Info_UClass_UPCGBasePointData.InnerSingleton,
               StaticRegisterNativesUPCGBasePointData,0x1b0,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBasePointData>,
               InternalVTableHelperCtorCaller<UPCGBasePointData>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBasePointData.InnerSingleton;
}

// GetResourceSizeEx @ 14981ae40

void __thiscall
UPCGBasePointData::GetResourceSizeEx(UPCGBasePointData *this,FResourceSizeEx *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  UPCGSpatialData::GetResourceSizeEx((UPCGSpatialData *)this,param_1);
  iVar1 = (this->PCGPointOctree).TreeElements.ArrayMax;
  iVar2 = (this->PCGPointOctree).TreeNodes.ArrayMax;
  if ((this->PCGPointOctree).TreeNodes.ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(ulonglong)
                     *(uint *)((this->PCGPointOctree).TreeNodes.AllocatorInstance.Data + 4) * 0x40 +
                     0x38 + ((longlong)iVar1 * 0x82 + (longlong)iVar2) * 8);
  return;
}

// GetScaledExtents @ 14981aef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UPCGBasePointData::GetScaledExtents
          (UPCGBasePointData *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  TVector<double> *pTVar7;
  double *pdVar8;
  double *pdVar9;
  longlong lVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  longlong local_138;
  int local_130;
  int local_12c;
  int local_128;
  longlong local_108;
  int local_100;
  int local_fc;
  int local_f8;
  longlong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  lVar10 = (longlong)param_1;
  (**(code **)(this->_padding_ + 0x500))(this,&local_b8);
  (**(code **)(this->_padding_ + 0x510))(this,&local_108);
  (**(code **)(this->_padding_ + 0x518))(this,&local_138);
  local_140 = (longlong)local_128;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < local_128) {
    uVar6 = uVar11;
  }
  if (uVar6 == 0) {
    local_148 = lVar10;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  local_140 = (longlong)local_f8;
  pdVar9 = (double *)((longlong)(param_1 % local_12c) * (longlong)local_130 + local_138);
  uVar6 = 0;
  if (param_1 < local_f8) {
    uVar6 = uVar11;
  }
  if (uVar6 == 0) {
    local_148 = lVar10;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  local_140 = (longlong)local_a8;
  pdVar8 = (double *)((longlong)(param_1 % local_fc) * (longlong)local_100 + local_108);
  uVar6 = 0;
  if (param_1 < local_a8) {
    uVar6 = uVar11;
  }
  if (uVar6 == 0) {
    local_148 = lVar10;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TVector<double> *)(*pcVar2)();
      return pTVar7;
    }
  }
  lVar10 = (longlong)(param_1 % local_ac) * (longlong)local_b0;
  dVar13 = (pdVar9[1] - pdVar8[1]) * __real_3fe0000000000000;
  dVar12 = (pdVar9[2] - pdVar8[2]) * __real_3fe0000000000000;
  pdVar1 = (double *)(lVar10 + 0x40 + local_b8);
  dVar3 = pdVar1[1];
  dVar4 = *(double *)(lVar10 + 0x50 + local_b8);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (*pdVar9 - *pdVar8) * __real_3fe0000000000000 * *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar12 * dVar4;
  return __return_storage_ptr__;
}

// GetScaledLocalSize @ 14981b100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UPCGBasePointData::GetScaledLocalSize
          (UPCGBasePointData *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  longlong local_138;
  int local_130;
  int local_12c;
  int local_128;
  longlong local_108;
  int local_100;
  int local_fc;
  int local_f8;
  longlong local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  lVar14 = (longlong)param_1;
  (**(code **)(this->_padding_ + 0x500))(this,&local_b8);
  (**(code **)(this->_padding_ + 0x510))(this,&local_108);
  (**(code **)(this->_padding_ + 0x518))(this,&local_138);
  local_140 = (longlong)local_128;
  uVar15 = (uint)~param_1 >> 0x1f;
  uVar10 = 0;
  if (param_1 < local_128) {
    uVar10 = uVar15;
  }
  if (uVar10 == 0) {
    local_148 = lVar14;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TVector<double> *)(*pcVar6)();
      return pTVar11;
    }
  }
  local_140 = (longlong)local_f8;
  pdVar13 = (double *)((longlong)(param_1 % local_12c) * (longlong)local_130 + local_138);
  uVar10 = 0;
  if (param_1 < local_f8) {
    uVar10 = uVar15;
  }
  if (uVar10 == 0) {
    local_148 = lVar14;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TVector<double> *)(*pcVar6)();
      return pTVar11;
    }
  }
  local_140 = (longlong)local_a8;
  pdVar12 = (double *)((longlong)(param_1 % local_fc) * (longlong)local_100 + local_108);
  uVar10 = 0;
  if (param_1 < local_a8) {
    uVar10 = uVar15;
  }
  if (uVar10 == 0) {
    local_148 = lVar14;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < NumElements)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                       ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TVector<double> *)(*pcVar6)();
      return pTVar11;
    }
  }
  dVar2 = pdVar13[1];
  dVar3 = pdVar13[2];
  dVar4 = pdVar12[1];
  dVar5 = pdVar12[2];
  lVar14 = (longlong)(param_1 % local_ac) * (longlong)local_b0;
  pdVar1 = (double *)(lVar14 + 0x40 + local_b8);
  dVar7 = pdVar1[1];
  dVar8 = *(double *)(lVar14 + 0x50 + local_b8);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (*pdVar13 - *pdVar12) * *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 - dVar4) * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar3 - dVar5) * dVar8;
  return __return_storage_ptr__;
}

// GetSeed @ 14981b600

/* WARNING: Enum "Type": Some values do not have unique names */

int * __thiscall UPCGBasePointData::GetSeed(UPCGBasePointData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  longlong local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  (**(code **)(this->_padding_ + 0x530))(this,&local_28);
  if (-1 < param_1) {
    if (param_1 < local_18) {
      uVar3 = 0;
      if (param_1 < local_18) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      return (int *)((longlong)(param_1 % local_1c) * (longlong)local_20 + local_28);
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:_int_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<64>(int)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return &`public:_int_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<64>(int)const___ptr64'
          ::__l7::Invalid;
}

// GetSeedValueRange @ 14981b6c0

TPCGValueRange<int,TStridedView<int,int>_> * __thiscall
UPCGBasePointData::GetSeedValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<int,TStridedView<int,int>_> *__return_storage_ptr__,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x95,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (int *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetSeedValuesFromRange @ 14981b710

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
UPCGBasePointData::GetSeedValuesFromRange
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGPointInputRange *param_1)

{
  PCGBasePointData::GetInputRangeValues<64>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetSteepness @ 14981b920

/* WARNING: Enum "Type": Some values do not have unique names */

float * __thiscall UPCGBasePointData::GetSteepness(UPCGBasePointData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  float *pfVar4;
  longlong local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  (**(code **)(this->_padding_ + 0x528))(this,&local_28);
  if (-1 < param_1) {
    if (param_1 < local_18) {
      uVar3 = 0;
      if (param_1 < local_18) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < NumElements)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                           ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pfVar4 = (float *)(*pcVar1)();
          return pfVar4;
        }
      }
      return (float *)((longlong)(param_1 % local_1c) * (longlong)local_20 + local_28);
    }
  }
  if (1 < (byte)LogPCG._0_1_) {
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:_float_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<32>(int)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
  }
  return &`public:_float_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<32>(int)const___ptr64'
          ::__l7::Invalid;
}

// GetSteepnessValueRange @ 14981b9e0

TPCGValueRange<float,TStridedView<float,int>_> * __thiscall
UPCGBasePointData::GetSteepnessValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<float,TStridedView<float,int>_> *__return_storage_ptr__,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x94,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (float *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  return __return_storage_ptr__;
}

// GetSteepnessValuesFromRange @ 14981ba30

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UPCGBasePointData::GetSteepnessValuesFromRange
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGPointInputRange *param_1)

{
  PCGBasePointData::GetInputRangeValues<32>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTransform @ 14981bae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TTransform<double> * __thiscall UPCGBasePointData::GetTransform(UPCGBasePointData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_8c;
  int local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  (**(code **)(this->_padding_ + 0x500))(this,&local_98);
  if ((param_1 < 0) || (local_a0 = (longlong)local_88, local_88 <= param_1)) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
                  ::__l8::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
         ::__l7::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
                             ::__l7::_thread_safe_static_guard_0__),
       `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
       ::__l7::_thread_safe_static_guard_0__ == -1)) {
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Rotation.XY.m128d_f64[1] =
           (double)GlobalVectorConstants::Float0001.m128_f32[1];
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Rotation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[0];
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Rotation.ZW.m128d_f64[1] =
           (double)GlobalVectorConstants::Float0001.m128_f32[3];
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Rotation.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[2];
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Translation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Translation.ZW.m128d_f64[1] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Translation.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
      ;
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
      ;
      `public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
      ::__l7::Invalid.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
      ;
      _Init_thread_footer(&`public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
                           ::__l7::_thread_safe_static_guard_0__);
    }
    return &`public:_struct_UE::Math::TTransform<double>_const&___ptr64___cdecl_UPCGBasePointData::GetPointPropertyValue<1>(int)const___ptr64'
            ::__l7::Invalid;
  }
  uVar3 = 0;
  if (param_1 < local_88) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (local_a8 = (longlong)param_1,
     bVar2 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < NumElements)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                        ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"), bVar2)
     ) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TTransform<double> *)(*pcVar1)();
    return pTVar4;
  }
  return (TTransform<double> *)((longlong)(param_1 % local_8c) * (longlong)local_90 + local_98);
}

// GetTransformValueRange @ 14981bc60

TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_> *
__thiscall
UPCGBasePointData::GetTransformValueRange
          (UPCGBasePointData *this,
          TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x8f,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TTransform<double> *)0x0;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0;
  (__return_storage_ptr__->ElementView).NumElements = 0;
  __return_storage_ptr__->NumElements = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (__return_storage_ptr__->StubValue).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (__return_storage_ptr__->StubValue).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->StubValue).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->StubValue).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (__return_storage_ptr__->StubValue).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (__return_storage_ptr__->StubValue).Translation.XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->StubValue).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->StubValue).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (__return_storage_ptr__->StubValue).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (__return_storage_ptr__->StubValue).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (__return_storage_ptr__->StubValue).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (__return_storage_ptr__->StubValue).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return __return_storage_ptr__;
}

// GetTransformValuesFromRange @ 14981bcf0

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __cdecl
UPCGBasePointData::GetTransformValuesFromRange
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FPCGPointInputRange *param_1)

{
  PCGBasePointData::GetInputRangeValues<1>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTransformsCopy @ 14981bd10

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBasePointData::GetTransformsCopy
          (UPCGBasePointData *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x7c,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// InitializeFromActor @ 14981f4c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UPCGBasePointData::InitializeFromActor(UPCGBasePointData *this,AActor *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (AActor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InActor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                       ,0x429,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    iVar3 = UPCGMetadata::GetAttributeCount((UPCGMetadata *)this->_padding_);
    if (iVar3 == 0) goto LAB_14981f53b;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Metadata && Metadata->GetAttributeCount() == 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                     ,0x42a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14981f53b:
  AddSinglePointFromActor(this,param_1,param_2);
  return;
}

// IsPointOctreeDirty @ 149820bc0

bool __thiscall UPCGBasePointData::IsPointOctreeDirty(UPCGBasePointData *this)

{
  return this->bOctreeIsDirty;
}

// IsValidRef @ 149821270

bool __thiscall UPCGBasePointData::IsValidRef(UPCGBasePointData *this,FPointRef *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x69,L"Pure virtual not implemented (%s)");
  return false;
}

// MoveRange @ 1498216d0

void __thiscall
UPCGBasePointData::MoveRange(UPCGBasePointData *this,int param_1,int param_2,int param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x79,L"Pure virtual not implemented (%s)");
  return;
}

// ProjectPoint @ 149825d80

bool __thiscall
UPCGBasePointData::ProjectPoint
          (UPCGBasePointData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGProjectionParams *param_3,FPCGPoint *param_4,UPCGMetadata *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(this->_padding_ + 0x478))();
  return (bool)uVar1;
}

// ProjectPoint @ 149825dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UPCGBasePointData::ProjectPoint
          (UPCGBasePointData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGProjectionParams *param_3,FPCGPoint *param_4,UPCGMetadata *param_5,bool param_6)

{
  undefined8 uVar1;
  UPCGMetadata *pUVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [12];
  float *pfVar11;
  FPCGPoint *pFVar12;
  UPCGMetadata *this_00;
  UPCGBasePointData *pUVar13;
  int iVar14;
  bool bVar15;
  undefined1 uVar16;
  bool bVar17;
  uint uVar18;
  TMatrix<double> *pTVar19;
  ForElementType<TTuple<int,double>_> FVar20;
  long64 lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ForElementType<TTuple<__int64,float>_> FVar24;
  double *pdVar25;
  uint uVar26;
  ForElementType<TTuple<int,double>_> FVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  TTransform<double> *pTVar30;
  TVector<double>_u_0 *pTVar31;
  TVector<double>_u_0 *pTVar32;
  ulonglong uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  uint uVar46;
  uint uVar47;
  double dVar48;
  double dVar49;
  double dVar51;
  undefined1 auVar50 [16];
  undefined1 auStackY_878 [32];
  undefined1 local_847;
  undefined1 local_846 [2];
  float local_844;
  uint local_840;
  TTransform<double> *local_838;
  uint local_830;
  ForElementType<TTuple<int,double>_> local_828;
  undefined8 local_820;
  undefined8 uStack_818;
  double local_810;
  double local_808;
  double dStack_800;
  double local_7f8;
  double local_7f0;
  double dStack_7e8;
  double local_7e0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double local_7c0;
  double local_7b8;
  float *local_7b0;
  float *local_7a8;
  double local_7a0;
  double local_798;
  double local_790;
  double local_788;
  double local_778;
  double local_768;
  double local_758;
  double local_748;
  FPCGPoint *local_740;
  double local_738;
  double dStack_730;
  double local_728;
  double dStack_720;
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  TPCGValueRange<float_const_,TStridedView<float_const_,int>_> local_6f8;
  longlong local_6e0;
  int local_6d8;
  int local_6d4;
  int local_6d0;
  UPCGMetadata *local_6c0;
  UPCGBasePointData *local_6b8;
  FPCGProjectionParams *local_6b0;
  double local_6a8;
  double local_6a0;
  ForElementType<TTuple<int,double>_> local_698;
  longlong local_690;
  int local_688;
  int local_684;
  int local_680;
  TArrayView<TTuple<__int64,float>,int> local_678;
  TVector<double>_u_0 local_668;
  TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
  local_650;
  TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
  local_620;
  <lambda_1> local_5f0;
  TVector4<double>_u_0 local_5b8;
  double local_598;
  double dStack_590;
  double local_588;
  undefined8 local_580;
  TVector4<double>_u_0 local_578;
  double local_558;
  double local_550;
  double local_548;
  undefined8 local_540;
  <lambda_2> local_538;
  double local_4f0;
  double dStack_4e8;
  double local_4e0;
  TVector<double>_u_0 local_4d8;
  undefined1 local_4c0 [16];
  double local_4b0;
  undefined1 local_4a8 [16];
  double local_498;
  double local_490;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  double local_468;
  double dStack_460;
  double local_458;
  double local_450;
  double dStack_448;
  double local_440;
  undefined1 local_438 [16];
  double local_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  double local_410;
  longlong local_408;
  int local_400;
  int local_3fc;
  int local_3f8;
  ForElementType<TTuple<__int64,float>_> local_3c8;
  int local_380;
  int local_37c;
  TArray<TTuple<int,double>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_378;
  TVector<double>_u_0 local_328;
  double local_310;
  double local_308;
  double local_300;
  TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
  local_2e8;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_878;
  local_740 = param_4;
  local_6c0 = param_5;
  local_838 = param_1;
  local_6b8 = this;
  local_6b0 = param_3;
  if (this->bOctreeIsDirty != false) {
    RebuildOctree(this);
  }
  dVar6 = __real_3fe0000000000000;
  local_378.AllocatorInstance.SecondaryData = (ForElementType<TTuple<int,double>_>)0x0;
  local_378.ArrayNum = 0;
  local_378.ArrayMax = 4;
  if (((((param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X) *
        __real_3fe0000000000000 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) &&
      (((param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y) *
       __real_3fe0000000000000 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) &&
     (((param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z) *
      __real_3fe0000000000000 == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  (**(code **)(this->_padding_ + 0x500))(this,&local_2e8);
  (**(code **)(this->_padding_ + 0x528))(this,&local_6f8);
  (**(code **)(this->_padding_ + 0x508))(this,&local_690);
  (**(code **)(this->_padding_ + 0x510))(this,&local_650);
  (**(code **)(this->_padding_ + 0x518))(this,&local_620);
  (**(code **)(this->_padding_ + 0x520))(this,&local_408);
  (**(code **)(this->_padding_ + 0x538))(this);
  if (bVar17) {
    pTVar19 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_1e8);
    UE::Math::TBox<double>::TransformBy(param_2,(TBox<double> *)&local_328._s_0,pTVar19);
    pTVar19 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_168);
    UE::Math::TMatrix<double>::Inverse(pTVar19,&local_268);
    local_538.bUseBounds = param_6;
    local_578._s_0.X = (local_310 + local_328._s_0.X) * dVar6;
    local_538.InTransformInverseMatrix = &local_268;
    local_538.Contributions = &local_378;
    local_538.TransformRange = &local_2e8;
    local_578._s_0.Y = (local_308 + local_328._s_0.Y) * dVar6;
    local_538.BoundsMinRange = &local_650;
    local_538.BoundsMaxRange = &local_620;
    local_558 = (local_310 - local_328._s_0.X) * dVar6;
    local_538.SteepnessRange = &local_6f8;
    local_550 = (local_308 - local_328._s_0.Y) * dVar6;
    local_578._s_0.Z = (local_300 + local_328._s_0.Z) * dVar6;
    local_548 = (local_300 - local_328._s_0.Z) * dVar6;
    local_578._s_0.W = 0.0;
    local_540 = 0;
    local_538.__this = this;
    local_538.InBounds = param_2;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGBasePointData::ProjectPoint_::__l7::<lambda_2>_>
              (&this->PCGPointOctree,0,&(this->PCGPointOctree).RootNodeContext,
               (FBoxCenterAndExtent *)&local_578._s_0,&local_538);
  }
  else {
    local_5b8._s_0.X = (param_1->Translation).XY.m128d_f64[0];
    local_5b8._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
    local_5f0.InPosition = (TVector<double> *)&local_4f0;
    local_5b8._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
    local_5f0.Contributions = &local_378;
    local_5f0.TransformRange = &local_2e8;
    local_5f0.BoundsMinRange = &local_650;
    local_5f0.BoundsMaxRange = &local_620;
    local_5f0.SteepnessRange = &local_6f8;
    local_598 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_590 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_5b8._s_0.W = 0.0;
    local_588 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_580 = 0;
    local_5f0.__this = this;
    local_4f0 = local_5b8._s_0.X;
    dStack_4e8 = local_5b8._s_0.Y;
    local_4e0 = local_5b8._s_0.Z;
    TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
    FindElementsWithBoundsTestInternal<_UPCGBasePointData::ProjectPoint_::__l5::<lambda_1>_>
              (&this->PCGPointOctree,0,&(this->PCGPointOctree).RootNodeContext,
               (FBoxCenterAndExtent *)&local_5b8._s_0,&local_5f0);
  }
  iVar14 = local_378.ArrayNum;
  uVar23 = (ulonglong)local_378.ArrayNum;
  local_840 = 0xffffffff;
  dVar6 = 0.0;
  FVar20 = (ForElementType<TTuple<int,double>_>)&local_378;
  if (local_378.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,double>_>)0x0) {
    FVar20 = local_378.AllocatorInstance.SecondaryData;
  }
  FVar27 = (ForElementType<TTuple<int,double>_>)((longlong)FVar20 + uVar23 * 0x10);
  uVar35 = 0;
  uVar37 = 0;
  while( true ) {
    if ((uint)uVar23 != iVar14) {
      local_847 = 0;
      `TCheckedPointerIterator<TTuple<int,double>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_847);
      uVar23 = (ulonglong)(uint)local_378.ArrayNum;
    }
    dVar38 = __real_3ff0000000000000;
    if (FVar20 == FVar27) break;
    dVar38 = *(double *)((longlong)FVar20 + 8);
    dVar6 = dVar6 + dVar38;
    if ((double)CONCAT44(uVar37,uVar35) <= dVar38 && dVar38 != (double)CONCAT44(uVar37,uVar35)) {
      local_840 = *(uint *)FVar20;
    }
    uVar34 = SUB84(dVar38,0);
    uVar36 = (int)((ulonglong)dVar38 >> 0x20);
    if (dVar38 <= (double)CONCAT44(uVar37,uVar35)) {
      uVar34 = uVar35;
      uVar36 = uVar37;
    }
    FVar20 = (ForElementType<TTuple<int,double>_>)((longlong)FVar20 + 0x10);
    uVar35 = uVar34;
    uVar37 = uVar36;
  }
  if (0.0 < dVar6) {
    if (dVar6 <= __real_3ff0000000000000) {
      local_7b8 = __real_3ff0000000000000;
    }
    else {
      local_7b8 = __real_3ff0000000000000 / dVar6;
    }
    local_7c8 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
    local_738 = 0.0;
    dStack_730 = 0.0;
    local_728 = 0.0;
    dStack_720 = 0.0;
    fVar45 = 0.0;
    local_7d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_7d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    FVar20 = (ForElementType<TTuple<int,double>_>)&local_378;
    if (local_378.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,double>_>)0x0) {
      FVar20 = local_378.AllocatorInstance.SecondaryData;
    }
    local_830 = (uint)uVar23;
    uVar29 = (ulonglong)(int)local_830;
    uVar35 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    uVar37 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20)
    ;
    local_698 = (ForElementType<TTuple<int,double>_>)&local_378;
    if (local_378.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,double>_>)0x0) {
      local_698 = local_378.AllocatorInstance.SecondaryData;
    }
    local_718 = ZEXT816(0);
    dVar42 = 0.0;
    local_7e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_808 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_800 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_7f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_698 = (ForElementType<TTuple<int,double>_>)((longlong)local_698 + uVar29 * 0x10);
    local_7f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_7e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_3c8.SecondaryData = (ForElementType<TTuple<__int64,float>_>)0x0;
    local_7c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_708 = ZEXT816(0);
    local_810 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_788 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_790 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_798 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_820 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    uStack_818 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    local_380 = 0;
    local_758 = 0.0;
    local_7a0 = 0.0;
    local_844 = 0.0;
    local_748 = 0.0;
    local_768 = 0.0;
    local_778 = 0.0;
    local_37c = 4;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    while( true ) {
      FVar27 = local_698;
      local_828 = FVar20;
      if ((int)uVar23 != (int)uVar29) {
        local_846[0] = 0;
        `TCheckedPointerIterator<TTuple<int,double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_846);
      }
      pUVar13 = local_6b8;
      this_00 = local_6c0;
      pFVar12 = local_740;
      uVar18 = 0;
      if (FVar20 == FVar27) break;
      uVar46 = *(uint *)FVar20;
      uVar26 = ~uVar46 >> 0x1f;
      dVar41 = *(double *)((longlong)FVar20 + 8) / dVar6;
      uVar47 = 0;
      if ((int)uVar46 < local_2e8.NumElements) {
        uVar47 = uVar26;
      }
      if ((uVar47 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return (bool)uVar16;
      }
      pTVar30 = (TTransform<double> *)
                ((longlong)((local_2e8.ElementView.FirstElementPtr)->Rotation).XY.m128d_f64 +
                (longlong)((int)uVar46 % local_2e8.ElementView.NumElements) *
                (longlong)local_2e8.ElementView.BytesBetweenElements);
      uVar47 = uVar18;
      if ((int)uVar46 < local_6f8.NumElements) {
        uVar47 = uVar26;
      }
      if ((uVar47 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return (bool)uVar16;
      }
      local_7a8 = (float *)((longlong)((int)uVar46 % local_6f8.ElementView.NumElements) *
                            (longlong)local_6f8.ElementView.BytesBetweenElements +
                           (longlong)local_6f8.ElementView.FirstElementPtr);
      uVar47 = uVar18;
      if ((int)uVar46 < local_680) {
        uVar47 = uVar26;
      }
      if ((uVar47 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return (bool)uVar16;
      }
      local_7b0 = (float *)((longlong)((int)uVar46 % local_684) * (longlong)local_688 + local_690);
      uVar47 = uVar18;
      if ((int)uVar46 < local_650.NumElements) {
        uVar47 = uVar26;
      }
      if ((uVar47 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return (bool)uVar16;
      }
      pTVar32 = (TVector<double>_u_0 *)
                ((longlong)&(local_650.ElementView.FirstElementPtr)->field0_0x0 +
                (longlong)((int)uVar46 % local_650.ElementView.NumElements) *
                (longlong)local_650.ElementView.BytesBetweenElements);
      uVar47 = uVar18;
      if ((int)uVar46 < local_620.NumElements) {
        uVar47 = uVar26;
      }
      if ((uVar47 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return (bool)uVar16;
      }
      pTVar31 = (TVector<double>_u_0 *)
                ((longlong)&(local_620.ElementView.FirstElementPtr)->field0_0x0 +
                (longlong)((int)uVar46 % local_620.ElementView.NumElements) *
                (longlong)local_620.ElementView.BytesBetweenElements);
      uVar47 = uVar18;
      if ((int)uVar46 < local_3f8) {
        uVar47 = uVar26;
      }
      if ((uVar47 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return (bool)uVar16;
      }
      pdVar25 = (double *)((longlong)((int)uVar46 % local_3fc) * (longlong)local_400 + local_408);
      if ((int)uVar46 < local_6d0) {
        uVar18 = uVar26;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        uVar16 = (*pcVar3)();
        return (bool)uVar16;
      }
      pfVar11 = local_7a8;
      local_468 = (pTVar30->Translation).XY.m128d_f64[0];
      dStack_460 = (pTVar30->Translation).XY.m128d_f64[1];
      local_458 = (pTVar30->Translation).ZW.m128d_f64[0];
      dStack_7d0 = (double)CONCAT44(uVar37,uVar35) + dStack_460 * dVar41;
      local_7d8 = local_7c0 + local_468 * dVar41;
      local_7c8 = (double)uVar1 + local_458 * dVar41;
      puVar28 = (undefined8 *)
                ((longlong)((int)uVar46 % local_6d4) * (longlong)local_6d8 + local_6e0);
      dVar48 = (double)(float)dVar41;
      dVar49 = dVar48 * (pTVar30->Rotation).ZW.m128d_f64[0];
      dVar51 = dVar48 * (pTVar30->Rotation).ZW.m128d_f64[1];
      dVar42 = dVar48 * (pTVar30->Rotation).XY.m128d_f64[0];
      dVar48 = dVar48 * (pTVar30->Rotation).XY.m128d_f64[1];
      auVar10._4_8_ = (pTVar30->Translation).ZW.m128d_f64[1];
      auVar10._0_4_ = (int)((ulonglong)dVar42 >> 0x20);
      auVar43._0_8_ = auVar10._0_8_ << 0x20;
      auVar43._8_4_ = SUB84(dVar48,0);
      auVar43._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      if (dVar51 * (double)local_708._8_8_ + dVar49 * (double)local_708._0_8_ +
          auVar43._8_8_ * (double)local_718._8_8_ + dVar42 * (double)local_718._0_8_ < 0.0) {
        dVar42 = (double)local_718._0_8_ - dVar42;
        dVar48 = (double)local_718._8_8_ - dVar48;
        dVar49 = (double)local_708._0_8_ - dVar49;
        dVar51 = (double)local_708._8_8_ - dVar51;
        local_488._8_4_ = SUB84(dVar48,0);
        local_488._0_8_ = dVar42;
        local_488._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      }
      else {
        dVar42 = dVar42 + (double)local_718._0_8_;
        dVar48 = dVar48 + (double)local_718._8_8_;
        dVar49 = (double)local_708._0_8_ + dVar49;
        dVar51 = (double)local_708._8_8_ + dVar51;
        local_488._8_4_ = SUB84(dVar48,0);
        local_488._0_8_ = dVar42;
        local_488._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      }
      uVar35 = (undefined4)((ulonglong)dVar51 >> 0x20);
      local_450 = (pTVar30->Scale3D).XY.m128d_f64[0];
      dStack_448 = (pTVar30->Scale3D).XY.m128d_f64[1];
      local_440 = (pTVar30->Scale3D).ZW.m128d_f64[0];
      local_820 = local_820 + local_450 * dVar41;
      uStack_818 = uStack_818 + dStack_448 * dVar41;
      local_478._8_4_ = SUB84(dVar51,0);
      local_478._0_8_ = dVar49;
      local_478._12_4_ = uVar35;
      local_718._8_4_ = SUB84(dVar48,0);
      local_718._0_8_ = dVar42;
      local_718._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
      local_708._8_4_ = SUB84(dVar51,0);
      local_708._0_8_ = dVar49;
      local_708._12_4_ = uVar35;
      local_810 = local_810 + local_440 * dVar41;
      local_7c0 = local_7d8;
      local_6a8 = local_7c8;
      local_6a0 = dStack_7d0;
      if (bVar17) {
        dVar42 = dVar41;
        if (param_6) {
          dVar42 = local_7b8 * *(double *)((longlong)local_828 + 8);
        }
        dVar42 = (double)*local_7b0 * dVar42;
      }
      else {
        local_4d8._s_0.X = (local_838->Translation).XY.m128d_f64[0];
        local_4d8._s_0.Y = (local_838->Translation).XY.m128d_f64[1];
        local_4d8._s_0.Z = (local_838->Translation).ZW.m128d_f64[0];
        fVar45 = *local_7b0;
        bVar15 = PCGPointHelpers::GetDistanceRatios
                           (pTVar30,(TVector<double> *)&pTVar32->_s_0,
                            (TVector<double> *)&pTVar31->_s_0,*local_7a8,
                            (TVector<double> *)&local_4d8._s_0,(TVector<double> *)&local_668._s_0);
        if (bVar15) {
          dVar42 = (dVar38 - local_668._s_0.Z) * (dVar38 - local_668._s_0.Y) *
                   (dVar38 - local_668._s_0.X) * (double)fVar45;
        }
        else {
          dVar42 = 0.0;
        }
      }
      dVar42 = dVar42 + local_7a0;
      uVar9 = (double)uVar9 + dVar41 * (((TVector<double>_u_0 *)&(pTVar32->_s_0).X)->_s_0).X;
      uVar8 = (double)uVar8 + dVar41 * *(double *)((longlong)pTVar32 + 8);
      uVar7 = (double)uVar7 + dVar41 * *(double *)((longlong)pTVar32 + 0x10);
      dStack_800 = local_790 + dVar41 * *(double *)((longlong)pTVar31 + 8);
      local_808 = local_798 + dVar41 * (((TVector<double>_u_0 *)&(pTVar31->_s_0).X)->_s_0).X;
      local_7f8 = local_788 + dVar41 * *(double *)((longlong)pTVar31 + 0x10);
      local_778 = local_778 + dVar41 * *pdVar25;
      local_758 = local_758 + dVar41 * pdVar25[2];
      local_768 = local_768 + dVar41 * pdVar25[1];
      local_748 = local_748 + dVar41 * pdVar25[3];
      fVar45 = (float)((double)*pfVar11 * dVar41 + (double)local_844);
      local_844 = fVar45;
      local_7f0 = (double)uVar9;
      dStack_7e8 = (double)uVar8;
      local_7e0 = (double)uVar7;
      local_7a0 = dVar42;
      local_798 = local_808;
      local_790 = dStack_800;
      local_788 = local_7f8;
      local_738 = local_778;
      dStack_730 = local_768;
      local_728 = local_758;
      dStack_720 = local_748;
      if (local_380 == local_37c) {
        local_380 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<__int64,float>_>_>
                              (0x810,&local_3c8,&local_37c);
      }
      lVar22 = (longlong)local_380;
      uVar29 = (ulonglong)local_830;
      local_380 = local_380 + 1;
      FVar24 = (ForElementType<TTuple<__int64,float>_>)&local_3c8;
      if (local_3c8.SecondaryData != (ForElementType<TTuple<__int64,float>_>)0x0) {
        FVar24 = local_3c8.SecondaryData;
      }
      FVar20 = (ForElementType<TTuple<int,double>_>)((longlong)local_828 + 0x10);
      *(undefined8 *)((longlong)FVar24 + lVar22 * 0x10) = *puVar28;
      *(float *)((uchar *)((longlong)FVar24 + 8) + lVar22 * 0x10) = (float)dVar41;
      uVar23 = (ulonglong)(uint)local_378.ArrayNum;
      uVar35 = SUB84(local_6a0,0);
      uVar37 = (undefined4)((ulonglong)local_6a0 >> 0x20);
      uVar1 = local_6a8;
    }
    if (local_6b0->bProjectPositions == false) {
      local_428 = (local_838->Translation).ZW.m128d_f64[0];
      uVar35 = SUB84(local_428,0);
      uVar37 = (undefined4)((ulonglong)local_428 >> 0x20);
      auVar39 = *(undefined1 (*) [16])(local_838->Translation).XY.m128d_f64;
      local_438 = auVar39;
    }
    else if (bVar17) {
      auVar39._8_8_ = dStack_7d0;
      auVar39._0_8_ = local_7d8;
      local_4b0 = local_7c8;
      uVar35 = SUB84(local_7c8,0);
      uVar37 = (undefined4)((ulonglong)local_7c8 >> 0x20);
      local_4c0 = auVar39;
    }
    else {
      auVar39 = *(undefined1 (*) [16])(local_838->Translation).XY.m128d_f64;
      local_498 = (local_838->Translation).ZW.m128d_f64[0];
      uVar35 = SUB84(local_498,0);
      uVar37 = (undefined4)((ulonglong)local_498 >> 0x20);
      local_4a8 = auVar39;
    }
    *(undefined1 (*) [16])(local_740->Transform).Translation.XY.m128d_f64 = auVar39;
    (local_740->Transform).Translation.ZW.m128d_f64[0] = (double)CONCAT44(uVar37,uVar35);
    (local_740->Transform).Translation.ZW.m128d_f64[1] = 0.0;
    if (local_6b0->bProjectRotations == false) {
      auVar44 = *(undefined1 (*) [16])(local_838->Rotation).XY.m128d_f64;
      auVar50 = *(undefined1 (*) [16])(local_838->Rotation).ZW.m128d_f64;
    }
    else {
      local_490 = __real_3e45798ee0000000;
      dVar38 = (double)local_708._0_8_ * (double)local_708._0_8_ +
               (double)local_718._0_8_ * (double)local_718._0_8_;
      dVar41 = (double)local_708._8_8_ * (double)local_708._8_8_ +
               (double)local_718._8_8_ * (double)local_718._8_8_;
      dVar6 = dVar41 + dVar38;
      dVar38 = dVar38 + dVar41;
      auVar4._8_4_ = SUB84(dVar38,0);
      auVar4._0_8_ = dVar6;
      auVar4._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      auVar44 = sqrtpd(auVar39,auVar4);
      uVar29 = -(ulonglong)(__real_3e45798ee0000000 <= dVar6);
      uVar33 = -(ulonglong)(__real_3e45798ee0000000 <= dVar38);
      uVar46 = (uint)(uVar29 >> 0x20);
      uVar47 = (uint)(uVar33 >> 0x20);
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
      auVar40._0_8_ = uVar29 & (ulonglong)(auVar39._0_8_ * (double)local_708._0_8_);
      uVar23 = uVar33 & (ulonglong)(auVar39._8_8_ * (double)local_708._8_8_);
      auVar40._8_4_ = (undefined4)uVar23;
      auVar40._12_4_ = (undefined4)(uVar23 >> 0x20);
      auVar50._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar50._4_4_ =
           ~uVar46 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar50._8_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar50._12_4_ =
           ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar50 = auVar50 | auVar40;
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar44);
      auVar44._0_8_ = (ulonglong)(auVar39._0_8_ * (double)local_718._0_8_) & uVar29;
      uVar23 = (ulonglong)(auVar39._8_8_ * (double)local_718._8_8_) & uVar33;
      auVar44._8_4_ = (undefined4)uVar23;
      auVar44._12_4_ = (undefined4)(uVar23 >> 0x20);
      auVar5._4_4_ = ~uVar46 & (uint)((ulonglong)
                                      (double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
      auVar5._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar5._8_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar5._12_4_ =
           ~uVar47 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar44 = auVar44 | auVar5;
      fVar45 = local_844;
    }
    *(undefined1 (*) [16])(local_740->Transform).Rotation.XY.m128d_f64 = auVar44;
    *(undefined1 (*) [16])(local_740->Transform).Rotation.ZW.m128d_f64 = auVar50;
    if (local_6b0->bProjectScales == false) {
      dVar6 = (local_838->Scale3D).ZW.m128d_f64[0];
      uVar35 = *(undefined4 *)(local_838->Scale3D).XY.m128d_f64;
      uVar37 = *(undefined4 *)((longlong)(local_838->Scale3D).XY.m128d_f64 + 4);
      uVar34 = *(undefined4 *)((local_838->Scale3D).XY.m128d_f64 + 1);
      uVar36 = *(undefined4 *)((longlong)(local_838->Scale3D).XY.m128d_f64 + 0xc);
      local_420 = uVar35;
      uStack_41c = uVar37;
      uStack_418 = uVar34;
      uStack_414 = uVar36;
      local_410 = dVar6;
    }
    else {
      uVar35 = (undefined4)local_820;
      uVar37 = local_820._4_4_;
      uVar34 = (undefined4)uStack_818;
      uVar36 = uStack_818._4_4_;
      dVar6 = local_810;
    }
    *(undefined4 *)(local_740->Transform).Scale3D.XY.m128d_f64 = uVar35;
    *(undefined4 *)((longlong)(local_740->Transform).Scale3D.XY.m128d_f64 + 4) = uVar37;
    *(undefined4 *)((local_740->Transform).Scale3D.XY.m128d_f64 + 1) = uVar34;
    *(undefined4 *)((longlong)(local_740->Transform).Scale3D.XY.m128d_f64 + 0xc) = uVar36;
    (local_740->Transform).Scale3D.ZW.m128d_f64[0] = dVar6;
    (local_740->Transform).Scale3D.ZW.m128d_f64[1] = 0.0;
    local_740->Steepness = fVar45;
    local_740->Density = (float)dVar42;
    (local_740->BoundsMin).field0_0x0._s_0.X = local_7f0;
    (local_740->BoundsMin).field0_0x0._s_0.Y = dStack_7e8;
    (local_740->BoundsMin).field0_0x0._s_0.Z = local_7e0;
    (local_740->BoundsMax).field0_0x0._s_0.X = local_808;
    (local_740->BoundsMax).field0_0x0._s_0.Y = dStack_800;
    (local_740->BoundsMax).field0_0x0._s_0.Z = local_7f8;
    (local_740->Color).field0_0x0._s_0.X = local_738;
    (local_740->Color).field0_0x0._s_0.Y = dStack_730;
    (local_740->Color).field0_0x0._s_0.Z = local_728;
    (local_740->Color).field0_0x0._s_0.W = dStack_720;
    if (local_6c0 != (UPCGMetadata *)0x0) {
      bVar17 = UPCGMetadata::HasParent(local_6c0,(UPCGMetadata *)local_6b8->_padding_);
      uVar46 = local_840;
      if (bVar17) {
        if ((int)local_840 < local_6d0) {
          uVar18 = ~local_840 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < NumElements)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                ,0x8b,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar17)) {
          pcVar3 = (code *)swi(3);
          uVar16 = (*pcVar3)();
          return (bool)uVar16;
        }
        lVar21 = *(long64 *)((longlong)((int)uVar46 % local_6d4) * (longlong)local_6d8 + local_6e0);
      }
      else {
        lVar21 = -1;
      }
      lVar21 = UPCGMetadata::AddEntry(this_00,lVar21);
      iVar14 = local_380;
      pFVar12->MetadataEntry = lVar21;
      if (1 < local_380) {
        pUVar2 = (UPCGMetadata *)pUVar13->_padding_;
        local_678.DataPtr = (TTuple<__int64,float> *)&local_3c8;
        if (local_3c8.SecondaryData != (ForElementType<TTuple<__int64,float>_>)0x0) {
          local_678.DataPtr = (TTuple<__int64,float> *)local_3c8.SecondaryData;
        }
        if ((local_380 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar17)) {
          pcVar3 = (code *)swi(3);
          uVar16 = (*pcVar3)();
          return (bool)uVar16;
        }
        local_678.ArrayNum = iVar14;
        UPCGMetadata::ComputeWeightedAttribute(this_00,&pFVar12->MetadataEntry,&local_678,pUVar2);
      }
    }
    bVar17 = true;
    if (local_3c8.SecondaryData != (ForElementType<TTuple<__int64,float>_>)0x0) {
      FMemory::Free((void *)local_3c8.SecondaryData);
    }
  }
  else {
    bVar17 = false;
  }
  if (local_378.AllocatorInstance.SecondaryData != (ForElementType<TTuple<int,double>_>)0x0) {
    FMemory::Free((void *)local_378.AllocatorInstance.SecondaryData);
  }
  return bVar17;
}

// RebuildOctree @ 149827450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UPCGBasePointData::RebuildOctree(UPCGBasePointData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::FNode,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  TBoxSphereBounds<double,double> *pTVar11;
  uint uVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auStackY_748 [32];
  TVector4<double>_u_0 local_718;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  ForAnyElementType local_6b8;
  undefined8 local_6b0;
  ForAnyElementType local_6a8;
  undefined8 local_6a0;
  ForAnyElementType local_698;
  undefined8 local_690;
  ForAnyElementType local_688;
  undefined8 local_680;
  double local_678;
  TVector<double> *local_668;
  longlong local_660;
  int local_658;
  int local_654;
  int local_650;
  TVector4<double>_u_0 local_648;
  double local_628;
  double local_620;
  double local_618;
  undefined8 local_610;
  longlong local_608;
  int local_600;
  int local_5fc;
  int local_5f8;
  longlong local_5d8;
  int local_5d0;
  int local_5cc;
  int local_5c8;
  FPointRef local_5a8;
  TBoxSphereBounds<double,double> local_568;
  double local_530;
  double local_528;
  double local_520;
  double local_518;
  double local_510;
  double local_508;
  longlong local_4f8;
  int local_4f0;
  int local_4ec;
  int local_4e8;
  TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  local_478;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_748;
  lpCriticalSection = &this->CachedDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bOctreeIsDirty != false) {
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId838,"UPCGBasePointData::RebuildOctree",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                 ,0x346);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId838);
    }
    (**(code **)(this->_padding_ + 0x388))(this,&local_530);
    uVar12 = 0;
    local_718._s_0.W = 0.0;
    dStack_6e0 = 0.0;
    local_6c8 = 0;
    local_6b8.Data = (FScriptContainerElement *)0x0;
    local_6b0 = 0;
    local_6a8.Data = (FScriptContainerElement *)0x0;
    local_6a0 = 0;
    local_698.Data = (FScriptContainerElement *)0x0;
    local_690 = 0;
    local_688.Data = (FScriptContainerElement *)0x0;
    local_680 = 0;
    local_718._s_0.X = (local_518 + local_530) * __real_3fe0000000000000;
    local_718._s_0.Y = (local_510 + local_528) * __real_3fe0000000000000;
    auVar16._0_8_ =
         ((local_510 - local_528) * (local_510 - local_528) +
          (local_518 - local_530) * (local_518 - local_530) +
         (local_508 - local_520) * (local_508 - local_520)) * __real_3fd0000000000000;
    auVar16._8_8_ = 0;
    local_718._s_0.Z = (local_508 + local_520) * __real_3fe0000000000000;
    auVar16 = sqrtpd(auVar16,auVar16);
    local_6f8 = auVar16._0_8_;
    local_6d8 = local_6f8 * __real_3fe1000000000000;
    local_678 = local_6f8 * ___real_3f408f227be81608;
    dStack_6d0 = local_6f8 - local_6d8;
    dStack_6f0 = local_6f8;
    local_6e8 = local_6f8;
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&local_6b8,(int *)((longlong)&local_6b0 + 4));
    local_6b0 = CONCAT44(local_6b0._4_4_,iVar8 + 1);
    DefaultConstructItems<TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::FNode,int>
              (local_6b8.Data + (longlong)iVar8 * 8,1);
    iVar8 = (int)local_690;
    if ((int)local_690 == local_690._4_4_) {
      iVar8 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                        (0x410,8,&local_698,(int *)((longlong)&local_690 + 4));
    }
    local_690 = CONCAT44(local_690._4_4_,iVar8 + 1);
    DefaultConstructItems<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              (local_698.Data + (longlong)iVar8 * 0x410,1);
    (**(code **)(this->_padding_ + 0x500))(this,&local_4f8);
    (**(code **)(this->_padding_ + 0x528))(this,&local_660);
    (**(code **)(this->_padding_ + 0x510))(this,&local_5d8);
    (**(code **)(this->_padding_ + 0x518))(this,&local_608);
    iVar8 = (**(code **)(this->_padding_ + 0x488))(this);
    if (0 < iVar8) {
      do {
        uVar14 = ~uVar12 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar12 < local_5f8) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_668 = (TVector<double> *)
                    ((longlong)((int)uVar12 % local_5fc) * (longlong)local_600 + local_608);
        uVar10 = 0;
        uVar9 = uVar10;
        if ((int)uVar12 < local_5c8) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar13 = (TVector<double> *)
                  ((longlong)((int)uVar12 % local_5cc) * (longlong)local_5d0 + local_5d8);
        uVar9 = uVar10;
        if ((int)uVar12 < local_650) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar4 = *(float *)((longlong)((int)uVar12 % local_654) * (longlong)local_658 + local_660);
        if ((int)uVar12 < local_4e8) {
          uVar10 = uVar14;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar11 = PCGPointHelpers::GetDensityBounds
                            (&local_568,
                             (TTransform<double> *)
                             ((longlong)((int)uVar12 % local_4ec) * (longlong)local_4f0 + local_4f8)
                             ,fVar4,pTVar13,local_668);
        local_610 = 0;
        local_648._s_0.W = 0.0;
        local_648._s_0.X = (pTVar11->Origin).field0_0x0._s_0.X;
        local_648._s_0.Y = (pTVar11->Origin).field0_0x0._s_0.Y;
        local_478.AllocatorInstance.SecondaryData = (ForElementType<PCGPointOctree::FPointRef>)0x0;
        local_478.ArrayNum = 0;
        local_478.ArrayMax = 0x10;
        local_648._s_0.Z = (pTVar11->Origin).field0_0x0._s_0.Z;
        local_628 = (pTVar11->BoxExtent).field0_0x0._s_0.X;
        local_620 = (pTVar11->BoxExtent).field0_0x0._s_0.Y;
        local_618 = (pTVar11->BoxExtent).field0_0x0._s_0.Z;
        local_5a8.Bounds.SphereRadius = pTVar11->SphereRadius;
        local_5a8.Index = uVar12;
        local_5a8.Bounds.Origin.field0_0x0._s_0.X = local_648._s_0.X;
        local_5a8.Bounds.Origin.field0_0x0._s_0.Y = local_648._s_0.Y;
        local_5a8.Bounds.Origin.field0_0x0._s_0.Z = local_648._s_0.Z;
        local_5a8.Bounds.BoxExtent.field0_0x0._s_0.X = local_628;
        local_5a8.Bounds.BoxExtent.field0_0x0._s_0.Y = local_620;
        local_5a8.Bounds.BoxExtent.field0_0x0._s_0.Z = local_618;
        TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::AddElementInternal
                  ((TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics> *)
                   &local_718._s_0,0,(FOctreeNodeContext *)&local_718._s_0,
                   (FBoxCenterAndExtent *)&local_648._s_0,&local_5a8,&local_478);
        if (local_478.AllocatorInstance.SecondaryData !=
            (ForElementType<PCGPointOctree::FPointRef>)0x0) {
          FMemory::Free((void *)local_478.AllocatorInstance.SecondaryData);
        }
        uVar12 = uVar12 + 1;
        iVar8 = (**(code **)(this->_padding_ + 0x488))(this);
      } while ((int)uVar12 < iVar8);
    }
    pTVar1 = &(this->PCGPointOctree).TreeNodes;
    (this->PCGPointOctree).RootNodeContext.Bounds.Center.field0_0x0._s_0.X = local_718._s_0.X;
    (this->PCGPointOctree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Y = local_718._s_0.Y;
    (this->PCGPointOctree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Z = local_718._s_0.Z;
    (this->PCGPointOctree).RootNodeContext.Bounds.Center.field0_0x0._s_0.W = local_718._s_0.W;
    (this->PCGPointOctree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.X = local_6f8;
    (this->PCGPointOctree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Y = dStack_6f0;
    (this->PCGPointOctree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Z = local_6e8;
    (this->PCGPointOctree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.W = dStack_6e0;
    (this->PCGPointOctree).RootNodeContext.ChildExtent = local_6d8;
    (this->PCGPointOctree).RootNodeContext.ChildCenterOffset = dStack_6d0;
    (this->PCGPointOctree).RootNodeContext.InCullBits = (undefined4)local_6c8;
    (this->PCGPointOctree).RootNodeContext.OutCullBits = local_6c8._4_4_;
    *(undefined8 *)&(this->PCGPointOctree).RootNodeContext.field_0x58 = uStack_6c0;
    if (pTVar1 != (TArray<TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::FNode,TSizedDefaultAllocator<32>_>
                   *)&local_6b8) {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar1->AllocatorInstance).Data = local_6b8.Data;
      (this->PCGPointOctree).TreeNodes.ArrayNum = (int)local_6b0;
      (this->PCGPointOctree).TreeNodes.ArrayMax = local_6b0._4_4_;
      local_6b0 = 0;
      local_6b8.Data = (FScriptContainerElement *)0x0;
    }
    pTVar2 = &(this->PCGPointOctree).ParentLinks;
    if (pTVar2 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_6a8) {
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar2->AllocatorInstance).Data = local_6a8.Data;
      (this->PCGPointOctree).ParentLinks.ArrayNum = (int)local_6a0;
      (this->PCGPointOctree).ParentLinks.ArrayMax = local_6a0._4_4_;
      local_6a0 = 0;
      local_6a8.Data = (FScriptContainerElement *)0x0;
    }
    pTVar3 = &(this->PCGPointOctree).TreeElements;
    if (pTVar3 != (TArray<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
                   *)&local_698) {
      DestructItems<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
                ((TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                  *)(pTVar3->AllocatorInstance).Data,(this->PCGPointOctree).TreeElements.ArrayNum);
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar3->AllocatorInstance).Data = local_698.Data;
      (this->PCGPointOctree).TreeElements.ArrayNum = (int)local_690;
      (this->PCGPointOctree).TreeElements.ArrayMax = local_690._4_4_;
      local_690 = 0;
      local_698.Data = (FScriptContainerElement *)0x0;
    }
    pTVar2 = &(this->PCGPointOctree).FreeList;
    if (pTVar2 != (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)&local_688) {
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar2->AllocatorInstance).Data = local_688.Data;
      (this->PCGPointOctree).FreeList.ArrayNum = (int)local_680;
      (this->PCGPointOctree).FreeList.ArrayMax = local_680._4_4_;
      local_680 = 0;
      local_688.Data = (FScriptContainerElement *)0x0;
    }
    (this->PCGPointOctree).MinLeafExtent = local_678;
    this->bOctreeIsDirty = false;
    if (local_688.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data);
    }
    DestructItems<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
              ((TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                *)local_698.Data,(int)local_690);
    if ((TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
         *)local_698.Data !=
        (TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      FMemory::Free(local_698.Data);
    }
    if (local_6a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.Data);
    }
    if (local_6b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b8.Data);
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RecomputeBounds @ 149828320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPCGBasePointData::RecomputeBounds(UPCGBasePointData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  TVector<double> *pTVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStackY_258 [32];
  longlong local_228;
  int local_220;
  int local_21c;
  int local_218;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0;
  undefined7 uStack_1df;
  TVector<double>_u_0 local_1d8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  longlong local_1a0;
  int local_198;
  int local_194;
  int local_190;
  longlong local_170;
  int local_168;
  int local_164;
  int local_160;
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined8 local_110;
  longlong local_108;
  int local_100;
  int local_fc;
  int local_f8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_258;
  lpCriticalSection = &this->CachedDataLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->bBoundsAreDirty != false) {
    (**(code **)(this->_padding_ + 0x500))(this,&local_108);
    (**(code **)(this->_padding_ + 0x528))(this,&local_228);
    (**(code **)(this->_padding_ + 0x510))(this,&local_170);
    (**(code **)(this->_padding_ + 0x518))(this,&local_1a0);
    dVar16 = 0.0;
    dVar17 = 0.0;
    dVar18 = 0.0;
    dVar7 = 0.0;
    local_110 = 0;
    dVar6 = 0.0;
    dVar8 = 0.0;
    local_140 = ZEXT816(0);
    uVar13 = 0;
    local_130 = ZEXT816(0);
    local_120 = ZEXT816(0);
    iVar10 = (**(code **)(this->_padding_ + 0x488))(this);
    if (0 < iVar10) {
      do {
        uVar12 = ~uVar13 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar13 < local_190) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar14 = (TVector<double> *)
                  ((longlong)((int)uVar13 % local_194) * (longlong)local_198 + local_1a0);
        uVar11 = 0;
        if ((int)uVar13 < local_160) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar15 = (TVector<double> *)
                  ((longlong)((int)uVar13 % local_164) * (longlong)local_168 + local_170);
        uVar11 = 0;
        if ((int)uVar13 < local_218) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar1 = *(float *)((longlong)((int)uVar13 % local_21c) * (longlong)local_220 + local_228);
        uVar11 = 0;
        if ((int)uVar13 < local_f8) {
          uVar11 = uVar12;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < NumElements)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                               ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        PCGPointHelpers::GetDensityBounds
                  ((TBoxSphereBounds<double,double> *)&local_1d8._s_0,
                   (TTransform<double> *)
                   ((longlong)((int)uVar13 % local_fc) * (longlong)local_100 + local_108),fVar1,
                   pTVar15,pTVar14);
        dVar7 = local_1d8._s_0.X + local_1c0;
        dVar6 = local_1d8._s_0.Y + local_1b8;
        dVar16 = local_1d8._s_0.X - local_1c0;
        dVar17 = local_1d8._s_0.Y - local_1b8;
        local_1e0 = 1;
        dVar8 = local_1d8._s_0.Z + local_1b0;
        dVar18 = local_1d8._s_0.Z - local_1b0;
        local_1f0._8_8_ = dVar8;
        local_1f0._0_8_ = dVar6;
        local_210._8_8_ = dVar17;
        local_210._0_8_ = dVar16;
        local_200._8_8_ = dVar7;
        local_200._0_8_ = dVar18;
        if ((char)local_110 == '\0') {
          local_110 = CONCAT71(uStack_1df,1);
          local_120._8_8_ = dVar8;
          local_120._0_8_ = dVar6;
          local_130._8_8_ = dVar7;
          local_130._0_8_ = dVar18;
          local_140._8_8_ = dVar17;
          local_140._0_8_ = dVar16;
          local_210._8_4_ = SUB84(dVar17,0);
          local_210._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          local_200._8_4_ = SUB84(dVar7,0);
          local_200._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          local_1f0._8_4_ = SUB84(dVar8,0);
          local_1f0._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        }
        else {
          if ((double)local_140._0_8_ <= dVar16) {
            dVar16 = (double)local_140._0_8_;
          }
          if ((double)local_130._0_8_ <= dVar18) {
            dVar18 = (double)local_130._0_8_;
          }
          if ((double)local_140._8_8_ <= dVar17) {
            dVar17 = (double)local_140._8_8_;
          }
          if (dVar7 <= (double)local_130._8_8_) {
            dVar7 = (double)local_130._8_8_;
          }
          if (dVar6 <= (double)local_120._0_8_) {
            dVar6 = (double)local_120._0_8_;
          }
          if (dVar8 <= (double)local_120._8_8_) {
            dVar8 = (double)local_120._8_8_;
          }
          local_130._8_4_ = SUB84(dVar7,0);
          local_130._0_8_ = dVar18;
          local_130._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          local_140._8_4_ = SUB84(dVar17,0);
          local_140._0_8_ = dVar16;
          local_140._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          local_120._8_4_ = SUB84(dVar8,0);
          local_120._0_8_ = dVar6;
          local_120._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        }
        uVar13 = uVar13 + 1;
        iVar10 = (**(code **)(this->_padding_ + 0x488))(this);
      } while ((int)uVar13 < iVar10);
    }
    auVar3._8_4_ = SUB84(dVar17,0);
    auVar3._0_8_ = dVar16;
    auVar3._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *(undefined1 (*) [16])&(this->Bounds).Min.field0_0x0 = auVar3;
    this->bBoundsAreDirty = false;
    auVar4._8_4_ = SUB84(dVar7,0);
    auVar4._0_8_ = dVar18;
    auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->Bounds).Min.field0_0x0 + 0x10) = auVar4;
    auVar5._8_4_ = SUB84(dVar8,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->Bounds).Max.field0_0x0 + 8) = auVar5;
    (this->Bounds).IsValid = (char)local_110;
    (this->Bounds).Pad[0] = local_110._1_1_;
    (this->Bounds).Pad[1] = local_110._2_1_;
    (this->Bounds).Pad[2] = local_110._3_1_;
    (this->Bounds).Pad[3] = local_110._4_1_;
    (this->Bounds).Pad[4] = local_110._5_1_;
    (this->Bounds).Pad[5] = local_110._6_1_;
    (this->Bounds).Pad[6] = local_110._7_1_;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SamplePoint @ 14982cad0

bool __thiscall
UPCGBasePointData::SamplePoint
          (UPCGBasePointData *this,TTransform<double> *param_1,TBox<double> *param_2,
          FPCGPoint *param_3,UPCGMetadata *param_4)

{
  undefined1 uVar1;
  ulonglong local_28;
  FString FStack_20;
  undefined8 uStack_10;
  
  FStack_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28 = 0x101;
  FStack_20.Data.ArrayNum = 0;
  FStack_20.Data.ArrayMax = 0;
  uStack_10 = 0;
  ::FString::FString(&FStack_20,L"");
  uStack_10 = CONCAT53(uStack_10._3_5_,0x700);
  local_28 = local_28 & 0xffffffff00000000;
  uVar1 = (**(code **)(this->_padding_ + 0x3d0))(this,param_1,param_2,&local_28,param_3,param_4);
  if (FStack_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// SetBoundsMax @ 14982d4a0

void __thiscall UPCGBasePointData::SetBoundsMax(UPCGBasePointData *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double> *pTVar4;
  int iVar5;
  TStridedView<UE::Math::TVector<double>,int> local_38 [3];
  
  (**(code **)(this->_padding_ + 0x4a0))(this,8);
  (**(code **)(this->_padding_ + 0x4d8))(this,local_38,0);
  iVar5 = 0;
  if (0 < local_38[0].NumElements) {
    do {
      dVar2 = (param_1->field0_0x0)._s_0.X;
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      dVar1 = (param_1->field0_0x0)._s_0.Z;
      pTVar4 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(local_38,iVar5);
      iVar5 = iVar5 + 1;
      (pTVar4->field0_0x0)._s_0.X = dVar2;
      (pTVar4->field0_0x0)._s_0.Y = dVar3;
      (pTVar4->field0_0x0)._s_0.Z = dVar1;
    } while (iVar5 < local_38[0].NumElements);
  }
  return;
}

// SetBoundsMaxValuesOnRange @ 14982d530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBasePointData::SetBoundsMaxValuesOnRange
          (FPCGPointOutputRange *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  UPCGBasePointData *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  UEnum *pUVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  longlong lStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 auStack_30 [6];
  
  pUVar4 = (param_1->PointData).field0_0x0.DebugPtr;
  if ((pUVar4 == (UPCGBasePointData *)0x0) || (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pUVar14 = StaticEnum<enum_EPCGPointNativeProperties>();
      UEnum::GetNameStringByValue(pUVar14,&FStack_58,8);
      UE::Logging::Private::BasicLog<2>
                (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<8>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    pUVar4 = (param_1->PointData).field0_0x0.DebugPtr;
    uVar13 = (**(code **)(pUVar4->_padding_ + 0x640))(pUVar4,0);
    if ((uVar13 & 8) == 0) {
      if (1 < (byte)LogPCG._0_1_) {
        pUVar14 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar14,&FStack_88,8);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<8>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      pUVar4 = (param_1->PointData).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x4d8))(pUVar4,&lStack_48,0);
      iVar3 = param_1->RangeSize;
      if ((((iVar3 < 1) || (iVar15 = param_1->RangeStartIndex, iVar15 < 0)) || (iStack_38 <= iVar15)
          ) || ((iVar15 = iVar15 + -1 + iVar3, iVar15 < 0 || (iStack_38 <= iVar15)))) {
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        (**(code **)(((param_1->PointData).field0_0x0.DebugPtr)->_padding_ + 0x488))();
        pUVar14 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar14,&FStack_68,8);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<8>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FStack_78.Data.AllocatorInstance.Data = FStack_68.Data.AllocatorInstance.Data;
      }
      else {
        iVar15 = param_2->ArrayNum;
        if (iVar15 <= iVar3) {
          uVar19 = 0;
          if (iVar15 < 1) {
            return;
          }
          lVar18 = 0;
          while( true ) {
            uVar12 = 0;
            if ((int)uVar19 < iVar15) {
              uVar12 = ~uVar19 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (param_2->AllocatorInstance).Data;
            uVar17 = param_1->RangeStartIndex + uVar19;
            pFVar1 = pFVar5 + lVar18;
            uVar7 = *(undefined4 *)pFVar1;
            uVar8 = *(undefined4 *)(pFVar1 + 4);
            uVar9 = *(undefined4 *)(pFVar1 + 8);
            uVar10 = *(undefined4 *)(pFVar1 + 0xc);
            uVar2 = *(undefined8 *)(pFVar5 + lVar18 + 0x10);
            uVar12 = 0;
            if ((int)uVar17 < iStack_38) {
              uVar12 = ~uVar17 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) break;
            if (uVar17 == (int)uVar17 % iStack_3c) {
              puVar16 = (undefined4 *)
                        ((longlong)iStack_40 * (longlong)((int)uVar17 % iStack_3c) + lStack_48);
            }
            else {
              puVar16 = auStack_30;
            }
            *puVar16 = uVar7;
            puVar16[1] = uVar8;
            puVar16[2] = uVar9;
            puVar16[3] = uVar10;
            uVar19 = uVar19 + 1;
            lVar18 = lVar18 + 0x18;
            *(undefined8 *)(puVar16 + 4) = uVar2;
            iVar15 = param_2->ArrayNum;
            if (iVar15 <= (int)uVar19) {
              return;
            }
          }
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        pUVar14 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar14,&FStack_78,8);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<8>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetBoundsMin @ 14982d540

void __thiscall UPCGBasePointData::SetBoundsMin(UPCGBasePointData *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double> *pTVar4;
  int iVar5;
  TStridedView<UE::Math::TVector<double>,int> local_38 [3];
  
  (**(code **)(this->_padding_ + 0x4a0))(this,4);
  (**(code **)(this->_padding_ + 0x4d0))(this,local_38,0);
  iVar5 = 0;
  if (0 < local_38[0].NumElements) {
    do {
      dVar2 = (param_1->field0_0x0)._s_0.X;
      dVar3 = (param_1->field0_0x0)._s_0.Y;
      dVar1 = (param_1->field0_0x0)._s_0.Z;
      pTVar4 = TStridedView<UE::Math::TVector<double>,int>::GetElementPtr(local_38,iVar5);
      iVar5 = iVar5 + 1;
      (pTVar4->field0_0x0)._s_0.X = dVar2;
      (pTVar4->field0_0x0)._s_0.Y = dVar3;
      (pTVar4->field0_0x0)._s_0.Z = dVar1;
    } while (iVar5 < local_38[0].NumElements);
  }
  return;
}

// SetBoundsMinValuesOnRange @ 14982d5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBasePointData::SetBoundsMinValuesOnRange
          (FPCGPointOutputRange *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  UPCGBasePointData *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  UEnum *pUVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  longlong lStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 auStack_30 [6];
  
  pUVar4 = (param_1->PointData).field0_0x0.DebugPtr;
  if ((pUVar4 == (UPCGBasePointData *)0x0) || (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pUVar14 = StaticEnum<enum_EPCGPointNativeProperties>();
      UEnum::GetNameStringByValue(pUVar14,&FStack_58,4);
      UE::Logging::Private::BasicLog<2>
                (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<4>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    pUVar4 = (param_1->PointData).field0_0x0.DebugPtr;
    uVar13 = (**(code **)(pUVar4->_padding_ + 0x640))(pUVar4,0);
    if ((uVar13 & 4) == 0) {
      if (1 < (byte)LogPCG._0_1_) {
        pUVar14 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar14,&FStack_88,4);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<4>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      pUVar4 = (param_1->PointData).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x4d0))(pUVar4,&lStack_48,0);
      iVar3 = param_1->RangeSize;
      if ((((iVar3 < 1) || (iVar15 = param_1->RangeStartIndex, iVar15 < 0)) || (iStack_38 <= iVar15)
          ) || ((iVar15 = iVar15 + -1 + iVar3, iVar15 < 0 || (iStack_38 <= iVar15)))) {
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        (**(code **)(((param_1->PointData).field0_0x0.DebugPtr)->_padding_ + 0x488))();
        pUVar14 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar14,&FStack_68,4);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<4>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FStack_78.Data.AllocatorInstance.Data = FStack_68.Data.AllocatorInstance.Data;
      }
      else {
        iVar15 = param_2->ArrayNum;
        if (iVar15 <= iVar3) {
          uVar19 = 0;
          if (iVar15 < 1) {
            return;
          }
          lVar18 = 0;
          while( true ) {
            uVar12 = 0;
            if ((int)uVar19 < iVar15) {
              uVar12 = ~uVar19 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (param_2->AllocatorInstance).Data;
            uVar17 = param_1->RangeStartIndex + uVar19;
            pFVar1 = pFVar5 + lVar18;
            uVar7 = *(undefined4 *)pFVar1;
            uVar8 = *(undefined4 *)(pFVar1 + 4);
            uVar9 = *(undefined4 *)(pFVar1 + 8);
            uVar10 = *(undefined4 *)(pFVar1 + 0xc);
            uVar2 = *(undefined8 *)(pFVar5 + lVar18 + 0x10);
            uVar12 = 0;
            if ((int)uVar17 < iStack_38) {
              uVar12 = ~uVar17 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) break;
            if (uVar17 == (int)uVar17 % iStack_3c) {
              puVar16 = (undefined4 *)
                        ((longlong)iStack_40 * (longlong)((int)uVar17 % iStack_3c) + lStack_48);
            }
            else {
              puVar16 = auStack_30;
            }
            *puVar16 = uVar7;
            puVar16[1] = uVar8;
            puVar16[2] = uVar9;
            puVar16[3] = uVar10;
            uVar19 = uVar19 + 1;
            lVar18 = lVar18 + 0x18;
            *(undefined8 *)(puVar16 + 4) = uVar2;
            iVar15 = param_2->ArrayNum;
            if (iVar15 <= (int)uVar19) {
              return;
            }
          }
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        pUVar14 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar14,&FStack_78,4);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<4>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetColor @ 14982d5e0

void __thiscall UPCGBasePointData::SetColor(UPCGBasePointData *this,TVector4<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector4<double> *pTVar5;
  int iVar6;
  TStridedView<UE::Math::TVector4<double>,int> local_48 [4];
  
  (**(code **)(this->_padding_ + 0x4a0))(this,0x10);
  (**(code **)(this->_padding_ + 0x4e0))(this,local_48,0);
  iVar6 = 0;
  if (0 < local_48[0].NumElements) {
    do {
      dVar1 = (param_1->field0_0x0)._s_0.X;
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      dVar3 = (param_1->field0_0x0)._s_0.Z;
      dVar4 = (param_1->field0_0x0)._s_0.W;
      pTVar5 = TStridedView<UE::Math::TVector4<double>,int>::GetElementPtr(local_48,iVar6);
      iVar6 = iVar6 + 1;
      (pTVar5->field0_0x0)._s_0.X = dVar1;
      (pTVar5->field0_0x0)._s_0.Y = dVar2;
      (pTVar5->field0_0x0)._s_0.Z = dVar3;
      (pTVar5->field0_0x0)._s_0.W = dVar4;
    } while (iVar6 < local_48[0].NumElements);
  }
  return;
}

// SetColorValuesOnRange @ 14982d670

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBasePointData::SetColorValuesOnRange
          (FPCGPointOutputRange *param_1,
          TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGBasePointData *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  ulonglong uVar16;
  UEnum *pUVar17;
  int iVar18;
  undefined4 *puVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  longlong lStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 auStack_28 [8];
  
  pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
  if ((pUVar3 == (UPCGBasePointData *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pUVar17 = StaticEnum<enum_EPCGPointNativeProperties>();
      UEnum::GetNameStringByValue(pUVar17,&FStack_58,0x10);
      UE::Logging::Private::BasicLog<2>
                (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<16>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
    uVar16 = (**(code **)(pUVar3->_padding_ + 0x640))(pUVar3,0);
    if ((uVar16 & 0x10) == 0) {
      if (1 < (byte)LogPCG._0_1_) {
        pUVar17 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar17,&FStack_88,0x10);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<16>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_88.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x4e0))(pUVar3,&lStack_48,0);
      iVar2 = param_1->RangeSize;
      if ((((iVar2 < 1) || (iVar18 = param_1->RangeStartIndex, iVar18 < 0)) || (iStack_38 <= iVar18)
          ) || ((iVar18 = iVar18 + -1 + iVar2, iVar18 < 0 || (iStack_38 <= iVar18)))) {
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        (**(code **)(((param_1->PointData).field0_0x0.DebugPtr)->_padding_ + 0x488))();
        pUVar17 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar17,&FStack_68,0x10);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<16>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FStack_78.Data.AllocatorInstance.Data = FStack_68.Data.AllocatorInstance.Data;
      }
      else {
        iVar18 = param_2->ArrayNum;
        if (iVar18 <= iVar2) {
          uVar22 = 0;
          if (iVar18 < 1) {
            return;
          }
          lVar21 = 0;
          while( true ) {
            uVar15 = 0;
            if ((int)uVar22 < iVar18) {
              uVar15 = ~uVar22 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar4 = (param_2->AllocatorInstance).Data;
            uVar20 = param_1->RangeStartIndex + uVar22;
            pFVar1 = pFVar4 + lVar21;
            uVar6 = *(undefined4 *)pFVar1;
            uVar7 = *(undefined4 *)(pFVar1 + 4);
            uVar8 = *(undefined4 *)(pFVar1 + 8);
            uVar9 = *(undefined4 *)(pFVar1 + 0xc);
            pFVar4 = pFVar4 + lVar21 + 0x10;
            uVar10 = *(undefined4 *)pFVar4;
            uVar11 = *(undefined4 *)(pFVar4 + 4);
            uVar12 = *(undefined4 *)(pFVar4 + 8);
            uVar13 = *(undefined4 *)(pFVar4 + 0xc);
            uVar15 = 0;
            if ((int)uVar20 < iStack_38) {
              uVar15 = ~uVar20 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < NumElements)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                    ,0x8b,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) break;
            if (uVar20 == (int)uVar20 % iStack_3c) {
              puVar19 = (undefined4 *)
                        ((longlong)iStack_40 * (longlong)((int)uVar20 % iStack_3c) + lStack_48);
            }
            else {
              puVar19 = auStack_28;
            }
            *puVar19 = uVar6;
            puVar19[1] = uVar7;
            puVar19[2] = uVar8;
            puVar19[3] = uVar9;
            uVar22 = uVar22 + 1;
            puVar19[4] = uVar10;
            puVar19[5] = uVar11;
            puVar19[6] = uVar12;
            puVar19[7] = uVar13;
            lVar21 = lVar21 + 0x20;
            iVar18 = param_2->ArrayNum;
            if (iVar18 <= (int)uVar22) {
              return;
            }
          }
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        pUVar17 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar17,&FStack_78,0x10);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<16>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetDensity @ 14982d960

void __thiscall UPCGBasePointData::SetDensity(UPCGBasePointData *this,float param_1)

{
  float *pfVar1;
  int iVar2;
  TStridedView<float,int> local_38 [3];
  
  (**(code **)(this->_padding_ + 0x4a0))(this,2);
  (**(code **)(this->_padding_ + 0x4c8))(this,local_38,0);
  iVar2 = 0;
  if (0 < local_38[0].NumElements) {
    do {
      pfVar1 = TStridedView<float,int>::GetElementPtr(local_38,iVar2);
      iVar2 = iVar2 + 1;
      *pfVar1 = param_1;
    } while (iVar2 < local_38[0].NumElements);
  }
  return;
}

// SetDensityValuesOnRange @ 14982d9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBasePointData::SetDensityValuesOnRange
          (FPCGPointOutputRange *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined4 uVar1;
  int iVar2;
  UPCGBasePointData *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  UEnum *pUVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  longlong lStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 auStack_24 [7];
  
  pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
  if ((pUVar3 == (UPCGBasePointData *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
      UEnum::GetNameStringByValue(pUVar8,&FStack_48,2);
      UE::Logging::Private::BasicLog<2>
                (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<2>(FPCGPointOutputRange&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
    uVar7 = (**(code **)(pUVar3->_padding_ + 0x640))(pUVar3,0);
    if ((uVar7 & 2) == 0) {
      if (1 < (byte)LogPCG._0_1_) {
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_78,2);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<2>(FPCGPointOutputRange&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x4c8))(pUVar3,&lStack_38,0);
      iVar2 = param_1->RangeSize;
      if ((((iVar2 < 1) || (iVar9 = param_1->RangeStartIndex, iVar9 < 0)) || (iStack_28 <= iVar9))
         || ((iVar9 = iVar9 + -1 + iVar2, iVar9 < 0 || (iStack_28 <= iVar9)))) {
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        (**(code **)(((param_1->PointData).field0_0x0.DebugPtr)->_padding_ + 0x488))();
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_58,2);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<2>(FPCGPointOutputRange&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FStack_68.Data.AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
      }
      else {
        iVar9 = param_2->ArrayNum;
        if (iVar9 <= iVar2) {
          uVar13 = 0;
          if (iVar9 < 1) {
            return;
          }
          lVar12 = 0;
          while( true ) {
            uVar6 = 0;
            if ((int)uVar13 < iVar9) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar11 = param_1->RangeStartIndex + uVar13;
            uVar1 = *(undefined4 *)((param_2->AllocatorInstance).Data + lVar12);
            uVar6 = 0;
            if ((int)uVar11 < iStack_28) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < NumElements)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                   ,0x8b,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) break;
            if (uVar11 == (int)uVar11 % iStack_2c) {
              puVar10 = (undefined4 *)
                        ((longlong)iStack_30 * (longlong)((int)uVar11 % iStack_2c) + lStack_38);
            }
            else {
              puVar10 = auStack_24;
            }
            *puVar10 = uVar1;
            uVar13 = uVar13 + 1;
            iVar9 = param_2->ArrayNum;
            lVar12 = lVar12 + 4;
            if (iVar9 <= (int)uVar13) {
              return;
            }
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_68,2);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<2>(FPCGPointOutputRange&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetDomainFromDomainID @ 14982d9e0

bool __thiscall
UPCGBasePointData::SetDomainFromDomainID
          (UPCGBasePointData *this,FPCGMetadataDomainID *param_1,
          FPCGAttributePropertySelector *param_2)

{
  bool bVar1;
  
  if ((param_1->Flag == PCGMetadataDomainID::Elements.Flag) &&
     (param_1->CustomFlag == PCGMetadataDomainID::Elements.CustomFlag)) {
    FPCGAttributePropertySelector::SetDomainName
              (param_2,PCGPointDataConstants::ElementsDomainName,false);
    return true;
  }
  bVar1 = UPCGData::SetDomainFromDomainID((UPCGData *)this,param_1,param_2);
  return bVar1;
}

// SetExtents @ 14982da30

void __thiscall UPCGBasePointData::SetExtents(UPCGBasePointData *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  double *pdVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_d8;
  int local_d0;
  int local_cc;
  int iStack_c8;
  double local_c0 [3];
  longlong local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  double local_90 [3];
  undefined1 local_78 [12];
  int iStack_6c;
  int local_68;
  undefined1 local_48 [12];
  int iStack_3c;
  int local_38;
  
  (**(code **)(this->_padding_ + 0x510))(this,local_48);
  (**(code **)(this->_padding_ + 0x518))(this,local_78);
  if ((local_38 != local_68) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoundsMinRange.Num() == BoundsMaxRange.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                         ,0x388,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (local_68 < iStack_6c) {
    iStack_6c = local_68;
  }
  if (local_38 < iStack_3c) {
    iStack_3c = local_38;
  }
  if (iStack_3c != iStack_6c) {
    (**(code **)(this->_padding_ + 0x498))(this,0xc);
  }
  (**(code **)(this->_padding_ + 0x4d0))(this,&local_d8,0);
  (**(code **)(this->_padding_ + 0x4d8))(this,&local_a8,0);
  dVar4 = __real_3fe0000000000000;
  uVar9 = 0;
  iVar7 = local_cc;
  if (iStack_c8 < local_cc) {
    iVar7 = iStack_c8;
  }
  if (0 < iVar7) {
    do {
      uVar6 = 0;
      if ((int)uVar9 < local_98) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 == (int)uVar9 % local_9c) {
        pdVar10 = (double *)((longlong)local_a0 * (longlong)((int)uVar9 % local_9c) + local_a8);
      }
      else {
        pdVar10 = local_90;
      }
      uVar6 = 0;
      if ((int)uVar9 < iStack_c8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar9 == (int)uVar9 % local_cc) {
        pdVar8 = (double *)((longlong)local_d0 * (longlong)((int)uVar9 % local_cc) + local_d8);
      }
      else {
        pdVar8 = local_c0;
      }
      uVar9 = uVar9 + 1;
      dVar12 = (pdVar10[1] + pdVar8[1]) * dVar4;
      dVar11 = (pdVar10[2] + pdVar8[2]) * dVar4;
      dVar13 = (*pdVar8 + *pdVar10) * dVar4;
      dVar1 = (param_1->field0_0x0)._s_0.Z;
      dVar2 = (param_1->field0_0x0)._s_0.X;
      pdVar8[1] = dVar12 - (param_1->field0_0x0)._s_0.Y;
      pdVar8[2] = dVar11 - dVar1;
      *pdVar8 = dVar13 - dVar2;
      dVar1 = (param_1->field0_0x0)._s_0.Y;
      dVar2 = (param_1->field0_0x0)._s_0.Z;
      *pdVar10 = dVar13 + (param_1->field0_0x0)._s_0.X;
      pdVar10[1] = dVar12 + dVar1;
      pdVar10[2] = dVar11 + dVar2;
      iVar7 = local_cc;
      if (iStack_c8 < local_cc) {
        iVar7 = iStack_c8;
      }
    } while ((int)uVar9 < iVar7);
  }
  return;
}

// SetLocalCenter @ 14982dcc0

void __thiscall UPCGBasePointData::SetLocalCenter(UPCGBasePointData *this,TVector<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  uint uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong local_f8;
  int local_f0;
  int local_ec;
  int iStack_e8;
  double local_e0 [3];
  longlong local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  double local_b0 [3];
  undefined1 local_98 [12];
  int iStack_8c;
  int local_88;
  undefined1 local_68 [12];
  int iStack_5c;
  int local_58;
  
  (**(code **)(this->_padding_ + 0x510))(this,local_68);
  (**(code **)(this->_padding_ + 0x518))(this,local_98);
  if ((local_58 != local_88) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoundsMinRange.Num() == BoundsMaxRange.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                         ,0x3a1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_88 < iStack_8c) {
    iStack_8c = local_88;
  }
  if (local_58 < iStack_5c) {
    iStack_5c = local_58;
  }
  if (iStack_5c != iStack_8c) {
    (**(code **)(this->_padding_ + 0x498))(this,0xc);
  }
  (**(code **)(this->_padding_ + 0x4d0))(this,&local_f8,0);
  (**(code **)(this->_padding_ + 0x4d8))(this,&local_c8,0);
  dVar2 = __real_3fe0000000000000;
  uVar7 = 0;
  iVar5 = local_ec;
  if (iStack_e8 < local_ec) {
    iVar5 = iStack_e8;
  }
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar7 < local_b8) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar7 == (int)uVar7 % local_bc) {
        pdVar8 = (double *)((longlong)local_c0 * (longlong)((int)uVar7 % local_bc) + local_c8);
      }
      else {
        pdVar8 = local_b0;
      }
      uVar4 = 0;
      if ((int)uVar7 < iStack_e8) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                             ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar7 == (int)uVar7 % local_ec) {
        pdVar6 = (double *)((longlong)local_f0 * (longlong)((int)uVar7 % local_ec) + local_f8);
      }
      else {
        pdVar6 = local_e0;
      }
      uVar7 = uVar7 + 1;
      dVar11 = (param_1->field0_0x0)._s_0.X - (*pdVar6 + *pdVar8) * dVar2;
      dVar10 = (param_1->field0_0x0)._s_0.Y - (pdVar6[1] + pdVar8[1]) * dVar2;
      dVar9 = (param_1->field0_0x0)._s_0.Z - (pdVar6[2] + pdVar8[2]) * dVar2;
      pdVar6[1] = dVar10 + pdVar6[1];
      *pdVar6 = dVar11 + *pdVar6;
      pdVar6[2] = dVar9 + pdVar6[2];
      *pdVar8 = dVar11 + *pdVar8;
      pdVar8[1] = dVar10 + pdVar8[1];
      pdVar8[2] = dVar9 + pdVar8[2];
      iVar5 = local_ec;
      if (iStack_e8 < local_ec) {
        iVar5 = iStack_e8;
      }
    } while ((int)uVar7 < iVar5);
  }
  return;
}

// SetMetadataEntry @ 14982df90

void __thiscall UPCGBasePointData::SetMetadataEntry(UPCGBasePointData *this,long64 param_1)

{
  long64 *plVar1;
  int iVar2;
  TStridedView<__int64,int> local_28 [2];
  
  (**(code **)(this->_padding_ + 0x4a0))(this,0x80);
  (**(code **)(this->_padding_ + 0x4f8))(this,local_28,0);
  iVar2 = 0;
  if (0 < local_28[0].NumElements) {
    do {
      plVar1 = TStridedView<__int64,int>::GetElementPtr(local_28,iVar2);
      iVar2 = iVar2 + 1;
      *plVar1 = param_1;
    } while (iVar2 < local_28[0].NumElements);
  }
  return;
}

// SetMetadataEntryValuesOnRange @ 14982e000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBasePointData::SetMetadataEntryValuesOnRange
          (FPCGPointOutputRange *param_1,TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  UPCGBasePointData *pUVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  UEnum *pUVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  longlong lStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined8 uStack_20;
  
  pUVar2 = (param_1->PointData).field0_0x0.DebugPtr;
  if ((pUVar2 == (UPCGBasePointData *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
      UEnum::GetNameStringByValue(pUVar8,&FStack_48,0x80);
      UE::Logging::Private::BasicLog<2>
                (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<128>(FPCGPointOutputRange&___ptr64,TArray<__int64,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    pUVar2 = (param_1->PointData).field0_0x0.DebugPtr;
    cVar5 = (**(code **)(pUVar2->_padding_ + 0x640))(pUVar2,0);
    if (cVar5 < '\0') {
      pUVar2 = (param_1->PointData).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x4f8))(pUVar2,&lStack_38,0);
      iVar1 = param_1->RangeSize;
      if ((((iVar1 < 1) || (iVar9 = param_1->RangeStartIndex, iVar9 < 0)) || (iStack_28 <= iVar9))
         || ((iVar9 = iVar9 + -1 + iVar1, iVar9 < 0 || (iStack_28 <= iVar9)))) {
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        (**(code **)(((param_1->PointData).field0_0x0.DebugPtr)->_padding_ + 0x488))();
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_58,0x80);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<128>(FPCGPointOutputRange&___ptr64,TArray<__int64,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FStack_68.Data.AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
      }
      else {
        iVar9 = param_2->ArrayNum;
        if (iVar9 <= iVar1) {
          uVar12 = 0;
          if (iVar9 < 1) {
            return;
          }
          lVar13 = 0;
          while( true ) {
            uVar7 = 0;
            if ((int)uVar12 < iVar9) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar11 = param_1->RangeStartIndex + uVar12;
            uVar3 = *(undefined8 *)((param_2->AllocatorInstance).Data + lVar13);
            uVar7 = 0;
            if ((int)uVar11 < iStack_28) {
              uVar7 = ~uVar11 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < NumElements)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                   ,0x8b,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar6)) break;
            if (uVar11 == (int)uVar11 % iStack_2c) {
              puVar10 = (undefined8 *)
                        ((longlong)iStack_30 * (longlong)((int)uVar11 % iStack_2c) + lStack_38);
            }
            else {
              puVar10 = &uStack_20;
            }
            *puVar10 = uVar3;
            uVar12 = uVar12 + 1;
            iVar9 = param_2->ArrayNum;
            lVar13 = lVar13 + 8;
            if (iVar9 <= (int)uVar12) {
              return;
            }
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_68,0x80);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<128>(FPCGPointOutputRange&___ptr64,TArray<__int64,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
    }
    else if (1 < (byte)LogPCG._0_1_) {
      pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
      UEnum::GetNameStringByValue(pUVar8,&FStack_78,0x80);
      UE::Logging::Private::BasicLog<2>
                (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<128>(FPCGPointOutputRange&___ptr64,TArray<__int64,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  return;
}

// SetNumPoints @ 14982ebb0

void __thiscall UPCGBasePointData::SetNumPoints(UPCGBasePointData *this,int param_1,bool param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGBasePointData.h"
             ,0x72,L"Pure virtual not implemented (%s)");
  return;
}

// SetPointOnRange @ 14982ed10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBasePointData::SetPointOnRange(FPCGPointOutputRange *param_1,int param_2,FPCGPoint *param_3)

{
  float fVar1;
  double dVar2;
  UPCGBasePointData *pUVar3;
  long64 lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  TTransform<double> *pTVar17;
  float *pfVar18;
  TVector<double> *pTVar19;
  TVector4<double> *pTVar20;
  int *piVar21;
  long64 *plVar22;
  undefined1 auStack_228 [32];
  FPCGPointValueRanges local_208;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_228;
  pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
  if (pUVar3 == (UPCGBasePointData *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    if ((-1 < param_2) && (iVar16 = (**(code **)(pUVar3->_padding_ + 0x488))(), param_2 < iVar16)) {
      FPCGPointValueRanges::FPCGPointValueRanges
                (&local_208,(param_1->PointData).field0_0x0.DebugPtr,false);
      if (local_208.TransformRange.NumElements != 0) {
        dVar2 = (param_3->Transform).Rotation.XY.m128d_f64[0];
        dVar5 = (param_3->Transform).Rotation.XY.m128d_f64[1];
        dVar6 = (param_3->Transform).Rotation.ZW.m128d_f64[0];
        dVar7 = (param_3->Transform).Rotation.ZW.m128d_f64[1];
        dVar8 = (param_3->Transform).Translation.XY.m128d_f64[0];
        dVar9 = (param_3->Transform).Translation.XY.m128d_f64[1];
        dVar10 = (param_3->Transform).Translation.ZW.m128d_f64[0];
        dVar11 = (param_3->Transform).Translation.ZW.m128d_f64[1];
        dVar12 = (param_3->Transform).Scale3D.XY.m128d_f64[0];
        dVar13 = (param_3->Transform).Scale3D.XY.m128d_f64[1];
        dVar14 = (param_3->Transform).Scale3D.ZW.m128d_f64[0];
        dVar15 = (param_3->Transform).Scale3D.ZW.m128d_f64[1];
        pTVar17 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_208.TransformRange,param_2);
        (pTVar17->Rotation).XY.m128d_f64[0] = dVar2;
        (pTVar17->Rotation).XY.m128d_f64[1] = dVar5;
        (pTVar17->Rotation).ZW.m128d_f64[0] = dVar6;
        (pTVar17->Rotation).ZW.m128d_f64[1] = dVar7;
        (pTVar17->Translation).XY.m128d_f64[0] = dVar8;
        (pTVar17->Translation).XY.m128d_f64[1] = dVar9;
        (pTVar17->Translation).ZW.m128d_f64[0] = dVar10;
        (pTVar17->Translation).ZW.m128d_f64[1] = dVar11;
        (pTVar17->Scale3D).XY.m128d_f64[0] = dVar12;
        (pTVar17->Scale3D).XY.m128d_f64[1] = dVar13;
        (pTVar17->Scale3D).ZW.m128d_f64[0] = dVar14;
        (pTVar17->Scale3D).ZW.m128d_f64[1] = dVar15;
      }
      if (local_208.DensityRange.NumElements != 0) {
        fVar1 = param_3->Density;
        pfVar18 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_208.DensityRange,param_2);
        *pfVar18 = fVar1;
      }
      if (local_208.SteepnessRange.NumElements != 0) {
        fVar1 = param_3->Steepness;
        pfVar18 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_208.SteepnessRange,param_2);
        *pfVar18 = fVar1;
      }
      if (local_208.BoundsMinRange.NumElements != 0) {
        dVar5 = (param_3->BoundsMin).field0_0x0._s_0.X;
        dVar6 = (param_3->BoundsMin).field0_0x0._s_0.Y;
        dVar2 = (param_3->BoundsMin).field0_0x0._s_0.Z;
        pTVar19 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_208.BoundsMinRange,param_2);
        (pTVar19->field0_0x0)._s_0.X = dVar5;
        (pTVar19->field0_0x0)._s_0.Y = dVar6;
        (pTVar19->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_208.BoundsMaxRange.NumElements != 0) {
        dVar5 = (param_3->BoundsMax).field0_0x0._s_0.X;
        dVar6 = (param_3->BoundsMax).field0_0x0._s_0.Y;
        dVar2 = (param_3->BoundsMax).field0_0x0._s_0.Z;
        pTVar19 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_208.BoundsMaxRange,param_2);
        (pTVar19->field0_0x0)._s_0.X = dVar5;
        (pTVar19->field0_0x0)._s_0.Y = dVar6;
        (pTVar19->field0_0x0)._s_0.Z = dVar2;
      }
      if (local_208.ColorRange.NumElements != 0) {
        dVar2 = (param_3->Color).field0_0x0._s_0.X;
        dVar5 = (param_3->Color).field0_0x0._s_0.Y;
        dVar6 = (param_3->Color).field0_0x0._s_0.Z;
        dVar7 = (param_3->Color).field0_0x0._s_0.W;
        pTVar20 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_208.ColorRange,param_2);
        (pTVar20->field0_0x0)._s_0.X = dVar2;
        (pTVar20->field0_0x0)._s_0.Y = dVar5;
        (pTVar20->field0_0x0)._s_0.Z = dVar6;
        (pTVar20->field0_0x0)._s_0.W = dVar7;
      }
      if (local_208.SeedRange.NumElements != 0) {
        iVar16 = param_3->Seed;
        piVar21 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_208.SeedRange,param_2);
        *piVar21 = iVar16;
      }
      if (local_208.MetadataEntryRange.NumElements == 0) {
        return;
      }
      lVar4 = param_3->MetadataEntry;
      plVar22 = TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                          (&local_208.MetadataEntryRange,param_2);
      *plVar22 = lVar4;
      return;
    }
    if (1 < (byte)LogPCG._0_1_) {
      (**(code **)(((param_1->PointData).field0_0x0.DebugPtr)->_padding_ + 0x488))();
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  return;
}

// SetPoints @ 14982efc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGBasePointData::SetPoints
          (UPCGBasePointData *param_1,UPCGBasePointData *param_2,TArrayView<int_const_,int> *param_3
          ,bool param_4)

{
  undefined8 uVar1;
  code *pcVar2;
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
  TArrayView<int_const_,int> *pTVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStack_408 [32];
  longlong local_3e8;
  longlong local_3e0;
  char local_3d8;
  char local_3d7;
  TArrayView<int_const_,int> *local_3d0;
  longlong local_3c8;
  UPCGBasePointData *local_3c0;
  longlong local_3b8;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  undefined4 local_3a4;
  longlong local_3a0;
  int local_398;
  int local_394;
  int local_390;
  undefined4 local_38c;
  longlong local_388;
  int local_380;
  int local_37c;
  int local_378;
  undefined4 local_374;
  longlong local_370;
  int local_368;
  int local_364;
  int local_360;
  longlong local_358;
  int local_350;
  int local_34c;
  int local_348;
  longlong local_340;
  int local_338;
  int local_334;
  int local_330;
  longlong local_328;
  int local_320;
  int local_31c;
  int local_318;
  undefined8 local_310;
  longlong local_308;
  int local_300;
  int local_2fc;
  int local_2f8;
  longlong local_2e8;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  undefined8 local_2d0 [3];
  longlong local_2b8;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  undefined8 local_2a0 [3];
  longlong local_288;
  int local_280;
  int local_27c;
  int local_278;
  longlong local_258;
  int local_250;
  int local_24c;
  int local_248;
  longlong local_228;
  int local_220;
  int local_21c;
  int local_218;
  undefined8 local_208 [4];
  longlong local_1e8;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  longlong local_1a8;
  int local_1a0;
  int local_19c;
  int local_198;
  undefined8 local_188 [12];
  longlong local_128;
  int local_120;
  int local_11c;
  int local_118;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_408;
  bVar27 = CpuChannel->Enabled < 0;
  local_3d7 = param_4;
  local_3d0 = param_3;
  local_3c0 = param_2;
  if (bVar27) {
    local_3d8 = '\0';
  }
  else {
    local_3d8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId751,"UPCGBasePointData::SetPoints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
               ,0x2ef);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId751);
  }
  cVar21 = !bVar27;
  if ((param_1 == (UPCGBasePointData *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("From",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGBasePointData.cpp"
                          ,0x2f0,L""), bVar27)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_4) {
    iVar15 = (**(code **)(param_1->_padding_ + 0x488))(param_1);
  }
  else {
    iVar15 = param_3->ArrayNum;
  }
  (**(code **)(param_2->_padding_ + 0x490))(param_2,iVar15,0);
  pcVar2 = *(code **)(param_2->_padding_ + 0x498);
  uVar16 = (**(code **)(param_1->_padding_ + 0x640))(param_1,1);
  (*pcVar2)(param_2,uVar16);
  if (iVar15 != 0) {
    (**(code **)(param_1->_padding_ + 0x500))(param_1,&local_128);
    (**(code **)(param_1->_padding_ + 0x528))(param_1,&local_370);
    (**(code **)(param_1->_padding_ + 0x508))(param_1,&local_358);
    (**(code **)(param_1->_padding_ + 0x510))(param_1,&local_288);
    (**(code **)(param_1->_padding_ + 0x518))(param_1,&local_258);
    (**(code **)(param_1->_padding_ + 0x520))(param_1,&local_1e8);
    (**(code **)(param_1->_padding_ + 0x538))(param_1,&local_308);
    (**(code **)(param_1->_padding_ + 0x530))(param_1,&local_340);
    (**(code **)(param_2->_padding_ + 0x4c0))(param_2,&local_1a8,0);
    (**(code **)(param_2->_padding_ + 0x4e8))(param_2,&local_3b8,0);
    (**(code **)(param_2->_padding_ + 0x4c8))(param_2,&local_3a0,0);
    (**(code **)(param_2->_padding_ + 0x4d0))(param_2,&local_2e8,0);
    (**(code **)(param_2->_padding_ + 0x4d8))(param_2,&local_2b8,0);
    (**(code **)(param_2->_padding_ + 0x4e0))(param_2,&local_228,0);
    (**(code **)(param_2->_padding_ + 0x4f8))(param_2,&local_328,0);
    (**(code **)(param_2->_padding_ + 0x4f0))(param_2,&local_388,0);
    pTVar14 = local_3d0;
    uVar23 = 0;
    local_3c8 = (longlong)iVar15;
    if (0 < iVar15) {
      lVar24 = 0;
      do {
        uVar22 = uVar23;
        if (param_4 == false) {
          iVar15 = pTVar14->ArrayNum;
          uVar22 = 0;
          if ((int)uVar23 < iVar15) {
            uVar22 = ~uVar23 >> 0x1f;
          }
          if (uVar22 == 0) {
            local_3e8 = (longlong)(int)uVar23;
            local_3e0 = (longlong)iVar15;
            bVar27 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar27) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          uVar22 = pTVar14->DataPtr[lVar24];
        }
        uVar25 = ~uVar22 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar22 < local_118) {
          uVar17 = uVar25;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar22;
          local_3e0 = (longlong)local_118;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar26 = ~uVar23 >> 0x1f;
        lVar18 = (longlong)((int)uVar22 % local_11c) * (longlong)local_120;
        uVar1 = *(undefined8 *)(lVar18 + local_128);
        uVar3 = ((undefined8 *)(lVar18 + local_128))[1];
        puVar19 = (undefined8 *)(lVar18 + 0x10 + local_128);
        uVar4 = *puVar19;
        uVar5 = puVar19[1];
        puVar19 = (undefined8 *)(lVar18 + 0x20 + local_128);
        uVar6 = *puVar19;
        uVar7 = puVar19[1];
        puVar19 = (undefined8 *)(lVar18 + 0x30 + local_128);
        uVar8 = *puVar19;
        uVar9 = puVar19[1];
        puVar19 = (undefined8 *)(lVar18 + 0x40 + local_128);
        uVar10 = *puVar19;
        uVar11 = puVar19[1];
        puVar19 = (undefined8 *)(lVar18 + 0x50 + local_128);
        uVar12 = *puVar19;
        uVar13 = puVar19[1];
        uVar17 = 0;
        if ((int)uVar23 < local_198) {
          uVar17 = uVar26;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar23;
          local_3e0 = (longlong)local_198;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (uVar23 == (int)uVar23 % local_19c) {
          puVar19 = (undefined8 *)
                    ((longlong)local_1a0 * (longlong)((int)uVar23 % local_19c) + local_1a8);
        }
        else {
          puVar19 = local_188;
        }
        *puVar19 = uVar1;
        puVar19[1] = uVar3;
        puVar19[2] = uVar4;
        puVar19[3] = uVar5;
        puVar19[4] = uVar6;
        puVar19[5] = uVar7;
        puVar19[6] = uVar8;
        puVar19[7] = uVar9;
        puVar19[8] = uVar10;
        puVar19[9] = uVar11;
        puVar19[10] = uVar12;
        puVar19[0xb] = uVar13;
        uVar17 = 0;
        if ((int)uVar22 < local_360) {
          uVar17 = uVar25;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar22;
          local_3e0 = (longlong)local_360;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar16 = *(undefined4 *)
                  ((longlong)((int)uVar22 % local_364) * (longlong)local_368 + local_370);
        uVar17 = 0;
        if ((int)uVar23 < local_3a8) {
          uVar17 = uVar26;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar23;
          local_3e0 = (longlong)local_3a8;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (uVar23 == (int)uVar23 % local_3ac) {
          puVar20 = (undefined4 *)
                    ((longlong)local_3b0 * (longlong)((int)uVar23 % local_3ac) + local_3b8);
        }
        else {
          puVar20 = &local_3a4;
        }
        *puVar20 = uVar16;
        uVar17 = 0;
        if ((int)uVar22 < local_348) {
          uVar17 = uVar25;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar22;
          local_3e0 = (longlong)local_348;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar16 = *(undefined4 *)
                  ((longlong)((int)uVar22 % local_34c) * (longlong)local_350 + local_358);
        uVar17 = 0;
        if ((int)uVar23 < local_390) {
          uVar17 = uVar26;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar23;
          local_3e0 = (longlong)local_390;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (uVar23 == (int)uVar23 % local_394) {
          puVar20 = (undefined4 *)
                    ((longlong)local_398 * (longlong)((int)uVar23 % local_394) + local_3a0);
        }
        else {
          puVar20 = &local_38c;
        }
        *puVar20 = uVar16;
        uVar17 = 0;
        if ((int)uVar22 < local_278) {
          uVar17 = uVar25;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar22;
          local_3e0 = (longlong)local_278;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lVar18 = (longlong)((int)uVar22 % local_27c) * (longlong)local_280;
        puVar19 = (undefined8 *)(lVar18 + local_288);
        uVar3 = *puVar19;
        uVar4 = puVar19[1];
        uVar1 = *(undefined8 *)(lVar18 + 0x10 + local_288);
        uVar17 = 0;
        if ((int)uVar23 < local_2d8) {
          uVar17 = uVar26;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar23;
          local_3e0 = (longlong)local_2d8;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (uVar23 == (int)uVar23 % local_2dc) {
          puVar19 = (undefined8 *)
                    ((longlong)local_2e0 * (longlong)((int)uVar23 % local_2dc) + local_2e8);
        }
        else {
          puVar19 = local_2d0;
        }
        *puVar19 = uVar3;
        puVar19[1] = uVar4;
        puVar19[2] = uVar1;
        uVar17 = 0;
        if ((int)uVar22 < local_248) {
          uVar17 = uVar25;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar22;
          local_3e0 = (longlong)local_248;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lVar18 = (longlong)((int)uVar22 % local_24c) * (longlong)local_250;
        puVar19 = (undefined8 *)(lVar18 + local_258);
        uVar3 = *puVar19;
        uVar4 = puVar19[1];
        uVar1 = *(undefined8 *)(lVar18 + 0x10 + local_258);
        uVar17 = 0;
        if ((int)uVar23 < local_2a8) {
          uVar17 = uVar26;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar23;
          local_3e0 = (longlong)local_2a8;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (uVar23 == (int)uVar23 % local_2ac) {
          puVar19 = (undefined8 *)
                    ((longlong)local_2b0 * (longlong)((int)uVar23 % local_2ac) + local_2b8);
        }
        else {
          puVar19 = local_2a0;
        }
        *puVar19 = uVar3;
        puVar19[1] = uVar4;
        puVar19[2] = uVar1;
        uVar17 = 0;
        if ((int)uVar22 < local_1d8) {
          uVar17 = uVar25;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar22;
          local_3e0 = (longlong)local_1d8;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lVar18 = (longlong)((int)uVar22 % local_1dc) * (longlong)local_1e0;
        puVar19 = (undefined8 *)(lVar18 + local_1e8);
        uVar1 = *puVar19;
        uVar3 = puVar19[1];
        puVar19 = (undefined8 *)(lVar18 + 0x10 + local_1e8);
        uVar4 = *puVar19;
        uVar5 = puVar19[1];
        uVar17 = 0;
        if ((int)uVar23 < local_218) {
          uVar17 = uVar26;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar23;
          local_3e0 = (longlong)local_218;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (uVar23 == (int)uVar23 % local_21c) {
          puVar19 = (undefined8 *)
                    ((longlong)local_220 * (longlong)((int)uVar23 % local_21c) + local_228);
        }
        else {
          puVar19 = local_208;
        }
        *puVar19 = uVar1;
        puVar19[1] = uVar3;
        puVar19[2] = uVar4;
        puVar19[3] = uVar5;
        uVar17 = 0;
        if ((int)uVar22 < local_2f8) {
          uVar17 = uVar25;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar22;
          local_3e0 = (longlong)local_2f8;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar1 = *(undefined8 *)
                 ((longlong)((int)uVar22 % local_2fc) * (longlong)local_300 + local_308);
        uVar17 = 0;
        if ((int)uVar23 < local_318) {
          uVar17 = uVar26;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar23;
          local_3e0 = (longlong)local_318;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (uVar23 == (int)uVar23 % local_31c) {
          puVar19 = (undefined8 *)
                    ((longlong)local_320 * (longlong)((int)uVar23 % local_31c) + local_328);
        }
        else {
          puVar19 = &local_310;
        }
        *puVar19 = uVar1;
        uVar17 = 0;
        if ((int)uVar22 < local_330) {
          uVar17 = uVar25;
        }
        if (uVar17 == 0) {
          local_3e8 = (longlong)(int)uVar22;
          local_3e0 = (longlong)local_330;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar16 = *(undefined4 *)
                  ((longlong)((int)uVar22 % local_334) * (longlong)local_338 + local_340);
        uVar22 = 0;
        if ((int)uVar23 < local_378) {
          uVar22 = uVar26;
        }
        if (uVar22 == 0) {
          local_3e8 = (longlong)(int)uVar23;
          local_3e0 = (longlong)local_378;
          bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < NumElements)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                              ,0x8b,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar27) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (uVar23 == (int)uVar23 % local_37c) {
          puVar20 = (undefined4 *)
                    ((longlong)local_380 * (longlong)((int)uVar23 % local_37c) + local_388);
        }
        else {
          puVar20 = &local_374;
        }
        uVar23 = uVar23 + 1;
        lVar24 = lVar24 + 1;
        *puVar20 = uVar16;
        param_2 = local_3c0;
        param_4 = (bool)local_3d7;
        cVar21 = local_3d8;
      } while (lVar24 < local_3c8);
    }
  }
  (**(code **)(param_2->_padding_ + 0x648))(param_2);
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SetPointsFrom @ 14982fa80

void __thiscall
UPCGBasePointData::SetPointsFrom
          (UPCGBasePointData *this,UPCGBasePointData *param_1,TArrayView<int_const_,int> *param_2)

{
  SetPoints(param_1,this,param_2,false);
  return;
}

// SetSeed @ 149840bd0

void __thiscall UPCGBasePointData::SetSeed(UPCGBasePointData *this,int param_1)

{
  int *piVar1;
  int iVar2;
  TStridedView<int,int> local_28 [2];
  
  (**(code **)(this->_padding_ + 0x4a0))(this,0x40);
  (**(code **)(this->_padding_ + 0x4f0))(this,local_28,0);
  iVar2 = 0;
  if (0 < local_28[0].NumElements) {
    do {
      piVar1 = TStridedView<int,int>::GetElementPtr(local_28,iVar2);
      iVar2 = iVar2 + 1;
      *piVar1 = param_1;
    } while (iVar2 < local_28[0].NumElements);
  }
  return;
}

// SetSeedValuesOnRange @ 149840c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBasePointData::SetSeedValuesOnRange
          (FPCGPointOutputRange *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  undefined4 uVar2;
  UPCGBasePointData *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  UEnum *pUVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  longlong lStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 auStack_24 [3];
  
  pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
  if ((pUVar3 == (UPCGBasePointData *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
      UEnum::GetNameStringByValue(pUVar8,&FStack_48,0x40);
      UE::Logging::Private::BasicLog<2>
                (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<64>(FPCGPointOutputRange&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
    uVar7 = (**(code **)(pUVar3->_padding_ + 0x640))(pUVar3,0);
    if ((uVar7 & 0x40) == 0) {
      if (1 < (byte)LogPCG._0_1_) {
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_78,0x40);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<64>(FPCGPointOutputRange&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x4f0))(pUVar3,&lStack_38,0);
      iVar1 = param_1->RangeSize;
      if ((((iVar1 < 1) || (iVar9 = param_1->RangeStartIndex, iVar9 < 0)) || (iStack_28 <= iVar9))
         || ((iVar9 = iVar9 + -1 + iVar1, iVar9 < 0 || (iStack_28 <= iVar9)))) {
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        (**(code **)(((param_1->PointData).field0_0x0.DebugPtr)->_padding_ + 0x488))();
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_58,0x40);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<64>(FPCGPointOutputRange&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FStack_68.Data.AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
      }
      else {
        iVar9 = param_2->ArrayNum;
        if (iVar9 <= iVar1) {
          uVar12 = 0;
          if (iVar9 < 1) {
            return;
          }
          lVar13 = 0;
          while( true ) {
            uVar6 = 0;
            if ((int)uVar12 < iVar9) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar11 = param_1->RangeStartIndex + uVar12;
            uVar2 = *(undefined4 *)((param_2->AllocatorInstance).Data + lVar13);
            uVar6 = 0;
            if ((int)uVar11 < iStack_28) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < NumElements)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                   ,0x8b,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) break;
            if (uVar11 == (int)uVar11 % iStack_2c) {
              puVar10 = (undefined4 *)
                        ((longlong)iStack_30 * (longlong)((int)uVar11 % iStack_2c) + lStack_38);
            }
            else {
              puVar10 = auStack_24;
            }
            *puVar10 = uVar2;
            uVar12 = uVar12 + 1;
            iVar9 = param_2->ArrayNum;
            lVar13 = lVar13 + 4;
            if (iVar9 <= (int)uVar12) {
              return;
            }
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_68,0x40);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<64>(FPCGPointOutputRange&___ptr64,TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetSteepness @ 149840d80

void __thiscall UPCGBasePointData::SetSteepness(UPCGBasePointData *this,float param_1)

{
  float *pfVar1;
  int iVar2;
  TStridedView<float,int> local_38 [3];
  
  (**(code **)(this->_padding_ + 0x4a0))(this,0x20);
  (**(code **)(this->_padding_ + 0x4e8))(this,local_38,0);
  iVar2 = 0;
  if (0 < local_38[0].NumElements) {
    do {
      pfVar1 = TStridedView<float,int>::GetElementPtr(local_38,iVar2);
      iVar2 = iVar2 + 1;
      *pfVar1 = param_1;
    } while (iVar2 < local_38[0].NumElements);
  }
  return;
}

// SetSteepnessValuesOnRange @ 149840df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBasePointData::SetSteepnessValuesOnRange
          (FPCGPointOutputRange *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined4 uVar1;
  int iVar2;
  UPCGBasePointData *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  UEnum *pUVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  longlong lStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 auStack_24 [7];
  
  pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
  if ((pUVar3 == (UPCGBasePointData *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
      UEnum::GetNameStringByValue(pUVar8,&FStack_48,0x20);
      UE::Logging::Private::BasicLog<2>
                (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<32>(FPCGPointOutputRange&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
    uVar7 = (**(code **)(pUVar3->_padding_ + 0x640))(pUVar3,0);
    if ((uVar7 & 0x20) == 0) {
      if (1 < (byte)LogPCG._0_1_) {
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_78,0x20);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<32>(FPCGPointOutputRange&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x4e8))(pUVar3,&lStack_38,0);
      iVar2 = param_1->RangeSize;
      if ((((iVar2 < 1) || (iVar9 = param_1->RangeStartIndex, iVar9 < 0)) || (iStack_28 <= iVar9))
         || ((iVar9 = iVar9 + -1 + iVar2, iVar9 < 0 || (iStack_28 <= iVar9)))) {
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        (**(code **)(((param_1->PointData).field0_0x0.DebugPtr)->_padding_ + 0x488))();
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_58,0x20);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<32>(FPCGPointOutputRange&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FStack_68.Data.AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
      }
      else {
        iVar9 = param_2->ArrayNum;
        if (iVar9 <= iVar2) {
          uVar13 = 0;
          if (iVar9 < 1) {
            return;
          }
          lVar12 = 0;
          while( true ) {
            uVar6 = 0;
            if ((int)uVar13 < iVar9) {
              uVar6 = ~uVar13 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar11 = param_1->RangeStartIndex + uVar13;
            uVar1 = *(undefined4 *)((param_2->AllocatorInstance).Data + lVar12);
            uVar6 = 0;
            if ((int)uVar11 < iStack_28) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < NumElements)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                   ,0x8b,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) break;
            if (uVar11 == (int)uVar11 % iStack_2c) {
              puVar10 = (undefined4 *)
                        ((longlong)iStack_30 * (longlong)((int)uVar11 % iStack_2c) + lStack_38);
            }
            else {
              puVar10 = auStack_24;
            }
            *puVar10 = uVar1;
            uVar13 = uVar13 + 1;
            iVar9 = param_2->ArrayNum;
            lVar12 = lVar12 + 4;
            if (iVar9 <= (int)uVar13) {
              return;
            }
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        pUVar8 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar8,&FStack_68,0x20);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<32>(FPCGPointOutputRange&___ptr64,TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetTransform @ 149840e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UPCGBasePointData::SetTransform(UPCGBasePointData *this,TTransform<double> *param_1)

{
  TTransform<double> *pTVar1;
  int iVar2;
  undefined1 auStack_118 [32];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  TStridedView<UE::Math::TTransform<double>,int> local_98 [8];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  (**(code **)(this->_padding_ + 0x4a0))(this,1);
  (**(code **)(this->_padding_ + 0x4c0))(this,local_98,0);
  iVar2 = 0;
  if (0 < local_98[0].NumElements) {
    do {
      local_f8 = (param_1->Rotation).XY.m128d_f64[0];
      dStack_f0 = (param_1->Rotation).XY.m128d_f64[1];
      local_e8 = (param_1->Rotation).ZW.m128d_f64[0];
      dStack_e0 = (param_1->Rotation).ZW.m128d_f64[1];
      local_d8 = (param_1->Translation).XY.m128d_f64[0];
      dStack_d0 = (param_1->Translation).XY.m128d_f64[1];
      local_c8 = (param_1->Translation).ZW.m128d_f64[0];
      dStack_c0 = (param_1->Translation).ZW.m128d_f64[1];
      local_b8 = (param_1->Scale3D).XY.m128d_f64[0];
      dStack_b0 = (param_1->Scale3D).XY.m128d_f64[1];
      local_a8 = (param_1->Scale3D).ZW.m128d_f64[0];
      dStack_a0 = (param_1->Scale3D).ZW.m128d_f64[1];
      pTVar1 = TStridedView<UE::Math::TTransform<double>,int>::GetElementPtr(local_98,iVar2);
      iVar2 = iVar2 + 1;
      (pTVar1->Rotation).XY.m128d_f64[0] = local_f8;
      (pTVar1->Rotation).XY.m128d_f64[1] = dStack_f0;
      (pTVar1->Rotation).ZW.m128d_f64[0] = local_e8;
      (pTVar1->Rotation).ZW.m128d_f64[1] = dStack_e0;
      (pTVar1->Translation).XY.m128d_f64[0] = local_d8;
      (pTVar1->Translation).XY.m128d_f64[1] = dStack_d0;
      (pTVar1->Translation).ZW.m128d_f64[0] = local_c8;
      (pTVar1->Translation).ZW.m128d_f64[1] = dStack_c0;
      (pTVar1->Scale3D).XY.m128d_f64[0] = local_b8;
      (pTVar1->Scale3D).XY.m128d_f64[1] = dStack_b0;
      (pTVar1->Scale3D).ZW.m128d_f64[0] = local_a8;
      (pTVar1->Scale3D).ZW.m128d_f64[1] = dStack_a0;
    } while (iVar2 < local_98[0].NumElements);
  }
  return;
}

// SetTransformValuesOnRange @ 149840fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBasePointData::SetTransformValuesOnRange
          (FPCGPointOutputRange *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGBasePointData *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  UEnum *pUVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_178 [32];
  longlong lStack_158;
  longlong lStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FString FStack_e8;
  FString FStack_d8;
  FString FStack_c8;
  FString FStack_b8;
  longlong lStack_a8;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 auStack_88 [24];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
  if ((pUVar3 == (UPCGBasePointData *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
    if (1 < (byte)LogPCG._0_1_) {
      pUVar9 = StaticEnum<enum_EPCGPointNativeProperties>();
      UEnum::GetNameStringByValue(pUVar9,&FStack_b8,1);
      UE::Logging::Private::BasicLog<2>
                (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<1>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
    uVar8 = (**(code **)(pUVar3->_padding_ + 0x640))(pUVar3,0);
    if ((uVar8 & 1) == 0) {
      if (1 < (byte)LogPCG._0_1_) {
        pUVar9 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar9,&FStack_e8,1);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<1>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l18::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (FStack_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_e8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pUVar3 = (param_1->PointData).field0_0x0.DebugPtr;
      (**(code **)(pUVar3->_padding_ + 0x4c0))(pUVar3,&lStack_a8,0);
      iVar2 = param_1->RangeSize;
      if ((((iVar2 < 1) || (iVar10 = param_1->RangeStartIndex, iVar10 < 0)) || (iStack_98 <= iVar10)
          ) || ((iVar10 = iVar10 + -1 + iVar2, iVar10 < 0 || (iStack_98 <= iVar10)))) {
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        iVar10 = (**(code **)(((param_1->PointData).field0_0x0.DebugPtr)->_padding_ + 0x488))();
        iVar2 = param_1->RangeSize;
        pUVar9 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar9,&FStack_c8,1);
        lStack_150 = CONCAT44(lStack_150._4_4_,iVar10 + -1);
        lStack_158 = CONCAT44(lStack_158._4_4_,iVar2);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<1>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogPCG);
        FStack_d8.Data.AllocatorInstance.Data = FStack_c8.Data.AllocatorInstance.Data;
      }
      else {
        iVar10 = param_2->ArrayNum;
        if (iVar10 <= iVar2) {
          uVar14 = 0;
          if (iVar10 < 1) {
            return;
          }
          lVar13 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar14 < iVar10) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if (uVar7 == 0) {
              lStack_150 = (longlong)iVar10;
              lStack_158 = (longlong)(int)uVar14;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            pFVar4 = (param_2->AllocatorInstance).Data;
            lStack_150 = (longlong)iStack_98;
            uVar12 = param_1->RangeStartIndex + uVar14;
            pFVar1 = pFVar4 + lVar13;
            uStack_148 = *(undefined4 *)pFVar1;
            uStack_144 = *(undefined4 *)(pFVar1 + 4);
            uStack_140 = *(undefined4 *)(pFVar1 + 8);
            uStack_13c = *(undefined4 *)(pFVar1 + 0xc);
            pFVar1 = pFVar4 + lVar13 + 0x10;
            uStack_138 = *(undefined4 *)pFVar1;
            uStack_134 = *(undefined4 *)(pFVar1 + 4);
            uStack_130 = *(undefined4 *)(pFVar1 + 8);
            uStack_12c = *(undefined4 *)(pFVar1 + 0xc);
            pFVar1 = pFVar4 + lVar13 + 0x20;
            uStack_128 = *(undefined4 *)pFVar1;
            uStack_124 = *(undefined4 *)(pFVar1 + 4);
            uStack_120 = *(undefined4 *)(pFVar1 + 8);
            uStack_11c = *(undefined4 *)(pFVar1 + 0xc);
            pFVar1 = pFVar4 + lVar13 + 0x30;
            uStack_118 = *(undefined4 *)pFVar1;
            uStack_114 = *(undefined4 *)(pFVar1 + 4);
            uStack_110 = *(undefined4 *)(pFVar1 + 8);
            uStack_10c = *(undefined4 *)(pFVar1 + 0xc);
            pFVar1 = pFVar4 + lVar13 + 0x40;
            uStack_108 = *(undefined4 *)pFVar1;
            uStack_104 = *(undefined4 *)(pFVar1 + 4);
            uStack_100 = *(undefined4 *)(pFVar1 + 8);
            uStack_fc = *(undefined4 *)(pFVar1 + 0xc);
            pFVar4 = pFVar4 + lVar13 + 0x50;
            uStack_f8 = *(undefined4 *)pFVar4;
            uStack_f4 = *(undefined4 *)(pFVar4 + 4);
            uStack_f0 = *(undefined4 *)(pFVar4 + 8);
            uStack_ec = *(undefined4 *)(pFVar4 + 0xc);
            uVar7 = 0;
            if ((int)uVar12 < iStack_98) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if (uVar7 == 0) {
              lStack_158 = (longlong)(int)uVar12;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < NumElements)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Utils\\PCGValueRange.h"
                                 ,0x8b,L"Array index out of bounds: %lld from an array of size %lld"
                                );
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (uVar12 == (int)uVar12 % iStack_9c) {
              puVar11 = (undefined4 *)
                        ((longlong)iStack_a0 * (longlong)((int)uVar12 % iStack_9c) + lStack_a8);
            }
            else {
              puVar11 = auStack_88;
            }
            *puVar11 = uStack_148;
            puVar11[1] = uStack_144;
            puVar11[2] = uStack_140;
            puVar11[3] = uStack_13c;
            uVar14 = uVar14 + 1;
            puVar11[4] = uStack_138;
            puVar11[5] = uStack_134;
            puVar11[6] = uStack_130;
            puVar11[7] = uStack_12c;
            lVar13 = lVar13 + 0x60;
            puVar11[8] = uStack_128;
            puVar11[9] = uStack_124;
            puVar11[10] = uStack_120;
            puVar11[0xb] = uStack_11c;
            puVar11[0xc] = uStack_118;
            puVar11[0xd] = uStack_114;
            puVar11[0xe] = uStack_110;
            puVar11[0xf] = uStack_10c;
            puVar11[0x10] = uStack_108;
            puVar11[0x11] = uStack_104;
            puVar11[0x12] = uStack_100;
            puVar11[0x13] = uStack_fc;
            puVar11[0x14] = uStack_f8;
            puVar11[0x15] = uStack_f4;
            puVar11[0x16] = uStack_f0;
            puVar11[0x17] = uStack_ec;
            iVar10 = param_2->ArrayNum;
          } while ((int)uVar14 < iVar10);
          return;
        }
        if ((byte)LogPCG._0_1_ < 2) {
          return;
        }
        pUVar9 = StaticEnum<enum_EPCGPointNativeProperties>();
        UEnum::GetNameStringByValue(pUVar9,&FStack_d8,1);
        lStack_158 = CONCAT44(lStack_158._4_4_,iVar2);
        UE::Logging::Private::BasicLog<2>
                  (&`void___cdecl_PCGBasePointData::SetOutputRangeValues<1>(FPCGPointOutputRange&___ptr64,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_const&___ptr64)'
                    ::__l42::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      if (FStack_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_d8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// StaticRegisterNativesUPCGBasePointData @ 149847130

void __cdecl UPCGBasePointData::StaticRegisterNativesUPCGBasePointData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x31;
  local_18.DataPtr = Z_Construct_UClass_UPCGBasePointData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SupportsFullDataCrc @ 149847290

bool __thiscall UPCGBasePointData::SupportsFullDataCrc(UPCGBasePointData *this)

{
  return true;
}

// execBP_AllocateProperties @ 14984f640

void __cdecl
UPCGBasePointData::execBP_AllocateProperties(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x498))(param_1,local_res8[0]);
  return;
}

// execBP_SetPointsFrom @ 14984f6d0

void __cdecl UPCGBasePointData::execBP_SetPointsFrom(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UPCGBasePointData *pUVar4;
  bool bVar5;
  void **ppvVar6;
  UPCGBasePointData *local_res10;
  void *local_28;
  undefined8 local_20;
  TArrayView<int_const_,int> local_18;
  
  local_res10 = (UPCGBasePointData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pUVar4 = local_res10;
  ppvVar6 = &local_28;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18.DataPtr = *ppvVar6;
  iVar1 = *(int *)(ppvVar6 + 1);
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18.ArrayNum = iVar1;
  SetPoints(pUVar4,(UPCGBasePointData *)param_1,&local_18,false);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execGetBoundsMax @ 14984f810

void __cdecl UPCGBasePointData::execGetBoundsMax(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5a8))(param_1,local_res8[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetBoundsMaxValuesFromRange @ 14984f8c0

void __cdecl
UPCGBasePointData::execGetBoundsMaxValuesFromRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UPCGBasePointData_const_>_u_0 *pTVar2;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = 0xffffffff;
  local_28.DebugPtr = (UPCGBasePointData *)0x0;
  local_1c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData_const_>_u_0 *)0x0) {
    pTVar2 = (TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::GetInputRangeValues<8>(&local_18,(FPCGPointInputRange *)&pTVar2->ObjectPtr);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetBoundsMin @ 14984f9b0

void __cdecl UPCGBasePointData::execGetBoundsMin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5a0))(param_1,local_res8[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetBoundsMinValuesFromRange @ 14984fa60

void __cdecl
UPCGBasePointData::execGetBoundsMinValuesFromRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UPCGBasePointData_const_>_u_0 *pTVar2;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = 0xffffffff;
  local_28.DebugPtr = (UPCGBasePointData *)0x0;
  local_1c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData_const_>_u_0 *)0x0) {
    pTVar2 = (TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::GetInputRangeValues<4>(&local_18,(FPCGPointInputRange *)&pTVar2->ObjectPtr);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetColor @ 14984fb50

void __cdecl UPCGBasePointData::execGetColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5b0))(param_1,local_res8[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  return;
}

// execGetColorValuesFromRange @ 14984fc00

void __cdecl
UPCGBasePointData::execGetColorValuesFromRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UPCGBasePointData_const_>_u_0 *pTVar2;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = 0xffffffff;
  local_28.DebugPtr = (UPCGBasePointData *)0x0;
  local_1c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData_const_>_u_0 *)0x0) {
    pTVar2 = (TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::GetInputRangeValues<16>(&local_18,(FPCGPointInputRange *)&pTVar2->ObjectPtr);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetDensity @ 14984fcf0

void __cdecl UPCGBasePointData::execGetDensity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined4 *)(**(code **)(*(longlong *)param_1 + 0x598))(param_1,local_res8[0]);
  *(undefined4 *)param_3 = *puVar2;
  return;
}

// execGetDensityBounds @ 14984fda0

void __cdecl UPCGBasePointData::execGetDensityBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_48 [64];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5d0))(param_1,local_48,local_res8[0])
  ;
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  uVar2 = puVar3[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar3[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar3[6];
  return;
}

// execGetDensityValuesFromRange @ 14984fe70

void __cdecl
UPCGBasePointData::execGetDensityValuesFromRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UPCGBasePointData_const_>_u_0 *pTVar2;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = 0xffffffff;
  local_28.DebugPtr = (UPCGBasePointData *)0x0;
  local_1c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData_const_>_u_0 *)0x0) {
    pTVar2 = (TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::GetInputRangeValues<2>(&local_18,(FPCGPointInputRange *)&pTVar2->ObjectPtr);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetExtents @ 14984ff60

void __cdecl UPCGBasePointData::execGetExtents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_28 [32];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5f0))(param_1,local_28,local_res8[0])
  ;
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetLocalBounds @ 149850020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UPCGBasePointData::execGetLocalBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5e0))(param_1,local_60,local_68[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  uVar2 = puVar3[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar3[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar3[6];
  return;
}

// execGetLocalCenter @ 149850100

void __cdecl UPCGBasePointData::execGetLocalCenter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_28 [32];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5e8))(param_1,local_28,local_res8[0])
  ;
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetLocalDensityBounds @ 1498501c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UPCGBasePointData::execGetLocalDensityBounds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5d8))(param_1,local_60,local_68[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  uVar2 = puVar3[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar3[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar3[6];
  return;
}

// execGetLocalSize @ 1498502a0

void __cdecl UPCGBasePointData::execGetLocalSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_28 [32];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x600))(param_1,local_28,local_res8[0])
  ;
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetMetadataEntry @ 149850360

void __cdecl UPCGBasePointData::execGetMetadataEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5c8))(param_1,local_res8[0]);
  *(undefined8 *)param_3 = *puVar2;
  return;
}

// execGetMetadataEntryValuesFromRange @ 149850410

void __cdecl
UPCGBasePointData::execGetMetadataEntryValuesFromRange
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UPCGBasePointData_const_>_u_0 *pTVar2;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = 0xffffffff;
  local_28.DebugPtr = (UPCGBasePointData *)0x0;
  local_1c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData_const_>_u_0 *)0x0) {
    pTVar2 = (TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::GetInputRangeValues<128>(&local_18,(FPCGPointInputRange *)&pTVar2->ObjectPtr);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetNumPoints @ 149850500

void __cdecl UPCGBasePointData::execGetNumPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x488))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetPointFromRange @ 149850540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UPCGBasePointData::execGetPointFromRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  TTransform<double> *pTVar7;
  TVector<double> *pTVar8;
  TVector4<double> *pTVar9;
  long64 *plVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_2e8 [32];
  int local_2c8 [2];
  longlong local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  FPCGPoint local_2a8;
  FConstPCGPointValueRanges local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  local_2c0 = 0;
  local_2b8 = 0xffffffff;
  local_2b4 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c0);
  }
  local_2c8[0] = 0;
  plVar11 = &local_2c0;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar11 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2c8);
  }
  iVar3 = local_2c8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((longlong *)*plVar11 == (longlong *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    if (-1 < local_2c8[0]) {
      iVar4 = (**(code **)(*(longlong *)*plVar11 + 0x488))();
      if (iVar3 < iVar4) {
        FConstPCGPointValueRanges::FConstPCGPointValueRanges
                  (&local_1d8,(UPCGBasePointData *)*plVar11);
        piVar5 = TPCGValueRange<int_const_,TStridedView<int_const_,int>_>::GetElement
                           (&local_1d8.SeedRange,iVar3);
        iVar4 = *piVar5;
        pfVar6 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                           (&local_1d8.DensityRange,iVar3);
        fVar1 = *pfVar6;
        pTVar7 = TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
                 ::GetElement(&local_1d8.TransformRange,iVar3);
        FPCGPoint::FPCGPoint(&local_2a8,pTVar7,fVar1,iVar4);
        pTVar8 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                 ::GetElement(&local_1d8.BoundsMinRange,iVar3);
        local_2a8.BoundsMin.field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
        local_2a8.BoundsMin.field0_0x0._s_0.Y = (pTVar8->field0_0x0)._s_0.Y;
        local_2a8.BoundsMin.field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
        pTVar8 = TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
                 ::GetElement(&local_1d8.BoundsMaxRange,iVar3);
        local_2a8.BoundsMax.field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
        local_2a8.BoundsMax.field0_0x0._s_0.Y = (pTVar8->field0_0x0)._s_0.Y;
        local_2a8.BoundsMax.field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
        pfVar6 = TPCGValueRange<float_const_,TStridedView<float_const_,int>_>::GetElement
                           (&local_1d8.SteepnessRange,iVar3);
        local_2a8.Steepness = *pfVar6;
        pTVar9 = TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                 ::GetElement(&local_1d8.ColorRange,iVar3);
        local_2a8.Color.field0_0x0._s_0.X = (pTVar9->field0_0x0)._s_0.X;
        local_2a8.Color.field0_0x0._s_0.Y = (pTVar9->field0_0x0)._s_0.Y;
        local_2a8.Color.field0_0x0._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
        local_2a8.Color.field0_0x0._s_0.W = (pTVar9->field0_0x0)._s_0.W;
        plVar10 = TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_>::GetElement
                            (&local_1d8.MetadataEntryRange,iVar3);
        local_2a8.MetadataEntry = *plVar10;
        goto LAB_149850860;
      }
    }
    if (1 < (byte)LogPCG._0_1_) {
      (**(code **)(*(longlong *)*plVar11 + 0x488))();
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  local_2a8.Transform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2a8.Transform.Rotation.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_2a8._padding_ = 0;
  local_2a8.Density = 1.0;
  local_2a8._100_4_ = 0;
  local_2a8.MetadataEntry = -1;
  local_2a8.Steepness = 0.5;
  local_2a8.Seed = 0;
  local_2a8.Transform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2a8.Transform.Rotation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_2a8.Transform.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_2a8.Transform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2a8.Transform.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_2a8.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_2a8.Transform.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
  ;
  local_2a8.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_2a8.Transform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2a8.Transform.Translation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_2a8.Transform.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
  ;
  local_2a8.Transform.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
  ;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_2a8.BoundsMin.field0_0x0._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                              0x20) ^ uVar13,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar12);
  local_2a8.BoundsMax.field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_2a8.BoundsMin.field0_0x0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                              0x20) ^ uVar13,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar12);
  local_2a8.BoundsMax.field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_2a8.BoundsMax.field0_0x0._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_2a8.BoundsMin.field0_0x0._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                              0x20) ^ uVar13,
                        SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar12);
  local_2a8.Color.field0_0x0._s_0.Z = ___xmm_3ff00000000000003ff0000000000000;
  local_2a8.Color.field0_0x0._s_0.W = _UNK_150689688;
  local_2a8.Color.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_2a8.Color.field0_0x0._s_0.Y = _UNK_150689688;
LAB_149850860:
  *(double *)param_3 = local_2a8.Transform.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_2a8.Transform.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_2a8.Transform.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = local_2a8.Transform.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = local_2a8.Transform.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = local_2a8.Transform.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = local_2a8.Transform.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = local_2a8.Transform.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = local_2a8.Transform.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = local_2a8.Transform.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = local_2a8.Transform.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_2a8.Transform.Scale3D.ZW.m128d_f64[1];
  *(undefined8 *)((longlong)param_3 + 0x60) = local_2a8._96_8_;
  *(double *)((longlong)param_3 + 0x68) = local_2a8.BoundsMin.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x70) = local_2a8.BoundsMin.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x78) = local_2a8.BoundsMin.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x80) = local_2a8.BoundsMax.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x88) = local_2a8.BoundsMax.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x90) = local_2a8.BoundsMax.field0_0x0._s_0.Z;
  *(longlong *)((longlong)param_3 + 0x98) = local_2a8._padding_;
  *(double *)((longlong)param_3 + 0xa0) = local_2a8.Color.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0xa8) = local_2a8.Color.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0xb0) = local_2a8.Color.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0xb8) = local_2a8.Color.field0_0x0._s_0.W;
  *(undefined8 *)((longlong)param_3 + 0xc0) = local_2a8._192_8_;
  *(long64 *)((longlong)param_3 + 200) = local_2a8.MetadataEntry;
  return;
}

// execGetScaledExtents @ 149850910

void __cdecl UPCGBasePointData::execGetScaledExtents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_28 [32];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5f8))(param_1,local_28,local_res8[0])
  ;
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetScaledLocalSize @ 1498509d0

void __cdecl
UPCGBasePointData::execGetScaledLocalSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_28 [32];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x608))(param_1,local_28,local_res8[0])
  ;
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetSeed @ 149850a90

void __cdecl UPCGBasePointData::execGetSeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined4 *)(**(code **)(*(longlong *)param_1 + 0x5c0))(param_1,local_res8[0]);
  *(undefined4 *)param_3 = *puVar2;
  return;
}

// execGetSeedValuesFromRange @ 149850b40

void __cdecl
UPCGBasePointData::execGetSeedValuesFromRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UPCGBasePointData_const_>_u_0 *pTVar2;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = 0xffffffff;
  local_28.DebugPtr = (UPCGBasePointData *)0x0;
  local_1c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData_const_>_u_0 *)0x0) {
    pTVar2 = (TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::GetInputRangeValues<64>(&local_18,(FPCGPointInputRange *)&pTVar2->ObjectPtr);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSteepness @ 149850c30

void __cdecl UPCGBasePointData::execGetSteepness(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined4 *)(**(code **)(*(longlong *)param_1 + 0x5b8))(param_1,local_res8[0]);
  *(undefined4 *)param_3 = *puVar2;
  return;
}

// execGetSteepnessValuesFromRange @ 149850ce0

void __cdecl
UPCGBasePointData::execGetSteepnessValuesFromRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UPCGBasePointData_const_>_u_0 *pTVar2;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = 0xffffffff;
  local_28.DebugPtr = (UPCGBasePointData *)0x0;
  local_1c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData_const_>_u_0 *)0x0) {
    pTVar2 = (TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::GetInputRangeValues<32>(&local_18,(FPCGPointInputRange *)&pTVar2->ObjectPtr);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetTransform @ 149850dd0

void __cdecl UPCGBasePointData::execGetTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x590))(param_1,local_res8[0]);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  uVar2 = puVar3[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar2;
  uVar2 = puVar3[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar3[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar2;
  uVar2 = puVar3[7];
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar3[6];
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar2;
  uVar2 = puVar3[9];
  *(undefined8 *)((longlong)param_3 + 0x40) = puVar3[8];
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar2;
  uVar2 = puVar3[0xb];
  *(undefined8 *)((longlong)param_3 + 0x50) = puVar3[10];
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar2;
  return;
}

// execGetTransformValuesFromRange @ 149850ea0

void __cdecl
UPCGBasePointData::execGetTransformValuesFromRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UPCGBasePointData_const_>_u_0 *pTVar2;
  TObjectPtr<UPCGBasePointData_const_>_u_0 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_20 = 0xffffffff;
  local_28.DebugPtr = (UPCGBasePointData *)0x0;
  local_1c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData_const_>_u_0 *)0x0) {
    pTVar2 = (TObjectPtr<UPCGBasePointData_const_>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::GetInputRangeValues<1>(&local_18,(FPCGPointInputRange *)&pTVar2->ObjectPtr);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execIsEmpty @ 149850f90

void __cdecl UPCGBasePointData::execIsEmpty(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = (**(code **)(*(longlong *)param_1 + 0x488))();
  *(bool *)param_3 = iVar1 == 0;
  return;
}

// execSetBoundsMax @ 149850fd0

void __cdecl UPCGBasePointData::execSetBoundsMax(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_28 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x558))(param_1,puVar2);
  return;
}

// execSetBoundsMaxValuesOnRange @ 149851070

void __cdecl
UPCGBasePointData::execSetBoundsMaxValuesOnRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UPCGBasePointData>_u_0 *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  TObjectPtr<UPCGBasePointData>_u_0 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0xffffffff;
  local_18.DebugPtr = (UPCGBasePointData *)0x0;
  local_c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar3 = &local_18;
  if ((TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::SetOutputRangeValues<8>((FPCGPointOutputRange *)&pTVar3->ObjectPtr,pTVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetBoundsMin @ 149851180

void __cdecl UPCGBasePointData::execSetBoundsMin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_28 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x550))(param_1,puVar2);
  return;
}

// execSetBoundsMinValuesOnRange @ 149851220

void __cdecl
UPCGBasePointData::execSetBoundsMinValuesOnRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UPCGBasePointData>_u_0 *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  TObjectPtr<UPCGBasePointData>_u_0 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0xffffffff;
  local_18.DebugPtr = (UPCGBasePointData *)0x0;
  local_c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar3 = &local_18;
  if ((TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::SetOutputRangeValues<4>((FPCGPointOutputRange *)&pTVar3->ObjectPtr,pTVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetColor @ 149851330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UPCGBasePointData::execSetColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_28 [16];
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_18 = ___xmm_3ff00000000000000000000000000000;
  uStack_10 = _UNK_15061cbc8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x560))(param_1,puVar2);
  return;
}

// execSetColorValuesOnRange @ 1498513e0

void __cdecl
UPCGBasePointData::execSetColorValuesOnRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UPCGBasePointData>_u_0 *pTVar3;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_28;
  TObjectPtr<UPCGBasePointData>_u_0 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0xffffffff;
  local_18.DebugPtr = (UPCGBasePointData *)0x0;
  local_c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar3 = &local_18;
  if ((TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::SetOutputRangeValues<16>((FPCGPointOutputRange *)&pTVar3->ObjectPtr,pTVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetDensity @ 1498514f0

void __cdecl UPCGBasePointData::execSetDensity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x548))(param_1,local_res8[0]);
  return;
}

// execSetDensityValuesOnRange @ 149851580

void __cdecl
UPCGBasePointData::execSetDensityValuesOnRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UPCGBasePointData>_u_0 *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> local_28;
  TObjectPtr<UPCGBasePointData>_u_0 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0xffffffff;
  local_18.DebugPtr = (UPCGBasePointData *)0x0;
  local_c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar3 = &local_18;
  if ((TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::SetOutputRangeValues<2>((FPCGPointOutputRange *)&pTVar3->ObjectPtr,pTVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetExtents @ 149851690

void __cdecl UPCGBasePointData::execSetExtents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_28 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x580))(param_1,puVar2);
  return;
}

// execSetLocalCenter @ 149851730

void __cdecl UPCGBasePointData::execSetLocalCenter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_28 [32];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x588))(param_1,puVar2);
  return;
}

// execSetMetadataEntry @ 1498517d0

void __cdecl UPCGBasePointData::execSetMetadataEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x578))(param_1,local_res8);
  return;
}

// execSetMetadataEntryValuesOnRange @ 149851860

void __cdecl
UPCGBasePointData::execSetMetadataEntryValuesOnRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UPCGBasePointData>_u_0 *pTVar3;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_28;
  TObjectPtr<UPCGBasePointData>_u_0 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0xffffffff;
  local_18.DebugPtr = (UPCGBasePointData *)0x0;
  local_c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar3 = &local_18;
  if ((TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TArray<__int64,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<__int64,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::SetOutputRangeValues<128>((FPCGPointOutputRange *)&pTVar3->ObjectPtr,pTVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetNumPoints @ 149851970

void __cdecl UPCGBasePointData::execSetNumPoints(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x490))(param_1,local_res10[0],local_res8[0] != 0);
  return;
}

// execSetPointOnRange @ 149851a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UPCGBasePointData::execSetPointOnRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  float fVar2;
  double dVar3;
  FProperty *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  int iVar17;
  TTransform<double> *pTVar18;
  float *pfVar19;
  TVector<double> *pTVar20;
  TVector4<double> *pTVar21;
  int *piVar22;
  double *pdVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_328 [32];
  int local_308 [2];
  longlong local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  FPCGPointValueRanges local_218;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_328;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_300 = 0;
  local_2f8 = 0xffffffff;
  local_2f4 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_300,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_300);
  }
  local_308[0] = 0;
  plVar24 = &local_300;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar24 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_308,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_308);
  }
  local_2e8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_2e0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_288 = 0x3f800000;
  local_228 = 0x3f000000;
  local_220 = 0xffffffffffffffff;
  local_2d8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_2d0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_2c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_2c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_2a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_2a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_2b8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_2b0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar25 = (uint)__xmm_80000000000000008000000000000000;
  uVar26 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_298 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_290 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_278 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >>
                             0x20) ^ uVar26,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0) ^ uVar25);
  local_280 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >>
                             0x20) ^ uVar26,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0) ^ uVar25);
  local_268 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_260 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_248 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_240 = _UNK_150689688;
  local_238 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_230 = _UNK_150689688;
  local_270 = CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >>
                             0x20) ^ uVar26,
                       SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0) ^ uVar25);
  local_258 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2e8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2e8);
  }
  iVar16 = local_308[0];
  pdVar23 = &local_2e8;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar23 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((longlong *)*plVar24 == (longlong *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  else {
    if ((-1 < local_308[0]) &&
       (iVar17 = (**(code **)(*(longlong *)*plVar24 + 0x488))(), iVar16 < iVar17)) {
      FPCGPointValueRanges::FPCGPointValueRanges(&local_218,(UPCGBasePointData *)*plVar24,false);
      if (local_218.TransformRange.NumElements != 0) {
        dVar3 = *pdVar23;
        dVar5 = pdVar23[1];
        dVar6 = pdVar23[2];
        dVar7 = pdVar23[3];
        dVar8 = pdVar23[4];
        dVar9 = pdVar23[5];
        dVar10 = pdVar23[6];
        dVar11 = pdVar23[7];
        dVar12 = pdVar23[8];
        dVar13 = pdVar23[9];
        dVar14 = pdVar23[10];
        dVar15 = pdVar23[0xb];
        pTVar18 = TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
                  ::operator[](&local_218.TransformRange,iVar16);
        (pTVar18->Rotation).XY.m128d_f64[0] = dVar3;
        (pTVar18->Rotation).XY.m128d_f64[1] = dVar5;
        (pTVar18->Rotation).ZW.m128d_f64[0] = dVar6;
        (pTVar18->Rotation).ZW.m128d_f64[1] = dVar7;
        (pTVar18->Translation).XY.m128d_f64[0] = dVar8;
        (pTVar18->Translation).XY.m128d_f64[1] = dVar9;
        (pTVar18->Translation).ZW.m128d_f64[0] = dVar10;
        (pTVar18->Translation).ZW.m128d_f64[1] = dVar11;
        (pTVar18->Scale3D).XY.m128d_f64[0] = dVar12;
        (pTVar18->Scale3D).XY.m128d_f64[1] = dVar13;
        (pTVar18->Scale3D).ZW.m128d_f64[0] = dVar14;
        (pTVar18->Scale3D).ZW.m128d_f64[1] = dVar15;
      }
      if (local_218.DensityRange.NumElements != 0) {
        fVar2 = *(float *)(pdVar23 + 0xc);
        pfVar19 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_218.DensityRange,iVar16);
        *pfVar19 = fVar2;
      }
      if (local_218.SteepnessRange.NumElements != 0) {
        fVar2 = *(float *)(pdVar23 + 0x18);
        pfVar19 = TPCGValueRange<float,TStridedView<float,int>_>::operator[]
                            (&local_218.SteepnessRange,iVar16);
        *pfVar19 = fVar2;
      }
      if (local_218.BoundsMinRange.NumElements != 0) {
        dVar5 = pdVar23[0xd];
        dVar6 = pdVar23[0xe];
        dVar3 = pdVar23[0xf];
        pTVar20 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_218.BoundsMinRange,iVar16);
        (pTVar20->field0_0x0)._s_0.X = dVar5;
        (pTVar20->field0_0x0)._s_0.Y = dVar6;
        (pTVar20->field0_0x0)._s_0.Z = dVar3;
      }
      if (local_218.BoundsMaxRange.NumElements != 0) {
        dVar5 = pdVar23[0x10];
        dVar6 = pdVar23[0x11];
        dVar3 = pdVar23[0x12];
        pTVar20 = TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
                  ::operator[](&local_218.BoundsMaxRange,iVar16);
        (pTVar20->field0_0x0)._s_0.X = dVar5;
        (pTVar20->field0_0x0)._s_0.Y = dVar6;
        (pTVar20->field0_0x0)._s_0.Z = dVar3;
      }
      if (local_218.ColorRange.NumElements != 0) {
        dVar3 = pdVar23[0x14];
        dVar5 = pdVar23[0x15];
        dVar6 = pdVar23[0x16];
        dVar7 = pdVar23[0x17];
        pTVar21 = TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                  ::operator[](&local_218.ColorRange,iVar16);
        (pTVar21->field0_0x0)._s_0.X = dVar3;
        (pTVar21->field0_0x0)._s_0.Y = dVar5;
        (pTVar21->field0_0x0)._s_0.Z = dVar6;
        (pTVar21->field0_0x0)._s_0.W = dVar7;
      }
      if (local_218.SeedRange.NumElements != 0) {
        iVar17 = *(int *)((longlong)pdVar23 + 0xc4);
        piVar22 = TPCGValueRange<int,TStridedView<int,int>_>::operator[]
                            (&local_218.SeedRange,iVar16);
        *piVar22 = iVar17;
      }
      if (local_218.MetadataEntryRange.NumElements == 0) {
        return;
      }
      dVar3 = pdVar23[0x19];
      pdVar23 = (double *)
                TPCGValueRange<__int64,TStridedView<__int64,int>_>::operator[]
                          (&local_218.MetadataEntryRange,iVar16);
      *pdVar23 = dVar3;
      return;
    }
    if (1 < (byte)LogPCG._0_1_) {
      (**(code **)(*(longlong *)*plVar24 + 0x488))();
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
  }
  return;
}

// execSetSeed @ 149851eb0

void __cdecl UPCGBasePointData::execSetSeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x570))(param_1,local_res8[0]);
  return;
}

// execSetSeedValuesOnRange @ 149851f40

void __cdecl
UPCGBasePointData::execSetSeedValuesOnRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UPCGBasePointData>_u_0 *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  TObjectPtr<UPCGBasePointData>_u_0 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0xffffffff;
  local_18.DebugPtr = (UPCGBasePointData *)0x0;
  local_c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar3 = &local_18;
  if ((TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::SetOutputRangeValues<64>((FPCGPointOutputRange *)&pTVar3->ObjectPtr,pTVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetSteepness @ 149852050

void __cdecl UPCGBasePointData::execSetSteepness(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x568))(param_1,local_res8[0]);
  return;
}

// execSetSteepnessValuesOnRange @ 1498520e0

void __cdecl
UPCGBasePointData::execSetSteepnessValuesOnRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UPCGBasePointData>_u_0 *pTVar3;
  TArray<float,TSizedDefaultAllocator<32>_> local_28;
  TObjectPtr<UPCGBasePointData>_u_0 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0xffffffff;
  local_18.DebugPtr = (UPCGBasePointData *)0x0;
  local_c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar3 = &local_18;
  if ((TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::SetOutputRangeValues<32>((FPCGPointOutputRange *)&pTVar3->ObjectPtr,pTVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetTransform @ 1498521f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UPCGBasePointData::execSetTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double *pdVar14;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_78 = (double)fVar2;
  dStack_70 = (double)fVar5;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68 = (double)fVar8;
  dStack_60 = (double)fVar11;
  local_48 = (double)fVar9;
  dStack_40 = (double)fVar12;
  local_58._8_4_ = SUB84((double)fVar6,0);
  local_58._0_8_ = (double)fVar3;
  local_58._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_28 = (double)fVar10;
  dStack_20 = (double)fVar13;
  local_38._8_4_ = SUB84((double)fVar7,0);
  local_38._0_8_ = (double)fVar4;
  local_38._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pdVar14 = &local_78;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar14 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x540))(param_1,pdVar14);
  return;
}

// execSetTransformValuesOnRange @ 149852300

void __cdecl
UPCGBasePointData::execSetTransformValuesOnRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<UPCGBasePointData>_u_0 *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_28;
  TObjectPtr<UPCGBasePointData>_u_0 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0xffffffff;
  local_18.DebugPtr = (UPCGBasePointData *)0x0;
  local_c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pTVar3 = &local_18;
  if ((TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress !=
      (TObjectPtr<UPCGBasePointData>_u_0 *)0x0) {
    pTVar3 = (TObjectPtr<UPCGBasePointData>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar2 = &local_28;
  if ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  PCGBasePointData::SetOutputRangeValues<1>((FPCGPointOutputRange *)&pTVar3->ObjectPtr,pTVar2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// NeedToAllocateSingleValueProperty<1> @ 149887cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UPCGBasePointData::NeedToAllocateSingleValueProperty<1>
          (TArray<UPCGBasePointData_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  bool bVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 *local_118;
  uint local_10c;
  uint uStack_108;
  ulonglong local_98;
  
  uVar17 = _UNK_15061cc8c;
  uVar16 = _UNK_15061cc88;
  uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar13 = __real_3e45798ee2308c3a;
  local_98 = __security_cookie.value ^ (ulonglong)auStack_248;
  iVar20 = param_1->ArrayNum;
  bVar12 = false;
  uVar24 = 0;
  local_1b8 = 0;
  if (0 < iVar20) {
    lVar25 = 0;
    uVar55 = local_208;
    uVar56 = uStack_204;
    uVar57 = uStack_200;
    uVar58 = uStack_1fc;
    uVar59 = local_218;
    uVar60 = uStack_214;
    uVar61 = uStack_210;
    uVar62 = uStack_20c;
    do {
      uVar21 = 0;
      if ((int)uVar24 < iVar20) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if (uVar21 == 0) {
        local_220 = (longlong)iVar20;
        local_228 = (longlong)(int)uVar24;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar2 = (code *)swi(3);
          uVar19 = (*pcVar2)();
          return (bool)uVar19;
        }
      }
      plVar1 = *(longlong **)((param_1->AllocatorInstance).Data + lVar25);
      (**(code **)(*plVar1 + 0x500))(plVar1,&local_118);
      uVar21 = local_10c;
      if ((int)uStack_108 < (int)local_10c) {
        uVar21 = uStack_108;
      }
      if ((uVar21 == 1) && (0 < (int)uStack_108)) {
        uVar21 = (uint)CONCAT71((int7)((ulonglong)local_118 >> 8),1);
        uVar27 = local_118[0xc];
        uVar28 = local_118[0xd];
        uVar29 = local_118[0xe];
        uVar30 = local_118[0xf];
        uVar35 = local_118[8];
        uVar36 = local_118[9];
        uVar37 = local_118[10];
        uVar38 = local_118[0xb];
        uVar39 = *local_118;
        uVar40 = local_118[1];
        uVar41 = local_118[2];
        uVar42 = local_118[3];
        uVar43 = local_118[4];
        uVar44 = local_118[5];
        uVar45 = local_118[6];
        uVar46 = local_118[7];
        uVar47 = local_118[0x10];
        uVar48 = local_118[0x11];
        uVar49 = local_118[0x12];
        uVar50 = local_118[0x13];
        uVar51 = local_118[0x14];
        uVar52 = local_118[0x15];
        uVar53 = local_118[0x16];
        uVar54 = local_118[0x17];
      }
      else {
        uVar21 = uVar21 & 0xffffff00;
        uVar27 = local_158;
        uVar28 = uStack_154;
        uVar29 = uStack_150;
        uVar30 = uStack_14c;
        uVar35 = local_168;
        uVar36 = uStack_164;
        uVar37 = uStack_160;
        uVar38 = uStack_15c;
        uVar39 = local_188;
        uVar40 = uStack_184;
        uVar41 = uStack_180;
        uVar42 = uStack_17c;
        uVar43 = local_178;
        uVar44 = uStack_174;
        uVar45 = uStack_170;
        uVar46 = uStack_16c;
        uVar47 = local_148;
        uVar48 = uStack_144;
        uVar49 = uStack_140;
        uVar50 = uStack_13c;
        uVar51 = local_138;
        uVar52 = uStack_134;
        uVar53 = uStack_130;
        uVar54 = uStack_12c;
      }
      if (bVar12) {
        if ((char)uVar21 != '\0') {
          dVar31 = (double)CONCAT44(uStack_1e4,local_1e8) - (double)CONCAT44(uVar28,uVar27);
          dVar33 = (double)CONCAT44(uStack_1dc,uStack_1e0) - (double)CONCAT44(uVar30,uVar29);
          local_1a8 = dVar13;
          lVar26 = -(ulonglong)
                    (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar17,
                                               SUB84(dVar33,0) & uVar16));
          dVar33 = (double)CONCAT44(uStack_1f4,local_1f8) - (double)CONCAT44(uVar36,uVar35);
          dVar34 = (double)CONCAT44(uStack_1ec,uStack_1f0) - (double)CONCAT44(uVar38,uVar37);
          auVar3._8_4_ = (int)lVar26;
          auVar3._0_8_ = -(ulonglong)
                          (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar15,
                                                     SUB84(dVar31,0) & uVar14));
          auVar3._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
          uVar22 = movmskpd(uStack_108,auVar3);
          lVar26 = -(ulonglong)
                    (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar17,
                                               SUB84(dVar34,0) & uVar16));
          auVar8._8_4_ = (int)lVar26;
          auVar8._0_8_ = -(ulonglong)
                          (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar15,
                                                     SUB84(dVar33,0) & uVar14));
          auVar8._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
          iVar20 = movmskpd(uVar21,auVar8);
          if ((uVar22 & 0x3fffffff) != 0 || iVar20 != 0) {
            return true;
          }
          local_1a0 = dVar13;
          dVar31 = (double)CONCAT44(uVar56,uVar55) - (double)CONCAT44(uVar44,uVar43);
          dVar33 = (double)CONCAT44(uVar58,uVar57) - (double)CONCAT44(uVar46,uVar45);
          lVar26 = -(ulonglong)
                    (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar17,
                                               SUB84(dVar33,0) & uVar16));
          auVar4._8_4_ = (int)lVar26;
          auVar4._0_8_ = -(ulonglong)
                          (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar15,
                                                     SUB84(dVar31,0) & uVar14));
          auVar4._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
          iVar23 = movmskpd(0,auVar4);
          dVar32 = (double)CONCAT44(uVar60,uVar59) - (double)CONCAT44(uVar40,uVar39);
          dVar31 = (double)CONCAT44(uVar62,uVar61) - (double)CONCAT44(uVar42,uVar41);
          lVar26 = -(ulonglong)
                    (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar17,
                                               SUB84(dVar31,0) & uVar16));
          dVar31 = (double)CONCAT44(uVar60,uVar59) + (double)CONCAT44(uVar40,uVar39);
          dVar33 = (double)CONCAT44(uVar62,uVar61) + (double)CONCAT44(uVar42,uVar41);
          dVar34 = (double)CONCAT44(uVar56,uVar55) + (double)CONCAT44(uVar44,uVar43);
          dVar11 = (double)CONCAT44(uVar58,uVar57) + (double)CONCAT44(uVar46,uVar45);
          auVar5._8_4_ = (int)lVar26;
          auVar5._0_8_ = -(ulonglong)
                          (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar15,
                                                     SUB84(dVar32,0) & uVar14));
          auVar5._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
          uVar21 = movmskpd(iVar20,auVar5);
          uVar22 = iVar23 << 2 | uVar21;
          if (uVar22 != 0) {
            lVar26 = -(ulonglong)
                      (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) & uVar17,
                                                 SUB84(dVar11,0) & uVar16));
            auVar6._8_4_ = (int)lVar26;
            auVar6._0_8_ = -(ulonglong)
                            (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar15,
                                                       SUB84(dVar34,0) & uVar14));
            auVar6._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
            uVar22 = movmskpd(uVar22,auVar6);
            lVar26 = -(ulonglong)
                      (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar17,
                                                 SUB84(dVar33,0) & uVar16));
            auVar9._8_4_ = (int)lVar26;
            auVar9._0_8_ = -(ulonglong)
                            (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar15,
                                                       SUB84(dVar31,0) & uVar14));
            auVar9._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
            uVar21 = movmskpd(uVar21,auVar9);
            if ((uVar22 & 0x3fffffff) != 0 || uVar21 != 0) {
              return true;
            }
          }
          dVar31 = (double)CONCAT44(uStack_1c4,local_1c8) - (double)CONCAT44(uVar52,uVar51);
          dVar33 = (double)CONCAT44(uStack_1bc,uStack_1c0) - (double)CONCAT44(uVar54,uVar53);
          local_198 = dVar13;
          lVar26 = -(ulonglong)
                    (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar17,
                                               SUB84(dVar33,0) & uVar16));
          dVar33 = (double)CONCAT44(uStack_1d4,local_1d8) - (double)CONCAT44(uVar48,uVar47);
          dVar34 = (double)CONCAT44(uStack_1cc,uStack_1d0) - (double)CONCAT44(uVar50,uVar49);
          auVar7._8_4_ = (int)lVar26;
          auVar7._0_8_ = -(ulonglong)
                          (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar15,
                                                     SUB84(dVar31,0) & uVar14));
          auVar7._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
          uVar22 = movmskpd(0,auVar7);
          lVar26 = -(ulonglong)
                    (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar17,
                                               SUB84(dVar34,0) & uVar16));
          auVar10._8_4_ = (int)lVar26;
          auVar10._0_8_ =
               -(ulonglong)
                (dVar13 < (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar15,
                                           SUB84(dVar33,0) & uVar14));
          auVar10._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
          iVar20 = movmskpd(uVar21,auVar10);
          if ((uVar22 & 0x3fffffff) != 0 || iVar20 != 0) {
            return true;
          }
        }
      }
      else if ((char)uVar21 != '\0') {
        bVar12 = true;
        local_1b8 = 1;
        uVar55 = uVar43;
        uVar56 = uVar44;
        uVar57 = uVar45;
        uVar58 = uVar46;
        uVar59 = uVar39;
        uVar60 = uVar40;
        uVar61 = uVar41;
        uVar62 = uVar42;
        local_218 = uVar39;
        uStack_214 = uVar40;
        uStack_210 = uVar41;
        uStack_20c = uVar42;
        local_208 = uVar43;
        uStack_204 = uVar44;
        uStack_200 = uVar45;
        uStack_1fc = uVar46;
        local_1f8 = uVar35;
        uStack_1f4 = uVar36;
        uStack_1f0 = uVar37;
        uStack_1ec = uVar38;
        local_1e8 = uVar27;
        uStack_1e4 = uVar28;
        uStack_1e0 = uVar29;
        uStack_1dc = uVar30;
        local_1d8 = uVar47;
        uStack_1d4 = uVar48;
        uStack_1d0 = uVar49;
        uStack_1cc = uVar50;
        local_1c8 = uVar51;
        uStack_1c4 = uVar52;
        uStack_1c0 = uVar53;
        uStack_1bc = uVar54;
      }
      iVar20 = param_1->ArrayNum;
      uVar24 = uVar24 + 1;
      lVar25 = lVar25 + 8;
    } while ((int)uVar24 < iVar20);
  }
  return false;
}

// GetPropertiesToAllocateFromPointData @ 1498bd6d0

EPCGPointNativeProperties __cdecl
UPCGBasePointData::GetPropertiesToAllocateFromPointData
          (TArray<UPCGBasePointData_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  EPCGPointNativeProperties EVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  EPCGPointNativeProperties EVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float local_res8;
  undefined4 uStackX_c;
  undefined1 local_298 [16];
  double local_288;
  undefined1 local_278 [16];
  double local_268;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  float *local_228;
  int local_21c;
  int iStack_218;
  float *local_210;
  int local_204;
  int iStack_200;
  float *local_1f8;
  int local_1ec;
  int iStack_1e8;
  longlong *local_1e0;
  int local_1d4;
  int iStack_1d0;
  undefined1 local_1c0 [16];
  double local_1b0;
  undefined1 local_1a0 [16];
  double local_190;
  undefined1 (*local_180) [16];
  int local_174;
  int iStack_170;
  undefined1 (*local_150) [16];
  int local_144;
  int iStack_140;
  undefined1 (*local_118) [16];
  int local_10c;
  int iStack_108;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  
  pFVar16 = (param_1->AllocatorInstance).Data;
  iVar10 = param_1->ArrayNum;
  EVar17 = None;
  pFVar1 = pFVar16 + (longlong)iVar10 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar10) {
      local_res8 = (float)((uint)local_res8 & 0xffffff00);
      `TCheckedPointerIterator<UPCGBasePointData_const_*_const,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_res8);
    }
    if (pFVar16 == pFVar1) break;
    EVar7 = (**(code **)(**(longlong **)pFVar16 + 0x640))(*(longlong **)pFVar16,1);
    EVar17 = EVar17 | EVar7;
    pFVar16 = pFVar16 + 8;
  }
  if (((EVar17 & Transform) == None) &&
     (bVar5 = NeedToAllocateSingleValueProperty<1>(param_1), bVar5)) {
    EVar17 = EVar17 | Transform;
  }
  uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar18 = __real_322bcc77;
  if ((EVar17 & Density) == None) {
    iVar10 = param_1->ArrayNum;
    bVar5 = false;
    uVar13 = 0;
    if (0 < iVar10) {
      lVar11 = 0;
      fVar20 = local_res8;
      do {
        uVar8 = 0;
        if ((int)uVar13 < iVar10) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          EVar17 = (*pcVar3)();
          return EVar17;
        }
        plVar2 = *(longlong **)((param_1->AllocatorInstance).Data + lVar11);
        (**(code **)(*plVar2 + 0x508))(plVar2,&local_228);
        iVar10 = local_21c;
        if (iStack_218 < local_21c) {
          iVar10 = iStack_218;
        }
        if ((iVar10 == 1) && (0 < iStack_218)) {
          if (bVar5) {
            if (fVar18 < (float)((uint)(fVar20 - *local_228) & uVar15)) {
              EVar17 = EVar17 | Density;
              break;
            }
          }
          else {
            bVar5 = true;
            fVar20 = *local_228;
          }
        }
        iVar10 = param_1->ArrayNum;
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar13 < iVar10);
    }
  }
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar4 = __real_3e45798ee2308c3a;
  if ((EVar17 & BoundsMin) == None) {
    iVar10 = param_1->ArrayNum;
    bVar5 = false;
    uVar14 = 0;
    if (0 < iVar10) {
      uVar21 = local_298._8_4_;
      uVar22 = local_298._12_4_;
      lVar11 = 0;
      uVar23 = local_298._0_4_;
      uVar24 = local_298._4_4_;
      do {
        uVar9 = 0;
        if ((int)uVar14 < iVar10) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          EVar17 = (*pcVar3)();
          return EVar17;
        }
        plVar2 = *(longlong **)((param_1->AllocatorInstance).Data + lVar11);
        (**(code **)(*plVar2 + 0x510))(plVar2,&local_180);
        iVar10 = local_174;
        if (iStack_170 < local_174) {
          iVar10 = iStack_170;
        }
        if ((iVar10 == 1) && (0 < iStack_170)) {
          local_1b0 = *(double *)local_180[1];
          local_1c0 = *local_180;
          if (bVar5) {
            dVar19 = (double)CONCAT44(uVar24,uVar23) - local_1c0._0_8_;
            if (((dVar4 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar8,
                                           SUB84(dVar19,0) & uVar13)) ||
                (dVar19 = (double)CONCAT44(uVar22,uVar21) - local_1c0._8_8_,
                dVar4 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar8,
                                         SUB84(dVar19,0) & uVar13))) ||
               (dVar4 < (double)CONCAT44((uint)((ulonglong)(local_288 - local_1b0) >> 0x20) & uVar8,
                                         SUB84(local_288 - local_1b0,0) & uVar13))) {
              EVar17 = EVar17 | BoundsMin;
              break;
            }
          }
          else {
            bVar5 = true;
            uVar21 = local_1c0._8_4_;
            uVar22 = local_1c0._12_4_;
            uVar23 = local_1c0._0_4_;
            uVar24 = local_1c0._4_4_;
            local_288 = local_1b0;
          }
        }
        iVar10 = param_1->ArrayNum;
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar14 < iVar10);
    }
  }
  if ((EVar17 & BoundsMax) == None) {
    iVar10 = param_1->ArrayNum;
    bVar5 = false;
    uVar14 = 0;
    if (0 < iVar10) {
      uVar21 = local_278._8_4_;
      uVar22 = local_278._12_4_;
      lVar11 = 0;
      uVar23 = local_278._0_4_;
      uVar24 = local_278._4_4_;
      do {
        uVar9 = 0;
        if ((int)uVar14 < iVar10) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          EVar17 = (*pcVar3)();
          return EVar17;
        }
        plVar2 = *(longlong **)((param_1->AllocatorInstance).Data + lVar11);
        (**(code **)(*plVar2 + 0x518))(plVar2,&local_150);
        iVar10 = local_144;
        if (iStack_140 < local_144) {
          iVar10 = iStack_140;
        }
        if ((iVar10 == 1) && (0 < iStack_140)) {
          local_190 = *(double *)local_150[1];
          local_1a0 = *local_150;
          if (bVar5) {
            dVar19 = (double)CONCAT44(uVar24,uVar23) - local_1a0._0_8_;
            if (((dVar4 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar8,
                                           SUB84(dVar19,0) & uVar13)) ||
                (dVar19 = (double)CONCAT44(uVar22,uVar21) - local_1a0._8_8_,
                dVar4 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar8,
                                         SUB84(dVar19,0) & uVar13))) ||
               (dVar4 < (double)CONCAT44((uint)((ulonglong)(local_268 - local_190) >> 0x20) & uVar8,
                                         SUB84(local_268 - local_190,0) & uVar13))) {
              EVar17 = EVar17 | BoundsMax;
              break;
            }
          }
          else {
            bVar5 = true;
            uVar21 = local_1a0._8_4_;
            uVar22 = local_1a0._12_4_;
            uVar23 = local_1a0._0_4_;
            uVar24 = local_1a0._4_4_;
            local_268 = local_190;
          }
        }
        iVar10 = param_1->ArrayNum;
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar14 < iVar10);
    }
  }
  if ((EVar17 & Color) == None) {
    iVar10 = param_1->ArrayNum;
    bVar5 = false;
    uVar14 = 0;
    if (0 < iVar10) {
      uVar21 = local_248._8_4_;
      uVar22 = local_248._12_4_;
      lVar11 = 0;
      uVar23 = local_258._8_4_;
      uVar24 = local_258._12_4_;
      uVar25 = local_248._0_4_;
      uVar26 = local_248._4_4_;
      uVar27 = local_258._0_4_;
      uVar28 = local_258._4_4_;
      do {
        uVar9 = 0;
        if ((int)uVar14 < iVar10) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          EVar17 = (*pcVar3)();
          return EVar17;
        }
        plVar2 = *(longlong **)((param_1->AllocatorInstance).Data + lVar11);
        (**(code **)(*plVar2 + 0x520))(plVar2,&local_118);
        iVar10 = local_10c;
        if (iStack_108 < local_10c) {
          iVar10 = iStack_108;
        }
        if ((iVar10 == 1) && (0 < iStack_108)) {
          local_d8 = *local_118;
          local_c8 = local_118[1];
          if (bVar5) {
            dVar19 = (double)CONCAT44(uVar28,uVar27) - local_d8._0_8_;
            if ((((dVar4 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar8,
                                            SUB84(dVar19,0) & uVar13)) ||
                 (dVar19 = (double)CONCAT44(uVar24,uVar23) - local_d8._8_8_,
                 dVar4 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar8,
                                          SUB84(dVar19,0) & uVar13))) ||
                (dVar19 = (double)CONCAT44(uVar26,uVar25) - local_c8._0_8_,
                dVar4 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar8,
                                         SUB84(dVar19,0) & uVar13))) ||
               (dVar19 = (double)CONCAT44(uVar22,uVar21) - local_c8._8_8_,
               dVar4 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar8,
                                        SUB84(dVar19,0) & uVar13))) {
              EVar17 = EVar17 | Color;
              break;
            }
          }
          else {
            bVar5 = true;
            uVar21 = local_c8._8_4_;
            uVar22 = local_c8._12_4_;
            uVar23 = local_d8._8_4_;
            uVar24 = local_d8._12_4_;
            uVar25 = local_c8._0_4_;
            uVar26 = local_c8._4_4_;
            uVar27 = local_d8._0_4_;
            uVar28 = local_d8._4_4_;
          }
        }
        iVar10 = param_1->ArrayNum;
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar14 < iVar10);
    }
  }
  if ((EVar17 & Steepness) == None) {
    iVar10 = param_1->ArrayNum;
    bVar5 = false;
    uVar13 = 0;
    if (0 < iVar10) {
      lVar11 = 0;
      fVar20 = local_res8;
      do {
        uVar8 = 0;
        if ((int)uVar13 < iVar10) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          EVar17 = (*pcVar3)();
          return EVar17;
        }
        plVar2 = *(longlong **)((param_1->AllocatorInstance).Data + lVar11);
        (**(code **)(*plVar2 + 0x528))(plVar2,&local_210);
        iVar10 = local_204;
        if (iStack_200 < local_204) {
          iVar10 = iStack_200;
        }
        if ((iVar10 == 1) && (0 < iStack_200)) {
          if (bVar5) {
            if (fVar18 < (float)((uint)(fVar20 - *local_210) & uVar15)) {
              EVar17 = EVar17 | Steepness;
              break;
            }
          }
          else {
            bVar5 = true;
            fVar20 = *local_210;
          }
        }
        iVar10 = param_1->ArrayNum;
        uVar13 = uVar13 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar13 < iVar10);
    }
  }
  if ((EVar17 & Seed) == None) {
    iVar10 = param_1->ArrayNum;
    bVar5 = false;
    uVar15 = 0;
    if (0 < iVar10) {
      lVar11 = 0;
      fVar18 = local_res8;
      do {
        uVar13 = 0;
        if ((int)uVar15 < iVar10) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          EVar17 = (*pcVar3)();
          return EVar17;
        }
        plVar2 = *(longlong **)((param_1->AllocatorInstance).Data + lVar11);
        (**(code **)(*plVar2 + 0x530))(plVar2,&local_1f8);
        iVar10 = local_1ec;
        if (iStack_1e8 < local_1ec) {
          iVar10 = iStack_1e8;
        }
        if ((iVar10 == 1) && (0 < iStack_1e8)) {
          if (bVar5) {
            if (fVar18 != *local_1f8) {
              EVar17 = EVar17 | Seed;
              break;
            }
          }
          else {
            bVar5 = true;
            fVar18 = *local_1f8;
          }
        }
        iVar10 = param_1->ArrayNum;
        uVar15 = uVar15 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar15 < iVar10);
    }
  }
  if (-1 < (char)EVar17) {
    iVar10 = param_1->ArrayNum;
    bVar5 = false;
    uVar15 = 0;
    if (0 < iVar10) {
      lVar11 = CONCAT44(uStackX_c,local_res8);
      lVar12 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar15 < iVar10) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          EVar17 = (*pcVar3)();
          return EVar17;
        }
        plVar2 = *(longlong **)((param_1->AllocatorInstance).Data + lVar12);
        (**(code **)(*plVar2 + 0x538))(plVar2,&local_1e0);
        iVar10 = local_1d4;
        if (iStack_1d0 < local_1d4) {
          iVar10 = iStack_1d0;
        }
        if ((iVar10 == 1) && (0 < iStack_1d0)) {
          if (bVar5) {
            if (lVar11 != *local_1e0) {
              return EVar17 | MetadataEntry;
            }
          }
          else {
            bVar5 = true;
            lVar11 = *local_1e0;
          }
        }
        iVar10 = param_1->ArrayNum;
        uVar15 = uVar15 + 1;
        lVar12 = lVar12 + 8;
      } while ((int)uVar15 < iVar10);
    }
  }
  return EVar17;
}

