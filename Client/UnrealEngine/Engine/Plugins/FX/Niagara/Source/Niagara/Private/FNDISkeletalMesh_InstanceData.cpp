// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// CalculateComponentTransform @ 149220ef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
FNDISkeletalMesh_InstanceData::CalculateComponentTransform
          (FNDISkeletalMesh_InstanceData *this,TTransform<double> *__return_storage_ptr__,
          FNiagaraSystemInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  UObject *pUVar18;
  
  pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  dVar17 = __real_c140000000000000;
  if (pUVar18 == (UObject *)0x0) {
    dVar17 = (param_1->WorldTransform).Rotation.XY.m128d_f64[1];
    dVar5 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[0];
    dVar7 = (param_1->WorldTransform).Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (param_1->WorldTransform).Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar17;
    dVar17 = (param_1->WorldTransform).Translation.XY.m128d_f64[0];
    dVar8 = (param_1->WorldTransform).Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar7;
    dVar5 = (param_1->WorldTransform).Translation.ZW.m128d_f64[0];
    dVar7 = (param_1->WorldTransform).Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar17;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar8;
    dVar17 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[0];
    dVar8 = (param_1->WorldTransform).Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar7;
    dVar5 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar17;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar8;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar7;
  }
  else {
    fVar1 = (param_1->LWCTile).field0_0x0._s_0.X;
    fVar2 = (param_1->LWCTile).field0_0x0._s_0.Y;
    fVar3 = (param_1->LWCTile).field0_0x0._s_0.Z;
    dVar10 = *(double *)&pUVar18[0xc].field_0x18;
    dVar11 = *(double *)&pUVar18[0xc].field_0x20;
    dVar12 = *(double *)(pUVar18 + 0xd);
    dVar13 = *(double *)(pUVar18 + 0xe);
    dVar14 = *(double *)&pUVar18[0xe].field_0x8;
    dVar15 = *(double *)&pUVar18[0xe].field_0x10;
    dVar16 = *(double *)&pUVar18[0xe].field_0x18;
    dVar8 = *(double *)&pUVar18[0xd].field_0x8;
    dVar5 = *(double *)&pUVar18[0xd].field_0x10;
    dVar9 = *(double *)&pUVar18[0xd].field_0x18;
    dVar7 = *(double *)&pUVar18[0xd].field_0x20;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)&pUVar18[0xc].field_0x10;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar10;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar11;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar12;
    dVar5 = dVar5 + (double)fVar2 * dVar17;
    dVar7 = dVar7 + 0.0;
    auVar4._8_4_ = SUB84(dVar5,0);
    auVar4._0_8_ = dVar8 + (double)fVar1 * dVar17;
    auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar4;
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = dVar9 + (double)fVar3 * dVar17;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar13;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar14;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar15;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar16;
  }
  return __return_storage_ptr__;
}

// HasColorData @ 14923c550

bool __thiscall FNDISkeletalMesh_InstanceData::HasColorData(FNDISkeletalMesh_InstanceData *this)

{
  FSkeletalMeshLODRenderData *pFVar1;
  
  pFVar1 = (this->CachedLODData).Reference;
  if ((pFVar1 != (FSkeletalMeshLODRenderData *)0x0) &&
     ((pFVar1->StaticVertexBuffers).ColorVertexBuffer.NumVertices != 0)) {
    return true;
  }
  return false;
}

// Init @ 14923cb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
FNDISkeletalMesh_InstanceData::Init
          (FNDISkeletalMesh_InstanceData *this,UNiagaraDataInterfaceSkeletalMesh *param_1,
          FNiagaraSystemInstance *param_2)

