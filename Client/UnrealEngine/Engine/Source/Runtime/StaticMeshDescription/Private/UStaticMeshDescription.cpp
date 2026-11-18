// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 18

// StaticClass @ 14435f950

UClass * __cdecl UStaticMeshDescription::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshDescription.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StaticMeshDescription",L"StaticMeshDescription",
               &Z_Registration_Info_UClass_UStaticMeshDescription.InnerSingleton,
               StaticRegisterNativesUStaticMeshDescription,0x2f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStaticMeshDescription>,
               InternalVTableHelperCtorCaller<UStaticMeshDescription>,local_res8,
               UMeshDescriptionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshDescription.InnerSingleton;
}

// UStaticMeshDescription @ 14436b070

UStaticMeshDescription * __thiscall
UStaticMeshDescription::UStaticMeshDescription(UStaticMeshDescription *this,FVTableHelper *param_1)

{
  UMeshDescriptionBase::UMeshDescriptionBase((UMeshDescriptionBase *)this,param_1);
  *(undefined ***)this = &___7UStaticMeshDescription__6B_;
  return this;
}

// UStaticMeshDescription @ 14436b0a0

UStaticMeshDescription * __thiscall
UStaticMeshDescription::UStaticMeshDescription
          (UStaticMeshDescription *this,FObjectInitializer *param_1)

{
  UMeshDescriptionBase::UMeshDescriptionBase((UMeshDescriptionBase *)this,param_1);
  *(undefined ***)this = &___7UStaticMeshDescription__6B_;
  return this;
}

// ~UStaticMeshDescription @ 14436b710

void __thiscall UStaticMeshDescription::~UStaticMeshDescription(UStaticMeshDescription *this)

{
  *(undefined ***)this = &___7UStaticMeshDescription__6B_;
  UMeshDescriptionBase::~UMeshDescriptionBase((UMeshDescriptionBase *)this);
  return;
}

