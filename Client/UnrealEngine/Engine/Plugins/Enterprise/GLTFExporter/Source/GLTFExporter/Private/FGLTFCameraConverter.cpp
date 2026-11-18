// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e4e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FGLTFJsonCamera * __thiscall
FGLTFCameraConverter::Convert(FGLTFCameraConverter *this,UCameraComponent *param_1)

{
  FString *pFVar1;
  float fVar2;
  uchar uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FGLTFLogBuilder *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FGLTFJsonCamera *pFVar9;
  FGLTFJsonCamera *pFVar10;
  FName *this_01;
  ForAnyElementType *pFVar11;
  EGLTFJsonCameraType EVar12;
  float fVar13;
  undefined1 auStack_9e8 [32];
  FGLTFJsonCamera **local_9c8;
  FScriptContainerElement *local_9c0;
  longlong local_9b8;
  longlong local_9b0;
  undefined8 local_9a8;
  FGLTFJsonCamera *local_998;
  FString local_990;
  FName local_980;
  FName local_978;
  FName local_970;
  FName local_968;
  FString local_960;
  FString local_950;
  FString local_940;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  float local_8e8;
  undefined1 local_8e4;
  undefined4 local_8e0;
  undefined2 local_8dc;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined1 local_8c4;
  uint local_8c0;
  undefined1 local_8bc;
  undefined4 local_8b8;
  FPostProcessSettings local_8a8;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_9e8;
  uVar3 = (param_1->ProjectionMode).Value;
  pFVar10 = (FGLTFJsonCamera *)0x0;
  if (uVar3 == '\0') {
    EVar12 = Perspective;
  }
  else {
    if (uVar3 != '\x01') {
      return (FGLTFJsonCamera *)0x0;
    }
    EVar12 = Orthographic;
  }
  lVar4 = *(longlong *)&this->field_0x58;
  pFVar9 = ::operator_new(0x58);
  if (pFVar9 != (FGLTFJsonCamera *)0x0) {
    *(undefined4 *)&pFVar9->_padding_ = *(undefined4 *)(lVar4 + 0x270);
    pFVar9->_padding_ = (longlong)&___7FGLTFJsonCamera__6B_;
    (pFVar9->Orthographic)._padding_ = (longlong)&___7FGLTFJsonOrthographic__6B_;
    (pFVar9->Perspective)._padding_ = (longlong)&___7FGLTFJsonPerspective__6B_;
    (pFVar9->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->Name).Data.ArrayNum = 0;
    (pFVar9->Name).Data.ArrayMax = 0;
    pFVar9->Type = None;
    (pFVar9->Orthographic).XMag = 0.0;
    (pFVar9->Orthographic).YMag = 0.0;
    (pFVar9->Orthographic).ZFar = 0.0;
    (pFVar9->Orthographic).ZNear = 0.0;
    (pFVar9->Perspective).AspectRatio = 0.0;
    (pFVar9->Perspective).YFov = 0.0;
    (pFVar9->Perspective).ZFar = 0.0;
    (pFVar9->Perspective).ZNear = 0.0;
    pFVar10 = pFVar9;
  }
  pFVar11 = (ForAnyElementType *)(lVar4 + 0x268);
  pFVar5 = pFVar11->Data;
  local_998 = pFVar10;
  if ((pFVar5 <= (FScriptContainerElement *)&local_998) &&
     ((FScriptContainerElement *)&local_998 < pFVar5 + (longlong)*(int *)(lVar4 + 0x274) * 8)) {
    local_9b0 = (longlong)*(int *)(lVar4 + 0x270);
    local_9a8 = 8;
    local_9c8 = &local_998;
    local_9c0 = pFVar5;
    local_9b8 = (longlong)*(int *)(lVar4 + 0x274);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FGLTFJsonCamera *)(*pcVar6)();
      return pFVar10;
    }
  }
  iVar8 = *(int *)(lVar4 + 0x270);
  if (iVar8 == *(int *)(lVar4 + 0x274)) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar11,(int *)(lVar4 + 0x274));
  }
  *(int *)(lVar4 + 0x270) = iVar8 + 1;
  *(FGLTFJsonCamera **)(pFVar11->Data + (longlong)iVar8 * 8) = local_998;
  lVar4 = param_1->_padding_;
  local_998 = (FGLTFJsonCamera *)0x0;
  if ((lVar4 == 0) || (param_1 != *(UCameraComponent **)(lVar4 + 0x1b8))) {
    local_978 = (FName)param_1->_padding_;
    this_01 = &local_978;
  }
  else {
    local_980 = *(FName *)(lVar4 + 0x18);
    this_01 = &local_980;
  }
  ::FName::ToString(this_01,&local_990);
  pFVar1 = &pFVar10->Name;
  if (pFVar1 != &local_990) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_990.Data.AllocatorInstance.Data;
    (pFVar10->Name).Data.ArrayNum = local_990.Data.ArrayNum;
    (pFVar10->Name).Data.ArrayMax = local_990.Data.ArrayMax;
    local_990.Data.ArrayNum = 0;
    local_990.Data.ArrayMax = 0;
    local_990.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_990.Data.AllocatorInstance.Data);
  }
  pFVar10->Type = EVar12;
  local_928 = 0;
  uStack_920 = 0;
  local_918 = 0;
  uStack_910 = 0;
  local_8c0 = local_8c0 & 0xfffffffc | 4;
  local_908 = 0;
  uStack_900 = 0;
  local_8f8 = ___xmm_3f80000042b4000042b4000042b40000;
  uStack_8f0 = _UNK_150fabfd8;
  local_8e8 = 512.0;
  local_8e4 = 1;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = ___xmm_3faaaaabbf8000004a00000000000000;
  uStack_8d0 = _UNK_150fabfe8;
  local_8c4 = 0;
  local_8bc = 0;
  local_8b8 = 0;
  FPostProcessSettings::FPostProcessSettings(&local_8a8);
  local_a8 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_a0 = _UNK_15076b1f8;
  local_c8 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b8 = 0x3f800000;
  local_b4 = 0x3f800000;
  local_98 = 0;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (**(code **)(param_1->_padding_ + 0x660))(param_1);
  this_00 = *(FGLTFLogBuilder **)&this->field_0x58;
  fVar2 = *(float *)(this_00->_padding_ + 0x28);
  if (pFVar10->Type == Orthographic) {
    if ((local_8c0 & 1) == 0) {
      local_970 = *(FName *)(param_1->_padding_ + 0x18);
      ::FName::ToString(&local_970,&local_950);
      local_968 = (FName)param_1->_padding_;
      ::FName::ToString(&local_968,&local_960);
      ::FString::PrintfImpl
                (&local_940,
                 L"Aspect ratio for orthographic camera component %s (in actor %s) will be constrainted in glTF"
                );
      FGLTFLogBuilder::LogWarning(this_00,&local_940);
      if (local_940.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_940.Data.AllocatorInstance.Data);
      }
      if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_960.Data.AllocatorInstance.Data);
      }
      if (local_950.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_950.Data.AllocatorInstance.Data);
      }
    }
    (pFVar10->Orthographic).XMag = local_8e8 * fVar2;
    (pFVar10->Orthographic).YMag = (local_8e8 / uStack_8d0._4_4_) * fVar2;
    (pFVar10->Orthographic).ZFar = local_8d8._4_4_ * fVar2;
    (pFVar10->Orthographic).ZNear = (float)local_8d8 * fVar2;
  }
  else if (pFVar10->Type == Perspective) {
    if ((local_8c0 & 1) != 0) {
      (pFVar10->Perspective).AspectRatio = uStack_8d0._4_4_;
    }
    fVar13 = tanf((float)local_8f8 * __real_3c8efa35 * __real_3f000000);
    fVar13 = atanf(fVar13 / uStack_8d0._4_4_);
    (pFVar10->Perspective).YFov = fVar13 + fVar13;
    fVar13 = (float)uStack_8d0;
    if ((float)uStack_8d0 <= 0.0) {
      fVar13 = GNearClippingPlane;
    }
    (pFVar10->Perspective).ZNear = fVar13 * fVar2;
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Converters\\GLTFCameraConverters.cpp"
                       ,0x32,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FGLTFJsonCamera *)(*pcVar6)();
      return pFVar10;
    }
  }
  if (local_8a8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return pFVar10;
}