{
  atomic<int> *paVar1;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FNDISkeletalMesh_InstanceData::FCachedSocketInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  TStaticArray<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,2,4294967295> *pTVar5
  ;
  atomic<int> aVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  ENDISkeletalMesh_SkinningMode EVar11;
  char cVar12;
  int iVar13;
  FSkeletalMeshLODRenderData *pFVar14;
  FRawStaticIndexBuffer16or32Interface *pFVar15;
  UNiagaraSystem *pUVar16;
  FScriptContainerElement *pFVar17;
  code *pcVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  FSkeletalMeshSkinningDataUsage FVar24;
  FSkeletalMeshSkinningData *pFVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  bool bVar32;
  undefined1 uVar33;
  int iVar34;
  GPUSkinBoneInfluenceType GVar35;
  UClass *pUVar36;
  USceneComponent *pUVar37;
  USkeletalMesh *this_00;
  TMatrix<double> *pTVar38;
  longlong *plVar39;
  FNiagaraWorldManager *pFVar40;
  FNDI_SkeletalMesh_GeneratedData *pFVar41;
  FSkeletalMeshSkinningDataHandle *pFVar42;
  FMeshUvMappingHandleBase *pFVar43;
  FSkeletalMeshConnectivityHandle *pFVar44;
  USkeletalMeshComponent *pUVar45;
  USkeletalMesh *pUVar46;
  FSkinWeightVertexBuffer *pFVar47;
  longlong lVar48;
  FRawStaticIndexBuffer16or32Interface *pFVar49;
  FReferenceSkeleton *pFVar50;
  UObject *pUVar51;
  int *piVar52;
  FString *pFVar53;
  void *pvVar54;
  double *pdVar55;
  FSkeletalMeshGpuSpawnStaticBuffers *this_01;
  FSkeletalMeshGpuSpawnStaticBuffers *pFVar56;
  byte bVar57;
  bool bVar58;
  FScriptContainerElement *pFVar59;
  ulonglong uVar60;
  ulong64 uVar61;
  int iVar62;
  uint uVar63;
  FName *pFVar64;
  FSkeletalMeshGpuSpawnStaticBuffers *this_02;
  FSkeletalMeshGpuSpawnStaticBuffers *this_03;
  uint uVar65;
  FName *pFVar66;
  ulonglong uVar67;
  uint uVar68;
  ulonglong uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auStackY_db8 [32];
  bool local_d68;
  bool local_d67;
  bool local_d66 [2];
  FMeshUvMappingUsage local_d64 [2];
  bool local_d60 [8];
  undefined8 local_d58;
  undefined2 local_d50;
  undefined2 local_d4e;
  undefined1 local_d4c;
  undefined1 local_d4b [3];
  FName *local_d48;
  USkeletalMesh *local_d40;
  FName *local_d38;
  USkeletalMeshComponent *local_d30;
  FNiagaraSystemInstance *local_d28;
  FWeakObjectPtr local_d20;
  FWeakObjectPtr local_d18;
  FWeakObjectPtr local_d10;
  FWeakObjectPtr local_d08;
  FSkinWeightVertexBuffer *local_d00;
  undefined8 local_cf8;
  FString local_cf0;
  FString local_ce0;
  FString local_cd0;
  FString local_cc0;
  FSkeletalMeshSkinningDataHandle local_cb0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  USkeletalMesh *local_c80;
  USceneComponent *local_c78;
  USkeletalMeshComponent *local_c70;
  FName local_c68;
  FNDISkeletalMesh_InstanceData *local_c60;
  FName local_c58;
  undefined8 local_c50;
  FString local_c48;
  TSharedPtr<FMeshUvMapping,1> local_c38;
  undefined8 local_c28;
  float local_c20;
  FSkeletalMeshConnectivityHandle local_c18;
  FSkeletalMeshConnectivityHandle local_c00;
  FString local_be8;
  TSharedPtr<FSkeletalMeshConnectivity,1> local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  FString local_b48;
  FString local_b38;
  FString local_b28;
  FMeshUvMappingHandleBase local_b18;
  float local_af8;
  float fStack_af4;
  float fStack_af0;
  float fStack_aec;
  float local_ae8;
  float fStack_ae4;
  float fStack_ae0;
  float fStack_adc;
  float local_ad8;
  float fStack_ad4;
  float fStack_ad0;
  float fStack_acc;
  double local_ac8;
  double local_ac0;
  double local_ab8;
  double local_ab0;
  double local_aa8;
  double local_aa0;
  FSkeletalMeshSkinningDataHandle local_a90;
  __m128 local_a78;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  FMeshUvMappingHandleBase local_a48;
  TMatrix<float> local_a28;
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  undefined4 uStack_9e0;
  undefined4 uStack_9dc;
  undefined4 local_9d8;
  undefined4 uStack_9d4;
  undefined4 uStack_9d0;
  undefined4 uStack_9cc;
  undefined4 local_9c8;
  undefined4 uStack_9c4;
  undefined4 uStack_9c0;
  undefined4 uStack_9bc;
  undefined4 local_9b8;
  undefined4 uStack_9b4;
  undefined4 uStack_9b0;
  undefined4 uStack_9ac;
  undefined4 local_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 uStack_99c;
  undefined4 local_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  undefined4 local_988;
  undefined4 uStack_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  undefined4 local_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  TTransform<double> local_968;
  TMatrix<double> local_908;
  TMatrix<double> local_888;
  TTransform<double> local_808;
  TStringBuilderBase<wchar_t> local_7a8;
  wchar_t local_788 [256];
  TStringBuilderBase<wchar_t> local_588;
  wchar_t local_568 [512];
  wchar_t local_168 [64];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_db8;
  local_d28 = param_2;
  local_c60 = this;
  if ((param_1 == (UNiagaraDataInterfaceSkeletalMesh *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("Interface",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x692,L""), bVar32)) {
    pcVar18 = (code *)swi(3);
    uVar33 = (*pcVar18)();
    return (bool)uVar33;
  }
  if ((param_2 == (FNiagaraSystemInstance *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("SystemInstance",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x693,L""), bVar32)) {
    pcVar18 = (code *)swi(3);
    uVar33 = (*pcVar18)();
    return (bool)uVar33;
  }
  local_d20.ObjectIndex = 0;
  local_d20.ObjectSerialNumber = 0;
  local_c98 = 0;
  FWeakObjectPtr::operator=(&local_d20,(FObjectPtr)&local_c98);
  (this->SceneComponent).WeakPtr = local_d20;
  local_d18.ObjectIndex = 0;
  local_d18.ObjectSerialNumber = 0;
  local_c90 = 0;
  FWeakObjectPtr::operator=(&local_d18,(FObjectPtr)&local_c90);
  (this->CachedAttachParent).WeakPtr = local_d18;
  this->CachedUserParam = (UObject *)0x0;
  local_d10.ObjectIndex = 0;
  local_d10.ObjectSerialNumber = 0;
  local_c88 = 0;
  FWeakObjectPtr::operator=(&local_d10,(FObjectPtr)&local_c88);
  (this->SkeletalMesh).WeakPtr = local_d10;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->Transform).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->Transform).M[0][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->Transform).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->Transform).M[0][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->Transform).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->Transform).M[1][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->Transform).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->Transform).M[1][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->Transform).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->Transform).M[2][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->Transform).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->Transform).M[2][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->Transform).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->Transform).M[3][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->Transform).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->Transform).M[3][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->TransformInverseTransposed).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->TransformInverseTransposed).M[0][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->TransformInverseTransposed).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->TransformInverseTransposed).M[0][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->TransformInverseTransposed).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->TransformInverseTransposed).M[1][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->TransformInverseTransposed).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->TransformInverseTransposed).M[1][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->TransformInverseTransposed).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->TransformInverseTransposed).M[2][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->TransformInverseTransposed).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->TransformInverseTransposed).M[2][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->TransformInverseTransposed).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->TransformInverseTransposed).M[3][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->TransformInverseTransposed).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->TransformInverseTransposed).M[3][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[0][1];
  (this->PrevTransform).M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  (this->PrevTransform).M[0][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[0][3];
  (this->PrevTransform).M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  (this->PrevTransform).M[0][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[1][1];
  (this->PrevTransform).M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  (this->PrevTransform).M[1][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[1][3];
  (this->PrevTransform).M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  (this->PrevTransform).M[1][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[2][1];
  (this->PrevTransform).M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  (this->PrevTransform).M[2][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[2][3];
  (this->PrevTransform).M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  (this->PrevTransform).M[2][3] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[3][1];
  (this->PrevTransform).M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  (this->PrevTransform).M[3][1] = dVar7;
  dVar7 = UE::Math::TMatrix<double>::Identity.M[3][3];
  (this->PrevTransform).M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  (this->PrevTransform).M[3][3] = dVar7;
  this->DeltaSeconds = param_2->World->DeltaTimeSeconds;
  uVar68 = param_1->ChangeId;
  this->bIsGpuUniformlyDistributedSampling = 0;
  this->ChangeId = uVar68;
  if (param_1->bReadDeformedGeometry == false) {
LAB_14923ce41:
    uVar68 = 0;
  }
  else {
    pUVar36 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((pUVar36->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar36);
    }
    uVar68 = 8;
    if ((pUVar36->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x24 == '\0') goto LAB_14923ce41;
  }
  this->MeshBoneWeightStrideBytes = 0;
  this->MeshBoneIndexSizeBytes = 0;
  this->MeshBoneWeightSizeBytes = 0;
  this->MeshGpuSpawnStaticBuffers = (FSkeletalMeshGpuSpawnStaticBuffers *)0x0;
  this->MeshGpuSpawnDynamicBuffers = (FSkeletalMeshGpuDynamicBufferProxy *)0x0;
  this->bReadDeformedGeometry = uVar68 >> 3;
  this->bUnlimitedBoneInfluences = 0;
  this->bAllowCPUMeshDataAccess = false;
  *(undefined8 *)&(this->PreSkinnedLocalBoundsCenter).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->PreSkinnedLocalBoundsExtents).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_d30 = (USkeletalMeshComponent *)0x0;
  pUVar37 = (USceneComponent *)FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
  this_00 = UNiagaraDataInterfaceSkeletalMesh::GetSkeletalMesh
                      (param_1,param_2,pUVar37,&this->SceneComponent,&local_d30,this);
  local_d40 = this_00;
  local_c80 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&(this->SkeletalMesh).WeakPtr,(FObjectPtr)&local_c80);
  this->bMeshValid = -(uint)(this_00 != (USkeletalMesh *)0x0) >> 1;
  bVar32 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  this->bComponentValid = bVar32;
  CalculateComponentTransform(this,&local_968,param_2);
  pTVar38 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_968,&local_908);
  dVar7 = pTVar38->M[0][1];
  (this->Transform).M[0][0] = pTVar38->M[0][0];
  (this->Transform).M[0][1] = dVar7;
  dVar7 = pTVar38->M[0][3];
  (this->Transform).M[0][2] = pTVar38->M[0][2];
  (this->Transform).M[0][3] = dVar7;
  dVar7 = pTVar38->M[1][1];
  (this->Transform).M[1][0] = pTVar38->M[1][0];
  (this->Transform).M[1][1] = dVar7;
  dVar7 = pTVar38->M[1][3];
  (this->Transform).M[1][2] = pTVar38->M[1][2];
  (this->Transform).M[1][3] = dVar7;
  dVar7 = pTVar38->M[2][1];
  (this->Transform).M[2][0] = pTVar38->M[2][0];
  (this->Transform).M[2][1] = dVar7;
  dVar7 = pTVar38->M[2][3];
  (this->Transform).M[2][2] = pTVar38->M[2][2];
  (this->Transform).M[2][3] = dVar7;
  dVar7 = pTVar38->M[3][1];
  (this->Transform).M[3][0] = pTVar38->M[3][0];
  (this->Transform).M[3][1] = dVar7;
  dVar7 = pTVar38->M[3][3];
  (this->Transform).M[3][2] = pTVar38->M[3][2];
  (this->Transform).M[3][3] = dVar7;
  pTVar38 = UE::Math::TMatrix<double>::Inverse(&this->Transform,&local_888);
  dVar7 = pTVar38->M[1][0];
  uStack_9e0 = SUB84(dVar7,0);
  uStack_9dc = (undefined4)((ulonglong)dVar7 >> 0x20);
  local_9e8 = *(undefined4 *)pTVar38->M[0];
  uStack_9e4 = *(undefined4 *)((longlong)pTVar38->M[0] + 4);
  local_9d8 = *(undefined4 *)pTVar38->M[2];
  uStack_9d4 = *(undefined4 *)((longlong)pTVar38->M[2] + 4);
  dVar7 = pTVar38->M[3][0];
  local_9c8 = *(undefined4 *)(pTVar38->M[0] + 1);
  uStack_9c4 = *(undefined4 *)((longlong)pTVar38->M[0] + 0xc);
  dVar8 = pTVar38->M[1][1];
  local_9b8 = *(undefined4 *)(pTVar38->M[2] + 1);
  uStack_9b4 = *(undefined4 *)((longlong)pTVar38->M[2] + 0xc);
  dVar9 = pTVar38->M[3][1];
  uStack_9b0 = SUB84(dVar9,0);
  uStack_9ac = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_9a8 = *(undefined4 *)(pTVar38->M[0] + 2);
  uStack_9a4 = *(undefined4 *)((longlong)pTVar38->M[0] + 0x14);
  dVar9 = pTVar38->M[1][2];
  uStack_9a0 = SUB84(dVar9,0);
  uStack_99c = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_998 = *(undefined4 *)(pTVar38->M[2] + 2);
  uStack_994 = *(undefined4 *)((longlong)pTVar38->M[2] + 0x14);
  dVar9 = pTVar38->M[3][2];
  uStack_990 = SUB84(dVar9,0);
  uStack_98c = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_988 = *(undefined4 *)(pTVar38->M[0] + 3);
  uStack_984 = *(undefined4 *)((longlong)pTVar38->M[0] + 0x1c);
  dVar9 = pTVar38->M[1][3];
  uStack_980 = SUB84(dVar9,0);
  uStack_97c = (undefined4)((ulonglong)dVar9 >> 0x20);
  local_978 = *(undefined4 *)(pTVar38->M[2] + 3);
  uStack_974 = *(undefined4 *)((longlong)pTVar38->M[2] + 0x1c);
  dVar9 = pTVar38->M[3][3];
  uStack_970 = SUB84(dVar9,0);
  uStack_96c = (undefined4)((ulonglong)dVar9 >> 0x20);
  *(undefined4 *)(this->TransformInverseTransposed).M[0] = local_9e8;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[0] + 4) = uStack_9e4;
  *(undefined4 *)((this->TransformInverseTransposed).M[0] + 1) = uStack_9e0;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[0] + 0xc) = uStack_9dc;
  uStack_9d0 = SUB84(dVar7,0);
  uStack_9cc = (undefined4)((ulonglong)dVar7 >> 0x20);
  *(undefined4 *)((this->TransformInverseTransposed).M[0] + 2) = local_9d8;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[0] + 0x14) = uStack_9d4;
  *(undefined4 *)((this->TransformInverseTransposed).M[0] + 3) = uStack_9d0;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[0] + 0x1c) = uStack_9cc;
  uStack_9c0 = SUB84(dVar8,0);
  uStack_9bc = (undefined4)((ulonglong)dVar8 >> 0x20);
  *(undefined4 *)(this->TransformInverseTransposed).M[1] = local_9c8;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[1] + 4) = uStack_9c4;
  *(undefined4 *)((this->TransformInverseTransposed).M[1] + 1) = uStack_9c0;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[1] + 0xc) = uStack_9bc;
  *(undefined4 *)((this->TransformInverseTransposed).M[1] + 2) = local_9b8;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[1] + 0x14) = uStack_9b4;
  *(undefined4 *)((this->TransformInverseTransposed).M[1] + 3) = uStack_9b0;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[1] + 0x1c) = uStack_9ac;
  *(undefined4 *)(this->TransformInverseTransposed).M[2] = local_9a8;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[2] + 4) = uStack_9a4;
  *(undefined4 *)((this->TransformInverseTransposed).M[2] + 1) = uStack_9a0;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[2] + 0xc) = uStack_99c;
  *(undefined4 *)((this->TransformInverseTransposed).M[2] + 2) = local_998;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[2] + 0x14) = uStack_994;
  *(undefined4 *)((this->TransformInverseTransposed).M[2] + 3) = uStack_990;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[2] + 0x1c) = uStack_98c;
  *(undefined4 *)(this->TransformInverseTransposed).M[3] = local_988;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 4) = uStack_984;
  *(undefined4 *)((this->TransformInverseTransposed).M[3] + 1) = uStack_980;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 0xc) = uStack_97c;
  dVar7 = (this->Transform).M[0][0];
  dVar8 = (this->Transform).M[0][1];
  *(undefined4 *)((this->TransformInverseTransposed).M[3] + 2) = local_978;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 0x14) = uStack_974;
  *(undefined4 *)((this->TransformInverseTransposed).M[3] + 3) = uStack_970;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 0x1c) = uStack_96c;
  dVar9 = (this->Transform).M[0][2];
  dVar23 = (this->Transform).M[0][3];
  (this->PrevTransform).M[0][0] = dVar7;
  (this->PrevTransform).M[0][1] = dVar8;
  dVar7 = (this->Transform).M[1][0];
  dVar8 = (this->Transform).M[1][1];
  (this->PrevTransform).M[0][2] = dVar9;
  (this->PrevTransform).M[0][3] = dVar23;
  dVar9 = (this->Transform).M[1][2];
  dVar23 = (this->Transform).M[1][3];
  (this->PrevTransform).M[1][0] = dVar7;
  (this->PrevTransform).M[1][1] = dVar8;
  dVar7 = (this->Transform).M[2][0];
  dVar8 = (this->Transform).M[2][1];
  (this->PrevTransform).M[1][2] = dVar9;
  (this->PrevTransform).M[1][3] = dVar23;
  dVar9 = (this->Transform).M[2][2];
  dVar23 = (this->Transform).M[2][3];
  (this->PrevTransform).M[2][0] = dVar7;
  (this->PrevTransform).M[2][1] = dVar8;
  uVar19 = *(undefined4 *)(this->Transform).M[3];
  uVar20 = *(undefined4 *)((longlong)(this->Transform).M[3] + 4);
  uVar21 = *(undefined4 *)((this->Transform).M[3] + 1);
  uVar22 = *(undefined4 *)((longlong)(this->Transform).M[3] + 0xc);
  (this->PrevTransform).M[2][2] = dVar9;
  (this->PrevTransform).M[2][3] = dVar23;
  dVar7 = (this->Transform).M[3][2];
  dVar8 = (this->Transform).M[3][3];
  *(undefined4 *)(this->PrevTransform).M[3] = uVar19;
  *(undefined4 *)((longlong)(this->PrevTransform).M[3] + 4) = uVar20;
  *(undefined4 *)((this->PrevTransform).M[3] + 1) = uVar21;
  *(undefined4 *)((longlong)(this->PrevTransform).M[3] + 0xc) = uVar22;
  (this->PrevTransform).M[3][2] = dVar7;
  (this->PrevTransform).M[3][3] = dVar8;
  if (pUVar37 != (USceneComponent *)0x0) {
    local_c78 = (pUVar37->AttachParent).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_c78 != (USceneComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c78);
    }
    FWeakObjectPtr::operator=(&(this->CachedAttachParent).WeakPtr,(FObjectPtr)&local_c78);
  }
  this->bResetOnLODStreamedIn = false;
  this->CachedLODIdx = 0;
  pFVar14 = (this->CachedLODData).Reference;
  if (pFVar14 != (FSkeletalMeshLODRenderData *)0x0) {
    (this->CachedLODData).Reference = (FSkeletalMeshLODRenderData *)0x0;
    plVar39 = &pFVar14->_padding_;
    LOCK();
    lVar48 = *plVar39;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if (((int)lVar48 == 1) && (plVar39 != (longlong *)0x0)) {
      (**(code **)pFVar14->_padding_)(pFVar14,1);
    }
  }
  piVar52 = &(this->SamplingRegionIndices).ArrayMax;
  (this->SamplingRegionIndices).ArrayNum = 0;
  if (*piVar52 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SamplingRegionIndices).AllocatorInstance,0,piVar52);
  }
  local_d60[0] = true;
  if (this_00 != (USkeletalMesh *)0x0) {
    bVar57 = *(byte *)((longlong)&this_00->_padding_ + 5);
    bVar10 = *(byte *)((longlong)&this_00->_padding_ + 6);
    if (bVar10 < bVar57) {
      bVar57 = bVar10;
    }
    if (bVar57 == 0) {
      if (4 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,&local_be8,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_be8.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      iVar62 = ((uint)*(byte *)((longlong)&this_00->_padding_ + 4) +
               (uint)*(byte *)((longlong)&this_00->_padding_ + 3)) - (uint)bVar57;
      iVar34 = UNiagaraDataInterfaceSkeletalMesh::CalculateLODIndexAndSamplingRegions
                         (param_1,this_00,&this->SamplingRegionIndices,local_d60);
      if (iVar34 == -1) {
        return false;
      }
      if (iVar34 < iVar62) {
        this->bResetOnLODStreamedIn = true;
        iVar34 = iVar62;
      }
      this->CachedLODIdx = iVar34;
      plVar39 = (longlong *)(**(code **)(this_00->_padding_ + 0x398))(this_00);
      if (plVar39 == (longlong *)0x0) {
        if (4 < (byte)LogNiagara._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_b28,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          local_b48.Data.AllocatorInstance.Data = local_b28.Data.AllocatorInstance.Data;
LAB_14923d336:
          if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b48.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        iVar34 = this->CachedLODIdx;
        if ((-1 < iVar34) && (iVar34 < (int)plVar39[1])) {
          TRefCountPtr<FSkeletalMeshLODRenderData_const_>::operator=
                    (&this->CachedLODData,
                     *(FSkeletalMeshLODRenderData **)(*plVar39 + (longlong)iVar34 * 8));
        }
        if ((this->CachedLODData).Reference != (FSkeletalMeshLODRenderData *)0x0) {
          (**(code **)(this_00->_padding_ + 0x3e0))(this_00,&local_ac8);
          local_c20 = (float)local_ab8;
          *(ulonglong *)&(this->PreSkinnedLocalBoundsCenter).field0_0x0 =
               CONCAT44((float)local_ac0,(float)local_ac8);
          local_c28 = CONCAT44((float)local_ac0,(float)local_ac8);
          (this->PreSkinnedLocalBoundsCenter).field0_0x0._s_0.Z = local_c20;
          *(ulonglong *)&(this->PreSkinnedLocalBoundsExtents).field0_0x0 =
               CONCAT44((float)local_aa8 + (float)local_aa8,(float)local_ab0 + (float)local_ab0);
          (this->PreSkinnedLocalBoundsExtents).field0_0x0._s_0.Z =
               (float)local_aa0 + (float)local_aa0;
          goto LAB_14923d49f;
        }
        bVar32 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4024959817545152797>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                            ,0x6e3,"CachedLODData.IsValid()");
        if (bVar32) {
          pcVar18 = (code *)swi(3);
          uVar33 = (*pcVar18)();
          return (bool)uVar33;
        }
        if (4 < (byte)LogNiagara._0_1_) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_1,&local_b48,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          goto LAB_14923d336;
        }
      }
    }
    this_00 = (USkeletalMesh *)0x0;
    local_d40 = (USkeletalMesh *)0x0;
    this->CachedLODIdx = 0;
    this->bResetOnLODStreamedIn = false;
  }