// operator() @ 14436fa00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPolygonID __thiscall
`UStaticMeshDescription::CreateCube'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3,int param_4)

{
  TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  FVertexID FVar3;
  FPolygonGroupID FVar4;
  int iVar5;
  FMeshDescription *pFVar6;
  code *pcVar7;
  TVector2<float> TVar8;
  TVector2<float> TVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  FPolygonID *pFVar15;
  bool bVar16;
  FVertexInstanceID FVar17;
  FPolygonID FVar18;
  FMeshElementContainer *pFVar19;
  longlong lVar20;
  TTuple<FName,FAttributesSetEntry> *pTVar21;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar22;
  TVector2<float>_u_0 *pTVar23;
  TVector4<float> *pTVar24;
  TMeshAttributeArrayBase<bool> *this_00;
  bool *pbVar25;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar26;
  ulonglong uVar27;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar28;
  undefined4 in_register_00000014;
  ForAnyElementType FVar29;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar30;
  int in_stack_00000030;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  TArray<FEdgeID,TSizedDefaultAllocator<32>_> local_100;
  undefined8 local_f0;
  TVector2<float>_u_0 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  FPolygonID *local_d0;
  FVertexInstanceID *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<FVertexInstanceID_const_,int> local_b8;
  FVertexInstanceID local_a8;
  FVertexInstanceID local_a4;
  FVertexInstanceID local_a0;
  FVertexInstanceID local_9c;
  ulonglong local_98;
  
  local_d0 = (FPolygonID *)CONCAT44(in_register_00000014,param_1);
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar6 = *(FMeshDescription **)((longlong)this + 8);
  FVar3 = *(FVertexID *)(*(longlong *)((longlong)this + 0x10) + (longlong)param_2 * 4);
  pFVar19 = FMeshElementChannels::Get(pFVar6->VertexInstanceElements,0);
  FVar17 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar19);
  FMeshDescription::CreateVertexInstance_Internal(pFVar6,FVar17,FVar3);
  pFVar6 = *(FMeshDescription **)((longlong)this + 8);
  FVar3 = *(FVertexID *)(*(longlong *)((longlong)this + 0x10) + (longlong)param_3 * 4);
  local_a8 = FVar17;
  pFVar19 = FMeshElementChannels::Get(pFVar6->VertexInstanceElements,0);
  FVar17 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar19);
  FMeshDescription::CreateVertexInstance_Internal(pFVar6,FVar17,FVar3);
  pFVar6 = *(FMeshDescription **)((longlong)this + 8);
  FVar3 = *(FVertexID *)(*(longlong *)((longlong)this + 0x10) + (longlong)param_4 * 4);
  local_a4 = FVar17;
  pFVar19 = FMeshElementChannels::Get(pFVar6->VertexInstanceElements,0);
  FVar17 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar19);
  FMeshDescription::CreateVertexInstance_Internal(pFVar6,FVar17,FVar3);
  pFVar6 = *(FMeshDescription **)((longlong)this + 8);
  FVar3 = *(FVertexID *)(*(longlong *)((longlong)this + 0x10) + (longlong)in_stack_00000030 * 4);
  local_a0 = FVar17;
  pFVar19 = FMeshElementChannels::Get(pFVar6->VertexInstanceElements,0);
  FVar17 = (FVertexInstanceID)FMeshElementContainer::Add(pFVar19);
  FMeshDescription::CreateVertexInstance_Internal(pFVar6,FVar17,FVar3);
  local_9c = FVar17;
  lVar20 = (**(code **)(**(longlong **)this + 0x2c0))();
  pFVar19 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)(*(longlong *)(lVar20 + 8) + 0x58),0);
  pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar19->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  FVar17 = local_a8;
  pTVar30 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)&pTVar21->field_0x8;
  if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar28 = pTVar30;
  }
  if (((pTVar28 == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) ||
      (pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pTVar28->_padding_,
      (int)pTVar28->_padding_ != 2)) || (*(int *)((longlong)&pTVar28->_padding_ + 4) != 1)) {
    pTVar28 = pTVar30;
  }
  local_f0 = 0;
  pTVar22 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(pTVar28,0);
  pTVar23 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                       (pTVar22,(int)FVar17)->field0_0x0;
  FVar17 = local_a4;
  local_e8 = (TVector2<float>_u_0)0x3f800000;
  *pTVar23 = (TVector2<float>_u_0)0x0;
  pTVar22 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(pTVar28,0);
  pTVar23 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                       (pTVar22,(int)FVar17)->field0_0x0;
  FVar17 = local_a0;
  local_e0 = 0x3f800000;
  uStack_dc = 0x3f800000;
  *pTVar23 = local_e8;
  pTVar22 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(pTVar28,0);
  pTVar23 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                       (pTVar22,(int)FVar17)->field0_0x0;
  FVar17 = local_9c;
  TVar8.field0_0x0._s_0.Y = (float)uStack_dc;
  TVar8.field0_0x0._s_0.X = (float)local_e0;
  local_d8 = 0;
  uStack_d4 = 0x3f800000;
  *pTVar23 = TVar8.field0_0x0;
  pTVar22 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(pTVar28,0);
  pTVar23 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                       (pTVar22,(int)FVar17)->field0_0x0;
  TVar9.field0_0x0._s_0.Y = (float)uStack_d4;
  TVar9.field0_0x0._s_0.X = (float)local_d8;
  *pTVar23 = TVar9.field0_0x0;
  lVar20 = (**(code **)(**(longlong **)this + 0x2c0))();
  pFVar19 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)(*(longlong *)(lVar20 + 8) + 0x58),0);
  pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar19->Attributes,MeshAttribute::VertexInstance::Color);
  FVar17 = local_a8;
  uVar13 = FLinearColor::Red.field0_0x0._s_0.A;
  uVar12 = FLinearColor::Red.field0_0x0._s_0.B;
  uVar11 = FLinearColor::Red.field0_0x0._s_0.G;
  uVar10 = FLinearColor::Red.field0_0x0._s_0.R;
  pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)&pTVar21->field_0x8;
  if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar28 = pTVar30;
  }
  if (((pTVar28 == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) ||
      (pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pTVar28->_padding_,
      (int)pTVar28->_padding_ != 0)) || (*(int *)((longlong)&pTVar28->_padding_ + 4) != 1)) {
    pTVar28 = pTVar30;
  }
  pTVar1 = (TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
            *)&pTVar28->ArrayForChannels;
  if (((TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *)&pTVar28->ArrayForChannels)->ArrayNum < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      FVar18 = (FPolygonID)(*pcVar7)();
      return FVar18;
    }
  }
  FVar26 = (((TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)&pTVar28->ArrayForChannels)->AllocatorInstance).SecondaryData;
  if (FVar26 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar26 = (ForElementType<TMeshAttributeArrayBase<bool>_>)pTVar1;
  }
  pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                      ((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)FVar26,(int)FVar17);
  FVar17 = local_a4;
  (pTVar24->field0_0x0)._s_0.X = (float)uVar10;
  (pTVar24->field0_0x0)._s_0.Y = (float)uVar11;
  (pTVar24->field0_0x0)._s_0.Z = (float)uVar12;
  (pTVar24->field0_0x0)._s_0.W = (float)uVar13;
  uVar13 = FLinearColor::Green.field0_0x0._s_0.A;
  uVar12 = FLinearColor::Green.field0_0x0._s_0.B;
  uVar11 = FLinearColor::Green.field0_0x0._s_0.G;
  uVar10 = FLinearColor::Green.field0_0x0._s_0.R;
  if (((TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *)&pTVar28->ArrayForChannels)->ArrayNum < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      FVar18 = (FPolygonID)(*pcVar7)();
      return FVar18;
    }
  }
  FVar26 = (((TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)&pTVar28->ArrayForChannels)->AllocatorInstance).SecondaryData;
  if (FVar26 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar26 = (ForElementType<TMeshAttributeArrayBase<bool>_>)pTVar1;
  }
  pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                      ((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)FVar26,(int)FVar17);
  FVar17 = local_a0;
  (pTVar24->field0_0x0)._s_0.X = (float)uVar10;
  (pTVar24->field0_0x0)._s_0.Y = (float)uVar11;
  (pTVar24->field0_0x0)._s_0.Z = (float)uVar12;
  (pTVar24->field0_0x0)._s_0.W = (float)uVar13;
  uVar13 = FLinearColor::Blue.field0_0x0._s_0.A;
  uVar12 = FLinearColor::Blue.field0_0x0._s_0.B;
  uVar11 = FLinearColor::Blue.field0_0x0._s_0.G;
  uVar10 = FLinearColor::Blue.field0_0x0._s_0.R;
  if (((TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *)&pTVar28->ArrayForChannels)->ArrayNum < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      FVar18 = (FPolygonID)(*pcVar7)();
      return FVar18;
    }
  }
  FVar26 = (((TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)&pTVar28->ArrayForChannels)->AllocatorInstance).SecondaryData;
  if (FVar26 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar26 = (ForElementType<TMeshAttributeArrayBase<bool>_>)pTVar1;
  }
  pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                      ((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)FVar26,(int)FVar17);
  FVar17 = local_9c;
  (pTVar24->field0_0x0)._s_0.X = (float)uVar10;
  (pTVar24->field0_0x0)._s_0.Y = (float)uVar11;
  (pTVar24->field0_0x0)._s_0.Z = (float)uVar12;
  (pTVar24->field0_0x0)._s_0.W = (float)uVar13;
  uVar13 = FLinearColor::White.field0_0x0._s_0.A;
  uVar12 = FLinearColor::White.field0_0x0._s_0.B;
  uVar11 = FLinearColor::White.field0_0x0._s_0.G;
  uVar10 = FLinearColor::White.field0_0x0._s_0.R;
  if (((TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *)&pTVar28->ArrayForChannels)->ArrayNum < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      FVar18 = (FPolygonID)(*pcVar7)();
      return FVar18;
    }
  }
  FVar26 = (((TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
              *)&pTVar28->ArrayForChannels)->AllocatorInstance).SecondaryData;
  if (FVar26 == (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
    FVar26 = (ForElementType<TMeshAttributeArrayBase<bool>_>)pTVar1;
  }
  pTVar24 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                      ((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)FVar26,(int)FVar17);
  (pTVar24->field0_0x0)._s_0.X = (float)uVar10;
  (pTVar24->field0_0x0)._s_0.Y = (float)uVar11;
  (pTVar24->field0_0x0)._s_0.Z = (float)uVar12;
  (pTVar24->field0_0x0)._s_0.W = (float)uVar13;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,&local_100.AllocatorInstance,0,&local_100.ArrayMax);
  pFVar6 = *(FMeshDescription **)((longlong)this + 8);
  local_c8 = &local_a8;
  FVar4 = *(FPolygonGroupID *)((longlong)this + 0x18);
  iStack_c0 = 4;
  pFVar19 = FMeshElementChannels::Get(pFVar6->PolygonElements,0);
  FVar18 = (FPolygonID)FMeshElementContainer::Add(pFVar19);
  pFVar15 = local_d0;
  local_b8._12_4_ = uStack_bc;
  local_b8.ArrayNum = iStack_c0;
  local_b8.DataPtr = local_c8;
  *local_d0 = FVar18;
  FMeshDescription::CreatePolygon_Internal(pFVar6,FVar18,FVar4,&local_b8,&local_100);
  iVar14 = local_100.ArrayNum;
  uVar27 = (ulonglong)local_100.ArrayNum;
  pFVar2 = local_100.AllocatorInstance.Data + uVar27 * 4;
  FVar29.Data = local_100.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar27 != iVar14) {
      `TCheckedPointerIterator<FEdgeID,int,0>::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (FVar29.Data == pFVar2) break;
    iVar5 = *(int *)FVar29.Data;
    lVar20 = (**(code **)(**(longlong **)this + 0x2c0))();
    pFVar19 = FMeshElementChannels::Get
                        (*(FMeshElementChannels **)(*(longlong *)(lVar20 + 8) + 0x68),0);
    pTVar21 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)&pFVar19->Attributes,MeshAttribute::Edge::IsHard);
    pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)&pTVar21->field_0x8;
    if (pTVar21 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      pTVar28 = pTVar30;
    }
    if (((pTVar28 == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) ||
        (pTVar28 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pTVar28->_padding_,
        (int)pTVar28->_padding_ != 5)) || (*(int *)((longlong)&pTVar28->_padding_ + 4) != 1)) {
      pTVar28 = pTVar30;
    }
    this_00 = TMeshAttributeArraySet<bool>::GetArrayForChannel
                        ((TMeshAttributeArraySet<bool> *)pTVar28,0);
    pbVar25 = TMeshAttributeArrayBase<bool>::GetElementBase(this_00,iVar5);
    FVar29.Data = FVar29.Data + 4;
    *pbVar25 = true;
    uVar27 = local_100._8_8_ & 0xffffffff;
  }
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  return SUB84(pFVar15,0);
}

