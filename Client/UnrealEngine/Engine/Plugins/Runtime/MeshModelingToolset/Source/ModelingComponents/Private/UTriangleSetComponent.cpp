// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 22

// StaticClass @ 14caabbe0

UClass * __cdecl UTriangleSetComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTriangleSetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"TriangleSetComponent",
               &Z_Registration_Info_UClass_UTriangleSetComponent.InnerSingleton,
               StaticRegisterNativesUTriangleSetComponent,0x690,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTriangleSetComponent>,
               InternalVTableHelperCtorCaller<UTriangleSetComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTriangleSetComponent.InnerSingleton;
}

// UTriangleSetComponent @ 14cacfa30

UTriangleSetComponent * __thiscall
UTriangleSetComponent::UTriangleSetComponent(UTriangleSetComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&this->Triangles = 0;
  *(undefined8 *)&(this->Triangles).field_0x8 = 0;
  *(undefined8 *)&(this->Triangles).field_0x20 = 0;
  *(undefined4 *)&(this->Triangles).field_0x28 = 0;
  *(undefined4 *)&(this->Triangles).field_0x2c = 0x80;
  *(undefined4 *)&(this->Triangles).field_0x34 = 0;
  *(undefined4 *)&(this->Triangles).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->TrianglesByMaterial = 0;
  *(undefined8 *)&(this->TrianglesByMaterial).field_0x8 = 0;
  *(undefined8 *)&(this->TrianglesByMaterial).field_0x20 = 0;
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x28 = 0;
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x34 = 0;
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->MaterialToIndex = 0;
  *(undefined8 *)&(this->MaterialToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialToIndex).field_0x34 = 0;
  *(undefined4 *)&(this->MaterialToIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MaterialToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialToIndex).field_0x48 = 0;
  return this;
}

// UTriangleSetComponent @ 14cacfb50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UTriangleSetComponent * __thiscall
UTriangleSetComponent::UTriangleSetComponent(UTriangleSetComponent *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UMeshComponent::UMeshComponent((UMeshComponent *)this,pFVar2);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  *(undefined8 *)&this->Triangles = 0;
  *(undefined8 *)&(this->Triangles).field_0x8 = 0;
  *(undefined8 *)&(this->Triangles).field_0x20 = 0;
  *(undefined4 *)&(this->Triangles).field_0x28 = 0;
  *(undefined4 *)&(this->Triangles).field_0x2c = 0x80;
  *(undefined4 *)&(this->Triangles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Triangles).field_0x34 = 0;
  *(undefined8 *)&this->TrianglesByMaterial = 0;
  *(undefined8 *)&(this->TrianglesByMaterial).field_0x8 = 0;
  *(undefined8 *)&(this->TrianglesByMaterial).field_0x20 = 0;
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x28 = 0;
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x34 = 0;
  *(undefined8 *)&this->MaterialToIndex = 0;
  *(undefined8 *)&(this->MaterialToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->MaterialToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialToIndex).field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xef;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  this->bBoundsDirty = true;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  return this;
}

// ~UTriangleSetComponent @ 14cad2db0

void __thiscall UTriangleSetComponent::~UTriangleSetComponent(UTriangleSetComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  *(undefined4 *)&(this->MaterialToIndex).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MaterialToIndex).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialToIndex);
  TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
            (&this->TrianglesByMaterial);
  TSparseArray<TTuple<int,int>,FDefaultSparseArrayAllocator>::
  ~TSparseArray<TTuple<int,int>,FDefaultSparseArrayAllocator>(&this->Triangles);
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// AddQuad @ 14cae6bf0

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

FIndex2i __thiscall
UTriangleSetComponent::AddQuad
          (UTriangleSetComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,FColor *param_6
          ,UMaterialInterface *param_7)