LAB_14923d49f:
  if ((this->CachedLODIdx < 0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachedLODIdx >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x71a,L""), bVar32)) {
    pcVar18 = (code *)swi(3);
    uVar33 = (*pcVar18)();
    return (bool)uVar33;
  }
  pUVar45 = local_d30;
  EVar11 = param_1->SkinningMode;
  uVar68 = 0;
  if ((EVar11 == SkinOnTheFly) || (uVar63 = uVar68, EVar11 == PreSkin)) {
    uVar63 = 1;
  }
  if (EVar11 == PreSkin) {
    uVar68 = 2;
  }
  INSERT(local_d58._4_4_,uVar68 >> 1,1,1);
  INSERT(local_d58._4_4_,uVar63,0,1);
  local_d58._0_4_ = this->CachedLODIdx;
  if (local_d30 == (USkeletalMeshComponent *)0x0) {
    local_cb0.Usage = local_d58;
    local_cb0.SkinningData.Object = (FSkeletalMeshSkinningData *)0x0;
    local_cb0.SkinningData.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FSkeletalMeshSkinningDataHandle::operator=(&this->SkinningData,&local_cb0);
    pFVar25 = local_cb0.SkinningData.Object;
    if (local_cb0.SkinningData.Object != (FSkeletalMeshSkinningData *)0x0) {
      AcquireSRWLockExclusive((PSRWLOCK)&(local_cb0.SkinningData.Object)->RWGuard);
      FVar24 = local_cb0.Usage;
      if ((local_cb0.Usage.bUsesBoneMatrices != 0) || (local_cb0.Usage.bUsesPreSkinnedVerts != 0)) {
        pFVar25->BoneMatrixUsers = pFVar25->BoneMatrixUsers + -1;
      }
      pUVar45 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(&(pFVar25->MeshComp).WeakPtr);
      iVar34 = 0;
      if (pUVar45 != (USkeletalMeshComponent *)0x0) {
        pUVar46 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar45);
        iVar34 = 0;
        if (pUVar46 != (USkeletalMesh *)0x0) {
          iVar34 = local_cb0.Usage.LODIndex;
        }
      }
      if (((FVar24.bUsesPreSkinnedVerts != 0) &&
          (pFVar25->TotalPreSkinnedVertsUsers = pFVar25->TotalPreSkinnedVertsUsers + -1, -1 < iVar34
          )) && (iVar34 < (pFVar25->LODData).ArrayNum)) {
        pFVar59 = (pFVar25->LODData).AllocatorInstance.Data + (longlong)iVar34 * 0x48;
        *(int *)pFVar59 = *(int *)pFVar59 + -1;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar25->RWGuard);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cb0.SkinningData.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_d30);
    }
    local_c70 = pUVar45;
    local_d08.ObjectIndex = 0;
    local_d08.ObjectSerialNumber = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar45);
    }
    FWeakObjectPtr::operator=(&local_d08,(FObjectPtr)&local_c70);
    pFVar40 = FNiagaraSystemInstance::GetWorldManager(param_2);
    pFVar41 = FNiagaraWorldManager::EditGeneratedData<FNDI_SkeletalMesh_GeneratedData>(pFVar40);
    pFVar42 = FNDI_SkeletalMesh_GeneratedData::GetCachedSkinningData
                        (pFVar41,&local_a90,
                         (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_d08,
                         local_d58,true);
    FSkeletalMeshSkinningDataHandle::operator=(&this->SkinningData,pFVar42);
    FSkeletalMeshSkinningDataHandle::~FSkeletalMeshSkinningDataHandle(&local_a90);
  }
  local_d68 = false;
  local_d67 = false;
  FNiagaraSystemInstance::EvaluateBoundFunction
            (param_2,FSkeletalMeshInterfaceHelper::GetTriangleCoordAtUVName,&local_d68,&local_d67);
  FNiagaraSystemInstance::EvaluateBoundFunction
            (param_2,FSkeletalMeshInterfaceHelper::GetTriangleCoordInAabbName,&local_d68,&local_d67)
  ;
  bVar32 = FWeakObjectPtr::IsValid(&(this->SkeletalMesh).WeakPtr);
  if ((local_d68 == false) || (!bVar32)) {
    local_d64[0].RequiresCpuAccess = false;
  }
  else {
    local_d64[0].RequiresCpuAccess = true;
  }
  if (((local_d67 == false) || (!bVar32)) || (((uint)param_1->_padding_ >> 2 & 1) == 0)) {
    local_d64[0].RequiresGpuAccess = false;
  }
  else {
    local_d64[0].RequiresGpuAccess = true;
  }
  if ((local_d64[0].RequiresCpuAccess == false) && (local_d64[0].RequiresGpuAccess == false)) {
    local_c38.Object = (FMeshUvMapping *)0x0;
    local_c38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FMeshUvMappingHandleBase::FMeshUvMappingHandleBase(&local_b18,local_d64[0],&local_c38,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c38.SharedReferenceCount.ReferenceController);
    FMeshUvMappingHandleBase::operator=((FMeshUvMappingHandleBase *)&this->UvMapping,&local_b18);
    FMeshUvMappingHandleBase::~FMeshUvMappingHandleBase(&local_b18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    pFVar40 = FNiagaraSystemInstance::GetWorldManager(param_2);
    pFVar41 = FNiagaraWorldManager::EditGeneratedData<FNDI_SkeletalMesh_GeneratedData>(pFVar40);
    pFVar43 = (FMeshUvMappingHandleBase *)
              FNDI_SkeletalMesh_GeneratedData::GetCachedUvMapping
                        (pFVar41,(TTypedMeshUvMappingHandle<FSkeletalMeshUvMapping> *)&local_a48,
                         &this->SkeletalMesh,this->CachedLODIdx,param_1->UvSetIndex,local_d64[0],
                         true);
    FMeshUvMappingHandleBase::operator=((FMeshUvMappingHandleBase *)&this->UvMapping,pFVar43);
    FMeshUvMappingHandleBase::~FMeshUvMappingHandleBase(&local_a48);
  }
  local_d66[0] = false;
  local_d64[0] = (FMeshUvMappingUsage)((ushort)local_d64[0] & 0xff00);
  FNiagaraSystemInstance::EvaluateBoundFunction
            (param_2,FSkeletalMeshInterfaceHelper::GetAdjacentTriangleIndexName,local_d66,
             &local_d64[0].RequiresCpuAccess);
  FNiagaraSystemInstance::EvaluateBoundFunction
            (param_2,FSkeletalMeshInterfaceHelper::GetTriangleNeighborName,local_d66,
             &local_d64[0].RequiresCpuAccess);
  bVar32 = FWeakObjectPtr::IsValid(&(this->SkeletalMesh).WeakPtr);
  if ((local_d66[0] == false) || (!bVar32)) {
    bVar58 = false;
  }
  else {
    bVar58 = true;
  }
  if (((local_d64[0].RequiresCpuAccess == false) || (!bVar32)) ||
     (((uint)param_1->_padding_ >> 2 & 1) == 0)) {
    bVar32 = false;
  }
  else {
    bVar32 = true;
  }
  local_d58._1_1_ = bVar32;
  local_d58._0_1_ = bVar58;
  if ((bVar58 == false) && (bVar32 == false)) {
    local_bd8.Object = (FSkeletalMeshConnectivity *)0x0;
    local_bd8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar44 = FSkeletalMeshConnectivityHandle::FSkeletalMeshConnectivityHandle
                        (&local_c18,local_d58._0_2_,&local_bd8,false);
    FSkeletalMeshConnectivityHandle::operator=(&this->Connectivity,pFVar44);
    if ((local_c18.ConnectivityData.Object != (FSkeletalMeshConnectivity *)0x0) &&
       (local_c18.Usage.RequiresGpuAccess != false)) {
      LOCK();
      paVar1 = &(local_c18.ConnectivityData.Object)->GpuUserCount;
      aVar6 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        FSkeletalMeshConnectivity::Release(local_c18.ConnectivityData.Object);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c18.ConnectivityData.SharedReferenceCount.ReferenceController);
    local_c00.ConnectivityData.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar40 = FNiagaraSystemInstance::GetWorldManager(param_2);
    pFVar41 = FNiagaraWorldManager::EditGeneratedData<FNDI_SkeletalMesh_GeneratedData>(pFVar40);
    pFVar44 = FNDI_SkeletalMesh_GeneratedData::GetCachedConnectivity
                        (pFVar41,&local_c00,&this->SkeletalMesh,this->CachedLODIdx,local_d58._0_2_,
                         true);
    FSkeletalMeshConnectivityHandle::operator=(&this->Connectivity,pFVar44);
    if ((local_c00.ConnectivityData.Object != (FSkeletalMeshConnectivity *)0x0) &&
       (local_c00.Usage.RequiresGpuAccess != false)) {
      LOCK();
      paVar1 = &(local_c00.ConnectivityData.Object)->GpuUserCount;
      aVar6 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar6 == (atomic<int>)0x1) {
        FSkeletalMeshConnectivity::Release(local_c00.ConnectivityData.Object);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c00.ConnectivityData.SharedReferenceCount.ReferenceController);
  if ((1 < (this->SamplingRegionIndices).ArrayNum) && (local_d60[0] != false)) {
    (this->SamplingRegionAreaWeightedSampler).Owner = this;
    (**(code **)((this->SamplingRegionAreaWeightedSampler)._padding_ + 0x10))();
  }
  if (this_00 == (USkeletalMesh *)0x0) {
    return true;
  }
  if (((this->CachedLODData).Reference == (FSkeletalMeshLODRenderData *)0x0) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("CachedLODData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                          ,0x774,L""), bVar32)) {
    pcVar18 = (code *)swi(3);
    uVar33 = (*pcVar18)();
    return (bool)uVar33;
  }
  this->bAllowCPUMeshDataAccess = true;
  pUVar45 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar45 == (USkeletalMeshComponent *)0x0) {
LAB_14923d9a8:
    pFVar14 = (this->CachedLODData).Reference;
    if (pFVar14 != (FSkeletalMeshLODRenderData *)0x0) {
      pFVar47 = &pFVar14->SkinWeightVertexBuffer;
      goto LAB_14923d9bb;
    }
    local_d00 = (FSkinWeightVertexBuffer *)0x0;
LAB_14923d9cd:
    pFVar47 = local_d00;
    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                       ("SkinWeightBuffer",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                        ,0x778,L"");
    if (bVar32) {
      pcVar18 = (code *)swi(3);
      uVar33 = (*pcVar18)();
      return (bool)uVar33;
    }
  }
  else {
    pUVar36 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar34 = (int)pUVar36->_padding_;
    if (((*(int *)(pUVar45->_padding_ + 0x38) < iVar34) ||
        ((longlong *)
         *(undefined1 **)(*(longlong *)(pUVar45->_padding_ + 0x30) + (longlong)iVar34 * 8) !=
         &pUVar36->_padding_)) ||
       (pUVar46 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar45),
       pUVar46 == (USkeletalMesh *)0x0)) goto LAB_14923d9a8;
    pFVar47 = USkinnedMeshComponent::GetSkinWeightBuffer
                        ((USkinnedMeshComponent *)pUVar45,this->CachedLODIdx);
LAB_14923d9bb:
    local_d00 = pFVar47;
    if (pFVar47 == (FSkinWeightVertexBuffer *)0x0) goto LAB_14923d9cd;
  }
  lVar48 = (**(code **)(this_00->_padding_ + 0x330))(this_00,this->CachedLODIdx);
  if ((*(byte *)(lVar48 + 0xd0) & 4) == 0) {
LAB_14923da7a:
    bVar32 = false;
  }
  else {
    pFVar14 = (this->CachedLODData).Reference;
    uVar68 = (pFVar47->DataVertexBuffer).NumVertices;
    pFVar15 = (pFVar14->MultiSizeIndexContainer).IndexBuffer;
    uVar63 = (pFVar14->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
    if ((pFVar15 == (FRawStaticIndexBuffer16or32Interface *)0x0) ||
       (pFVar49 = FMultiSizeIndexContainer::GetIndexBuffer(&pFVar14->MultiSizeIndexContainer),
       pFVar49 == (FRawStaticIndexBuffer16or32Interface *)0x0)) {
      bVar32 = false;
LAB_14923da5d:
      bVar58 = bVar32;
      bVar32 = false;
    }
    else {
      bVar58 = true;
      pFVar49 = FMultiSizeIndexContainer::GetIndexBuffer
                          (&((this->CachedLODData).Reference)->MultiSizeIndexContainer);
      iVar34 = (**(code **)(pFVar49->_padding_ + 0x50))();
      bVar32 = true;
      if (iVar34 < 1) goto LAB_14923da5d;
      bVar32 = true;
    }
    if (((uVar63 == 0) || (uVar68 == 0)) ||
       ((pFVar15 == (FRawStaticIndexBuffer16or32Interface *)0x0 || ((!bVar58 || (!bVar32))))))
    goto LAB_14923da7a;
    bVar32 = true;
  }
  this->bAllowCPUMeshDataAccess = bVar32;
  pFVar50 = (FReferenceSkeleton *)(**(code **)(this_00->_padding_ + 800))(this_00);
  this->ExcludedBoneIndex = -1;
  local_d58 = (FSkeletalMeshSkinningDataUsage)pFVar50;
  if ((param_1->bExcludeBone != 0) && (param_1->ExcludeBoneName != (FName)0x0)) {
    iVar34 = FReferenceSkeleton::FindBoneIndex(pFVar50,&param_1->ExcludeBoneName);
    this->ExcludedBoneIndex = iVar34;
    if ((iVar34 == -1) && (2 < (byte)LogNiagara._0_1_)) {
      pUVar51 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar51,&local_ba8,(UObject *)0x0,None);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_bb8,(UObject *)0x0,None);
      ::FName::ToString(&param_1->ExcludeBoneName,&local_bc8);
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_b88,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b88.Data.AllocatorInstance.Data);
      }
      if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
      }
      if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
      }
      pFVar50 = (FReferenceSkeleton *)local_d58;
      if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
        pFVar50 = (FReferenceSkeleton *)local_d58;
      }
    }
  }
  uVar68 = (pFVar50->FinalRefBoneInfo).ArrayNum;
  if ((param_1->FilteredBones).ArrayNum < 1) {
    this->NumUnfilteredBones = uVar68;
  }
  else {
    if (0xffff < (int)uVar68) {
      if (2 < (byte)LogNiagara._0_1_) {
        pUVar51 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pUVar51,&local_b78,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,&local_b38,(UObject *)0x0,None);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)param_1,&local_b98,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b98.Data.AllocatorInstance.Data);
        }
        if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b38.Data.AllocatorInstance.Data);
        }
        if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b78.Data.AllocatorInstance.Data);
        }
      }
      return false;
    }
    local_7a8.bIsDynamic = false;
    local_7a8.bIsExternal = false;
    local_7a8.Base = local_788;
    local_7a8.CurPos = local_788;
    local_7a8.End = (wchar_t *)&local_588;
    pTVar3 = &this->FilteredAndUnfilteredBones;
    if ((int)uVar68 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar68);
    }
    if ((this->FilteredAndUnfilteredBones).ArrayMax < (int)uVar68) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar68,&pTVar3->AllocatorInstance,(this->FilteredAndUnfilteredBones).ArrayNum,
                 &(this->FilteredAndUnfilteredBones).ArrayMax);
    }
    pFVar64 = (FName *)(param_1->FilteredBones).AllocatorInstance.Data;
    iVar34 = (param_1->FilteredBones).ArrayNum;
    local_d38 = pFVar64 + iVar34;
    while( true ) {
      pFVar66 = local_d38;
      if ((param_1->FilteredBones).ArrayNum != iVar34) {
        local_d4c = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_d4c)
        ;
      }
      this_00 = local_d40;
      if (pFVar64 == pFVar66) break;
      local_cf8 = 0;
      if (((*pFVar64 == (FName)0x0) ||
          (piVar52 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                             *)&pFVar50->FinalNameToIndexMap,*pFVar64), piVar52 == (int *)0x0)) ||
         (iVar62 = *piVar52, iVar62 == -1)) {
        bVar32 = FNiagaraUtilities::LogVerboseWarnings();
        if (bVar32) {
          if (0 < (int)((longlong)local_7a8.CurPos - (longlong)local_7a8.Base >> 1)) {
            TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_7a8,L", ",2);
          }
          pFVar53 = ::FName::ToString(pFVar64,&local_b68);
          iVar13 = (pFVar53->Data).ArrayNum;
          local_d48 = (FName *)(pFVar53->Data).AllocatorInstance.Data;
          iVar62 = iVar13 + -1;
          if (iVar13 == 0) {
            iVar62 = 0;
          }
          uVar61 = (ulong64)iVar62;
          if (local_7a8.End < (TStringBuilderBase<wchar_t> *)(local_7a8.CurPos + uVar61)) {
            TStringBuilderBase<wchar_t>::Extend(&local_7a8,uVar61);
          }
          if (iVar62 != 0) {
            pvVar54 = FGenericPlatformString::Memcpy(local_7a8.CurPos,local_d48,uVar61 * 2);
            local_7a8.CurPos = (wchar_t *)((longlong)pvVar54 + uVar61 * 2);
          }
          pFVar50 = (FReferenceSkeleton *)local_d58;
          if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b68.Data.AllocatorInstance.Data);
            pFVar50 = (FReferenceSkeleton *)local_d58;
          }
        }
        pFVar64 = pFVar64 + 1;
      }
      else {
        if ((0xffff < iVar62) &&
           (bVar32 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_4024959817545152581>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                                ,0x7bb,"Bone <= TNumericLimits<uint16>::Max()"), bVar32)) {
          pcVar18 = (code *)swi(3);
          uVar33 = (*pcVar18)();
          return (bool)uVar33;
        }
        pFVar59 = (pTVar3->AllocatorInstance).Data;
        local_d50 = (undefined2)iVar62;
        if (((pFVar59 <= (FScriptContainerElement *)&local_d50) &&
            ((FScriptContainerElement *)&local_d50 <
             pFVar59 + (longlong)(this->FilteredAndUnfilteredBones).ArrayMax * 2)) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar32)) {
          pcVar18 = (code *)swi(3);
          uVar33 = (*pcVar18)();
          return (bool)uVar33;
        }
        iVar62 = (this->FilteredAndUnfilteredBones).ArrayNum;
        if (iVar62 == (this->FilteredAndUnfilteredBones).ArrayMax) {
          iVar62 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&pTVar3->AllocatorInstance,
                              &(this->FilteredAndUnfilteredBones).ArrayMax);
        }
        (this->FilteredAndUnfilteredBones).ArrayNum = iVar62 + 1;
        *(undefined2 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar62 * 2) = local_d50;
        this->NumFilteredBones = this->NumFilteredBones + 1;
        pFVar64 = pFVar64 + 1;
      }
    }
    uVar68 = 0;
    if (0 < (((FReferenceSkeleton *)local_d58)->FinalRefBoneInfo).ArrayNum) {
      pTVar3 = &this->FilteredAndUnfilteredBones;
      pFVar50 = (FReferenceSkeleton *)local_d58;
      do {
        uVar60 = 0;
        if (uVar68 != this->ExcludedBoneIndex) {
          uVar67 = uVar60;
          if (0 < this->NumFilteredBones) {
            do {
              uVar65 = (uint)uVar60;
              uVar63 = 0;
              if ((int)uVar65 < (this->FilteredAndUnfilteredBones).ArrayNum) {
                uVar63 = ~uVar65 >> 0x1f;
              }
              if ((uVar63 == 0) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar32)) {
                pcVar18 = (code *)swi(3);
                uVar33 = (*pcVar18)();
                return (bool)uVar33;
              }
              pFVar50 = (FReferenceSkeleton *)local_d58;
              if (*(ushort *)((pTVar3->AllocatorInstance).Data + uVar67) == uVar68)
              goto LAB_14923e0d6;
              uVar60 = (ulonglong)(uVar65 + 1);
              uVar67 = uVar67 + 2;
            } while ((int)(uVar65 + 1) < this->NumFilteredBones);
          }
          pFVar59 = (pTVar3->AllocatorInstance).Data;
          local_d4e = (undefined2)uVar68;
          if (((pFVar59 <= (FScriptContainerElement *)&local_d4e) &&
              ((FScriptContainerElement *)&local_d4e <
               pFVar59 + (longlong)(this->FilteredAndUnfilteredBones).ArrayMax * 2)) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar32)) {
            pcVar18 = (code *)swi(3);
            uVar33 = (*pcVar18)();
            return (bool)uVar33;
          }
          iVar34 = (this->FilteredAndUnfilteredBones).ArrayNum;
          if (iVar34 == (this->FilteredAndUnfilteredBones).ArrayMax) {
            iVar34 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x202,&pTVar3->AllocatorInstance,
                                &(this->FilteredAndUnfilteredBones).ArrayMax);
          }
          (this->FilteredAndUnfilteredBones).ArrayNum = iVar34 + 1;
          *(undefined2 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar34 * 2) = local_d4e;
          this->NumUnfilteredBones = this->NumUnfilteredBones + 1;
          pFVar50 = (FReferenceSkeleton *)local_d58;
        }