// CreateCube @ 14437ab80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UStaticMeshDescription::CreateCube
          (UStaticMeshDescription *this,TVector<double> *param_1,TVector<double> *param_2,
          FPolygonGroupID param_3,FPolygonID *param_4,FPolygonID *param_5,FPolygonID *param_6,
          FPolygonID *param_7,FPolygonID *param_8,FPolygonID *param_9)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  FPolygonID FVar4;
  longlong lVar5;
  FMeshElementContainer *pFVar6;
  TTuple<FName,FAttributesSetEntry> *pTVar7;
  FMeshElementContainer *pFVar8;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar9;
  TVector<float> *pTVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  UStaticMeshDescription *local_100;
  undefined1 *local_f8;
  int *local_f0;
  FPolygonGroupID local_e8;
  FPolygonID *local_e0;
  FPolygonID *local_d8;
  FPolygonID *local_d0;
  FPolygonID *local_c8;
  FPolygonID *local_c0;
  FPolygonID *local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_138;
  puVar1 = &this->field_0x28;
  local_e0 = param_4;
  local_d8 = param_5;
  local_d0 = param_6;
  local_c8 = param_7;
  local_c0 = param_8;
  local_b8 = param_9;
  lVar5 = (**(code **)(*(longlong *)this + 0x2c0))();
  pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)(*(longlong *)(lVar5 + 8) + 0x50),0);
  pTVar7 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar6->Attributes,MeshAttribute::Vertex::Position);
  pTVar11 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pTVar11 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  if (((pTVar11 == (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) ||
      (pTVar11 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pTVar11->_padding_,
      (int)pTVar11->_padding_ != 1)) || (*(int *)((longlong)&pTVar11->_padding_ + 4) != 1)) {
    pTVar11 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  }
  pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x78,0);
  pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x78,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve
            (&pFVar6->BitArray,((pFVar8->BitArray).NumBits - pFVar8->NumHoles) + 8);
  pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x78,0);
  local_b0 = FMeshElementContainer::Add(pFVar6);
  pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x78,0);
  local_ac = FMeshElementContainer::Add(pFVar6);
  pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x78,0);
  local_a8 = FMeshElementContainer::Add(pFVar6);
  pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x78,0);
  local_a4 = FMeshElementContainer::Add(pFVar6);
  pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x78,0);
  local_a0 = FMeshElementContainer::Add(pFVar6);
  pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x78,0);
  local_9c = FMeshElementContainer::Add(pFVar6);
  pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x78,0);
  local_98 = FMeshElementContainer::Add(pFVar6);
  pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x78,0);
  local_94 = FMeshElementContainer::Add(pFVar6);
  iVar3 = local_b0;
  uVar2 = __xmm_80000000800000008000000080000000;
  fVar16 = (float)((param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X);
  fVar15 = (float)((param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y);
  fVar14 = (float)((param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z);
  fVar13 = (float)((uint)fVar15 ^ __xmm_80000000800000008000000080000000);
  pTVar9 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar11,0);
  pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar9,iVar3);
  iVar3 = local_ac;
  (pTVar10->field0_0x0)._s_0.X = fVar16;
  (pTVar10->field0_0x0)._s_0.Y = fVar13;
  (pTVar10->field0_0x0)._s_0.Z = fVar14;
  pTVar9 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar11,0);
  pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar9,iVar3);
  iVar3 = local_a8;
  fVar12 = (float)((uint)fVar16 ^ uVar2);
  (pTVar10->field0_0x0)._s_0.X = fVar16;
  (pTVar10->field0_0x0)._s_0.Y = fVar15;
  (pTVar10->field0_0x0)._s_0.Z = fVar14;
  pTVar9 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar11,0);
  pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar9,iVar3);
  iVar3 = local_a4;
  (pTVar10->field0_0x0)._s_0.X = fVar12;
  (pTVar10->field0_0x0)._s_0.Y = fVar15;
  (pTVar10->field0_0x0)._s_0.Z = fVar14;
  pTVar9 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar11,0);
  pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar9,iVar3);
  iVar3 = local_a0;
  (pTVar10->field0_0x0)._s_0.X = fVar12;
  (pTVar10->field0_0x0)._s_0.Y = fVar13;
  (pTVar10->field0_0x0)._s_0.Z = fVar14;
  fVar14 = (float)((uint)fVar14 ^ uVar2);
  pTVar9 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar11,0);
  pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar9,iVar3);
  iVar3 = local_9c;
  (pTVar10->field0_0x0)._s_0.X = fVar12;
  (pTVar10->field0_0x0)._s_0.Y = fVar15;
  (pTVar10->field0_0x0)._s_0.Z = fVar14;
  pTVar9 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar11,0);
  pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar9,iVar3);
  iVar3 = local_98;
  (pTVar10->field0_0x0)._s_0.X = fVar12;
  (pTVar10->field0_0x0)._s_0.Y = fVar13;
  (pTVar10->field0_0x0)._s_0.Z = fVar14;
  pTVar9 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar11,0);
  pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar9,iVar3);
  iVar3 = local_94;
  (pTVar10->field0_0x0)._s_0.X = fVar16;
  (pTVar10->field0_0x0)._s_0.Y = fVar13;
  (pTVar10->field0_0x0)._s_0.Z = fVar14;
  pTVar9 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(pTVar11,0);
  pTVar10 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar9,iVar3);
  (pTVar10->field0_0x0)._s_0.X = fVar16;
  (pTVar10->field0_0x0)._s_0.Y = fVar15;
  (pTVar10->field0_0x0)._s_0.Z = fVar14;
  local_f0 = &local_b0;
  local_100 = this;
  local_f8 = puVar1;
  local_e8 = param_3;
  FVar4 = `UStaticMeshDescription::CreateCube'::__l2::<lambda_1>::operator()
                    (&local_100,(int)local_108,0,1,7);
  *local_e0 = *(FPolygonID *)CONCAT44(extraout_var,FVar4);
  FVar4 = `UStaticMeshDescription::CreateCube'::__l2::<lambda_1>::operator()
                    (&local_100,(int)local_108,2,3,5);
  *local_d8 = *(FPolygonID *)CONCAT44(extraout_var_00,FVar4);
  FVar4 = `UStaticMeshDescription::CreateCube'::__l2::<lambda_1>::operator()
                    (&local_100,(int)local_108,1,2,4);
  *local_d0 = *(FPolygonID *)CONCAT44(extraout_var_01,FVar4);
  FVar4 = `UStaticMeshDescription::CreateCube'::__l2::<lambda_1>::operator()
                    (&local_100,(int)local_108,3,0,6);
  *local_c8 = *(FPolygonID *)CONCAT44(extraout_var_02,FVar4);
  FVar4 = `UStaticMeshDescription::CreateCube'::__l2::<lambda_1>::operator()
                    (&local_100,(int)local_108,1,0,3);
  *local_c0 = *(FPolygonID *)CONCAT44(extraout_var_03,FVar4);
  FVar4 = `UStaticMeshDescription::CreateCube'::__l2::<lambda_1>::operator()
                    (&local_100,(int)local_108,6,7,4);
  *local_b8 = *(FPolygonID *)CONCAT44(extraout_var_04,FVar4);
  FStaticMeshOperations::ComputeTriangleTangentsAndNormals
            ((FMeshDescription *)puVar1,0.0,(wchar_t *)0x0);
  FStaticMeshOperations::ComputeTangentsAndNormals((FMeshDescription *)puVar1,Tangents|Normals);
  return;
}