{
  FColor FVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  UObject *in_stack_00000048;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_284;
  FRenderableTriangle local_278;
  FRenderableTriangle local_198;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (in_stack_00000048 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(in_stack_00000048);
  }
  dVar14 = _UNK_150689688;
  uVar2 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar3 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
  local_278.Vertex1.Position.field0_0x0._16_4_ =
       *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x10);
  local_278.Vertex1.Position.field0_0x0._20_4_ =
       *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x14);
  dVar6 = (param_2->field0_0x0)._s_0.X;
  dVar7 = (param_2->field0_0x0)._s_0.Y;
  FVar1.field0_0x0 = *(FColor_u_0 *)&param_7->_padding_;
  uVar12._4_4_ = uStack_284;
  uVar12._0_4_ = FVar1.field0_0x0;
  dVar8 = (param_4->field0_0x0)._s_0.X;
  dVar9 = (param_4->field0_0x0)._s_0.Y;
  dVar10 = *(double *)param_6;
  local_278.Vertex1.Position.field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_278.Vertex1.Position.field0_0x0._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  uStack_298 = (undefined4)*(undefined8 *)(param_6 + 2);
  uVar17 = uStack_298;
  uStack_294 = (undefined4)((ulonglong)*(undefined8 *)(param_6 + 2) >> 0x20);
  uVar18 = uStack_294;
  uVar21 = (undefined4)*(undefined8 *)(param_6 + 4);
  uVar22 = (undefined4)((ulonglong)*(undefined8 *)(param_6 + 4) >> 0x20);
  local_278.Vertex1.Normal.field0_0x0._s_0.X = (double)*(undefined8 *)param_6;
  local_278.Vertex1.Normal.field0_0x0._8_4_ = param_6[2].field0_0x0;
  local_278.Vertex1.Normal.field0_0x0._12_4_ = param_6[3].field0_0x0;
  local_2b0 = (undefined4)___xmm_00000000000000003ff0000000000000;
  uStack_2ac = (undefined4)((ulonglong)___xmm_00000000000000003ff0000000000000 >> 0x20);
  local_278.Vertex1.UV.field0_0x0._0_4_ = local_2b0;
  local_278.Vertex1.UV.field0_0x0._4_4_ = uStack_2ac;
  uVar4 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0x14);
  local_278.Vertex1.UV.field0_0x0._s_0.Y = _UNK_150689518;
  local_278.Vertex1._68_4_ = uStack_284;
  local_278.Vertex1.Color.field0_0x0 = FVar1.field0_0x0;
  uVar13._4_4_ = uStack_284;
  uVar13._0_4_ = FVar1.field0_0x0;
  local_2b0 = (undefined4)___xmm_3ff00000000000003ff0000000000000;
  uVar15 = local_2b0;
  uStack_2ac = (undefined4)((ulonglong)___xmm_3ff00000000000003ff0000000000000 >> 0x20);
  uVar16 = uStack_2ac;
  dVar11 = *(double *)param_6;
  uStack_298 = (undefined4)*(undefined8 *)(param_6 + 2);
  uStack_294 = (undefined4)((ulonglong)*(undefined8 *)(param_6 + 2) >> 0x20);
  local_278.Vertex2.Normal.field0_0x0._8_4_ = uStack_298;
  local_278.Vertex2.Normal.field0_0x0._12_4_ = uStack_294;
  local_278.Vertex0.UV.field0_0x0._0_4_ = 0;
  local_278.Vertex0.UV.field0_0x0._4_4_ = 0;
  local_278.Vertex0.UV.field0_0x0._s_0.Y = 0.0;
  local_278.Vertex0.Normal.field0_0x0._8_4_ = uVar17;
  local_278.Vertex0.Normal.field0_0x0._12_4_ = uVar18;
  local_278.Vertex2.UV.field0_0x0._0_4_ = local_2b0;
  local_278.Vertex2.UV.field0_0x0._4_4_ = uStack_2ac;
  local_278.Vertex2.UV.field0_0x0._s_0.Y = _UNK_150689688;
  local_278.Vertex0.Position.field0_0x0._s_0.X = dVar6;
  local_278.Vertex0.Position.field0_0x0._s_0.Y = dVar7;
  local_278.Vertex0.Position.field0_0x0._16_4_ = uVar2;
  local_278.Vertex0.Position.field0_0x0._20_4_ = uVar3;
  local_278.Vertex0.Normal.field0_0x0._s_0.X = dVar10;
  local_278.Vertex0.Normal.field0_0x0._16_4_ = uVar21;
  local_278.Vertex0.Normal.field0_0x0._20_4_ = uVar22;
  local_278.Vertex0._64_8_ = uVar12;
  local_278.Vertex1.Normal.field0_0x0._16_4_ = uVar21;
  local_278.Vertex1.Normal.field0_0x0._20_4_ = uVar22;
  local_278.Vertex2.Position.field0_0x0._s_0.X = dVar8;
  local_278.Vertex2.Position.field0_0x0._s_0.Y = dVar9;
  local_278.Vertex2.Position.field0_0x0._16_4_ = uVar4;
  local_278.Vertex2.Position.field0_0x0._20_4_ = uVar5;
  local_278.Vertex2.Normal.field0_0x0._s_0.X = dVar11;
  local_278.Vertex2.Normal.field0_0x0._16_4_ = uVar21;
  local_278.Vertex2.Normal.field0_0x0._20_4_ = uVar22;
  local_278.Vertex2._64_8_ = uVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (in_stack_00000048 != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(in_stack_00000048);
  }
  local_198.Vertex2.Position.field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_198.Vertex2.Position.field0_0x0._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_198.Vertex2.Normal.field0_0x0._s_0.X = (double)*(undefined8 *)param_6;
  local_198.Vertex2.Normal.field0_0x0._8_4_ = param_6[2].field0_0x0;
  local_198.Vertex2.Normal.field0_0x0._12_4_ = param_6[3].field0_0x0;
  local_198.Vertex2.Position.field0_0x0._16_4_ =
       *(undefined4 *)((longlong)&param_5->field0_0x0 + 0x10);
  local_198.Vertex2.Position.field0_0x0._20_4_ =
       *(undefined4 *)((longlong)&param_5->field0_0x0 + 0x14);
  local_2b0 = (undefined4)___xmm_3ff00000000000000000000000000000;
  uStack_2ac = (undefined4)((ulonglong)___xmm_3ff00000000000000000000000000000 >> 0x20);
  local_198.Vertex2.UV.field0_0x0._0_4_ = local_2b0;
  local_198.Vertex2.UV.field0_0x0._4_4_ = uStack_2ac;
  local_198.Vertex2.Normal.field0_0x0._16_4_ = (undefined4)*(undefined8 *)(param_6 + 4);
  local_198.Vertex2.Normal.field0_0x0._20_4_ =
       (undefined4)((ulonglong)*(undefined8 *)(param_6 + 4) >> 0x20);
  local_198.Vertex2.UV.field0_0x0._s_0.Y = _UNK_15061cbc8;
  local_198.Vertex2._68_4_ = uStack_284;
  local_198.Vertex2.Color.field0_0x0 = *(FColor_u_0 *)&param_7->_padding_;
  local_198.Vertex0.UV.field0_0x0._0_4_ = 0;
  local_198.Vertex0.UV.field0_0x0._4_4_ = 0;
  local_198.Vertex0.UV.field0_0x0._s_0.Y = 0.0;
  local_198.Vertex0.Normal.field0_0x0._8_4_ = uVar17;
  local_198.Vertex0.Normal.field0_0x0._12_4_ = uVar18;
  local_198.Vertex1.UV.field0_0x0._0_4_ = uVar15;
  local_198.Vertex1.UV.field0_0x0._4_4_ = uVar16;
  local_198.Vertex1.UV.field0_0x0._s_0.Y = dVar14;
  local_198.Vertex1.Normal.field0_0x0._8_4_ = uStack_298;
  local_198.Vertex1.Normal.field0_0x0._12_4_ = uStack_294;
  local_198.Vertex0.Position.field0_0x0._s_0.X = dVar6;
  local_198.Vertex0.Position.field0_0x0._s_0.Y = dVar7;
  local_198.Vertex0.Position.field0_0x0._16_4_ = uVar2;
  local_198.Vertex0.Position.field0_0x0._20_4_ = uVar3;
  local_198.Vertex0.Normal.field0_0x0._s_0.X = dVar10;
  local_198.Vertex0.Normal.field0_0x0._16_4_ = uVar21;
  local_198.Vertex0.Normal.field0_0x0._20_4_ = uVar22;
  local_198.Vertex0._64_8_ = uVar12;
  local_198.Vertex1.Position.field0_0x0._s_0.X = dVar8;
  local_198.Vertex1.Position.field0_0x0._s_0.Y = dVar9;
  local_198.Vertex1.Position.field0_0x0._16_4_ = uVar4;
  local_198.Vertex1.Position.field0_0x0._20_4_ = uVar5;
  local_198.Vertex1.Normal.field0_0x0._s_0.X = dVar11;
  local_198.Vertex1.Normal.field0_0x0._16_4_ = uVar21;
  local_198.Vertex1.Normal.field0_0x0._20_4_ = uVar22;
  local_198.Vertex1._64_8_ = uVar13;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  iVar19 = AddTriangleInternal(this,&local_278);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  iVar20 = AddTriangleInternal(this,&local_198);
  *(int *)((longlong)&param_1->field0_0x0 + 4) = iVar20;
  *(int *)&param_1->field0_0x0 = iVar19;
  return (FIndex2i)(FIndex2i_u_0)param_1;
}

// AddTriangle @ 14cae9030

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

int __thiscall
UTriangleSetComponent::AddTriangle
          (UTriangleSetComponent *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4,FColor *param_5,
          UMaterialInterface *param_6)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_104;
  TObjectPtr<UMaterialInterface>_u_0 local_f8;
  double local_f0;
  double dStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  double dStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  double local_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  double dStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  double local_60;
  double dStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  double dStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_6 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_6);
  }
  local_e0 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  uStack_dc = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  local_f0 = (param_1->field0_0x0)._s_0.X;
  dStack_e8 = (param_1->field0_0x0)._s_0.Y;
  uVar1 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 0x10);
  local_f8.DebugPtr = param_6;
  uVar2 = (param_5->field0_0x0).Bits;
  dStack_c8 = (param_4->field0_0x0)._s_0.X;
  local_c0 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 8);
  uStack_bc = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc);
  local_98 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
  uStack_94 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_b8 = (undefined4)uVar1;
  uStack_b4 = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_d0 = 0;
  local_b0 = CONCAT44(uStack_104,uVar2);
  dStack_80 = (param_4->field0_0x0)._s_0.X;
  local_78 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 8);
  uStack_74 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc);
  local_130 = (undefined4)___xmm_00000000000000003ff0000000000000;
  uStack_12c = (undefined4)((ulonglong)___xmm_00000000000000003ff0000000000000 >> 0x20);
  local_a8 = (param_2->field0_0x0)._s_0.X;
  dStack_a0 = (param_2->field0_0x0)._s_0.Y;
  local_50 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x10);
  uStack_4c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0x14);
  uStack_90 = local_130;
  uStack_8c = uStack_12c;
  local_88 = _UNK_150689518;
  local_68 = CONCAT44(uStack_104,uVar2);
  dStack_38 = (param_4->field0_0x0)._s_0.X;
  local_30 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 8);
  uStack_2c = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc);
  local_130 = (undefined4)___xmm_3ff00000000000003ff0000000000000;
  uStack_12c = (undefined4)((ulonglong)___xmm_3ff00000000000003ff0000000000000 >> 0x20);
  local_60 = (param_3->field0_0x0)._s_0.X;
  dStack_58 = (param_3->field0_0x0)._s_0.Y;
  uStack_48 = local_130;
  uStack_44 = uStack_12c;
  local_40 = _UNK_150689688;
  local_20 = CONCAT44(uStack_104,uVar2);
  uStack_70 = uStack_b8;
  uStack_6c = uStack_b4;
  uStack_28 = uStack_b8;
  uStack_24 = uStack_b4;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  iVar3 = AddTriangleInternal(this,(FRenderableTriangle *)&local_f8.ObjectPtr);
  return iVar3;
}

// AddTriangle @ 14cae91e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UTriangleSetComponent::AddTriangle(UTriangleSetComponent *this,FRenderableTriangle *param_1)

{
  int iVar1;
  
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  iVar1 = AddTriangleInternal(this,param_1);
  return iVar1;
}

// AddTriangleInternal @ 14cae9210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UTriangleSetComponent::AddTriangleInternal(UTriangleSetComponent *this,FRenderableTriangle *param_1)