LAB_14923e0d6:
        uVar68 = uVar68 + 1;
      } while ((int)uVar68 < (pFVar50->FinalRefBoneInfo).ArrayNum);
    }
    if ((0 < (int)((longlong)local_7a8.CurPos - (longlong)local_7a8.Base >> 1)) &&
       (2 < (byte)LogNiagara._0_1_)) {
      pUVar16 = local_d28->System;
      if ((pUVar16 == (UNiagaraSystem *)0x0) || (pUVar16->_padding_ == 0)) {
        ::FString::FString(&local_cf0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pUVar16,&local_cf0,(UObject *)0x0,None);
      }
      if (local_7a8.End < (TStringBuilderBase<wchar_t> *)(local_7a8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_7a8,1);
      }
      *local_7a8.CurPos = L'\0';
      if (this_00->_padding_ == 0) {
        ::FString::FString(&local_cc0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,&local_cc0,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_cc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_cc0.Data.AllocatorInstance.Data);
      }
      if (local_cf0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_cf0.Data.AllocatorInstance.Data);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_7a8);
  }
  uVar68 = (param_1->FilteredSockets).ArrayNum;
  pTVar4 = &this->FilteredSocketInfo;
  iVar34 = (this->FilteredSocketInfo).ArrayNum;
  if (iVar34 < (int)uVar68) {
    iVar62 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40,0x10,uVar68 - iVar34,&pTVar4->AllocatorInstance,
                        &(this->FilteredSocketInfo).ArrayNum,&(this->FilteredSocketInfo).ArrayMax);
    DefaultConstructItems<FNDISkeletalMesh_InstanceData::FCachedSocketInfo,int>
              ((pTVar4->AllocatorInstance).Data + (longlong)iVar62 * 0x40,uVar68 - iVar34);
  }
  else {
    if ((int)uVar68 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar68);
    }
    if ((int)uVar68 < iVar34) {
      iVar34 = iVar34 - uVar68;
      if (iVar34 < 0) {
        bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar32) {
          pcVar18 = (code *)swi(3);
          uVar33 = (*pcVar18)();
          return (bool)uVar33;
        }
      }
      else if (iVar34 == 0) goto LAB_14923e30f;
      pFVar59 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar68 * 0x40;
      iVar62 = ((this->FilteredSocketInfo).ArrayNum - iVar34) - uVar68;
      if (iVar62 != 0) {
        memmove(pFVar59,pFVar59 + (longlong)iVar34 * 0x40,(longlong)iVar62 << 6);
      }
      iVar34 = (this->FilteredSocketInfo).ArrayNum - iVar34;
      (this->FilteredSocketInfo).ArrayNum = iVar34;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,&pTVar4->AllocatorInstance,iVar34,&(this->FilteredSocketInfo).ArrayMax);
    }
  }
