// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 12

// StaticStruct @ 14a2c4f30

UScriptStruct * __cdecl FRigSocketElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigSocketElement,(UObject *)pUVar1,
                         L"RigSocketElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton;
}

// ~FRigSocketElement @ 14a2dedd0

void __thiscall FRigSocketElement::~FRigSocketElement(FRigSocketElement *this)

{
  *(undefined ***)this = &___7FRigSingleParentElement__6B_;
  FRigTransformElement::~FRigTransformElement((FRigTransformElement *)this);
  return;
}

// CopyFrom @ 14a2f92a0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigSocketElement::CopyFrom(FRigSocketElement *this,FRigBaseElement *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRigBaseElement *this_00;
  
  FRigTransformElement::CopyFrom((FRigTransformElement *)this,param_1);
  if (param_1 == (FRigBaseElement *)0x0) {
LAB_14a2f91a6:
    param_1 = (FRigBaseElement *)0x0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Element",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                       ,0x3f1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    bVar2 = FRigBaseElement::IsA<FRigSingleParentElement>(param_1);
    if (!bVar2) goto LAB_14a2f91a6;
  }
  if (param_1[3]._padding_ == 0) {
    *(undefined8 *)&this->field_0x120 = 0;
    return;
  }
  this_00 = URigHierarchy::Get(*(URigHierarchy **)&this->field_0x8,
                               *(int *)(param_1[3]._padding_ + 0x1c));
  if (this_00 != (FRigBaseElement *)0x0) {
    bVar2 = FRigBaseElement::IsA<FRigTransformElement>(this_00);
    if (bVar2) goto LAB_14a2f922b;
  }
  this_00 = (FRigBaseElement *)0x0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Element",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                     ,0x3f9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14a2f922b:
  *(FRigBaseElement **)&this->field_0x120 = this_00;
  if (((this_00->Key).Name != *(FName *)(param_1[3]._padding_ + 0x14)) ||
     ((this_00->Key).Type != *(ERigElementType *)(param_1[3]._padding_ + 0x10))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentElement->GetKey() == Source->ParentElement->GetKey()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyElements.cpp"
                       ,0x48b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// GetColor @ 14a30a650

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FLinearColor * __thiscall
FRigSocketElement::GetColor
          (FRigSocketElement *this,FLinearColor *__return_storage_ptr__,URigHierarchy *param_1)

{
  FRigElementKey local_28;
  FLinearColor_u_0 local_18;
  
  local_28.Name.Number = *(uint *)&this->field_0x18;
  local_28.Type = this->field_0x10;
  local_28._1_3_ = *(undefined3 *)&this->field_0x11;
  local_28.Name.ComparisonIndex.Value = *(uint *)&this->field_0x14;
  local_18 = SocketDefaultColor.field0_0x0;
  URigHierarchy::GetLinearColorMetadata
            (param_1,__return_storage_ptr__,&local_28,ColorMetaName,(FLinearColor *)&local_18._s_0);
  return __return_storage_ptr__;
}

// GetDescription @ 14a30e160

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FString * __thiscall
FRigSocketElement::GetDescription
          (FRigSocketElement *this,FString *__return_storage_ptr__,URigHierarchy *param_1)

{
  FName local_res8;
  undefined8 local_18;
  undefined4 local_10;
  
  local_10 = *(undefined4 *)&this->field_0x18;
  local_18 = *(undefined8 *)&this->field_0x10;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  URigHierarchy::GetNameMetadata
            (param_1,(FRigElementKey *)&local_res8,(FName)&local_18,DescriptionMetaName);
  if (local_res8 == (FName)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetElementTypeIndex @ 14a30ed90

int __thiscall FRigSocketElement::GetElementTypeIndex(FRigSocketElement *this)

{
  return 10;
}

// GetScriptStruct @ 14a317f80

UScriptStruct * __thiscall FRigSocketElement::GetScriptStruct(FRigSocketElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigSocketElement,(UObject *)pUVar1,
                         L"RigSocketElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigSocketElement.OuterSingleton;
}

// GetSocketState @ 14a318e40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigSocketState * __thiscall
FRigSocketElement::GetSocketState
          (FRigSocketElement *this,FRigSocketState *__return_storage_ptr__,URigHierarchy *param_1)

{
  FString *pFVar1;
  ulonglong uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  FRigSocketState *pFVar10;
  FRigBaseElement *pFVar11;
  FMetadataStorage *this_00;
  FRigBaseMetadata **ppFVar12;
  ulonglong *puVar13;
  FRigBaseMetadata *pFVar14;
  FLinearColor_u_0 *pFVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FRigBaseElement *pFVar18;
  uint uVar19;
  undefined4 uVar20;
  FString local_138;
  ulonglong local_128;
  uint local_120;
  FRigElementKey local_118;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  FName local_104;
  FRigElementKey local_f8;
  ulonglong local_e8;
  undefined4 local_e0;
  FRigElementKey local_d8;
  FRigElementKey local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  FLinearColor_u_0 local_a8;
  TTransform<double> local_98;
  
  pFVar1 = &__return_storage_ptr__->Description;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  (__return_storage_ptr__->Parent).Type = None;
  (__return_storage_ptr__->Parent).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->Parent).Name.Number = 0;
  *&(__return_storage_ptr__->InitialLocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_118.Name.Number = local_118.Name.Number & 0xffffff00;
  *&(__return_storage_ptr__->InitialLocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  uStack_10c = 0;
  uStack_108 = 0;
  *&(__return_storage_ptr__->InitialLocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_e0 = 0;
  *&(__return_storage_ptr__->InitialLocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->InitialLocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->InitialLocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (__return_storage_ptr__->Color).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)SocketDefaultColor.field0_0x0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8 = (ulonglong)local_118.Name.Number;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  uVar20 = *(undefined4 *)&this->field_0x18;
  (__return_storage_ptr__->Name).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->field_0x14;
  FVar7 = DesiredParentMetaName;
  (__return_storage_ptr__->Name).Number = uVar20;
  local_f8.Name.Number = *(uint *)&this->field_0x18;
  FVar16 = DesiredParentMetaName.ComparisonIndex.Value;
  local_f8.Type = this->field_0x10;
  local_f8._1_3_ = *(undefined3 *)&this->field_0x11;
  local_f8.Name.ComparisonIndex.Value = *(uint *)&this->field_0x14;
  if ((FVar16.Value == 0xffffffff) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRigSocketState *)(*pcVar5)();
    return pFVar10;
  }
  iVar9 = URigHierarchy::GetIndex(param_1,&local_f8,true);
  pFVar11 = URigHierarchy::Get(param_1,iVar9);
  if (pFVar11 == (FRigBaseElement *)0x0) {
LAB_14a319006:
    puVar13 = &local_e8;
  }
  else {
    iVar9 = pFVar11->MetadataStorageIndex;
    FVar17 = FRigName::EmptyName;
    if (FVar16.Value != 0xffffffff) {
      FVar17 = FVar7;
    }
    if ((iVar9 < 0) || ((param_1->ElementMetadata).Storage.ArrayNum <= iVar9)) goto LAB_14a319006;
    this_00 = FRigReusableElementStorage<URigHierarchy::FMetadataStorage>::operator[]
                        (&param_1->ElementMetadata,iVar9);
    if ((FVar17 != this_00->LastAccessName) ||
       ((pFVar14 = this_00->LastAccessMetadata, pFVar14 == (FRigBaseMetadata *)0x0 ||
        (pFVar14->Type != RigElementKey)))) {
      ppFVar12 = TMapBase<FName,FRigBaseMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>_>
                 ::Find((TMapBase<FName,FRigBaseMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>_>
                         *)this_00,FVar17);
      if (ppFVar12 == (FRigBaseMetadata **)0x0) {
        (this_00->LastAccessName).ComparisonIndex = 0;
        (this_00->LastAccessName).Number = 0;
        this_00->LastAccessMetadata = (FRigBaseMetadata *)0x0;
      }
      else if ((*ppFVar12)->Type == RigElementKey) {
        this_00->LastAccessName = FVar17;
        this_00->LastAccessMetadata = *ppFVar12;
        pFVar14 = *ppFVar12;
        if (pFVar14 != (FRigBaseMetadata *)0x0) goto LAB_14a318ff9;
      }
      else {
        (this_00->LastAccessName).ComparisonIndex = 0;
        (this_00->LastAccessName).Number = 0;
        this_00->LastAccessMetadata = (FRigBaseMetadata *)0x0;
      }
      goto LAB_14a319006;
    }
LAB_14a318ff9:
    puVar13 = FRigBaseMetadata::GetValueData(pFVar14);
  }
  uVar2 = *puVar13;
  (__return_storage_ptr__->Parent).Type = (char)uVar2;
  *(int3 *)&(__return_storage_ptr__->Parent).field_0x1 = (int3)(uVar2 >> 8);
  (__return_storage_ptr__->Parent).Name.ComparisonIndex = (FNameEntryId)(int)(uVar2 >> 0x20);
  (__return_storage_ptr__->Parent).Name.Number = (uint)puVar13[1];
  bVar8 = ::FName::IsWithinBounds
                    ((FNameEntryId)(__return_storage_ptr__->Parent).Name.ComparisonIndex.Value);
  if (((!bVar8) || ((__return_storage_ptr__->Parent).Name == (FName)0x0)) ||
     ((__return_storage_ptr__->Parent).Type == None)) {
    local_d8.Type = this->field_0x10;
    local_d8._1_3_ = *(undefined3 *)&this->field_0x11;
    local_d8.Name.ComparisonIndex.Value = *(uint *)&this->field_0x14;
    local_d8.Name.Number = *(uint *)&this->field_0x18;
    iVar9 = URigHierarchy::GetIndex(param_1,&local_d8,true);
    pFVar11 = URigHierarchy::Get(param_1,iVar9);
    if (pFVar11 == (FRigBaseElement *)0x0) {
LAB_14a3190c0:
      uVar19 = (uint)local_128 & 0xffffff00;
      local_120 = 0;
      local_128 = local_128 & 0xffffff00;
      uVar20 = 0;
    }
    else {
      bVar8 = FRigBaseElement::IsA<FRigSingleParentElement>(pFVar11);
      if (bVar8) {
        pFVar18 = pFVar11 + 3;
      }
      else {
        bVar8 = FRigBaseElement::IsA<FRigMultiParentElement>(pFVar11);
        if ((!bVar8) || (*(int *)&pFVar11[4].CachedNameString.Data.AllocatorInstance.Data < 1))
        goto LAB_14a3190c0;
        pFVar18 = (FRigBaseElement *)pFVar11[4].ComponentIndices.AllocatorInstance.Data;
        if (pFVar18 == (FRigBaseElement *)0x0) {
          pFVar18 = pFVar11 + 3;
        }
      }
      lVar3 = pFVar18->_padding_;
      if (lVar3 == 0) goto LAB_14a3190c0;
      local_128 = *(ulonglong *)(lVar3 + 0x10);
      uVar19 = (uint)local_128;
      uVar20 = (undefined4)(local_128 >> 0x20);
      local_120 = *(uint *)(lVar3 + 0x18);
    }
    (__return_storage_ptr__->Parent).Type = (char)uVar19;
    *(int3 *)&(__return_storage_ptr__->Parent).field_0x1 = (int3)(uVar19 >> 8);
    (__return_storage_ptr__->Parent).Name.ComparisonIndex = (FNameEntryId)uVar20;
    (__return_storage_ptr__->Parent).Name.Number = local_120;
  }
  URigHierarchy::GetLocalTransformByIndex(param_1,&local_98,*(int *)&this->field_0x1c,true);
  (__return_storage_ptr__->InitialLocalTransform).Rotation.XY.m128d_f64[0] =
       local_98.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->InitialLocalTransform).Rotation.XY.m128d_f64[1] =
       local_98.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->InitialLocalTransform).Rotation.ZW.m128d_f64[0] =
       local_98.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->InitialLocalTransform).Rotation.ZW.m128d_f64[1] =
       local_98.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->InitialLocalTransform).Translation.XY.m128d_f64[0] =
       local_98.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->InitialLocalTransform).Translation.XY.m128d_f64[1] =
       local_98.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->InitialLocalTransform).Translation.ZW.m128d_f64[0] =
       local_98.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->InitialLocalTransform).Translation.ZW.m128d_f64[1] =
       local_98.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->InitialLocalTransform).Scale3D.XY.m128d_f64[0] =
       local_98.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->InitialLocalTransform).Scale3D.XY.m128d_f64[1] =
       local_98.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->InitialLocalTransform).Scale3D.ZW.m128d_f64[0] =
       local_98.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->InitialLocalTransform).Scale3D.ZW.m128d_f64[1] =
       local_98.Scale3D.ZW.m128d_f64[1];
  FVar7 = ColorMetaName;
  local_c8.Type = this->field_0x10;
  local_c8._1_3_ = *(undefined3 *)&this->field_0x11;
  local_c8.Name.ComparisonIndex.Value = *(uint *)&this->field_0x14;
  FVar16 = ColorMetaName.ComparisonIndex.Value;
  local_c8.Name.Number = *(uint *)&this->field_0x18;
  local_a8 = SocketDefaultColor.field0_0x0;
  if ((FVar16.Value == 0xffffffff) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FRigSocketState *)(*pcVar5)();
    return pFVar10;
  }
  iVar9 = URigHierarchy::GetIndex(param_1,&local_c8,true);
  pFVar11 = URigHierarchy::Get(param_1,iVar9);
  if (pFVar11 != (FRigBaseElement *)0x0) {
    local_104 = FRigName::EmptyName;
    if (FVar16.Value != 0xffffffff) {
      local_104 = FVar7;
    }
    pFVar14 = URigHierarchy::FindMetadataForElement(param_1,pFVar11,&local_104,LinearColor);
    if (pFVar14 != (FRigBaseMetadata *)0x0) {
      pFVar15 = FRigBaseMetadata::GetValueData(pFVar14);
      goto LAB_14a3191ca;
    }
  }
  pFVar15 = &local_a8;