{
  TSparseArray<TTuple<int,int>,FDefaultSparseArrayAllocator> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FSparseArrayAllocationInfo local_18;
  
  iVar3 = FindOrAddMaterialIndex(this,(param_1->Material).field0_0x0.DebugPtr);
  this_00 = &this->Triangles;
  iVar4 = TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>::Add
                    ((TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator> *)
                     ((longlong)iVar3 * 0x38 + *(longlong *)&this->TrianglesByMaterial),param_1);
  iVar1 = *(int *)&(this->Triangles).field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,1,(ForAnyElementType *)this_00,(int *)&(this->Triangles).field_0x8,
                       (int *)&(this->Triangles).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Triangles).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Triangles).field_0x30;
    iVar1 = iVar1 + -1;
    iVar2 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar5 * 8);
    *(int *)&(this->Triangles).field_0x30 = iVar2;
    *(int *)&(this->Triangles).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar2 * 8) = 0xffffffff;
    }
  }
  TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *)this_00,&local_18,iVar5);
  if (local_18.Pointer != (undefined8 *)0x0) {
    *(ulonglong *)local_18.Pointer = CONCAT44(iVar4,iVar3);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return local_18.Index;
}

// AddTriangles @ 14cae9410

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
UTriangleSetComponent::AddTriangles
          (UTriangleSetComponent *this,int param_1,
          TFunctionRef<void___cdecl(int,TArray<FRenderableTriangle,TSizedDefaultAllocator<32>_>_&)>
          *param_2,int param_3,bool param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FRenderableTriangle *pFVar5;
  int local_res20 [2];
  ForAnyElementType local_38;
  uint local_30;
  int local_2c;
  
  iVar4 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  local_2c = 0;
  if ((0 < param_3) &&
     (TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::Reserve
                ((TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *)&this->Triangles,
                 (param_1 * param_3 - *(int *)&(this->Triangles).field_0x34) +
                 *(int *)&(this->Triangles).field_0x8), local_2c < param_3)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,param_3,&local_38,local_30,&local_2c);
  }
  if (0 < param_1) {
    do {
      local_30 = 0;
      if ((local_2c < 0) && (local_2c != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xe0,8,0,&local_38,0,&local_2c);
      }
      local_res20[0] = iVar4;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res20);
      uVar1 = local_30;
      uVar2 = (ulonglong)(int)local_30;
      pFVar5 = (FRenderableTriangle *)(local_38.Data + uVar2 * 0xe0);
      FVar3.Data = local_38.Data;
      while( true ) {
        if ((uint)uVar2 != uVar1) {
          `TCheckedPointerIterator<FRenderableTriangle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if ((FRenderableTriangle *)FVar3.Data == pFVar5) break;
        AddTriangleInternal(this,(FRenderableTriangle *)FVar3.Data);
        uVar2 = (ulonglong)local_30;
        FVar3.Data = FVar3.Data + 0xe0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1);
  }
  if (!param_4) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  if ((FRenderableTriangle *)local_38.Data != (FRenderableTriangle *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// CalcBounds @ 14caf0490

TBoxSphereBounds<double,double> * __thiscall
UTriangleSetComponent::CalcBounds
          (UTriangleSetComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  int iVar8;
  uint uVar9;
  code *pcVar10;
  bool bVar11;
  longlong *plVar12;
  TBoxSphereBounds<double,double> *__return_storage_ptr___00;
  bool bVar13;
  longlong lVar14;
  TBoxSphereBounds<double,double> *pTVar15;
  undefined1 *puVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  longlong lVar18;
  TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
  *pTVar19;
  int iVar20;
  longlong *plVar21;
  uint *puVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 local_248;
  undefined1 local_247 [3];
  uint local_244;
  undefined1 local_240 [16];
  double local_230;
  undefined1 auStack_228 [16];
  double dStack_218;
  undefined1 local_210;
  undefined4 local_20f;
  undefined2 local_20b;
  undefined1 local_209;
  int local_208;
  uint uStack_204;
  undefined1 *puStack_200;
  undefined4 local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e0;
  undefined4 local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  int local_1a0;
  TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
  *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_190;
  int local_170;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  UTriangleSetComponent *local_158;
  longlong *local_150;
  TBitArray<FDefaultBitArrayAllocator> *local_148;
  TBoxSphereBounds<double,double> *local_140;
  TTransform<double> *local_138;
  TMatrix<double> local_128;
  
  local_158 = this;
  local_140 = __return_storage_ptr__;
  local_138 = param_1;
  if (this->bBoundsDirty == false) {
    pTVar15 = &this->Bounds;
  }
  else {
    pTVar19 = &this->TrianglesByMaterial;
    bVar11 = false;
    pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TrianglesByMaterial).field_0x10;
    iVar8 = *(int *)&(this->TrianglesByMaterial).field_0x28;
    local_210 = 0;
    local_20f = 0;
    local_20b = 0;
    local_209 = 0;
    local_208 = 0;
    uStack_204 = 1;
    iStack_1f4 = 0;
    iStack_1f0 = 0;
    local_240 = ZEXT816(0);
    local_230 = 0.0;
    auStack_228 = ZEXT816(0);
    dStack_218 = 0.0;
    if (iVar8 != 0) {
      puVar22 = *(uint **)&(this->TrianglesByMaterial).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)pTVar23;
      }
      uVar24 = *puVar22;
      iStack_1f0 = 0;
      local_208 = 0;
      while (uVar24 == 0) {
        iStack_1f0 = iStack_1f0 + 0x20;
        lVar14 = (longlong)local_208;
        local_208 = local_208 + 1;
        if ((int)((iVar8 + -1 >> 0x1f & 0x1fU) + iVar8 + -1) >> 5 < local_208) goto LAB_14caf05e1;
        uVar24 = puVar22[lVar14 + 1];
      }
      uStack_204 = -uVar24 & uVar24;
      uVar1 = (ulonglong)uStack_204 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_168 = (int)lVar14;
      iStack_1f4 = local_168 + -1 + iStack_1f0;
      if (iVar8 < iStack_1f4) {
LAB_14caf05e1:
        iStack_1f4 = iVar8;
      }
    }
    local_1f8 = 0xffffffff;
    uVar24 = *(uint *)&(this->TrianglesByMaterial).field_0x28;
    local_170 = *(int *)&(this->TrianglesByMaterial).field_0x8 -
                *(int *)&(this->TrianglesByMaterial).field_0x34;
    local_190._padding_ = CONCAT44(uStack_204,local_208);
    local_190.CurrentBitIndex = iStack_1f4;
    local_190.UnvisitedBitMask = 0xffffffff;
    local_190._28_4_ = uStack_1ec;
    local_190.BaseBitIndex = iStack_1f0;
    iVar20 = (int)uVar24 >> 5;
    uVar25 = uVar24 & 0xffffffe0;
    local_244 = uVar24;
    puStack_200 = (undefined1 *)pTVar23;
    local_198 = pTVar19;
    local_190.Array = pTVar23;
    local_148 = pTVar23;
    if ((((int)uVar24 < 0) || (iVar8 < (int)uVar24)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar10)();
      return pTVar15;
    }
    uVar9 = *(uint *)&(this->TrianglesByMaterial).field_0x28;
    if (uVar24 != uVar9) {
      puVar16 = *(undefined1 **)&(this->TrianglesByMaterial).field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = (undefined1 *)pTVar23;
      }
      uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar20 * 4);
      while (uVar24 == 0) {
        lVar14 = (longlong)iVar20;
        uVar25 = uVar25 + 0x20;
        iVar20 = iVar20 + 1;
        uVar24 = uVar9;
        local_244 = uVar9;
        if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar20)
        goto LAB_14caf06e6;
        uVar24 = *(uint *)(puVar16 + lVar14 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_164 = (int)lVar14;
      uVar24 = local_164 + -1 + uVar25;
      local_244 = uVar24;
      if ((int)uVar9 < (int)uVar24) {
        uVar24 = uVar9;
        local_244 = uVar9;
      }
    }
LAB_14caf06e6:
    uVar42 = auStack_228._8_4_;
    uVar43 = auStack_228._12_4_;
    uVar27 = auStack_228._0_4_;
    uVar41 = auStack_228._4_4_;
    uVar35 = local_240._8_4_;
    uVar37 = local_240._12_4_;
    uVar29 = local_240._0_4_;
    uVar33 = local_240._4_4_;
    while( true ) {
      if (*(int *)&pTVar19->field_0x8 - *(int *)&pTVar19->field_0x34 != local_170) {
        local_248 = 0;
        `TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_248);
      }
      if (((local_190.CurrentBitIndex == uVar24) && (local_190.Array == pTVar23)) &&
         (pTVar19 == &local_158->TrianglesByMaterial)) break;
      uStack_1e4 = 1;
      local_1e8 = 0;
      plVar21 = (longlong *)((longlong)local_190.CurrentBitIndex * 0x38 + *(longlong *)pTVar19);
      iVar8 = (int)plVar21[5];
      pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar21 + 2);
      iStack_1d4 = 0;
      iStack_1d0 = 0;
      if (iVar8 != 0) {
        pTVar17 = pTVar23;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
        }
        uVar24 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
        iStack_1d0 = 0;
        local_1e8 = 0;
        while (uVar24 == 0) {
          iStack_1d0 = iStack_1d0 + 0x20;
          lVar14 = (longlong)local_1e8;
          local_1e8 = local_1e8 + 1;
          if ((int)((iVar8 + -1 >> 0x1f & 0x1fU) + iVar8 + -1) >> 5 < local_1e8) goto LAB_14caf07ec;
          uVar24 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        }
        uStack_1e4 = -uVar24 & uVar24;
        uVar1 = (ulonglong)uStack_1e4 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_160 = (int)lVar14;
        iStack_1d4 = local_160 + -1 + iStack_1d0;
        if (iVar8 < iStack_1d4) {
LAB_14caf07ec:
          iStack_1d4 = iVar8;
        }
      }
      local_1d8 = 0xffffffff;
      uVar24 = *(uint *)(plVar21 + 5);
      local_1a0 = (int)plVar21[1] - *(int *)((longlong)plVar21 + 0x34);
      local_1c0._padding_ = CONCAT44(uStack_1e4,local_1e8);
      local_1c0.CurrentBitIndex = iStack_1d4;
      local_1c0.UnvisitedBitMask = 0xffffffff;
      local_1c0._28_4_ = uStack_1cc;
      local_1c0.BaseBitIndex = iStack_1d0;
      iVar20 = (int)uVar24 >> 5;
      uVar25 = uVar24 & 0xffffffe0;
      pTStack_1e0 = pTVar23;
      local_1c8 = plVar21;
      local_1c0.Array = pTVar23;
      local_150 = plVar21;
      if ((((int)uVar24 < 0) || (iVar8 < (int)uVar24)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        pTVar15 = (TBoxSphereBounds<double,double> *)(*pcVar10)();
        return pTVar15;
      }
      plVar12 = local_150;
      uVar9 = *(uint *)(plVar21 + 5);
      if (uVar24 != uVar9) {
        pTVar17 = pTVar23;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar21[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar21[4];
        }
        uVar24 = -1 << ((byte)uVar24 & 0x1f) &
                 *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
        while (uVar24 == 0) {
          lVar14 = (longlong)iVar20;
          uVar25 = uVar25 + 0x20;
          iVar20 = iVar20 + 1;
          uVar24 = uVar9;
          if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar20)
          goto LAB_14caf0900;
          uVar24 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar14 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_15c = (int)lVar14;
        uVar24 = local_15c + -1 + uVar25;
        if ((int)uVar9 < (int)uVar24) {
          uVar24 = uVar9;
        }
      }
LAB_14caf0900:
      while( true ) {
        if ((int)plVar21[1] - *(int *)((longlong)plVar21 + 0x34) != local_1a0) {
          local_247[0] = 0;
          `TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>::TRangedForConstIterator::
          operator!='::__l2::<lambda_1>::operator()(local_247);
        }
        if (((local_1c0.CurrentBitIndex == uVar24) && (local_1c0.Array == pTVar23)) &&
           (plVar21 == plVar12)) break;
        lVar18 = (longlong)local_1c0.CurrentBitIndex * 0xe0;
        lVar14 = *plVar21;
        if (bVar11) {
          dVar39 = *(double *)(lVar18 + 8 + lVar14);
          dVar3 = *(double *)(lVar18 + 0x10 + lVar14);
          uVar30 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar38 = dVar39;
          if ((double)CONCAT44(uVar33,uVar29) <= dVar39) {
            dVar38 = (double)CONCAT44(uVar33,uVar29);
          }
          dVar4 = *(double *)(lVar18 + 0x18 + lVar14);
          uVar26 = SUB84(dVar4,0);
          uVar31 = (undefined4)((ulonglong)dVar4 >> 0x20);
          uVar34 = SUB84(dVar3,0);
          uVar36 = uVar30;
          if ((double)CONCAT44(uVar37,uVar35) <= dVar3) {
            uVar34 = uVar35;
            uVar36 = uVar37;
          }
          uVar29 = SUB84(dVar39,0);
          uVar33 = (int)((ulonglong)dVar39 >> 0x20);
          if (dVar39 <= (double)CONCAT44(uVar41,uVar27)) {
            uVar29 = uVar27;
            uVar33 = uVar41;
          }
          uVar41 = uVar26;
          uVar35 = uVar31;
          if (local_230 <= dVar4) {
            uVar41 = SUB84(local_230,0);
            uVar35 = (undefined4)((ulonglong)local_230 >> 0x20);
          }
          if (dVar4 <= dStack_218) {
            uVar26 = SUB84(dStack_218,0);
            uVar31 = (undefined4)((ulonglong)dStack_218 >> 0x20);
          }
          uVar27 = SUB84(dVar3,0);
          if (dVar3 <= (double)CONCAT44(uVar43,uVar42)) {
            uVar27 = uVar42;
            uVar30 = uVar43;
          }
        }
        else {
          auVar7 = *(undefined1 (*) [16])(lVar18 + 8 + lVar14);
          uVar29 = auVar7._0_4_;
          uVar33 = auVar7._4_4_;
          uVar34 = auVar7._8_4_;
          uVar36 = auVar7._12_4_;
          bVar11 = true;
          uVar5 = *(undefined8 *)(lVar18 + 0x18 + lVar14);
          uVar26 = (undefined4)uVar5;
          uVar31 = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_210 = 1;
          dVar38 = auVar7._0_8_;
          uVar27 = uVar34;
          uVar30 = uVar36;
          uVar41 = uVar26;
          uVar35 = uVar31;
        }
        if (bVar11) {
          dVar3 = *(double *)(lVar18 + 0x50 + lVar14);
          dVar4 = *(double *)(lVar18 + 0x60 + lVar14);
          uVar44 = (undefined4)((ulonglong)dVar4 >> 0x20);
          dVar39 = dVar3;
          if (dVar38 <= dVar3) {
            dVar39 = dVar38;
          }
          dVar38 = *(double *)(lVar18 + 0x58 + lVar14);
          uVar28 = SUB84(dVar4,0);
          uVar32 = uVar44;
          if ((double)CONCAT44(uVar35,uVar41) <= dVar4) {
            uVar28 = uVar41;
            uVar32 = uVar35;
          }
          uVar35 = SUB84(dVar3,0);
          uVar37 = (int)((ulonglong)dVar3 >> 0x20);
          if (dVar3 <= (double)CONCAT44(uVar33,uVar29)) {
            uVar35 = uVar29;
            uVar37 = uVar33;
          }
          uVar29 = SUB84(dVar38,0);
          uVar33 = (int)((ulonglong)dVar38 >> 0x20);
          if ((double)CONCAT44(uVar36,uVar34) <= dVar38) {
            uVar29 = uVar34;
            uVar33 = uVar36;
          }
          if (dVar38 <= (double)CONCAT44(uVar30,uVar27)) {
            dVar38 = (double)CONCAT44(uVar30,uVar27);
          }
          uVar34 = SUB84(dVar4,0);
          if (dVar4 <= (double)CONCAT44(uVar31,uVar26)) {
            uVar34 = uVar26;
            uVar44 = uVar31;
          }
        }
        else {
          auVar7 = *(undefined1 (*) [16])(lVar18 + 0x50 + lVar14);
          uVar35 = auVar7._0_4_;
          uVar37 = auVar7._4_4_;
          uVar29 = auVar7._8_4_;
          uVar33 = auVar7._12_4_;
          bVar11 = true;
          uVar5 = *(undefined8 *)(lVar18 + 0x60 + lVar14);
          uVar28 = (undefined4)uVar5;
          uVar32 = (undefined4)((ulonglong)uVar5 >> 0x20);
          dVar38 = auVar7._8_8_;
          local_210 = 1;
          dVar39 = auVar7._0_8_;
          uVar34 = uVar28;
          uVar44 = uVar32;
        }
        if (bVar11) {
          dVar3 = *(double *)(lVar18 + 0x98 + lVar14);
          uVar41 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar4 = *(double *)(lVar18 + 0xa0 + lVar14);
          uVar42 = SUB84(dVar4,0);
          uVar43 = (undefined4)((ulonglong)dVar4 >> 0x20);
          dVar6 = *(double *)(lVar18 + 0xa8 + lVar14);
          uVar36 = (undefined4)((ulonglong)dVar6 >> 0x20);
          local_240._0_4_ = SUB84(dVar3,0);
          local_240._4_4_ = uVar41;
          if (dVar39 <= dVar3) {
            local_240._0_4_ = SUB84(dVar39,0);
            local_240._4_4_ = (undefined4)((ulonglong)dVar39 >> 0x20);
          }
          uVar27 = SUB84(dVar3,0);
          if (dVar3 <= (double)CONCAT44(uVar37,uVar35)) {
            uVar27 = uVar35;
            uVar41 = uVar37;
          }
          local_240._8_4_ = uVar42;
          local_240._12_4_ = uVar43;
          if ((double)CONCAT44(uVar33,uVar29) <= dVar4) {
            local_240._8_4_ = uVar29;
            local_240._12_4_ = uVar33;
          }
          uVar29 = SUB84(dVar6,0);
          uVar33 = uVar36;
          if ((double)CONCAT44(uVar32,uVar28) <= dVar6) {
            uVar29 = uVar28;
            uVar33 = uVar32;
          }
          if (dVar4 <= dVar38) {
            uVar42 = SUB84(dVar38,0);
            uVar43 = (undefined4)((ulonglong)dVar38 >> 0x20);
          }
          uVar35 = SUB84(dVar6,0);
          if (dVar6 <= (double)CONCAT44(uVar44,uVar34)) {
            uVar35 = uVar34;
            uVar36 = uVar44;
          }
          auStack_228._4_4_ = uVar41;
          auStack_228._0_4_ = uVar27;
          local_230 = (double)CONCAT44(uVar33,uVar29);
          auStack_228._12_4_ = uVar43;
          auStack_228._8_4_ = uVar42;
          dStack_218 = (double)CONCAT44(uVar36,uVar35);
          uVar29 = local_240._0_4_;
          uVar33 = local_240._4_4_;
          uVar35 = local_240._8_4_;
          uVar37 = local_240._12_4_;
        }
        else {
          pauVar2 = (undefined1 (*) [16])(lVar18 + 0x98 + lVar14);
          uVar27 = *(undefined4 *)*pauVar2;
          uVar41 = *(undefined4 *)(*pauVar2 + 4);
          uVar42 = *(undefined4 *)(*pauVar2 + 8);
          uVar43 = *(undefined4 *)(*pauVar2 + 0xc);
          local_240 = *pauVar2;
          auStack_228 = *pauVar2;
          bVar11 = true;
          local_230 = *(double *)(lVar18 + 0xa8 + lVar14);
          local_210 = 1;
          uVar29 = uVar27;
          uVar33 = uVar41;
          uVar35 = uVar42;
          uVar37 = uVar43;
          dStack_218 = local_230;
        }
        local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
        plVar21 = local_1c8;
      }
      local_190.UnvisitedBitMask = local_190.UnvisitedBitMask & ~local_190._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_190);
      pTVar19 = local_198;
      pTVar23 = local_148;
      uVar24 = local_244;
    }
    dVar6 = (double)CONCAT44(uVar43,uVar42) - (double)CONCAT44(uVar37,uVar35);
    pTVar15 = &local_158->Bounds;
    dVar4 = (double)CONCAT44(uVar41,uVar27) - (double)CONCAT44(uVar33,uVar29);
    dVar40 = dStack_218 - local_230;
    dVar39 = dVar6 * __real_3fe0000000000000;
    dVar3 = dVar4 * __real_3fe0000000000000;
    dVar38 = dVar40 * __real_3fe0000000000000;
    (pTVar15->Origin).field0_0x0._s_0.X = (double)CONCAT44(uVar33,uVar29) + dVar3;
    (local_158->Bounds).Origin.field0_0x0._s_0.Y = (double)CONCAT44(uVar37,uVar35) + dVar39;
    (local_158->Bounds).Origin.field0_0x0._s_0.Z = local_230 + dVar38;
    (local_158->Bounds).BoxExtent.field0_0x0._s_0.X = dVar3;
    (local_158->Bounds).BoxExtent.field0_0x0._s_0.Y = dVar39;
    (local_158->Bounds).BoxExtent.field0_0x0._s_0.Z = dVar38;
    (local_158->Bounds).SphereRadius =
         SQRT((dVar6 * dVar6 + dVar4 * dVar4 + dVar40 * dVar40) * __real_3fd0000000000000);
    local_158->bBoundsDirty = false;
  }
  __return_storage_ptr___00 = local_140;
  UE::Math::TTransform<double>::ToMatrixWithScale(local_138,&local_128);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            (pTVar15,__return_storage_ptr___00,&local_128);
  return __return_storage_ptr___00;
}

// Clear @ 14caf3e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTriangleSetComponent::Clear(UTriangleSetComponent *this)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)&(this->Triangles).field_0x8 = 0;
  if (*(int *)&(this->Triangles).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->Triangles,0,(int *)&(this->Triangles).field_0xc);
  }
  *(undefined4 *)&(this->Triangles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Triangles).field_0x34 = 0;
  *(undefined4 *)&(this->Triangles).field_0x28 = 0;
  iVar1 = 0;
  iVar2 = *(int *)&(this->TrianglesByMaterial).field_0x8;
  if (0 < iVar2 - *(int *)&(this->TrianglesByMaterial).field_0x34) {
    do {
      (**(code **)(this->_padding_ + 0x6b8))(this,iVar1,0);
      iVar2 = *(int *)&(this->TrianglesByMaterial).field_0x8;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2 - *(int *)&(this->TrianglesByMaterial).field_0x34);
  }
  TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
  ::DestroyElements(&this->TrianglesByMaterial,0,iVar2);
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x8 = 0;
  if (*(int *)&(this->TrianglesByMaterial).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)&this->TrianglesByMaterial,0,
               (int *)&(this->TrianglesByMaterial).field_0xc);
  }
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x34 = 0;
  *(undefined4 *)&(this->TrianglesByMaterial).field_0x28 = 0;
  TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
           *)&this->MaterialToIndex);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// CreateSceneProxy @ 14caff6f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UTriangleSetComponent::CreateSceneProxy(UTriangleSetComponent *this)

{
  FTriangleSetSceneProxy *pFVar1;
  
  if (0 < *(int *)&(this->Triangles).field_0x8 - *(int *)&(this->Triangles).field_0x34) {
    pFVar1 = ::operator_new(0x660);
    if (pFVar1 != (FTriangleSetSceneProxy *)0x0) {
      pFVar1 = FTriangleSetSceneProxy::FTriangleSetSceneProxy(pFVar1,this);
      return (FPrimitiveSceneProxy *)pFVar1;
    }
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// FindOrAddMaterialIndex @ 14cb09a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UTriangleSetComponent::FindOrAddMaterialIndex
          (UTriangleSetComponent *this,UMaterialInterface *param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined1 auStackY_b8 [32];
  int local_88 [2];
  UMaterialInterface *local_80;
  TPairInitializer<UMaterialInterface_*_const_&,int_const_&> local_78;
  int *local_68;
  undefined1 local_60 [24];
  undefined8 uStack_48;
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  piVar7 = (int *)0x0;
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  piVar3 = piVar7;
  if (*(int *)&(this->MaterialToIndex).field_0x8 != *(int *)&(this->MaterialToIndex).field_0x34) {
    puVar6 = *(undefined1 **)&(this->MaterialToIndex).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->MaterialToIndex).field_0x38;
    }
    iVar2 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->MaterialToIndex).field_0x48 - 1U &
                              (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->MaterialToIndex).field_0x0;
      do {
        piVar3 = (int *)(lVar1 + (longlong)iVar2 * 0x18);
        if (*(UMaterialInterface **)(lVar1 + (longlong)iVar2 * 0x18) == param_1) break;
        iVar2 = piVar3[4];
        piVar3 = piVar7;
      } while (iVar2 != -1);
    }
  }
  piVar5 = piVar3 + 2;
  if (piVar3 == (int *)0x0) {
    piVar5 = piVar7;
  }
  if (piVar5 == (int *)0x0) {
    local_60._0_8_ = (FScriptContainerElement *)0x0;
    local_60._16_8_ = 0;
    uStack_48 = 0;
    local_60._8_8_ = 0;
    local_38 = ___xmm_00000000ffffffff0000008000000000;
    uStack_30 = _UNK_150631d98;
    local_40 = (void *)0x0;
    local_80 = param_1;
    local_88[0] = TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
                  ::Add(&this->TrianglesByMaterial,
                        (TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator> *)local_60);
    iVar2 = SUB84(local_60._8_8_,4);
    local_60._8_8_ = local_60._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,8,0,(ForAnyElementType *)local_60,0,(int *)(local_60 + 0xc));
    }
    uVar4 = local_38._4_4_;
    uStack_30 = 0xffffffff;
    local_38 = (ulonglong)local_38._4_4_ << 0x20;
    if (0x80 < uVar4) {
      local_38 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_60 + 0x10),0);
    }
    if (local_40 != (void *)0x0) {
      FMemory::Free(local_40);
    }
    if ((FScriptContainerElement *)local_60._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_60._0_8_);
    }
    local_78.Value = (int *)&local_80;
    local_68 = local_88;
    TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UMaterialInterface_*_const_&,int_const_&>_>
              ((TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
                *)&this->MaterialToIndex,&local_78,(bool *)&local_78.Value);
    (**(code **)(this->_padding_ + 0x6b8))(this,local_88[0],local_80);
  }
  else {
    local_88[0] = *piVar5;
  }
  return local_88[0];
}

// GetNumMaterials @ 14cb117f0

int __thiscall UTriangleSetComponent::GetNumMaterials(UTriangleSetComponent *this)

{
  return *(int *)&(this->TrianglesByMaterial).field_0x8;
}

// GetPrivateStaticClass @ 14cb13270

UClass * __cdecl UTriangleSetComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTriangleSetComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"TriangleSetComponent",
               &Z_Registration_Info_UClass_UTriangleSetComponent.InnerSingleton,
               StaticRegisterNativesUTriangleSetComponent,0x690,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTriangleSetComponent>,
               InternalVTableHelperCtorCaller<UTriangleSetComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTriangleSetComponent.InnerSingleton;
}

// InsertTriangle @ 14cb21680

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
UTriangleSetComponent::InsertTriangle
          (UTriangleSetComponent *this,int param_1,FRenderableTriangle *param_2)

{
  int iVar1;
  int iVar2;
  FSparseArrayAllocationInfo *pFVar3;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = FindOrAddMaterialIndex(this,(param_2->Material).field0_0x0.DebugPtr);
  iVar2 = TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>::Add
                    ((TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator> *)
                     ((longlong)iVar1 * 0x38 + *(longlong *)&this->TrianglesByMaterial),param_2);
  pFVar3 = TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *)&this->Triangles,
                      &local_18,param_1);
  if (pFVar3->Pointer != (undefined8 *)0x0) {
    *(ulonglong *)pFVar3->Pointer = CONCAT44(iVar2,iVar1);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
}

// IsTriangleValid @ 14cb231f0

bool __thiscall UTriangleSetComponent::IsTriangleValid(UTriangleSetComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Triangles).field_0x28)) {
    if (*(int *)&(this->Triangles).field_0x28 <= param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->Triangles).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Triangles).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
      return true;
    }
  }
  return false;
}

// RemoveTriangle @ 14cb2ee10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTriangleSetComponent::RemoveTriangle(UTriangleSetComponent *this,int param_1)

{
  undefined1 *puVar1;
  TMap<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
  *this_00;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  byte bVar7;
  TMap<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
  *pTVar8;
  bool bVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  int local_res20;
  UMaterialInterface *local_e8;
  longlong local_e0;
  TMap<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TMap<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  UMaterialInterface *local_78;
  ulonglong uStack_70;
  undefined4 local_4c;
  
  local_e0 = (longlong)param_1 * 8;
  uVar5 = *(ulonglong *)(local_e0 + *(longlong *)&this->Triangles);
  iVar17 = (int)uVar5;
  plVar15 = (longlong *)((longlong)iVar17 * 0x38 + *(longlong *)&this->TrianglesByMaterial);
  iVar14 = (int)(uVar5 >> 0x20);
  bVar7 = (byte)(uVar5 >> 0x20) & 0x1f;
  uVar20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
  lVar13 = *plVar15;
  local_res10 = param_1;
  if ((((longlong)uVar5 < 0) || ((int)plVar15[5] <= iVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar4 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  plVar11 = (longlong *)plVar15[4];
  if ((longlong *)plVar15[4] == (longlong *)0x0) {
    plVar11 = plVar15 + 2;
  }
  if (((*(uint *)((longlong)plVar11 + lVar4) & uVar20) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0xc5,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(int *)((longlong)plVar15 + 0x34) != 0) {
    *(int *)((longlong)(int)plVar15[6] * 0xe0 + lVar13) = iVar14;
  }
  uVar10 = 0xffffffff;
  *(undefined4 *)((longlong)iVar14 * 0xe0 + lVar13) = 0xffffffff;
  if (0 < *(int *)((longlong)plVar15 + 0x34)) {
    uVar10 = (undefined4)plVar15[6];
  }
  *(undefined4 *)((longlong)iVar14 * 0xe0 + 4 + lVar13) = uVar10;
  *(int *)((longlong)plVar15 + 0x34) = *(int *)((longlong)plVar15 + 0x34) + 1;
  *(int *)(plVar15 + 6) = iVar14;
  if ((((longlong)uVar5 < 0) || ((int)plVar15[5] <= iVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar11 = (longlong *)plVar15[4];
  if ((longlong *)plVar15[4] == (longlong *)0x0) {
    plVar11 = plVar15 + 2;
  }
  puVar18 = (uint *)((longlong)plVar11 + lVar4);
  *puVar18 = *puVar18 & ~uVar20;
  if ((int)plVar15[1] == *(int *)((longlong)plVar15 + 0x34)) {
    uVar20 = 1;
    TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
    ::RemoveAt(&this->TrianglesByMaterial,iVar17,1);
    iStack_d0 = 0;
    puVar1 = &(this->MaterialToIndex).field_0x10;
    iVar14 = *(int *)&(this->MaterialToIndex).field_0x28;
    this_00 = &this->MaterialToIndex;
    local_b8 = 0;
    iStack_bc = 0;
    if (iVar14 != 0) {
      puVar18 = *(uint **)&(this->MaterialToIndex).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar1;
      }
      uVar16 = *puVar18;
      while (uVar16 == 0) {
        lVar13 = (longlong)iStack_d0;
        local_b8 = local_b8 + 0x20;
        iStack_d0 = iStack_d0 + 1;
        iStack_bc = iVar14;
        if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_14cb2f01d;
        uVar16 = puVar18[lVar13 + 1];
      }
      uVar20 = -uVar16 & uVar16;
      uVar3 = (ulonglong)uVar20 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      iStack_bc = local_b8 + -1 + local_res18;
      if (iVar14 < iStack_bc) {
        iStack_bc = iVar14;
      }
    }
LAB_14cb2f01d:
    uVar16 = *(uint *)&(this->MaterialToIndex).field_0x28;
    uStack_b4 = local_4c;
    uVar19 = uVar16 & 0xffffffe0;
    iStack_b0 = *(int *)&(this->MaterialToIndex).field_0x8 -
                *(int *)&(this->MaterialToIndex).field_0x34;
    uStack_c0 = 0xffffffff;
    TStack_a0._padding_ = CONCAT44(uVar20,iStack_d0);
    TStack_a0.CurrentBitIndex = iStack_bc;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar16 >> 5;
    TStack_a0._28_4_ = local_4c;
    TStack_a0.BaseBitIndex = local_b8;
    uStack_80 = CONCAT44(uStack_ac,iStack_b0);
    local_d8 = this_00;
    uStack_cc = uVar20;
    local_c8 = puVar1;
    local_a8 = this_00;
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (((int)uVar16 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar20 = *(uint *)&(this->MaterialToIndex).field_0x28;
    if (uVar16 != uVar20) {
      puVar12 = *(undefined1 **)&(this->MaterialToIndex).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar14 * 4);
      while (uVar16 == 0) {
        lVar13 = (longlong)iVar14;
        uVar19 = uVar19 + 0x20;
        iVar14 = iVar14 + 1;
        uVar16 = uVar20;
        if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14cb2f120;
        uVar16 = *(uint *)(puVar12 + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res20 = (int)lVar13;
      uVar16 = local_res20 + -1 + uVar19;
      if ((int)uVar20 < (int)uVar16) {
        uVar16 = uVar20;
      }
    }
LAB_14cb2f120:
    do {
      pTVar8 = local_a8;
      if (*(int *)(&local_a8->field_0x0 + 8) - *(int *)(&local_a8->field_0x0 + 0x34) !=
          (int)uStack_80) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_a0.CurrentBitIndex == uVar16) &&
          (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == this_00)) goto LAB_14cb2f364;
      lVar13 = *(longlong *)&pTVar8->field_0x0;
      puVar2 = (ulonglong *)(lVar13 + (longlong)TStack_a0.CurrentBitIndex * 0x18);
      local_78 = (UMaterialInterface *)*puVar2;
      uStack_70 = puVar2[1];
      if ((int)*(undefined8 *)(lVar13 + 8 + (longlong)TStack_a0.CurrentBitIndex * 0x18) == iVar17)
      goto LAB_14cb2f184;
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    } while( true );
  }
LAB_14cb2f21b:
  iVar14 = local_res10;
  puVar1 = &(this->Triangles).field_0x10;
  lVar13 = *(longlong *)&this->Triangles;
  bVar7 = (byte)local_res10 & 0x1f;
  uVar20 = 1 << bVar7 | 1U >> 0x20 - bVar7;
  if (((local_res10 < 0) || (*(int *)&(this->Triangles).field_0x28 <= local_res10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar12 = *(undefined1 **)&(this->Triangles).field_0x20;
  lVar4 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (puVar12 == (undefined1 *)0x0) {
    puVar12 = puVar1;
  }
  if (((*(uint *)(puVar12 + lVar4) & uVar20) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationFlags[Index]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                         ,0xc5,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(int *)&(this->Triangles).field_0x34 != 0) {
    *(int *)(lVar13 + (longlong)*(int *)&(this->Triangles).field_0x30 * 8) = iVar14;
  }
  uVar10 = 0xffffffff;
  *(undefined4 *)(local_e0 + lVar13) = 0xffffffff;
  if (0 < *(int *)&(this->Triangles).field_0x34) {
    uVar10 = *(undefined4 *)&(this->Triangles).field_0x30;
  }
  *(undefined4 *)(local_e0 + 4 + lVar13) = uVar10;
  puVar12 = &(this->Triangles).field_0x34;
  *(int *)puVar12 = *(int *)puVar12 + 1;
  *(int *)&(this->Triangles).field_0x30 = iVar14;
  if (((iVar14 < 0) || (*(int *)&(this->Triangles).field_0x28 <= iVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar12 = *(undefined1 **)&(this->Triangles).field_0x20;
  if (puVar12 == (undefined1 *)0x0) {
    puVar12 = puVar1;
  }
  *(uint *)(puVar12 + lVar4) = *(uint *)(puVar12 + lVar4) & ~uVar20;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  this->bBoundsDirty = true;
  return;
LAB_14cb2f184:
  if (local_78 == (UMaterialInterface *)0x0) {
LAB_14cb2f364:
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3004286291626950978>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\TriangleSetComponent.cpp"
                       ,0x142,"MaterialToRemove");
    if (bVar9) goto code_r0x00014cb2f209;
  }
  else {
    local_e8 = local_78;
    if (((*(int *)&(this->MaterialToIndex).field_0x8 == *(int *)&(this->MaterialToIndex).field_0x34)
        || (uVar20 = ((uint)((ulonglong)local_78 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_78 >> 4)) * -0x7a143595,
           uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb,
           iVar14 = TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
                    ::RemoveImpl<UMaterialInterface_const_*>
                              ((TSet<TTuple<UMaterialInterface_*,int>,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>,FDefaultSetAllocator>
                                *)this_00,uVar20 >> 0x10 ^ uVar20,&local_e8), iVar14 != 1)) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3004286291626950981>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\TriangleSetComponent.cpp"
                           ,0x145,"NumRemoved == 1"), bVar9)) {
code_r0x00014cb2f209:
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x6b8))(this,uVar5 & 0xffffffff,0);
  goto LAB_14cb2f21b;
}

// ReserveTriangles @ 14cb320b0

void __thiscall UTriangleSetComponent::ReserveTriangles(UTriangleSetComponent *this,int param_1)

{
  TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::Reserve
            ((TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *)&this->Triangles,param_1);
  return;
}

// SetAllTrianglesColor @ 14cb34d80

void __thiscall
UTriangleSetComponent::SetAllTrianglesColor(UTriangleSetComponent *this,FColor *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
  *pTVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  uint *puVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  int local_108;
  uint uStack_104;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  uint uStack_e4;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  int local_a0;
  TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  int local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
  *local_58;
  longlong *local_50;
  TBitArray<FDefaultBitArrayAllocator> *local_48;
  
  pTVar8 = &this->TrianglesByMaterial;
  uStack_104 = 1;
  iVar2 = *(int *)&(this->TrianglesByMaterial).field_0x28;
  pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TrianglesByMaterial).field_0x10;
  local_108 = 0;
  iStack_f4 = 0;
  iStack_f0 = 0;
  if (iVar2 != 0) {
    puVar14 = *(uint **)&(this->TrianglesByMaterial).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)pTVar15;
    }
    uVar9 = *puVar14;
    local_108 = 0;
    iStack_f0 = 0;
    while (uVar9 == 0) {
      iStack_f0 = iStack_f0 + 0x20;
      lVar7 = (longlong)local_108;
      local_108 = local_108 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_108) goto LAB_14cb34e50;
      uVar9 = puVar14[lVar7 + 1];
    }
    uStack_104 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_104 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_68 = (int)lVar7;
    iStack_f4 = local_68 + -1 + iStack_f0;
    if (iVar2 < iStack_f4) {
LAB_14cb34e50:
      iStack_f4 = iVar2;
    }
  }
  uVar9 = *(uint *)&(this->TrianglesByMaterial).field_0x28;
  local_70 = *(int *)&(this->TrianglesByMaterial).field_0x8 -
             *(int *)&(this->TrianglesByMaterial).field_0x34;
  local_90._padding_ = CONCAT44(uStack_104,local_108);
  local_90.CurrentBitIndex = iStack_f4;
  local_90.UnvisitedBitMask = 0xffffffff;
  local_90._28_4_ = uStack_ec;
  local_90.BaseBitIndex = iStack_f0;
  iVar10 = (int)uVar9 >> 5;
  uVar16 = uVar9 & 0xffffffe0;
  local_res20 = uVar9;
  local_98 = pTVar8;
  local_90.Array = pTVar15;
  local_58 = pTVar8;
  local_48 = pTVar15;
  if ((((int)uVar9 < 0) || (iVar2 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->TrianglesByMaterial).field_0x28;
  if (uVar9 != uVar3) {
    puVar12 = *(undefined1 **)&(this->TrianglesByMaterial).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = (undefined1 *)pTVar15;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar3;
      local_res20 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cb34f42;
      uVar9 = *(uint *)(puVar12 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_64 = (int)lVar7;
    uVar9 = local_64 + -1 + uVar16;
    local_res20 = uVar9;
    if ((int)uVar3 < (int)uVar9) {
      uVar9 = uVar3;
      local_res20 = uVar3;
    }
  }
LAB_14cb34f42:
  do {
    if (*(int *)&pTVar8->field_0x8 - *(int *)&pTVar8->field_0x34 != local_70) {
      local_res8[0] = 0;
      `TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((local_90.CurrentBitIndex == uVar9) && (local_90.Array == pTVar15)) && (pTVar8 == local_58)
       ) {
      return;
    }
    uStack_e4 = 1;
    local_e8 = 0;
    plVar11 = (longlong *)((longlong)local_90.CurrentBitIndex * 0x38 + *(longlong *)pTVar8);
    iVar2 = (int)plVar11[5];
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar11 + 2);
    iStack_d4 = 0;
    iStack_d0 = 0;
    if (iVar2 != 0) {
      pTVar13 = pTVar15;
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
      }
      uVar9 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      local_e8 = 0;
      while (uVar9 == 0) {
        iStack_d0 = iStack_d0 + 0x20;
        lVar7 = (longlong)local_e8;
        local_e8 = local_e8 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_e8) goto LAB_14cb3501d;
        uVar9 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uStack_e4 = -uVar9 & uVar9;
      uVar1 = (ulonglong)uStack_e4 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_60 = (int)lVar7;
      iStack_d4 = local_60 + -1 + iStack_d0;
      if (iVar2 < iStack_d4) {
LAB_14cb3501d:
        iStack_d4 = iVar2;
      }
    }
    uVar9 = *(uint *)(plVar11 + 5);
    local_a0 = (int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34);
    local_c0._padding_ = CONCAT44(uStack_e4,local_e8);
    local_c0.CurrentBitIndex = iStack_d4;
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0._28_4_ = uStack_cc;
    local_c0.BaseBitIndex = iStack_d0;
    iVar10 = (int)uVar9 >> 5;
    uVar16 = uVar9 & 0xffffffe0;
    local_c0.Array = pTVar15;
    local_50 = plVar11;
    if ((((int)uVar9 < 0) || (iVar2 < (int)uVar9)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar5 = local_50;
    uVar3 = *(uint *)(plVar11 + 5);
    if (uVar9 != uVar3) {
      pTVar13 = pTVar15;
      if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
      }
      uVar9 = -1 << ((byte)uVar9 & 0x1f) &
              *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
      while (uVar9 == 0) {
        lVar7 = (longlong)iVar10;
        uVar16 = uVar16 + 0x20;
        iVar10 = iVar10 + 1;
        uVar9 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14cb35104;
        uVar9 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_5c = (int)lVar7;
      uVar9 = local_5c + -1 + uVar16;
      if ((int)uVar3 < (int)uVar9) {
        uVar9 = uVar3;
      }
    }
LAB_14cb35104:
    while( true ) {
      if ((int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34) != local_a0) {
        local_res18[0] = 0;
        `TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>::TRangedForIterator::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((local_c0.CurrentBitIndex == uVar9) && (local_c0.Array == pTVar15)) &&
         (plVar11 == plVar5)) break;
      lVar7 = (longlong)local_c0.CurrentBitIndex * 0xe0 + *plVar11;
      ((FColor_u_0 *)(lVar7 + 0x48))->_s_0 = (FColor_u_0_s_0)param_1->field0_0x0;
      ((FColor_u_0 *)(lVar7 + 0x90))->_s_0 = (FColor_u_0_s_0)param_1->field0_0x0;
      ((FColor_u_0 *)(lVar7 + 0xd8))->_s_0 = (FColor_u_0_s_0)param_1->field0_0x0;
      local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
    }
    local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
    pTVar8 = local_98;
    pTVar15 = local_48;
    uVar9 = local_res20;
  } while( true );
}

// SetAllTrianglesMaterial @ 14cb351b0

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
UTriangleSetComponent::SetAllTrianglesMaterial
          (UTriangleSetComponent *this,UMaterialInterface *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  FSparseArrayAllocationInfo local_158;
  undefined4 local_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  TSparseArray<TTuple<int,int>,FDefaultSparseArrayAllocator> *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_130;
  TObjectPtr<UMaterialInterface>_u_0 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  iVar4 = FindOrAddMaterialIndex(this,param_1);
  local_158._4_4_ = 1;
  local_158.Pointer = &(this->Triangles).field_0x10;
  local_158.Index = 0;
  iVar5 = *(int *)&(this->Triangles).field_0x28;
  iStack_144 = 0;
  iStack_140 = 0;
  if (iVar5 != 0) {
    puVar10 = *(uint **)&(this->Triangles).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = local_158.Pointer;
    }
    uVar2 = *puVar10;
    iStack_140 = 0;
    local_158.Index = 0;
    while (uVar2 == 0) {
      iStack_140 = iStack_140 + 0x20;
      lVar8 = (longlong)local_158.Index;
      local_158.Index = local_158.Index + 1;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_158.Index)
      goto LAB_14cb35295;
      uVar2 = puVar10[lVar8 + 1];
    }
    local_158._4_4_ = -uVar2 & uVar2;
    uVar1 = (ulonglong)(uint)local_158._4_4_ * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_144 = iStack_140 + -1 + (int)lVar8;
    if (iVar5 < iStack_144) {
LAB_14cb35295:
      iStack_144 = iVar5;
    }
  }
  local_148 = 0xffffffff;
  local_138 = &this->Triangles;
  local_130._padding_ = CONCAT44(local_158._4_4_,local_158.Index);
  local_130.UnvisitedBitMask = 0xffffffff;
  local_130.CurrentBitIndex = iStack_144;
  local_130._28_4_ = uStack_13c;
  local_130.BaseBitIndex = iStack_140;
  local_130.Array = local_158.Pointer;
  if (iStack_144 < iVar5) {
    do {
      iVar3 = local_130.CurrentBitIndex;
      iVar5 = *(int *)(*(longlong *)local_138 + (longlong)local_130.CurrentBitIndex * 8);
      if (iVar5 != iVar4) {
        puVar9 = (undefined8 *)
                 ((longlong)
                  *(int *)(*(longlong *)local_138 + 4 + (longlong)local_130.CurrentBitIndex * 8) *
                  0xe0 + *(longlong *)
                          ((longlong)iVar5 * 0x38 + *(longlong *)&this->TrianglesByMaterial));
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UObject *)*puVar9 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)*puVar9);
        }
        local_100 = puVar9[1];
        uStack_f8 = puVar9[2];
        local_f0 = puVar9[3];
        uStack_e8 = puVar9[4];
        local_e0 = puVar9[5];
        uStack_d8 = puVar9[6];
        local_d0 = puVar9[7];
        uStack_c8 = puVar9[8];
        local_c0 = puVar9[9];
        local_a8 = puVar9[0xc];
        uStack_a0 = puVar9[0xd];
        local_b8 = puVar9[10];
        uStack_b0 = puVar9[0xb];
        local_88 = puVar9[0x10];
        uStack_80 = puVar9[0x11];
        local_98 = puVar9[0xe];
        uStack_90 = puVar9[0xf];
        local_70 = puVar9[0x13];
        uStack_68 = puVar9[0x14];
        local_78 = puVar9[0x12];
        local_60 = puVar9[0x15];
        uStack_58 = puVar9[0x16];
        local_50 = puVar9[0x17];
        uStack_48 = puVar9[0x18];
        local_40 = puVar9[0x19];
        uStack_38 = puVar9[0x1a];
        local_30 = puVar9[0x1b];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UMaterialInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_108.DebugPtr = param_1;
        RemoveTriangle(this,iVar3);
        iVar5 = FindOrAddMaterialIndex(this,param_1);
        iVar6 = TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>::Add
                          ((TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator> *)
                           ((longlong)iVar5 * 0x38 + *(longlong *)&this->TrianglesByMaterial),
                           (FRenderableTriangle *)&local_108.ObjectPtr);
        pFVar7 = TSparseArrayBase<8,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                           ((TSparseArrayBase<8,4,FDefaultSparseArrayAllocator> *)&this->Triangles,
                            &local_158,iVar3);
        if (pFVar7->Pointer != (undefined8 *)0x0) {
          *(ulonglong *)pFVar7->Pointer = CONCAT44(iVar6,iVar5);
        }
        UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
        this->bBoundsDirty = true;
      }
      local_130.UnvisitedBitMask = local_130.UnvisitedBitMask & ~local_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_130);
    } while (local_130.CurrentBitIndex < (local_130.Array)->NumBits);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// StaticRegisterNativesUTriangleSetComponent @ 14cb3ecd0

void __cdecl UTriangleSetComponent::StaticRegisterNativesUTriangleSetComponent(void)

{
  return;
}