LAB_14923e30f:
  iVar34 = (this->FilteredSocketInfo).ArrayNum;
  uVar60 = 0;
  if (local_d30 == (USkeletalMeshComponent *)0x0) {
    uVar67 = uVar60;
    uVar69 = uVar60;
    if (0 < iVar34) {
      do {
        uVar63 = (uint)uVar60;
        uVar65 = ~uVar63 >> 0x1f;
        local_d38 = *(FName **)(this_00->_padding_ + 0x358);
        uVar68 = 0;
        if ((int)uVar63 < (param_1->FilteredSockets).ArrayNum) {
          uVar68 = uVar65;
        }
        if ((uVar68 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar18 = (code *)swi(3);
          uVar33 = (*pcVar18)();
          return (bool)uVar33;
        }
        pdVar55 = (double *)
                  (*(code *)local_d38)
                            (this_00,local_168,
                             *(undefined8 *)
                              ((param_1->FilteredSockets).AllocatorInstance.Data + uVar69));
        local_a28.M[0][2] = (float)pdVar55[2];
        local_a28.M[0][3] = (float)pdVar55[3];
        local_a28.M[0][0] = (float)*pdVar55;
        local_a28.M[0][1] = (float)pdVar55[1];
        local_a28.M[1][0] = (float)pdVar55[4];
        local_a28.M[1][1] = (float)pdVar55[5];
        local_a28.M[1][2] = (float)pdVar55[6];
        local_a28.M[1][3] = (float)pdVar55[7];
        local_a28.M[2][0] = (float)pdVar55[8];
        local_a28.M[2][1] = (float)pdVar55[9];
        local_a28.M[2][2] = (float)pdVar55[10];
        local_a28.M[2][3] = (float)pdVar55[0xb];
        local_a28.M[3][0] = (float)pdVar55[0xc];
        local_a28.M[3][1] = (float)pdVar55[0xd];
        local_a28.M[3][2] = (float)pdVar55[0xe];
        local_a28.M[3][3] = (float)pdVar55[0xf];
        UE::Math::TTransform<float>::SetFromMatrix((TTransform<float> *)&local_a78,&local_a28);
        uVar31 = uStack_a50;
        uVar30 = local_a58;
        uVar29 = uStack_a60;
        uVar28 = local_a68;
        uVar27 = local_a78.m128_u64[1];
        uVar26 = local_a78.m128_u64[0];
        uVar68 = 0;
        if ((int)uVar63 < (this->FilteredSocketInfo).ArrayNum) {
          uVar68 = uVar65;
        }
        if ((uVar68 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar18 = (code *)swi(3);
          uVar33 = (*pcVar18)();
          return (bool)uVar33;
        }
        pFVar59 = (this->FilteredSocketInfo).AllocatorInstance.Data;
        *(undefined8 *)(pFVar59 + uVar67) = uVar26;
        *(undefined8 *)(pFVar59 + uVar67 + 8) = uVar27;
        *(undefined8 *)(pFVar59 + uVar67 + 0x10) = uVar28;
        *(undefined8 *)(pFVar59 + uVar67 + 0x10 + 8) = uVar29;
        *(undefined8 *)(pFVar59 + uVar67 + 0x20) = uVar30;
        *(undefined8 *)(pFVar59 + uVar67 + 0x20 + 8) = uVar31;
        uVar68 = 0;
        if ((int)uVar63 < (this->FilteredSocketInfo).ArrayNum) {
          uVar68 = uVar65;
        }
        if ((uVar68 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar18 = (code *)swi(3);
          uVar33 = (*pcVar18)();
          return (bool)uVar33;
        }
        uVar60 = (ulonglong)(uVar63 + 1);
        *(undefined4 *)((this->FilteredSocketInfo).AllocatorInstance.Data + uVar67 + 0x30) =
             0xffffffff;
        uVar67 = uVar67 + 0x40;
        uVar69 = uVar69 + 8;
      } while ((int)(uVar63 + 1) < (this->FilteredSocketInfo).ArrayNum);
    }
  }
  else if (0 < iVar34) {
    lVar48 = 0;
    local_d48 = (FName *)0x0;
    do {
      uVar63 = (uint)uVar60;
      uVar65 = ~uVar63 >> 0x1f;
      uVar68 = 0;
      if ((int)uVar63 < (this->FilteredSocketInfo).ArrayNum) {
        uVar68 = uVar65;
      }
      local_808.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_808.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_808.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_808.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_808.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_808.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_808.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_808.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_808.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_808.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_808.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_808.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_808.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_808.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_808.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_808.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_808.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_808.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if ((uVar68 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar18 = (code *)swi(3);
        uVar33 = (*pcVar18)();
        return (bool)uVar33;
      }
      local_d38 = (FName *)((this->FilteredSocketInfo).AllocatorInstance.Data +
                           (longlong)(int)uVar63 * 0x40 + 0x30);
      uVar68 = 0;
      if ((int)uVar63 < (param_1->FilteredSockets).ArrayNum) {
        uVar68 = uVar65;
      }
      if ((uVar68 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar18 = (code *)swi(3);
        uVar33 = (*pcVar18)();
        return (bool)uVar33;
      }
      USkinnedMeshComponent::GetSocketInfoByName
                ((USkinnedMeshComponent *)local_d30,
                 *(FName *)((longlong)local_d48 +
                           (longlong)(param_1->FilteredSockets).AllocatorInstance.Data),&local_808,
                 (int *)local_d38);
      fVar70 = (float)local_808.Rotation.ZW.m128d_f64[0];
      fVar73 = (float)local_808.Rotation.ZW.m128d_f64[1];
      uVar68 = 0;
      if ((int)uVar63 < (this->FilteredSocketInfo).ArrayNum) {
        uVar68 = uVar65;
      }
      fVar76 = (float)local_808.Rotation.XY.m128d_f64[0];
      fVar77 = (float)local_808.Rotation.XY.m128d_f64[1];
      fVar71 = (float)local_808.Translation.ZW.m128d_f64[0];
      fVar74 = (float)local_808.Translation.ZW.m128d_f64[1];
      fVar78 = (float)local_808.Translation.XY.m128d_f64[0];
      fVar79 = (float)local_808.Translation.XY.m128d_f64[1];
      fVar80 = (float)local_808.Scale3D.XY.m128d_f64[0];
      fVar81 = (float)local_808.Scale3D.XY.m128d_f64[1];
      fVar72 = (float)local_808.Scale3D.ZW.m128d_f64[0];
      fVar75 = (float)local_808.Scale3D.ZW.m128d_f64[1];
      local_af8 = fVar76;
      fStack_af4 = fVar77;
      fStack_af0 = fVar70;
      fStack_aec = fVar73;
      local_ae8 = fVar78;
      fStack_ae4 = fVar79;
      fStack_ae0 = fVar71;
      fStack_adc = fVar74;
      local_ad8 = fVar80;
      fStack_ad4 = fVar81;
      fStack_ad0 = fVar72;
      fStack_acc = fVar75;
      if ((uVar68 == 0) &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar32)) {
        pcVar18 = (code *)swi(3);
        uVar33 = (*pcVar18)();
        return (bool)uVar33;
      }
      pFVar17 = (this->FilteredSocketInfo).AllocatorInstance.Data;
      uVar60 = (ulonglong)(uVar63 + 1);
      local_d48 = (FName *)((longlong)local_d48 + 8);
      pFVar59 = pFVar17 + lVar48;
      *(float *)pFVar59 = fVar76;
      *(float *)(pFVar59 + 4) = fVar77;
      *(float *)(pFVar59 + 8) = fVar70;
      *(float *)(pFVar59 + 0xc) = fVar73;
      pFVar59 = pFVar17 + lVar48 + 0x10;
      *(float *)pFVar59 = fVar78;
      *(float *)(pFVar59 + 4) = fVar79;
      *(float *)(pFVar59 + 8) = fVar71;
      *(float *)(pFVar59 + 0xc) = fVar74;
      pFVar17 = pFVar17 + lVar48 + 0x20;
      *(float *)pFVar17 = fVar80;
      *(float *)(pFVar17 + 4) = fVar81;
      *(float *)(pFVar17 + 8) = fVar72;
      *(float *)(pFVar17 + 0xc) = fVar75;
      lVar48 = lVar48 + 0x40;
      this_00 = local_d40;
    } while ((int)(uVar63 + 1) < (this->FilteredSocketInfo).ArrayNum);
  }
  lVar48 = (**(code **)(this_00->_padding_ + 800))(this_00);
  pTVar5 = &this->FilteredSocketTransforms;
  this->FilteredSocketBoneOffset = *(int *)(lVar48 + 0x28);
  this->FilteredSocketTransformsIndex = 0;
  uVar68 = (param_1->FilteredSockets).ArrayNum;
  if ((int)uVar68 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar68);
  }
  iVar34 = (this->FilteredSocketTransforms).Elements[0].ArrayMax;
  piVar52 = &(this->FilteredSocketTransforms).Elements[0].ArrayMax;
  (this->FilteredSocketTransforms).Elements[0].ArrayNum = 0;
  if (iVar34 < (int)uVar68) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,uVar68,(ForAnyElementType *)pTVar5,0,piVar52);
  }
  iVar34 = (param_1->FilteredSockets).ArrayNum;
  iVar62 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x30,0x10,iVar34,(ForAnyElementType *)pTVar5,
                      &(this->FilteredSocketTransforms).Elements[0].ArrayNum,piVar52);
  DefaultConstructItems<UE::Math::TTransform<float>,int>
            (pTVar5->Elements[0].AllocatorInstance.Data + (longlong)iVar62 * 0x30,iVar34);
  UpdateFilteredSocketTransforms(this);
  local_d48 = (FName *)&DAT_00000001;
  piVar52 = &(this->FilteredSocketTransforms).Elements[1].ArrayMax;
  do {
    uVar68 = (param_1->FilteredSockets).ArrayNum;
    if ((int)uVar68 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar68);
    }
    piVar52[-1] = 0;
    if (*piVar52 < (int)uVar68) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,0x10,uVar68,(ForAnyElementType *)(piVar52 + -3),0,piVar52);
    }
    pTVar2 = (TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)(piVar52 + -3);
    if ((pTVar2 == pTVar5->Elements) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar32)) {
      pcVar18 = (code *)swi(3);
      uVar33 = (*pcVar18)();
      return (bool)uVar33;
    }
    iVar34 = (this->FilteredSocketTransforms).Elements[0].ArrayNum;
    if (iVar34 != 0) {
      iVar62 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x30,0x10,iVar34,(ForAnyElementType *)pTVar2,piVar52 + -1,piVar52);
      memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar62 * 0x30,
             pTVar5->Elements[0].AllocatorInstance.Data,(longlong)iVar34 * 0x30);
    }
    piVar52 = piVar52 + 4;
    local_d48 = (FName *)((longlong)&(local_d48->ComparisonIndex).Value + 1);
  } while ((longlong)local_d48 < 2);
  bVar32 = FNiagaraUtilities::LogVerboseWarnings();
  if (bVar32) {
    pFVar66 = (FName *)(param_1->FilteredSockets).AllocatorInstance.Data;
    local_588.Base = local_568;
    iVar34 = (param_1->FilteredSockets).ArrayNum;
    local_588.CurPos = local_568;
    local_588.End = local_168;
    pFVar64 = pFVar66 + iVar34;
    local_588.bIsDynamic = false;
    local_588.bIsExternal = false;
    local_d48 = pFVar64;
    while( true ) {
      if ((param_1->FilteredSockets).ArrayNum != iVar34) {
        local_d4b[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d4b);
      }
      this = local_c60;
      if (pFVar66 == pFVar64) break;
      local_c68 = *pFVar66;
      lVar48 = (**(code **)(this_00->_padding_ + 0x3f0))(this_00);
      if (lVar48 == 0) {
        if ((int)((longlong)local_588.CurPos - (longlong)local_588.Base >> 1) != 0) {
          if (local_588.End < local_588.CurPos + 2) {
            TStringBuilderBase<wchar_t>::Extend(&local_588,2);
          }
          pvVar54 = FGenericPlatformString::Memcpy(local_588.CurPos,L", ",4);
          local_588.CurPos = (wchar_t *)((longlong)pvVar54 + 4);
        }
        pFVar53 = ::FName::ToString(&local_c68,&local_b58);
        iVar13 = (pFVar53->Data).ArrayNum;
        pFVar59 = (pFVar53->Data).AllocatorInstance.Data;
        iVar62 = iVar13 + -1;
        if (iVar13 == 0) {
          iVar62 = 0;
        }
        uVar61 = (ulong64)iVar62;
        if (local_588.End < local_588.CurPos + uVar61) {
          TStringBuilderBase<wchar_t>::Extend(&local_588,uVar61);
        }
        if (iVar62 != 0) {
          pvVar54 = FGenericPlatformString::Memcpy(local_588.CurPos,pFVar59,uVar61 * 2);
          local_588.CurPos = (wchar_t *)((longlong)pvVar54 + uVar61 * 2);
        }
        pFVar64 = local_d48;
        if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b58.Data.AllocatorInstance.Data);
          pFVar64 = local_d48;
        }
      }
      pFVar66 = pFVar66 + 1;
    }
    if ((0 < (int)((longlong)local_588.CurPos - (longlong)local_588.Base >> 1)) &&
       (2 < (byte)LogNiagara._0_1_)) {
      pUVar16 = local_d28->System;
      if ((pUVar16 == (UNiagaraSystem *)0x0) || (pUVar16->_padding_ == 0)) {
        ::FString::FString(&local_cd0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pUVar16,&local_cd0,(UObject *)0x0,None);
      }
      if (local_588.End < local_588.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_588,1);
      }
      *local_588.CurPos = L'\0';
      if (this_00->_padding_ == 0) {
        ::FString::FString(&local_ce0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,&local_ce0,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_ce0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ce0.Data.AllocatorInstance.Data);
      }
      if (local_cd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_cd0.Data.AllocatorInstance.Data);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_588);
  }
  pFVar47 = local_d00;
  if (((uint)param_1->_padding_ >> 2 & 1) == 0) {
    return true;
  }
  GVar35 = FSkinWeightVertexBuffer::GetBoneInfluenceType(local_d00);
  this_03 = (FSkeletalMeshGpuSpawnStaticBuffers *)0x0;
  uVar63 = 0;
  uVar68 = uVar63;
  if (GVar35 == UnlimitedBoneInfluence) {
    uVar68 = 0x10;
  }
  *(uint *)&this->field_0x2e4 = *(uint *)&this->field_0x2e4 & 0xffffffef | uVar68;
  this->MeshBoneWeightStrideBytes =
       ((uint)((pFVar47->DataVertexBuffer).bUse16BitBoneIndex != false) +
       ((pFVar47->DataVertexBuffer).bUse16BitBoneWeight != false) + 2) *
       (pFVar47->DataVertexBuffer).MaxBoneInfluences;
  this->MeshBoneIndexSizeBytes = ((pFVar47->DataVertexBuffer).bUse16BitBoneIndex != false) + 1;
  bVar32 = (pFVar47->DataVertexBuffer).bUse16BitBoneWeight;
  this->MeshSkinWeightBuffer = &pFVar47->DataVertexBuffer;
  this->MeshBoneWeightSizeBytes = (bVar32 != false) + 1;
  this->MeshSkinWeightLookupBuffer = &pFVar47->LookupVertexBuffer;
  lVar48 = (**(code **)(this_00->_padding_ + 0x330))(this_00,this->CachedLODIdx);
  if (((*(byte *)(lVar48 + 0xd0) & 0x20) != 0) && (local_d60[0] != false)) {
    uVar63 = 4;
  }
  uVar68 = 4;
  this->bIsGpuUniformlyDistributedSampling = uVar63 >> 2;
  pUVar36 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((pUVar36->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar36);
  }
  cVar12 = (pUVar36->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x26;
  if (cVar12 != '\0') {
    if (cVar12 != '\x01') {
      if ((cVar12 != '\x02') &&
         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                             ("MaxInfluenceType == ENDISkelMesh_GpuMaxInfluences::Type::Unlimited",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                              ,0x83a,L"Unknown value for NDISkelMesh_GpuMaxInfluences: %d"), bVar32)
         ) {
        pcVar18 = (code *)swi(3);
        uVar33 = (*pcVar18)();
        return (bool)uVar33;
      }
      goto LAB_14923ed00;
    }
    uVar68 = 8;
  }
  if ((uVar68 < (((this->CachedLODData).Reference)->SkinWeightVertexBuffer).DataVertexBuffer.
                MaxBoneInfluences) && (2 < (byte)LogNiagara._0_1_)) {
    local_c58 = (FName)this_00->_padding_;
    ::FName::ToString(&local_c58,&local_c48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c48.Data.AllocatorInstance.Data);
    }
  }