// GetPrivateStaticClass @ 1443812e0

UClass * __cdecl UStaticMeshDescription::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshDescription.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StaticMeshDescription",L"StaticMeshDescription",
               &Z_Registration_Info_UClass_UStaticMeshDescription.InnerSingleton,
               StaticRegisterNativesUStaticMeshDescription,0x2f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStaticMeshDescription>,
               InternalVTableHelperCtorCaller<UStaticMeshDescription>,local_res8,
               UMeshDescriptionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshDescription.InnerSingleton;
}

// GetRequiredAttributes @ 1443817a0

FStaticMeshAttributes * __thiscall
UStaticMeshDescription::GetRequiredAttributes(UStaticMeshDescription *this)

{
  return *(FStaticMeshAttributes **)&this->field_0x2e8;
}

// GetRequiredAttributes @ 1443817b0

FStaticMeshAttributes * __thiscall
UStaticMeshDescription::GetRequiredAttributes(UStaticMeshDescription *this)

{
  return *(FStaticMeshAttributes **)&this->field_0x2e8;
}

// GetVertexInstanceUV @ 144383de0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
UStaticMeshDescription::GetVertexInstanceUV
          (UStaticMeshDescription *this,TVector2<double> *__return_storage_ptr__,
          FVertexInstanceID param_1,int param_2)