LAB_14a3191ca:
  uVar6 = *(undefined8 *)((longlong)pFVar15 + 8);
  *(undefined8 *)&(__return_storage_ptr__->Color).field0_0x0 = *(undefined8 *)pFVar15;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Color).field0_0x0 + 8) = uVar6;
  local_b0 = *(undefined4 *)&this->field_0x18;
  local_b8 = *(undefined8 *)&this->field_0x10;
  URigHierarchy::GetNameMetadata(param_1,&local_118,(FName)&local_b8,DescriptionMetaName);
  if (local_118._0_8_ == 0) {
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    ::FName::ToString((FName *)&local_118,&local_138);
  }
  if (pFVar1 != &local_138) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Description).Data.ArrayNum = local_138.Data.ArrayNum;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Description).Data.ArrayMax = local_138.Data.ArrayMax;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Load @ 14a32d050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigSocketElement::Load
          (FRigSocketElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  URigHierarchy *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRigBaseElement *this_01;
  FRigElementKey FStack_18;
  
  FRigBaseElement::Load((FRigBaseElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    FRigCurrentAndInitialTransform::Load
              ((FRigCurrentAndInitialTransform *)&this->field_0x60,param_1,param_2,
               (FRigCurrentAndInitialDirtyState *)&this->field_0xa0);
  }
  if (param_2->SerializationPhase != InterElementData) {
    return;
  }
  FStack_18.Type = None;
  FStack_18.Name.ComparisonIndex.Value = 0;
  FStack_18.Name.Number = 0;
  ::operator<<(param_1,&FStack_18);
  bVar2 = ::FName::IsWithinBounds(FStack_18.Name.ComparisonIndex);
  if (!bVar2) {
    return;
  }
  if (FStack_18.Name != (FName)0x0) {
    if (FStack_18.Type == None) {
      return;
    }
    this_00 = *(URigHierarchy **)&this->field_0x8;
    iVar3 = URigHierarchy::GetIndex(this_00,&FStack_18,true);
    this_01 = URigHierarchy::Get(this_00,iVar3);
    if ((this_01 == (FRigBaseElement *)0x0) ||
       (bVar2 = FRigBaseElement::IsA<FRigTransformElement>(this_01), !bVar2)) {
      this_01 = (FRigBaseElement *)0x0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Element",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                         ,0x3f9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(FRigBaseElement **)&this->field_0x120 = this_01;
    return;
  }
  return;
}

// Save @ 14a345f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigSocketElement::Save
          (FRigSocketElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  longlong lVar1;
  FRigElementKey FStack_18;
  
  FRigTransformElement::Save((FRigTransformElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == InterElementData) {
    FStack_18._0_4_ = FStack_18._0_4_ & 0xffffff00;
    FStack_18.Name.ComparisonIndex.Value = 0;
    FStack_18.Name.Number = 0;
    lVar1 = *(longlong *)&this->field_0x120;
    if (lVar1 != 0) {
      FStack_18._0_4_ = SUB84(*(undefined8 *)(lVar1 + 0x10),0);
      FStack_18.Name.ComparisonIndex.Value =
           (uint)((ulonglong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
      FStack_18.Name.Number = *(uint *)(lVar1 + 0x18);
    }
    ::operator<<(param_1,&FStack_18);
  }
  return;
}

// SetColor @ 14a34ac50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigSocketElement::SetColor
          (FRigSocketElement *this,FLinearColor *param_1,URigHierarchy *param_2,bool param_3)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  FRigBaseElement *pFVar5;
  FMetadataStorage *this_00;
  FRigBaseMetadata **ppFVar6;
  FRigBaseMetadata *pFVar7;
  FLinearColor_u_0 *pFVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FName local_a8 [2];
  FRigElementKey local_98;
  FRigElementKey local_88;
  FRigNotificationSubject local_78;
  FLinearColor_u_0 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  FVar2 = ColorMetaName;
  local_98.Name.Number = *(uint *)&this->field_0x18;
  local_68 = SocketDefaultColor.field0_0x0;
  local_98.Type = this->field_0x10;
  local_98._1_3_ = *(undefined3 *)&this->field_0x11;
  local_98.Name.ComparisonIndex.Value = *(uint *)&this->field_0x14;
  FVar9 = ColorMetaName.ComparisonIndex.Value;
  if ((FVar9.Value == 0xffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = URigHierarchy::GetIndex(param_2,&local_98,true);
  pFVar5 = URigHierarchy::Get(param_2,iVar4);
  if (pFVar5 != (FRigBaseElement *)0x0) {
    iVar4 = pFVar5->MetadataStorageIndex;
    FVar10 = FRigName::EmptyName;
    if (FVar9.Value != 0xffffffff) {
      FVar10 = FVar2;
    }
    if ((-1 < iVar4) && (iVar4 < (param_2->ElementMetadata).Storage.ArrayNum)) {
      this_00 = FRigReusableElementStorage<URigHierarchy::FMetadataStorage>::operator[]
                          (&param_2->ElementMetadata,iVar4);
      if ((FVar10 == this_00->LastAccessName) &&
         ((pFVar7 = this_00->LastAccessMetadata, pFVar7 != (FRigBaseMetadata *)0x0 &&
          (pFVar7->Type == LinearColor)))) {
LAB_14a34af22:
        pFVar8 = FRigBaseMetadata::GetValueData(pFVar7);
        goto LAB_14a34ad61;
      }
      ppFVar6 = TMapBase<FName,FRigBaseMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>_>
                ::Find((TMapBase<FName,FRigBaseMetadata_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigBaseMetadata_*,0>_>
                        *)this_00,FVar10);
      if ((ppFVar6 == (FRigBaseMetadata **)0x0) || ((*ppFVar6)->Type != LinearColor)) {
        (this_00->LastAccessName).ComparisonIndex = 0;
        (this_00->LastAccessName).Number = 0;
        this_00->LastAccessMetadata = (FRigBaseMetadata *)0x0;
      }
      else {
        this_00->LastAccessName = FVar10;
        this_00->LastAccessMetadata = *ppFVar6;
        pFVar7 = *ppFVar6;
        if (pFVar7 != (FRigBaseMetadata *)0x0) goto LAB_14a34af22;
      }
    }
  }
  pFVar8 = &local_68;
LAB_14a34ad61:
  FVar2 = ColorMetaName;
  local_48 = (pFVar8->_s_0).R;
  fStack_44 = pFVar8->RGBA[1];
  fStack_40 = pFVar8->RGBA[2];
  fStack_3c = pFVar8->RGBA[3];
  if ((((__real_38d1b717 <=
         (float)((uint)(local_48 - (param_1->field0_0x0)._s_0.R) &
                __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
       (__real_38d1b717 <=
        (float)((uint)(fStack_44 - (param_1->field0_0x0)._s_0.G) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
      (__real_38d1b717 <=
       (float)((uint)(fStack_40 - (param_1->field0_0x0)._s_0.B) &
              __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
     (__real_38d1b717 <=
      (float)((uint)(fStack_3c - (param_1->field0_0x0)._s_0.A) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    local_88.Type = this->field_0x10;
    local_88._1_3_ = *(undefined3 *)&this->field_0x11;
    local_88.Name.ComparisonIndex.Value = *(uint *)&this->field_0x14;
    FVar9 = ColorMetaName.ComparisonIndex.Value;
    local_88.Name.Number = *(uint *)&this->field_0x18;
    local_58 = *(undefined8 *)&param_1->field0_0x0;
    uStack_50 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    if ((FVar9.Value == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x171,
                           L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = URigHierarchy::GetIndex(param_2,&local_88,true);
    pFVar5 = URigHierarchy::Get(param_2,iVar4);
    if (pFVar5 != (FRigBaseElement *)0x0) {
      local_a8[0] = FRigName::EmptyName;
      if (FVar9.Value != 0xffffffff) {
        local_a8[0] = FVar2;
      }
      pFVar7 = URigHierarchy::GetMetadataForElement(param_2,pFVar5,local_a8,LinearColor,true);
      if ((pFVar7 != (FRigBaseMetadata *)0x0) &&
         (iVar4 = FRigBaseMetadata::GetValueSize(pFVar7), iVar4 == 0x10)) {
        (**(code **)(pFVar7->_padding_ + 0x10))(pFVar7,&local_58);
      }
    }
    iVar4 = URigHierarchy::GetIndex(param_2,(FRigElementKey *)&this->field_0x10,true);
    URigHierarchy::Get(param_2,iVar4);
    if (param_3) {
      local_78.Component = (FRigBaseComponent *)0x0;
      local_78.Element = (FRigBaseElement *)this;
      URigHierarchy::Notify(param_2,SocketColorChanged,&local_78);
    }
  }
  return;
}

// SetDescription @ 14a34da40

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigSocketElement::SetDescription
          (FRigSocketElement *this,FString *param_1,URigHierarchy *param_2,bool param_3)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  FName local_res8;
  FRigNotificationSubject local_28;
  
  if ((param_1->Data).ArrayNum < 2) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pFVar3 = &local_res8;
  }
  else {
    pFVar3 = ::FName::FName(&local_res8,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
  }
  FVar1 = *pFVar3;
  local_28.Component._0_4_ = *(undefined4 *)&this->field_0x18;
  local_28.Element = *(FRigBaseElement **)&this->field_0x10;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FVar2 = URigHierarchy::GetNameMetadata
                    (param_2,(FRigElementKey *)&local_res8,(FName)&local_28,DescriptionMetaName);
  if ((*(uint *)FVar2 != FVar1.ComparisonIndex.Value.Value) ||
     (*(uint *)((longlong)FVar2 + 4) != FVar1.Number)) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    pFVar3 = ::FName::FName(&local_res8,pwVar4);
    local_28.Element = *(FRigBaseElement **)&this->field_0x10;
    local_28.Component =
         (FRigBaseComponent *)CONCAT44(local_28.Component._4_4_,*(undefined4 *)&this->field_0x18);
    URigHierarchy::SetNameMetadata(param_2,(FRigElementKey *)&local_28,DescriptionMetaName,*pFVar3);
    if (param_3) {
      local_28.Component = (FRigBaseComponent *)0x0;
      local_28.Element = (FRigBaseElement *)this;
      URigHierarchy::Notify(param_2,SocketDescriptionChanged,&local_28);
    }
  }
  return;
}