LAB_14923ed00:
  USkeletalMesh::WaitUntilAsyncPropertyReleased(this_00,SamplingInfo,ReadOnly);
  iVar34 = this->CachedLODIdx;
  pFVar56 = this_03;
  if ((-1 < iVar34) && (iVar34 < (this_00->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum)) {
    if (((this_00->SamplingInfo).BuiltData.WholeMeshBuiltData.ArrayNum <= iVar34) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar32)) {
      pcVar18 = (code *)swi(3);
      uVar33 = (*pcVar18)();
      return (bool)uVar33;
    }
    pFVar56 = (FSkeletalMeshGpuSpawnStaticBuffers *)
              ((this_00->SamplingInfo).BuiltData.WholeMeshBuiltData.AllocatorInstance.Data +
              (longlong)iVar34 * 0x48);
  }
  *(uint *)&this->field_0x2e4 =
       *(uint *)&this->field_0x2e4 &
       (-(uint)(pFVar56 != (FSkeletalMeshGpuSpawnStaticBuffers *)0x0) & 4 | 0xfffffffb);
  this_01 = ::operator_new(0x198);
  this_02 = this_03;
  if (this_01 != (FSkeletalMeshGpuSpawnStaticBuffers *)0x0) {
    memset(this_01,0,0x198);
    FRenderResource::FRenderResource((FRenderResource *)this_01);
    local_c50 = 0;
    this_01->_padding_ = (longlong)&___7FSkeletalMeshGpuSpawnStaticBuffers__6B_;
    (this_01->SceneComponent).WeakPtr = (FWeakObjectPtr)0x0;
    FWeakObjectPtr::operator=(&(this_01->SceneComponent).WeakPtr,(FObjectPtr)&local_c50);
    (this_01->BufferTriangleUniformSamplerProbAliasRHI).Reference = (FRHIBuffer *)0x0;
    (this_01->BufferTriangleUniformSamplerProbAliasSRV).Reference = (FRHIShaderResourceView *)0x0;
    (this_01->BufferTriangleMatricesOffsetRHI).Reference = (FRHIBuffer *)0x0;
    (this_01->BufferTriangleMatricesOffsetSRV).Reference = (FRHIShaderResourceView *)0x0;
    (this_01->SampleRegionsProbAlias)._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
    (this_01->SampleRegionsTriangleIndicies)._padding_ = (longlong)&___7__TResourceArray_H_0A___6B_;
    (this_01->SampleRegionsVertices)._padding_ = (longlong)&___7__TResourceArray_H_0A___6B_;
    (this_01->FilteredAndUnfilteredBonesArray)._padding_ =
         (longlong)&___7__TResourceArray_G_0A___6B_;
    this_01->bSamplingRegionsAllAreaWeighted = false;
    this_01->NumSamplingRegionTriangles = 0;
    this_01->NumSamplingRegionVertices = 0;
    (this_01->SampleRegionsProbAlias)._padding_ = 0;
    (this_01->SampleRegionsProbAlias)._padding_ = 0;
    (this_01->SampleRegionsProbAlias).bNeedsCPUAccess = false;
    (this_01->SampleRegionsTriangleIndicies)._padding_ = 0;
    (this_01->SampleRegionsTriangleIndicies)._padding_ = 0;
    (this_01->SampleRegionsTriangleIndicies).bNeedsCPUAccess = false;
    (this_01->SampleRegionsVertices)._padding_ = 0;
    (this_01->SampleRegionsVertices)._padding_ = 0;
    (this_01->SampleRegionsVertices).bNeedsCPUAccess = false;
    (this_01->SampleRegionsProbAliasBuffer).Reference = (FRHIBuffer *)0x0;
    (this_01->SampleRegionsProbAliasSRV).Reference = (FRHIShaderResourceView *)0x0;
    (this_01->SampleRegionsTriangleIndicesBuffer).Reference = (FRHIBuffer *)0x0;
    (this_01->SampleRegionsTriangleIndicesSRV).Reference = (FRHIShaderResourceView *)0x0;
    (this_01->SampleRegionsVerticesBuffer).Reference = (FRHIBuffer *)0x0;
    (this_01->SampleRegionsVerticesSRV).Reference = (FRHIShaderResourceView *)0x0;
    this_01->NumFilteredBones = 0;
    this_01->NumUnfilteredBones = 0;
    this_01->ExcludedBoneIndex = -1;
    (this_01->FilteredAndUnfilteredBonesArray)._padding_ = 0;
    (this_01->FilteredAndUnfilteredBonesArray)._padding_ = 0;
    (this_01->FilteredAndUnfilteredBonesArray).bNeedsCPUAccess = false;
    (this_01->FilteredAndUnfilteredBonesBuffer).Reference = (FRHIBuffer *)0x0;
    (this_01->FilteredAndUnfilteredBonesSRV).Reference = (FRHIShaderResourceView *)0x0;
    this_01->NumFilteredSockets = 0;
    this_01->FilteredSocketBoneOffset = 0;
    this_01->bMeshValid = false;
    this_01->bHasMeshColors = false;
    (this_01->MeshVertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    (this_01->MeshIndexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    (this_01->MeshTangentBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    (this_01->MeshTexCoordBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    (this_01->MeshColorBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    this_01->NumTexCoord = 0;
    this_01->NumWeights = 0;
    this_01->LODIndex = -1;
    this_01->LODRenderData = (FSkeletalMeshLODRenderData *)0x0;
    this_01->SkeletalMeshSamplingLODBuiltData = (FSkeletalMeshSamplingLODBuiltData *)0x0;
    this_01->TriangleCount = 0;
    this_01->VertexCount = 0;
    this_01->InputWeightStride = 0;
    this_01->bUseGpuUniformlyDistributedSampling = false;
    this_01->GPUMemoryUsage = 0;
    this_02 = this_01;
  }
  pFVar14 = (this->CachedLODData).Reference;
  this->MeshGpuSpawnStaticBuffers = this_02;
  FSkeletalMeshGpuSpawnStaticBuffers::Initialise
            (this_02,this,this->CachedLODIdx,pFVar14,(FSkeletalMeshSamplingLODBuiltData *)pFVar56,
             local_d28);
  BeginInitResource((FRenderResource *)this->MeshGpuSpawnStaticBuffers,(FRenderCommandPipe *)0x0);
  pFVar56 = ::operator_new(0x80);
  if (pFVar56 != (FSkeletalMeshGpuSpawnStaticBuffers *)0x0) {
    FRenderResource::FRenderResource((FRenderResource *)pFVar56);
    (pFVar56->SceneComponent).WeakPtr = (FWeakObjectPtr)0x0;
    pFVar56->_padding_ = (longlong)&___7FSkeletalMeshGpuDynamicBufferProxy__6B_;
    *(undefined4 *)&(pFVar56->BufferTriangleUniformSamplerProbAliasRHI).Reference = 0;
    (pFVar56->BufferTriangleUniformSamplerProbAliasSRV).Reference = (FRHIShaderResourceView *)0x0;
    (pFVar56->BufferTriangleMatricesOffsetRHI).Reference = (FRHIBuffer *)0x0;
    (pFVar56->BufferTriangleMatricesOffsetSRV).Reference = (FRHIShaderResourceView *)0x0;
    pFVar56->bSamplingRegionsAllAreaWeighted = false;
    *(undefined3 *)&pFVar56->field_0x49 = 0;
    pFVar56->NumSamplingRegionTriangles = 0;
    *(undefined8 *)&pFVar56->NumSamplingRegionVertices = 0;
    (pFVar56->SampleRegionsProbAlias)._padding_ = 0;
    (pFVar56->SampleRegionsProbAlias)._padding_ = 0;
    (pFVar56->SampleRegionsProbAlias)._padding_ = 0;
    *(undefined2 *)&(pFVar56->SampleRegionsProbAlias).bNeedsCPUAccess = 0;
    (pFVar56->SampleRegionsProbAlias).field_0x1a = 0;
    (pFVar56->SampleRegionsTriangleIndicies)._padding_ = 0;
    this_03 = pFVar56;
  }
  uVar68 = (this->FilteredSocketInfo).ArrayNum;
  pFVar14 = (this->CachedLODData).Reference;
  this->MeshGpuSpawnDynamicBuffers = (FSkeletalMeshGpuDynamicBufferProxy *)this_03;
  FSkeletalMeshGpuDynamicBufferProxy::Initialise
            ((FSkeletalMeshGpuDynamicBufferProxy *)this_03,(FReferenceSkeleton *)local_d58,pFVar14,
             uVar68);
  BeginInitResource((FRenderResource *)this->MeshGpuSpawnDynamicBuffers,(FRenderCommandPipe *)0x0);
  return true;
}

// Release @ 14924a0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNDISkeletalMesh_InstanceData::Release(FNDISkeletalMesh_InstanceData *this)

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
  FSkeletalMeshGpuSpawnStaticBuffers *pFStack_70;
  FSkeletalMeshGpuDynamicBufferProxy *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FSkeletalMeshGpuSpawnStaticBuffers *pFStack_40;
  FSkeletalMeshGpuDynamicBufferProxy *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = this->MeshGpuSpawnStaticBuffers;
  if ((pFStack_70 != (FSkeletalMeshGpuSpawnStaticBuffers *)0x0) ||
     (this->MeshGpuSpawnDynamicBuffers != (FSkeletalMeshGpuDynamicBufferProxy *)0x0)) {
    local_68 = this->MeshGpuSpawnDynamicBuffers;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNDISkeletalMesh_InstanceData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDISkeletalMesh_InstanceData::Release'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDISkeletalMesh_InstanceData::Release_::__l5::TSTR_DeleteResource2279>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FNDISkeletalMesh_InstanceData::Release'::__l5::TSTR_DeleteResource2279>
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
    this->MeshGpuSpawnStaticBuffers = (FSkeletalMeshGpuSpawnStaticBuffers *)0x0;
    this->MeshGpuSpawnDynamicBuffers = (FSkeletalMeshGpuDynamicBufferProxy *)0x0;
  }
  return;
}

// ResetRequired @ 14924c2d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FNDISkeletalMesh_InstanceData::ResetRequired
          (FNDISkeletalMesh_InstanceData *this,UNiagaraDataInterfaceSkeletalMesh *param_1,
          FNiagaraSystemInstance *param_2)

{
  byte bVar1;
  USkeletalMeshComponent *pUVar2;
  FSkeletalMeshSkinningData *pFVar3;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar4;
  FNiagaraTypeDefinition *pFVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  USkeletalMesh *pUVar8;
  byte bVar9;
  int iVar10;
  bool bVar11;
  UObject *local_res8;
  
  this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this->bComponentValid != 0) {
    if (this_00 == (USkeletalMeshComponent *)0x0) {
      return true;
    }
    if ((this_00->_padding_ & 1) == 0) {
      return true;
    }
  }
  pUVar4 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->SkeletalMesh).WeakPtr);
  if ((this->bMeshValid != 0) && (pUVar4 == (USkeletalMesh *)0x0)) {
    return true;
  }
  local_res8 = (UObject *)0x0;
  if (((param_1->MeshUserParameter).Parameter._padding_ == 0) ||
     (pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)
                          &(param_1->MeshUserParameter).Parameter._padding_),
     (pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
    pUVar2 = (param_1->SourceComponent).field0_0x0.DebugPtr;
    if (pUVar2 != (USkeletalMeshComponent *)0x0) {
      if (pUVar2 != this_00) {
        return true;
      }
      goto LAB_14924c3cc;
    }
    pUVar6 = FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
    if (pUVar6 == (UObject *)0x0) goto LAB_14924c3cc;
    bVar11 = TWeakObjectPtr<USceneComponent,FWeakObjectPtr>::UEOpEquals<USceneComponent,bool>
                       (&this->CachedAttachParent,*(USceneComponent **)&pUVar6[5].field_0x8);
  }
  else {
    pUVar6 = (UObject *)0x0;
    if ((this->UserParamBinding).UObjectOffset != -1) {
      FNiagaraParameterStore::GetUObject((this->UserParamBinding).BoundStore,(int)&local_res8);
      pUVar6 = local_res8;
    }
    if (pUVar6 == (UObject *)0x0) {
      bVar11 = this->CachedUserParam == (UObject *)0x0;
    }
    else {
      bVar11 = pUVar6 == this->CachedUserParam;
    }
  }
  if (bVar11 == false) {
    return true;
  }
LAB_14924c3cc:
  if (pUVar4 != (USkeletalMesh *)0x0) {
    bVar9 = *(byte *)((longlong)&pUVar4->_padding_ + 5);
    bVar1 = *(byte *)((longlong)&pUVar4->_padding_ + 6);
    if (bVar1 < bVar9) {
      bVar9 = bVar1;
    }
    if (bVar9 == 0) {
      return true;
    }
    iVar10 = ((uint)*(byte *)((longlong)&pUVar4->_padding_ + 4) +
             (uint)*(byte *)((longlong)&pUVar4->_padding_ + 3)) - (uint)bVar9;
    if (this->CachedLODIdx < iVar10) {
      return true;
    }
    if ((iVar10 < this->CachedLODIdx) && (this->bResetOnLODStreamedIn != false)) {
      return true;
    }
  }
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar10 = (int)pUVar7->_padding_;
    if (((iVar10 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
         &pUVar7->_padding_)) &&
       (pUVar8 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00), pUVar8 != pUVar4)) {
      pFVar3 = (this->SkinningData).SkinningData.Object;
      if (pFVar3 != (FSkeletalMeshSkinningData *)0x0) {
        AcquireSRWLockExclusive((PSRWLOCK)&pFVar3->RWGuard);
        pFVar3->bForceDataRefresh = true;
        ReleaseSRWLockExclusive((PSRWLOCK)&pFVar3->RWGuard);
      }
      return true;
    }
  }
  return param_1->ChangeId != this->ChangeId;
}

