// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// DebugDraw @ 14d551c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraIKAimDebugInfo::DebugDraw
          (FCameraIKAimDebugInfo *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  int iVar5;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> FVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  TVector<double> *pTVar13;
  wchar_t *pwVar14;
  uchar *puVar15;
  int iVar16;
  undefined1 local_res8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_178;
  TVector<double>_u_0 local_168;
  UFont *local_148;
  FString local_140;
  FString local_130;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FLinearColor local_108;
  TVector2<double>_u_0 local_f8;
  TVector<double>_u_0 local_e8;
  FStringFormatArg local_d0;
  double local_a8;
  
  FCameraDebugRenderer::AddText(param_2,L"IK aiming ");
  pwVar14 = L"{cam_good}succeeded";
  if (this->bSucceeded == false) {
    pwVar14 = L"{cam_error}failed";
  }
  FCameraDebugRenderer::AddText(param_2,pwVar14);
  piVar2 = &(this->Iterations).ArrayNum;
  FCameraDebugRenderer::AddText(param_2,L"{cam_default} in %d iterations\n");
  local_148 = UEngine::GetSmallFont();
  FCameraDebugRenderer::DrawPoint
            (param_2,&this->DesiredTarget,__real_40000000,&FLinearColor::Yellow,__real_40000000);
  FCameraDebugRenderer::AddIndent(param_2);
  fVar12 = __real_3f800000;
  dVar11 = __real_408f400000000000;
  FVar6 = (this->Iterations).AllocatorInstance.SecondaryData;
  iVar5 = *piVar2;
  local_f8._s_0.X = ___xmm_c034000000000000c034000000000000;
  local_f8._s_0.Y = _UNK_152b53ab8;
  if (FVar6 != (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
    this = (FCameraIKAimDebugInfo *)FVar6;
  }
  iVar16 = 1;
  puVar15 = (uchar *)((longlong)this + 0x38);
  while( true ) {
    if (*piVar2 != iVar5) {
      `TCheckedPointerIterator<UE::Cameras::FCameraIKAimIterationDebugInfo_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pFVar1 = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *)(puVar15 + -0x38);
    if (pFVar1 == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *)
                  ((longlong)iVar5 * 0x70 + (longlong)this)) break;
    local_e8._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_e8._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_e8._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    pTVar13 = UE::Math::TRotator<double>::RotateVector
                        ((TRotator<double> *)(puVar15 + -0x20),(TVector<double> *)&local_168._s_0,
                         (TVector<double> *)&local_e8._s_0);
    dVar7 = (((TVector<double>_u_0 *)pFVar1->InlineData)->_s_0).X;
    dVar8 = *(double *)(puVar15 + -0x30);
    pFVar3 = *(FScriptContainerElement **)(puVar15 + -0x28);
    dVar9 = (pTVar13->field0_0x0)._s_0.X;
    dVar10 = (pTVar13->field0_0x0)._s_0.Y;
    dVar4 = (pTVar13->field0_0x0)._s_0.Z;
    LerpLinearColorUsingHSV(&local_108,&FLinearColor::Yellow,&FLinearColor::Red,iVar16 + -1,*piVar2)
    ;
    local_168._s_0.X = dVar9 * dVar11 + dVar7;
    local_168._s_0.Y = dVar10 * dVar11 + dVar8;
    local_168._s_0.Z = dVar4 * dVar11 + (double)pFVar3;
    local_d0.StringValue.Data.AllocatorInstance.Data = pFVar3;
    local_a8 = dVar4;
    FCameraDebugRenderer::DrawLine
              (param_2,(TVector<double> *)pFVar1,(TVector<double> *)&local_168._s_0,&local_108,
               fVar12);
    FStringFormatArg::FStringFormatArg(&local_d0,iVar16);
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 1;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_178.AllocatorInstance,1,&local_178.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_178.AllocatorInstance.Data,&local_d0,1);
    ::FString::FormatImpl(&local_140,L"Iteration {0}",&local_178);
    local_118 = local_140.Data.AllocatorInstance.Data;
    iStack_110 = local_140.Data.ArrayNum + -1;
    if (local_140.Data.ArrayNum == 0) {
      iStack_110 = 0;
    }
    local_168._s_0.Y = (double)CONCAT44(uStack_10c,iStack_110);
    local_168._s_0.X = (double)local_140.Data.AllocatorInstance.Data;
    FCameraDebugRenderer::DrawTextView
              (param_2,(TVector<double> *)pFVar1,(TVector2<double> *)&local_f8._s_0,
               (TStringView<wchar_t> *)&local_168._s_0,&local_108,local_148,fVar12);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
    if ((FStringFormatArg *)local_178.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
    if (local_d0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.StringValue.Data.AllocatorInstance.Data);
    }
    FCameraDebugRenderer::AddText(param_2,L"%d : error angle %.2fdeg, error distance %.1fcm, ");
    iVar16 = iVar16 + 1;
    if (puVar15[0x30] == '\0') {
      FCameraDebugRenderer::AddText(param_2,L" {cam_good}reached tolerance{cam_default}\n");
      puVar15 = puVar15 + 0x70;
    }
    else if (puVar15[0x31] == '\0') {
      FCameraDebugRenderer::AddText(param_2,L" {cam_error}couldn\'t find solver{cam_default}\n");
      puVar15 = puVar15 + 0x70;
    }
    else {
      ::FString::PrintfImpl(&local_130,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FCameraDebugRenderer::AddText(param_2,L" pivot %s");
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      FCameraDebugRenderer::AddText(param_2,L" correction Yaw=%.1f Pitch=%.1f");
      if (puVar15[0x32] == '\0') {
        FCameraDebugRenderer::AddText
                  (param_2,L", {cam_error}couldn\'t compute correction{cam_default}\n");
        puVar15 = puVar15 + 0x70;
      }
      else {
        FCameraDebugRenderer::NewLine(param_2,false);
        puVar15 = puVar15 + 0x70;
      }
    }
  }
  FCameraDebugRenderer::RemoveIndent(param_2);
  return;
}