{
  int iVar1;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  code *pcVar2;
  bool bVar3;
  ForElementType<unsigned_int> FVar4;
  FMeshElementContainer *pFVar5;
  TTuple<FName,FAttributesSetEntry> *pTVar6;
  TVector2<double> *pTVar7;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_01;
  TVector2<float>_u_0 *pTVar8;
  float local_res8;
  float fStackX_c;
  
  FVar4 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x80,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar4 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar4 = *(ForElementType<unsigned_int> *)((longlong)FVar4 + 0x10);
    }
    if ((*(uint *)((longlong)FVar4 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pFVar5 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x80,0);
      bVar3 = FAttributesSetBase::HasAttribute
                        (&pFVar5->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
      if (bVar3) {
        pFVar5 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x80,0);
        pTVar6 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                         *)&pFVar5->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
        if (pTVar6 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TVector2<double> *)(*pcVar2)();
            return pTVar7;
          }
        }
        this_00 = *(TMeshAttributeArraySet<UE::Math::TVector2<float>_> **)&pTVar6->field_0x8;
        iVar1 = *(int *)((longlong)&this_00->_padding_ + 4);
        if ((int)this_00->_padding_ != 2) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArraySetPtr->HasType<RealAttributeType>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x81b,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TVector2<double> *)(*pcVar2)();
            return pTVar7;
          }
        }
        if (iVar1 != 1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActualExtent >= TMeshAttributesRefType<AttributeType>::MinExpectedExtent && ActualExtent <= TMeshAttributesRefType<AttributeType>::MaxExpectedExtent"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x81c,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar7 = (TVector2<double> *)(*pcVar2)();
            return pTVar7;
          }
        }
        this_01 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                            (this_00,param_2);
        pTVar8 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                            (this_01,(int)param_1)->field0_0x0;
        local_res8 = (*(TVector2<float>_u_0 *)&pTVar8->_s_0).X;
        fStackX_c = (*(TVector2<float>_u_0 *)&pTVar8->_s_0).Y;
        (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_res8;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fStackX_c;
        return __return_storage_ptr__;
      }
      if (2 < (byte)LogMeshDescription._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
      }
      goto LAB_144383fa1;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_144383fa1:
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// RegisterAttributes @ 144385360