// Tick @ 14924fa00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
FNDISkeletalMesh_InstanceData::Tick
          (FNDISkeletalMesh_InstanceData *this,UNiagaraDataInterfaceSkeletalMesh *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
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
  bool bVar23;
  TMatrix<double> *pTVar24;
  TMatrix<double> *pTVar25;
  TTransform<double> local_198;
  TMatrix<double> local_138 [2];
  
  bVar23 = ResetRequired(this,param_1,param_2);
  if (bVar23) {
    return true;
  }
  pTVar25 = &this->Transform;
  dVar1 = (this->Transform).M[0][1];
  dVar2 = (this->Transform).M[0][2];
  dVar3 = (this->Transform).M[0][3];
  (this->PrevTransform).M[0][0] = pTVar25->M[0][0];
  (this->PrevTransform).M[0][1] = dVar1;
  dVar1 = (this->Transform).M[1][0];
  dVar4 = (this->Transform).M[1][1];
  (this->PrevTransform).M[0][2] = dVar2;
  (this->PrevTransform).M[0][3] = dVar3;
  dVar2 = (this->Transform).M[1][2];
  dVar3 = (this->Transform).M[1][3];
  (this->PrevTransform).M[1][0] = dVar1;
  (this->PrevTransform).M[1][1] = dVar4;
  dVar1 = (this->Transform).M[2][0];
  dVar4 = (this->Transform).M[2][1];
  (this->PrevTransform).M[1][2] = dVar2;
  (this->PrevTransform).M[1][3] = dVar3;
  dVar2 = (this->Transform).M[2][2];
  dVar3 = (this->Transform).M[2][3];
  (this->PrevTransform).M[2][0] = dVar1;
  (this->PrevTransform).M[2][1] = dVar4;
  dVar1 = (this->Transform).M[3][0];
  dVar4 = (this->Transform).M[3][1];
  (this->PrevTransform).M[2][2] = dVar2;
  (this->PrevTransform).M[2][3] = dVar3;
  dVar2 = (this->Transform).M[3][2];
  dVar3 = (this->Transform).M[3][3];
  (this->PrevTransform).M[3][0] = dVar1;
  (this->PrevTransform).M[3][1] = dVar4;
  (this->PrevTransform).M[3][2] = dVar2;
  (this->PrevTransform).M[3][3] = dVar3;
  this->DeltaSeconds = param_3;
  CalculateComponentTransform(this,&local_198,param_2);
  pTVar24 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_198,local_138);
  dVar1 = pTVar24->M[0][1];
  pTVar25->M[0][0] = pTVar24->M[0][0];
  (this->Transform).M[0][1] = dVar1;
  dVar1 = pTVar24->M[0][3];
  (this->Transform).M[0][2] = pTVar24->M[0][2];
  (this->Transform).M[0][3] = dVar1;
  dVar1 = pTVar24->M[1][1];
  (this->Transform).M[1][0] = pTVar24->M[1][0];
  (this->Transform).M[1][1] = dVar1;
  dVar1 = pTVar24->M[1][3];
  (this->Transform).M[1][2] = pTVar24->M[1][2];
  (this->Transform).M[1][3] = dVar1;
  dVar1 = pTVar24->M[2][1];
  (this->Transform).M[2][0] = pTVar24->M[2][0];
  (this->Transform).M[2][1] = dVar1;
  dVar1 = pTVar24->M[2][3];
  (this->Transform).M[2][2] = pTVar24->M[2][2];
  (this->Transform).M[2][3] = dVar1;
  dVar1 = pTVar24->M[3][1];
  (this->Transform).M[3][0] = pTVar24->M[3][0];
  (this->Transform).M[3][1] = dVar1;
  dVar1 = pTVar24->M[3][3];
  (this->Transform).M[3][2] = pTVar24->M[3][2];
  (this->Transform).M[3][3] = dVar1;
  pTVar25 = UE::Math::TMatrix<double>::Inverse(pTVar25,local_138);
  dVar1 = pTVar25->M[1][0];
  uVar12 = *(undefined4 *)((longlong)pTVar25->M[0] + 4);
  dVar2 = pTVar25->M[2][0];
  dVar3 = pTVar25->M[3][0];
  dVar4 = pTVar25->M[0][1];
  dVar5 = pTVar25->M[1][1];
  uVar13 = *(undefined4 *)(pTVar25->M[2] + 1);
  uVar14 = *(undefined4 *)((longlong)pTVar25->M[2] + 0xc);
  dVar6 = pTVar25->M[3][1];
  uVar15 = *(undefined4 *)(pTVar25->M[0] + 2);
  uVar16 = *(undefined4 *)((longlong)pTVar25->M[0] + 0x14);
  dVar7 = pTVar25->M[1][2];
  uVar17 = *(undefined4 *)(pTVar25->M[2] + 2);
  uVar18 = *(undefined4 *)((longlong)pTVar25->M[2] + 0x14);
  dVar8 = pTVar25->M[3][2];
  uVar19 = *(undefined4 *)(pTVar25->M[0] + 3);
  uVar20 = *(undefined4 *)((longlong)pTVar25->M[0] + 0x1c);
  dVar9 = pTVar25->M[1][3];
  uVar21 = *(undefined4 *)(pTVar25->M[2] + 3);
  uVar22 = *(undefined4 *)((longlong)pTVar25->M[2] + 0x1c);
  dVar10 = pTVar25->M[3][3];
  *(undefined4 *)(this->TransformInverseTransposed).M[0] = *(undefined4 *)pTVar25->M[0];
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[0] + 4) = uVar12;
  *(int *)((this->TransformInverseTransposed).M[0] + 1) = SUB84(dVar1,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[0] + 0xc) =
       (int)((ulonglong)dVar1 >> 0x20);
  (this->TransformInverseTransposed).M[0][2] = dVar2;
  (this->TransformInverseTransposed).M[0][3] = dVar3;
  (this->TransformInverseTransposed).M[1][0] = dVar4;
  (this->TransformInverseTransposed).M[1][1] = dVar5;
  *(undefined4 *)((this->TransformInverseTransposed).M[1] + 2) = uVar13;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[1] + 0x14) = uVar14;
  *(int *)((this->TransformInverseTransposed).M[1] + 3) = SUB84(dVar6,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[1] + 0x1c) =
       (int)((ulonglong)dVar6 >> 0x20);
  *(undefined4 *)(this->TransformInverseTransposed).M[2] = uVar15;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[2] + 4) = uVar16;
  *(int *)((this->TransformInverseTransposed).M[2] + 1) = SUB84(dVar7,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[2] + 0xc) =
       (int)((ulonglong)dVar7 >> 0x20);
  uVar11 = this->FilteredSocketTransformsIndex;
  *(undefined4 *)((this->TransformInverseTransposed).M[2] + 2) = uVar17;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[2] + 0x14) = uVar18;
  *(int *)((this->TransformInverseTransposed).M[2] + 3) = SUB84(dVar8,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[2] + 0x1c) =
       (int)((ulonglong)dVar8 >> 0x20);
  *(undefined4 *)(this->TransformInverseTransposed).M[3] = uVar19;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 4) = uVar20;
  *(int *)((this->TransformInverseTransposed).M[3] + 1) = SUB84(dVar9,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[3] + 0xc) =
       (int)((ulonglong)dVar9 >> 0x20);
  this->FilteredSocketTransformsIndex = uVar11 - 1 & 1;
  *(undefined4 *)((this->TransformInverseTransposed).M[3] + 2) = uVar21;
  *(undefined4 *)((longlong)(this->TransformInverseTransposed).M[3] + 0x14) = uVar22;
  *(int *)((this->TransformInverseTransposed).M[3] + 3) = SUB84(dVar10,0);
  *(int *)((longlong)(this->TransformInverseTransposed).M[3] + 0x1c) =
       (int)((ulonglong)dVar10 >> 0x20);
  UpdateFilteredSocketTransforms(this);
  if (this->MeshGpuSpawnDynamicBuffers != (FSkeletalMeshGpuDynamicBufferProxy *)0x0) {
    FSkeletalMeshGpuDynamicBufferProxy::NewFrame
              (this->MeshGpuSpawnDynamicBuffers,this,this->CachedLODIdx);
  }
  return false;
}

// UpdateFilteredSocketTransforms @ 149253430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNDISkeletalMesh_InstanceData::UpdateFilteredSocketTransforms(FNDISkeletalMesh_InstanceData *this)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  USkinnedMeshComponent *pUVar13;
  UClass *pUVar14;
  TTransform<double> *pTVar15;
  uint uVar16;
  longlong lVar17;
  TTransform<float> *pTVar18;
  longlong lVar19;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  USkinnedMeshComponent *local_1f8;
  TTransform<double> local_1e8;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  __m128 local_128;
  __m128 local_118;
  __m128 local_108;
  __m128 local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_228;
  pUVar13 = (USkinnedMeshComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (pUVar13 != (USkinnedMeshComponent *)0x0) {
    local_1f8 = pUVar13;
    pUVar14 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar2 = (int)pUVar14->_padding_;
    if ((iVar2 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar14->_padding_)) goto LAB_149253498;
  }
  local_1f8 = (USkinnedMeshComponent *)0x0;
LAB_149253498:
  uVar1 = this->FilteredSocketTransformsIndex;
  uVar16 = 0;
  if (0 < (this->FilteredSocketInfo).ArrayNum) {
    lVar17 = 0;
    lVar19 = 0;
    do {
      iVar2 = (this->FilteredSocketInfo).ArrayNum;
      uVar12 = 0;
      if ((int)uVar16 < iVar2) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_208 = (longlong)(int)uVar16;
        local_200 = (longlong)iVar2;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar18 = (TTransform<float> *)((this->FilteredSocketInfo).AllocatorInstance.Data + lVar19);
      iVar2 = pTVar18[1].Rotation.m128_i32[0];
      if (iVar2 == -1) {
        pTVar15 = &local_1e8;
        local_1e8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_1e8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_1e8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_1e8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_1e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_1e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        pTVar15 = USkinnedMeshComponent::GetBoneTransform
                            (local_1f8,&local_c8,iVar2,&UE::Math::TTransform<double>::Identity);
      }
      local_178 = (pTVar15->Rotation).ZW.m128d_f64[0];
      dStack_170 = (pTVar15->Rotation).ZW.m128d_f64[1];
      local_188 = (pTVar15->Rotation).XY.m128d_f64[0];
      dStack_180 = (pTVar15->Rotation).XY.m128d_f64[1];
      local_158 = (pTVar15->Translation).ZW.m128d_f64[0];
      dStack_150 = (pTVar15->Translation).ZW.m128d_f64[1];
      local_168 = (pTVar15->Translation).XY.m128d_f64[0];
      dStack_160 = (pTVar15->Translation).XY.m128d_f64[1];
      local_138 = (pTVar15->Scale3D).ZW.m128d_f64[0];
      dStack_130 = (pTVar15->Scale3D).ZW.m128d_f64[1];
      local_148 = (pTVar15->Scale3D).XY.m128d_f64[0];
      dStack_140 = (pTVar15->Scale3D).XY.m128d_f64[1];
      local_f8.m128_f32[2] = (float)local_178;
      local_f8.m128_f32[3] = (float)dStack_170;
      local_f8.m128_f32[0] = (float)local_188;
      local_f8.m128_f32[1] = (float)dStack_180;
      local_d8 = (float)local_148;
      fStack_d4 = (float)dStack_140;
      fStack_e0 = (float)local_158;
      fStack_dc = (float)dStack_150;
      local_e8 = (float)local_168;
      fStack_e4 = (float)dStack_160;
      fStack_d0 = (float)local_138;
      fStack_cc = (float)dStack_130;
      local_128 = GlobalVectorConstants::Float0001;
      local_108 = GlobalVectorConstants::Float1110;
      local_118 = GlobalVectorConstants::FloatZero;
      UE::Math::TTransform<float>::Multiply
                ((TTransform<float> *)&local_128,pTVar18,(TTransform<float> *)&local_f8);
      iVar2 = (this->FilteredSocketTransforms).Elements[uVar1].ArrayNum;
      uVar5 = local_128.m128_u64[0];
      uVar6 = local_128.m128_u64[1];
      uVar7 = local_118.m128_u64[0];
      uVar8 = local_118.m128_u64[1];
      uVar9 = local_108.m128_u64[0];
      uVar10 = local_108.m128_u64[1];
      uVar12 = 0;
      if ((int)uVar16 < iVar2) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_208 = (longlong)(int)uVar16;
        local_200 = (longlong)iVar2;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar3 = (this->FilteredSocketTransforms).Elements[uVar1].AllocatorInstance.Data;
      uVar16 = uVar16 + 1;
      lVar19 = lVar19 + 0x40;
      *(undefined8 *)(pFVar3 + lVar17) = uVar5;
      *(undefined8 *)(pFVar3 + lVar17 + 8) = uVar6;
      *(undefined8 *)(pFVar3 + lVar17 + 0x10) = uVar7;
      *(undefined8 *)(pFVar3 + lVar17 + 0x10 + 8) = uVar8;
      *(undefined8 *)(pFVar3 + lVar17 + 0x20) = uVar9;
      *(undefined8 *)(pFVar3 + lVar17 + 0x20 + 8) = uVar10;
      lVar17 = lVar17 + 0x30;
    } while ((int)uVar16 < (this->FilteredSocketInfo).ArrayNum);
  }
  return;
}