void __thiscall UStaticMeshDescription::RegisterAttributes(UStaticMeshDescription *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = ::operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = &this->field_0x28;
    *puVar2 = &___7FStaticMeshAttributes__6B_;
  }
  puVar1 = *(undefined8 **)&this->field_0x2e8;
  *(undefined8 **)&this->field_0x2e8 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001443853b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x2e8 + 8))(*(longlong **)&this->field_0x2e8,0);
  return;
}

// SetPolygonGroupMaterialSlotName @ 1443882c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStaticMeshDescription::SetPolygonGroupMaterialSlotName
          (UStaticMeshDescription *this,FPolygonGroupID param_1,FName *param_2)

{
  int iVar1;
  TMeshAttributeArraySet<FName> *this_00;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  FMeshElementContainer *pFVar6;
  TTuple<FName,FAttributesSetEntry> *pTVar7;
  TMeshAttributeArrayBase<FName> *this_01;
  FName *pFVar8;
  
  FVar5 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0xa8,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar5 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar5 = *(ForElementType<unsigned_int> *)((longlong)FVar5 + 0x10);
    }
    if ((*(uint *)((longlong)FVar5 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0xa8,0);
      bVar4 = FAttributesSetBase::HasAttribute
                        (&pFVar6->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
      if (!bVar4) {
        if ((byte)LogMeshDescription._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
        return;
      }
      pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0xa8,0);
      pTVar7 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                       *)&pFVar6->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
      if ((pTVar7 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(TMeshAttributeArraySet<FName> **)&pTVar7->field_0x8;
      iVar1 = *(int *)((longlong)&this_00->_padding_ + 4);
      if (((int)this_00->_padding_ != 6) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArraySetPtr->HasType<std::remove_cv_t<RealAttributeType>>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x830,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((iVar1 != 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActualExtent >= TMeshAttributesRefType<AttributeType>::MinExpectedExtent && ActualExtent <= TMeshAttributesRefType<AttributeType>::MaxExpectedExtent"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x831,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = *param_2;
      this_01 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this_00,0);
      pFVar8 = TMeshAttributeArrayBase<FName>::GetElementBase(this_01,(int)param_1);
      *pFVar8 = FVar2;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// SetVertexInstanceUV @ 144388490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStaticMeshDescription::SetVertexInstanceUV
          (UStaticMeshDescription *this,FVertexInstanceID param_1,TVector2<double> *param_2,
          int param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  code *pcVar4;
  TVector2<float> TVar5;
  bool bVar6;
  ForElementType<unsigned_int> FVar7;
  FMeshElementContainer *pFVar8;
  TTuple<FName,FAttributesSetEntry> *pTVar9;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_01;
  TVector2<float>_u_0 *pTVar10;
  
  FVar7 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x80,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar7 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((*(uint *)((longlong)FVar7 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x80,0);
      bVar6 = FAttributesSetBase::HasAttribute
                        (&pFVar8->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
      if (!bVar6) {
        if ((byte)LogMeshDescription._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
        return;
      }
      pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)&this->field_0x80,0);
      dVar1 = (param_2->field0_0x0)._s_0.X;
      dVar2 = (param_2->field0_0x0)._s_0.Y;
      pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                       *)&pFVar8->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
      if ((pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(TMeshAttributeArraySet<UE::Math::TVector2<float>_> **)&pTVar9->field_0x8;
      iVar3 = *(int *)((longlong)&this_00->_padding_ + 4);
      if (((int)this_00->_padding_ != 2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArraySetPtr->HasType<std::remove_cv_t<RealAttributeType>>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x830,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((iVar3 != 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActualExtent >= TMeshAttributesRefType<AttributeType>::MinExpectedExtent && ActualExtent <= TMeshAttributesRefType<AttributeType>::MaxExpectedExtent"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x831,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                          (this_00,param_3);
      pTVar10 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                           (this_01,(int)param_1)->field0_0x0;
      TVar5.field0_0x0._s_0.Y = (float)dVar2;
      TVar5.field0_0x0._s_0.X = (float)dVar1;
      *pTVar10 = TVar5.field0_0x0;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// StaticRegisterNativesUStaticMeshDescription @ 144388660

void __cdecl UStaticMeshDescription::StaticRegisterNativesUStaticMeshDescription(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UStaticMeshDescription_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateCube @ 14438ad60

void __cdecl UStaticMeshDescription::execCreateCube(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPolygonID *pFVar2;
  FPolygonID *pFVar3;
  FPolygonID *pFVar4;
  FPolygonID *pFVar5;
  FPolygonID *pFVar6;
  FPolygonID *pFVar7;
  FPolygonID local_res10 [2];
  FPolygonID local_res20 [2];
  FPolygonID local_c8;
  FPolygonID local_c4;
  FPolygonID local_c0;
  FPolygonID local_bc;
  FPolygonGroupID local_b8 [2];
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8[0] = (FPolygonGroupID)0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_res10[0] = (FPolygonID)0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pFVar2 = (FPolygonID *)param_2->MostRecentPropertyAddress;
  local_res20[0] = (FPolygonID)0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar5 = local_res10;
  if (pFVar2 != (FPolygonID *)0x0) {
    pFVar5 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pFVar2 = (FPolygonID *)param_2->MostRecentPropertyAddress;
  local_c8 = (FPolygonID)0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = local_res20;
  if (pFVar2 != (FPolygonID *)0x0) {
    pFVar4 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pFVar2 = (FPolygonID *)param_2->MostRecentPropertyAddress;
  local_c4 = (FPolygonID)0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar7 = &local_c8;
  if (pFVar2 != (FPolygonID *)0x0) {
    pFVar7 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c4);
  }
  pFVar2 = (FPolygonID *)param_2->MostRecentPropertyAddress;
  local_c0 = (FPolygonID)0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_c4;
  if (pFVar2 != (FPolygonID *)0x0) {
    pFVar6 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  pFVar2 = (FPolygonID *)param_2->MostRecentPropertyAddress;
  local_bc = (FPolygonID)0xffffffff;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar3 = &local_c0;
  if (pFVar2 != (FPolygonID *)0x0) {
    pFVar3 = pFVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_bc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_bc);
  }
  local_78._s_0.X = local_b0;
  local_78._s_0.Y = dStack_a8;
  pFVar2 = &local_bc;
  if ((FPolygonID *)param_2->MostRecentPropertyAddress != (FPolygonID *)0x0) {
    pFVar2 = (FPolygonID *)param_2->MostRecentPropertyAddress;
  }
  local_78._s_0.Z = local_a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58._s_0.X = local_98;
  local_58._s_0.Y = dStack_90;
  local_58._s_0.Z = local_88;
  CreateCube((UStaticMeshDescription *)param_1,(TVector<double> *)&local_58._s_0,
             (TVector<double> *)&local_78._s_0,local_b8[0],pFVar5,pFVar4,pFVar7,pFVar6,pFVar3,pFVar2
            );
  return;
}

// execGetVertexInstanceUV @ 14438b0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStaticMeshDescription::execGetVertexInstanceUV(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this;
  code *pcVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  bool bVar7;
  ForElementType<unsigned_int> FVar8;
  FMeshElementContainer *pFVar9;
  TTuple<FName,FAttributesSetEntry> *pTVar10;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_00;
  TVector2<float>_u_0 *pTVar11;
  undefined8 local_res8;
  uint local_res10 [2];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8 = (ulonglong)(uint)local_res8._4_4_ << 0x20;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar6 = local_res10[0];
  iVar5 = (int)(float)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar8 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)FVar8 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar8 = *(ForElementType<unsigned_int> *)((longlong)FVar8 + 0x10);
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) {
      pFVar9 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
      bVar7 = FAttributesSetBase::HasAttribute
                        (&pFVar9->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
      if (bVar7) {
        pFVar9 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
        pTVar10 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                          *)&pFVar9->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
        if (pTVar10 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        this = *(TMeshAttributeArraySet<UE::Math::TVector2<float>_> **)&pTVar10->field_0x8;
        iVar1 = *(int *)((longlong)&this->_padding_ + 4);
        if ((int)this->_padding_ != 2) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArraySetPtr->HasType<RealAttributeType>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x81b,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (iVar1 != 1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActualExtent >= TMeshAttributesRefType<AttributeType>::MinExpectedExtent && ActualExtent <= TMeshAttributesRefType<AttributeType>::MaxExpectedExtent"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x81c,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        this_00 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(this,iVar5)
        ;
        pTVar11 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                             (this_00,uVar6)->field0_0x0;
        local_res8._0_4_ = (*(TVector2<float>_u_0 *)&pTVar11->_s_0).X;
        local_res8._4_4_ = (*(TVector2<float>_u_0 *)&pTVar11->_s_0).Y;
        auVar4._8_4_ = SUB84((double)local_res8._4_4_,0);
        auVar4._0_8_ = (double)(float)local_res8;
        auVar4._12_4_ = (int)((ulonglong)(double)local_res8._4_4_ >> 0x20);
        *(undefined1 (*) [16])param_3 = auVar4;
        return;
      }
      if (2 < (byte)LogMeshDescription._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
      }
      goto LAB_14438b314;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
LAB_14438b314:
  *(TVector2<double>_u_0 *)param_3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// execSetPolygonGroupMaterialSlotName @ 14438b340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStaticMeshDescription::execSetPolygonGroupMaterialSlotName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TMeshAttributeArraySet<FName> *this;
  FName FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  ForElementType<unsigned_int> FVar7;
  FMeshElementContainer *pFVar8;
  TTuple<FName,FAttributesSetEntry> *pTVar9;
  TMeshAttributeArrayBase<FName> *this_00;
  FName *pFVar10;
  uint local_res8 [2];
  FName local_res10;
  
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar5 = local_res8[0];
  pFVar10 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar10 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar7 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)((longlong)FVar7 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar7 = *(ForElementType<unsigned_int> *)((longlong)FVar7 + 0x10);
    }
    if ((*(uint *)((longlong)FVar7 +
                  (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar5 & 0x1f) & 1) != 0) {
      pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
      bVar6 = FAttributesSetBase::HasAttribute
                        (&pFVar8->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
      if (!bVar6) {
        if ((byte)LogMeshDescription._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
        return;
      }
      pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[4].field_0x8,0);
      pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                       *)&pFVar8->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
      if ((pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this = *(TMeshAttributeArraySet<FName> **)&pTVar9->field_0x8;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      if (((int)this->_padding_ != 6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArraySetPtr->HasType<std::remove_cv_t<RealAttributeType>>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x830,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((iVar1 != 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActualExtent >= TMeshAttributesRefType<AttributeType>::MinExpectedExtent && ActualExtent <= TMeshAttributesRefType<AttributeType>::MaxExpectedExtent"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x831,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar3 = *pFVar10;
      this_00 = TMeshAttributeArraySet<FName>::GetArrayForChannel(this,0);
      pFVar10 = TMeshAttributeArrayBase<FName>::GetElementBase(this_00,uVar5);
      *pFVar10 = FVar3;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

// execSetVertexInstanceUV @ 14438b5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UStaticMeshDescription::execSetVertexInstanceUV(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this;
  code *pcVar4;
  TVector2<float> TVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  ForElementType<unsigned_int> FVar9;
  FMeshElementContainer *pFVar10;
  TTuple<FName,FAttributesSetEntry> *pTVar11;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_00;
  TVector2<float>_u_0 *pTVar12;
  int local_res8 [2];
  uint local_res10 [2];
  double local_48;
  double dStack_40;
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar7 = local_res10[0];
  iVar6 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar9 = (ForElementType<unsigned_int>)
          FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)((longlong)FVar9 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar9 = *(ForElementType<unsigned_int> *)((longlong)FVar9 + 0x10);
    }
    if ((*(uint *)((longlong)FVar9 +
                  (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) {
      pFVar10 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
      bVar8 = FAttributesSetBase::HasAttribute
                        (&pFVar10->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
      if (!bVar8) {
        if ((byte)LogMeshDescription._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
        return;
      }
      pFVar10 = FMeshElementChannels::Get(*(FMeshElementChannels **)&param_1[3].field_0x8,0);
      pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                        *)&pFVar10->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
      if ((pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this = *(TMeshAttributeArraySet<UE::Math::TVector2<float>_> **)&pTVar11->field_0x8;
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      if (((int)this->_padding_ != 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArraySetPtr->HasType<std::remove_cv_t<RealAttributeType>>()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x830,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((iVar2 != 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActualExtent >= TMeshAttributesRefType<AttributeType>::MinExpectedExtent && ActualExtent <= TMeshAttributesRefType<AttributeType>::MaxExpectedExtent"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                             ,0x831,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(this,iVar6);
      pTVar12 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(this_00,uVar7)
                 ->field0_0x0;
      TVar5.field0_0x0._s_0.Y = (float)dStack_40;
      TVar5.field0_0x0._s_0.X = (float)local_48;
      *pTVar12 = TVar5.field0_0x0;
      return;
    }
  }
  if (2 < (byte)LogMeshDescription._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMeshDescription);
  }
  return;
}

