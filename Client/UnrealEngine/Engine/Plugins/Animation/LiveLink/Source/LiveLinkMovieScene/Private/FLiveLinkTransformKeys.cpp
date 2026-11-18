// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 3

// Add @ 14d0a01c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLiveLinkTransformKeys::Add(FLiveLinkTransformKeys *this,TTransform<double> *param_1)

{
  int *piVar1;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_268 [32];
  float *local_248;
  FScriptContainerElement *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  float fStack_218;
  undefined8 local_214;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 uStack_200;
  undefined2 local_1ff;
  undefined1 local_1fd;
  float fStack_1f8;
  undefined8 local_1f4;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 uStack_1e0;
  undefined2 local_1df;
  undefined1 local_1dd;
  float fStack_1d8;
  undefined8 local_1d4;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 uStack_1c0;
  undefined2 local_1bf;
  undefined1 local_1bd;
  float fStack_1b8;
  undefined8 local_1b4;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 uStack_1a0;
  undefined2 local_19f;
  undefined1 local_19d;
  float fStack_198;
  undefined8 local_194;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 uStack_180;
  undefined2 local_17f;
  undefined1 local_17d;
  float fStack_178;
  undefined8 local_174;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 uStack_160;
  undefined2 local_15f;
  undefined1 local_15d;
  float fStack_158;
  undefined8 local_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined2 local_13f;
  undefined1 local_13d;
  float fStack_138;
  undefined8 local_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined2 local_11f;
  undefined1 local_11d;
  TRotator<double> local_118;
  TQuat<double> local_f8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined2 local_2f;
  undefined1 local_2d;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_d8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_d0 = (param_1->Translation).XY.m128d_f64[1];
  local_c8 = (param_1->Translation).ZW.m128d_f64[0];
  pFVar3 = (this->LocationX).AllocatorInstance.Data;
  local_48 = (float)local_d8;
  local_2d = 0;
  uStack_34 = 0;
  uStack_30 = 2;
  local_2f = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar9 = (longlong)(this->LocationX).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar9 * 0x1c)) {
    local_230 = (longlong)(this->LocationX).ArrayNum;
    local_228 = 0x1c;
    local_248 = &local_48;
    local_240 = pFVar3;
    local_238 = lVar9;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->LocationX).ArrayNum;
  piVar1 = &(this->LocationX).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->LocationX).AllocatorInstance,piVar1);
  }
  uStack_200 = 2;
  (this->LocationX).ArrayNum = iVar8 + 1;
  pFVar3 = (this->LocationX).AllocatorInstance.Data;
  lVar9 = (longlong)iVar8 * 0x1c;
  local_1ff = 0;
  uStack_204 = 0;
  *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar3 + lVar9 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(pFVar3 + lVar9 + 0x10) = CONCAT44(uStack_34,uStack_38);
  *(uint *)(pFVar3 + lVar9 + 0x18) = CONCAT13(local_2d,CONCAT21(local_2f,uStack_30));
  local_c0 = (param_1->Translation).XY.m128d_f64[0];
  dStack_b8 = (param_1->Translation).XY.m128d_f64[1];
  local_b0 = (param_1->Translation).ZW.m128d_f64[0];
  pFVar3 = (this->LocationY).AllocatorInstance.Data;
  uStack_20c = 0;
  uVar5 = uStack_20c;
  uStack_208 = 0;
  local_1fd = 0;
  local_2f = 0;
  local_2d = 0;
  uStack_30 = 2;
  fStack_218 = (float)dStack_b8;
  local_214 = 0;
  uStack_20c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uVar6 = uVar5;
  local_48 = fStack_218;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar9 = (longlong)(this->LocationY).ArrayMax, uVar6 = uStack_20c,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar9 * 0x1c)) {
    local_230 = (longlong)(this->LocationY).ArrayNum;
    local_228 = 0x1c;
    local_248 = &local_48;
    local_240 = pFVar3;
    local_238 = lVar9;
    uStack_20c = uVar5;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    uVar6 = uStack_20c;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_20c = uVar6;
  iVar8 = (this->LocationY).ArrayNum;
  piVar1 = &(this->LocationY).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->LocationY).AllocatorInstance,piVar1);
  }
  uStack_1e0 = 2;
  (this->LocationY).ArrayNum = iVar8 + 1;
  pFVar3 = (this->LocationY).AllocatorInstance.Data;
  lVar9 = (longlong)iVar8 * 0x1c;
  local_1df = 0;
  uStack_1e4 = 0;
  *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar3 + lVar9 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(pFVar3 + lVar9 + 0x10) = CONCAT44(uStack_34,uStack_38);
  *(uint *)(pFVar3 + lVar9 + 0x18) = CONCAT13(local_2d,CONCAT21(local_2f,uStack_30));
  local_a8 = (param_1->Translation).XY.m128d_f64[0];
  dStack_a0 = (param_1->Translation).XY.m128d_f64[1];
  local_98 = (param_1->Translation).ZW.m128d_f64[0];
  pFVar3 = (this->LocationZ).AllocatorInstance.Data;
  local_1dd = 0;
  uStack_1ec = 0;
  uVar5 = uStack_1ec;
  uStack_1e8 = 0;
  local_2f = 0;
  local_2d = 0;
  uStack_30 = 2;
  fStack_1f8 = (float)local_98;
  local_1f4 = 0;
  uStack_1ec = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uVar6 = uVar5;
  local_48 = fStack_1f8;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar9 = (longlong)(this->LocationZ).ArrayMax, uVar6 = uStack_1ec,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar9 * 0x1c)) {
    local_230 = (longlong)(this->LocationZ).ArrayNum;
    local_228 = 0x1c;
    local_248 = &local_48;
    local_240 = pFVar3;
    local_238 = lVar9;
    uStack_1ec = uVar5;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    uVar6 = uStack_1ec;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_1ec = uVar6;
  iVar8 = (this->LocationZ).ArrayNum;
  piVar1 = &(this->LocationZ).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->LocationZ).AllocatorInstance,piVar1);
  }
  (this->LocationZ).ArrayNum = iVar8 + 1;
  pFVar3 = (this->LocationZ).AllocatorInstance.Data;
  lVar9 = (longlong)iVar8 * 0x1c;
  *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar3 + lVar9 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(pFVar3 + lVar9 + 0x10) = CONCAT44(uStack_34,uStack_38);
  *(uint *)(pFVar3 + lVar9 + 0x18) = CONCAT13(local_2d,CONCAT21(local_2f,uStack_30));
  local_f8.X = (param_1->Rotation).XY.m128d_f64[0];
  local_f8.Y = (param_1->Rotation).XY.m128d_f64[1];
  local_f8.Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_f8.W = (param_1->Rotation).ZW.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(&local_f8,&local_118);
  pFVar3 = (this->RotationX).AllocatorInstance.Data;
  uStack_1cc = 0;
  uVar5 = uStack_1cc;
  uStack_1c8 = 0;
  uStack_1c0 = 2;
  local_1bd = 0;
  fStack_1d8 = (float)local_118.Roll;
  local_1bf = 0;
  local_2f = 0;
  local_2d = 0;
  uStack_1c4 = 0;
  uStack_30 = 2;
  local_1d4 = 0;
  uStack_1cc = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uVar6 = uVar5;
  local_48 = fStack_1d8;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar9 = (longlong)(this->RotationX).ArrayMax, uVar6 = uStack_1cc,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar9 * 0x1c)) {
    local_230 = (longlong)(this->RotationX).ArrayNum;
    local_228 = 0x1c;
    local_248 = &local_48;
    local_240 = pFVar3;
    local_238 = lVar9;
    uStack_1cc = uVar5;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    uVar6 = uStack_1cc;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_1cc = uVar6;
  iVar8 = (this->RotationX).ArrayNum;
  piVar1 = &(this->RotationX).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->RotationX).AllocatorInstance,piVar1);
  }
  uStack_1a0 = 2;
  lVar9 = (longlong)iVar8 * 0x1c;
  (this->RotationX).ArrayNum = iVar8 + 1;
  pFVar3 = (this->RotationX).AllocatorInstance.Data;
  local_19f = 0;
  uStack_1a4 = 0;
  *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar3 + lVar9 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(pFVar3 + lVar9 + 0x10) = CONCAT44(uStack_34,uStack_38);
  *(uint *)(pFVar3 + lVar9 + 0x18) = CONCAT13(local_2d,CONCAT21(local_2f,uStack_30));
  pFVar3 = (this->RotationY).AllocatorInstance.Data;
  uStack_1ac = 0;
  uVar5 = uStack_1ac;
  uStack_1a8 = 0;
  local_19d = 0;
  local_2f = 0;
  local_2d = 0;
  uStack_30 = 2;
  fStack_1b8 = (float)local_118.Pitch;
  local_1b4 = 0;
  uStack_1ac = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uVar6 = uVar5;
  local_48 = fStack_1b8;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar9 = (longlong)(this->RotationY).ArrayMax, uVar6 = uStack_1ac,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar9 * 0x1c)) {
    local_230 = (longlong)(this->RotationY).ArrayNum;
    local_228 = 0x1c;
    local_248 = &local_48;
    local_240 = pFVar3;
    local_238 = lVar9;
    uStack_1ac = uVar5;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    uVar6 = uStack_1ac;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_1ac = uVar6;
  iVar8 = (this->RotationY).ArrayNum;
  piVar1 = &(this->RotationY).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->RotationY).AllocatorInstance,piVar1);
  }
  uStack_180 = 2;
  lVar9 = (longlong)iVar8 * 0x1c;
  (this->RotationY).ArrayNum = iVar8 + 1;
  pFVar3 = (this->RotationY).AllocatorInstance.Data;
  local_17f = 0;
  uStack_184 = 0;
  *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar3 + lVar9 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(pFVar3 + lVar9 + 0x10) = CONCAT44(uStack_34,uStack_38);
  *(uint *)(pFVar3 + lVar9 + 0x18) = CONCAT13(local_2d,CONCAT21(local_2f,uStack_30));
  pFVar3 = (this->RotationZ).AllocatorInstance.Data;
  uStack_18c = 0;
  uVar5 = uStack_18c;
  uStack_188 = 0;
  local_17d = 0;
  local_2f = 0;
  local_2d = 0;
  uStack_30 = 2;
  fStack_198 = (float)local_118.Yaw;
  local_194 = 0;
  uStack_18c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uVar6 = uVar5;
  local_48 = fStack_198;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar9 = (longlong)(this->RotationZ).ArrayMax, uVar6 = uStack_18c,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar9 * 0x1c)) {
    local_230 = (longlong)(this->RotationZ).ArrayNum;
    local_228 = 0x1c;
    local_248 = &local_48;
    local_240 = pFVar3;
    local_238 = lVar9;
    uStack_18c = uVar5;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    uVar6 = uStack_18c;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_18c = uVar6;
  iVar8 = (this->RotationZ).ArrayNum;
  piVar1 = &(this->RotationZ).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->RotationZ).AllocatorInstance,piVar1);
  }
  uStack_160 = 2;
  (this->RotationZ).ArrayNum = iVar8 + 1;
  pFVar3 = (this->RotationZ).AllocatorInstance.Data;
  lVar9 = (longlong)iVar8 * 0x1c;
  local_15f = 0;
  uStack_164 = 0;
  *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar3 + lVar9 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(pFVar3 + lVar9 + 0x10) = CONCAT44(uStack_34,uStack_38);
  *(uint *)(pFVar3 + lVar9 + 0x18) = CONCAT13(local_2d,CONCAT21(local_2f,uStack_30));
  local_80 = (param_1->Scale3D).ZW.m128d_f64[0];
  local_90 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_88 = (param_1->Scale3D).XY.m128d_f64[1];
  pFVar3 = (this->ScaleX).AllocatorInstance.Data;
  uStack_16c = 0;
  uVar5 = uStack_16c;
  uStack_168 = 0;
  local_15d = 0;
  local_2f = 0;
  local_2d = 0;
  uStack_30 = 2;
  fStack_178 = (float)local_90;
  local_174 = 0;
  uStack_16c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uVar6 = uVar5;
  local_48 = fStack_178;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar9 = (longlong)(this->ScaleX).ArrayMax, uVar6 = uStack_16c,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar9 * 0x1c)) {
    local_230 = (longlong)(this->ScaleX).ArrayNum;
    local_228 = 0x1c;
    local_248 = &local_48;
    local_240 = pFVar3;
    local_238 = lVar9;
    uStack_16c = uVar5;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    uVar6 = uStack_16c;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_16c = uVar6;
  iVar8 = (this->ScaleX).ArrayNum;
  piVar1 = &(this->ScaleX).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&(this->ScaleX).AllocatorInstance,piVar1);
  }
  uStack_140 = 2;
  (this->ScaleX).ArrayNum = iVar8 + 1;
  pTVar2 = &this->ScaleY;
  pFVar3 = (this->ScaleX).AllocatorInstance.Data;
  lVar9 = (longlong)iVar8 * 0x1c;
  local_13f = 0;
  uStack_144 = 0;
  *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar3 + lVar9 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(pFVar3 + lVar9 + 0x10) = CONCAT44(uStack_34,uStack_38);
  *(uint *)(pFVar3 + lVar9 + 0x18) = CONCAT13(local_2d,CONCAT21(local_2f,uStack_30));
  local_78 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_70 = (param_1->Scale3D).XY.m128d_f64[1];
  local_68 = (param_1->Scale3D).ZW.m128d_f64[0];
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  uStack_14c = 0;
  uVar5 = uStack_14c;
  uStack_148 = 0;
  local_13d = 0;
  local_2f = 0;
  local_2d = 0;
  uStack_30 = 2;
  fStack_158 = (float)dStack_70;
  local_154 = 0;
  uStack_14c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uVar6 = uVar5;
  local_48 = fStack_158;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar9 = (longlong)(this->ScaleY).ArrayMax, uVar6 = uStack_14c,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar9 * 0x1c)) {
    local_230 = (longlong)(this->ScaleY).ArrayNum;
    local_228 = 0x1c;
    local_248 = &local_48;
    local_240 = pFVar3;
    local_238 = lVar9;
    uStack_14c = uVar5;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    uVar6 = uStack_14c;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_14c = uVar6;
  iVar8 = (this->ScaleY).ArrayNum;
  piVar1 = &(this->ScaleY).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&pTVar2->AllocatorInstance,piVar1);
  }
  uStack_120 = 2;
  (this->ScaleY).ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pTVar2 = &this->ScaleZ;
  lVar9 = (longlong)iVar8 * 0x1c;
  local_11f = 0;
  uStack_124 = 0;
  *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar3 + lVar9 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(pFVar3 + lVar9 + 0x10) = CONCAT44(uStack_34,uStack_38);
  *(uint *)(pFVar3 + lVar9 + 0x18) = CONCAT13(local_2d,CONCAT21(local_2f,uStack_30));
  local_60 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_58 = (param_1->Scale3D).XY.m128d_f64[1];
  local_50 = (param_1->Scale3D).ZW.m128d_f64[0];
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_11d = 0;
  uStack_12c = 0;
  uVar5 = uStack_12c;
  uStack_128 = 0;
  local_2f = 0;
  local_2d = 0;
  uStack_30 = 2;
  fStack_138 = (float)local_50;
  local_134 = 0;
  uStack_12c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uVar6 = uVar5;
  local_48 = fStack_138;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     (lVar9 = (longlong)(this->ScaleZ).ArrayMax, uVar6 = uStack_12c,
     (FScriptContainerElement *)&local_48 < pFVar3 + lVar9 * 0x1c)) {
    local_230 = (longlong)(this->ScaleZ).ArrayNum;
    local_228 = 0x1c;
    local_248 = &local_48;
    local_240 = pFVar3;
    local_238 = lVar9;
    uStack_12c = uVar5;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    uVar6 = uStack_12c;
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uStack_12c = uVar6;
  iVar8 = (this->ScaleZ).ArrayNum;
  piVar1 = &(this->ScaleZ).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x41c,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar8 * 0x1c;
  (this->ScaleZ).ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(pFVar3 + lVar9 + 8) = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(pFVar3 + lVar9 + 0x10) = CONCAT44(uStack_34,uStack_38);
  *(uint *)(pFVar3 + lVar9 + 0x18) = CONCAT13(local_2d,CONCAT21(local_2f,uStack_30));
  return;
}

// AppendToFloatChannelsAndReset @ 14d0a0c90

void __thiscall
FLiveLinkTransformKeys::AppendToFloatChannelsAndReset
          (FLiveLinkTransformKeys *this,int param_1,
          TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (0 < (this->Times).ArrayNum) {
    uVar5 = 0;
    if (param_1 < param_2->ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = param_1 + 1;
    FMovieSceneFloatChannel::AddKeys
              ((FMovieSceneFloatChannel *)
               ((param_2->AllocatorInstance).Data + (longlong)param_1 * 0x128),&this->Times,
               &this->LocationX);
    (this->LocationX).ArrayNum = 0;
    if ((this->LocationX).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&(this->LocationX).AllocatorInstance,0,&(this->LocationX).ArrayMax);
    }
    uVar4 = 0;
    if ((int)uVar5 < param_2->ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = param_1 + 2;
    FMovieSceneFloatChannel::AddKeys
              ((FMovieSceneFloatChannel *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x128),&this->Times,
               &this->LocationY);
    (this->LocationY).ArrayNum = 0;
    if ((this->LocationY).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&(this->LocationY).AllocatorInstance,0,&(this->LocationY).ArrayMax);
    }
    uVar5 = 0;
    if ((int)uVar4 < param_2->ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = param_1 + 3;
    FMovieSceneFloatChannel::AddKeys
              ((FMovieSceneFloatChannel *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x128),&this->Times,
               &this->LocationZ);
    (this->LocationZ).ArrayNum = 0;
    if ((this->LocationZ).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&(this->LocationZ).AllocatorInstance,0,&(this->LocationZ).ArrayMax);
    }
    FixEulerFlips(this,uVar5,param_2);
    uVar4 = 0;
    if ((int)uVar5 < param_2->ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = param_1 + 4;
    FMovieSceneFloatChannel::AddKeys
              ((FMovieSceneFloatChannel *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x128),&this->Times,
               &this->RotationX);
    (this->RotationX).ArrayNum = 0;
    if ((this->RotationX).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&(this->RotationX).AllocatorInstance,0,&(this->RotationX).ArrayMax);
    }
    uVar5 = 0;
    if ((int)uVar4 < param_2->ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = param_1 + 5;
    FMovieSceneFloatChannel::AddKeys
              ((FMovieSceneFloatChannel *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x128),&this->Times,
               &this->RotationY);
    (this->RotationY).ArrayNum = 0;
    if ((this->RotationY).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&(this->RotationY).AllocatorInstance,0,&(this->RotationY).ArrayMax);
    }
    uVar4 = 0;
    if ((int)uVar5 < param_2->ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = param_1 + 6;
    FMovieSceneFloatChannel::AddKeys
              ((FMovieSceneFloatChannel *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x128),&this->Times,
               &this->RotationZ);
    (this->RotationZ).ArrayNum = 0;
    if ((this->RotationZ).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&(this->RotationZ).AllocatorInstance,0,&(this->RotationZ).ArrayMax);
    }
    uVar5 = 0;
    if ((int)uVar4 < param_2->ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = param_1 + 7;
    FMovieSceneFloatChannel::AddKeys
              ((FMovieSceneFloatChannel *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x128),&this->Times,
               &this->ScaleX);
    (this->ScaleX).ArrayNum = 0;
    if ((this->ScaleX).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&(this->ScaleX).AllocatorInstance,0,&(this->ScaleX).ArrayMax);
    }
    uVar4 = 0;
    if ((int)uVar5 < param_2->ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = param_1 + 8;
    FMovieSceneFloatChannel::AddKeys
              ((FMovieSceneFloatChannel *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x128),&this->Times,
               &this->ScaleY);
    piVar1 = &(this->ScaleY).ArrayMax;
    (this->ScaleY).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&(this->ScaleY).AllocatorInstance,0,piVar1);
    }
    uVar5 = 0;
    if ((int)uVar4 < param_2->ArrayNum) {
      uVar5 = ~uVar4 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMovieSceneFloatChannel::AddKeys
              ((FMovieSceneFloatChannel *)
               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x128),&this->Times,
               &this->ScaleZ);
    piVar1 = &(this->ScaleZ).ArrayMax;
    (this->ScaleZ).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x1c,4,0,&(this->ScaleZ).AllocatorInstance,0,piVar1);
    }
    (this->Times).ArrayNum = 0;
    if ((this->Times).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)this,0,&(this->Times).ArrayMax);
    }
  }
  return;
}

// FixEulerFlips @ 14d0af3c0

void __thiscall
FLiveLinkTransformKeys::FixEulerFlips
          (FLiveLinkTransformKeys *this,int param_1,
          TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TQuat<double> *pTVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int local_res10;
  TRotator<double> local_1c0;
  TVector<double>_u_0 local_1a8;
  TRotator<double> local_190;
  TVector<double>_u_0 local_178;
  TRotator<double> local_160;
  TVector<double>_u_0 local_148;
  TQuat<double> local_128;
  TQuat<double> local_108;
  TQuat<double> local_e8;
  TQuat<double> local_c8;
  TQuat<double> local_a8;
  TQuat<double> local_88 [2];
  
  uVar14 = (uint)~param_1 >> 0x1f;
  uVar16 = 0;
  if (param_1 < param_2->ArrayNum) {
    uVar16 = uVar14;
  }
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar6 = (param_2->AllocatorInstance).Data;
  lVar18 = (longlong)param_1 * 0x128;
  iVar11 = *(int *)(pFVar6 + lVar18 + 0x88);
  lVar17 = *(longlong *)(pFVar6 + lVar18 + 0x80);
  if (iVar11 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar16 = 0;
  if (param_1 < param_2->ArrayNum) {
    uVar16 = uVar14;
  }
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar6 = (param_2->AllocatorInstance).Data;
  lVar7 = *(longlong *)(pFVar6 + lVar18 + 0x80);
  iVar3 = *(int *)(pFVar6 + lVar18 + 0x88);
  if (iVar3 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar16 = 0;
  if (param_1 < param_2->ArrayNum) {
    uVar16 = uVar14;
  }
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar6 = (param_2->AllocatorInstance).Data;
  lVar8 = *(longlong *)(pFVar6 + lVar18 + 0x80);
  iVar4 = *(int *)(pFVar6 + lVar18 + 0x88);
  if (iVar4 < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar5 = (this->RotationZ).ArrayNum;
  if (iVar11 < 1) {
    if (iVar5 < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    fVar1 = *(float *)(this->RotationZ).AllocatorInstance.Data;
    if ((this->RotationY).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    fVar2 = *(float *)(this->RotationY).AllocatorInstance.Data;
    if ((this->RotationX).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_190.Pitch = (double)fVar2;
    local_190.Yaw = (double)fVar1;
    local_190.Roll = (double)*(float *)(this->RotationX).AllocatorInstance.Data;
    pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_190,&local_a8);
    local_108.X = pTVar12->X;
    local_108.Y = pTVar12->Y;
    local_108.Z = pTVar12->Z;
    local_108.W = pTVar12->W;
    UE::Math::TQuat<double>::Euler(&local_108,(TVector<double> *)&local_178._s_0);
    if ((this->RotationX).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(float *)(this->RotationX).AllocatorInstance.Data = (float)local_178._s_0.X;
    if ((this->RotationY).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(float *)(this->RotationY).AllocatorInstance.Data = (float)local_178._s_0.Y;
    if ((this->RotationZ).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(float *)(this->RotationZ).AllocatorInstance.Data = (float)local_178._s_0.Z;
  }
  else {
    uVar16 = iVar11 - 1;
    if (iVar5 < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    fVar1 = *(float *)(this->RotationZ).AllocatorInstance.Data;
    if ((this->RotationY).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    fVar2 = *(float *)(this->RotationY).AllocatorInstance.Data;
    if ((this->RotationX).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    local_1c0.Pitch = (double)fVar2;
    local_1c0.Yaw = (double)fVar1;
    local_1c0.Roll = (double)*(float *)(this->RotationX).AllocatorInstance.Data;
    pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_1c0,&local_c8);
    local_128.X = pTVar12->X;
    local_128.Y = pTVar12->Y;
    local_128.Z = pTVar12->Z;
    local_128.W = pTVar12->W;
    UE::Math::TQuat<double>::Euler(&local_128,(TVector<double> *)&local_1a8._s_0);
    if ((this->RotationX).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(float *)(this->RotationX).AllocatorInstance.Data = (float)local_1a8._s_0.X;
    if ((this->RotationY).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(float *)(this->RotationY).AllocatorInstance.Data = (float)local_1a8._s_0.Y;
    if ((this->RotationZ).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(float *)(this->RotationZ).AllocatorInstance.Data = (float)local_1a8._s_0.Z;
    if ((this->RotationX).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar6 = (this->RotationX).AllocatorInstance.Data;
    uVar15 = ~uVar16 >> 0x1f;
    uVar14 = 0;
    if ((int)uVar16 < iVar11) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    lVar18 = (longlong)(int)uVar16 * 0x1c;
    FMath::WindRelativeAnglesDegrees(*(float *)(lVar17 + lVar18),(float *)pFVar6);
    if ((this->RotationY).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar6 = (this->RotationY).AllocatorInstance.Data;
    uVar14 = 0;
    if ((int)uVar16 < iVar3) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    FMath::WindRelativeAnglesDegrees(*(float *)(lVar7 + lVar18),(float *)pFVar6);
    if ((this->RotationZ).ArrayNum < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar6 = (this->RotationZ).AllocatorInstance.Data;
    uVar14 = 0;
    if ((int)uVar16 < iVar4) {
      uVar14 = uVar15;
    }
    if (uVar14 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    FMath::WindRelativeAnglesDegrees(*(float *)(lVar8 + lVar18),(float *)pFVar6);
  }
  iVar11 = (this->Times).ArrayNum + -1;
  if (0 < iVar11) {
    local_res10 = 0;
    lVar17 = 0x1c;
    uVar16 = 1;
    do {
      uVar15 = 0;
      uVar13 = ~uVar16 >> 0x1f;
      uVar14 = uVar15;
      if ((int)uVar16 < (this->RotationZ).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      fVar1 = *(float *)((this->RotationZ).AllocatorInstance.Data + lVar17);
      uVar14 = uVar15;
      if ((int)uVar16 < (this->RotationY).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      fVar2 = *(float *)((this->RotationY).AllocatorInstance.Data + lVar17);
      uVar14 = uVar15;
      if ((int)uVar16 < (this->RotationX).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      local_160.Pitch = (double)fVar2;
      local_160.Yaw = (double)fVar1;
      local_160.Roll = (double)*(float *)((this->RotationX).AllocatorInstance.Data + lVar17);
      pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_160,local_88);
      local_e8.X = pTVar12->X;
      local_e8.Y = pTVar12->Y;
      local_e8.Z = pTVar12->Z;
      local_e8.W = pTVar12->W;
      UE::Math::TQuat<double>::Euler(&local_e8,(TVector<double> *)&local_148._s_0);
      uVar14 = uVar15;
      if ((int)uVar16 < (this->RotationX).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      *(float *)((this->RotationX).AllocatorInstance.Data + lVar17) = (float)local_148._s_0.X;
      uVar14 = uVar15;
      if ((int)uVar16 < (this->RotationY).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      *(float *)((this->RotationY).AllocatorInstance.Data + lVar17) = (float)local_148._s_0.Y;
      uVar14 = uVar15;
      if ((int)uVar16 < (this->RotationZ).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      *(float *)((this->RotationZ).AllocatorInstance.Data + lVar17) = (float)local_148._s_0.Z;
      if ((int)uVar16 < (this->RotationX).ArrayNum) {
        uVar15 = uVar13;
      }
      if (uVar15 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar6 = (this->RotationX).AllocatorInstance.Data;
      uVar15 = ~(uVar16 - 1) >> 0x1f;
      lVar18 = (longlong)(int)uVar16 * 0x1c;
      uVar14 = 0;
      if (local_res10 < (this->RotationX).ArrayNum) {
        uVar14 = uVar15;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      FMath::WindRelativeAnglesDegrees
                (*(float *)((this->RotationX).AllocatorInstance.Data + lVar17 + -0x1c),
                 (float *)(pFVar6 + lVar18));
      uVar14 = 0;
      if ((int)uVar16 < (this->RotationY).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar6 = (this->RotationY).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)(uVar16 - 1) < (this->RotationY).ArrayNum) {
        uVar14 = uVar15;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      FMath::WindRelativeAnglesDegrees
                (*(float *)((this->RotationY).AllocatorInstance.Data + lVar17 + -0x1c),
                 (float *)(pFVar6 + lVar18));
      uVar14 = 0;
      if ((int)uVar16 < (this->RotationZ).ArrayNum) {
        uVar14 = uVar13;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar6 = (this->RotationZ).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)(uVar16 - 1) < (this->RotationZ).ArrayNum) {
        uVar14 = uVar15;
      }
      if (uVar14 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      FMath::WindRelativeAnglesDegrees
                (*(float *)((this->RotationZ).AllocatorInstance.Data + lVar17 + -0x1c),
                 (float *)(pFVar6 + lVar18));
      lVar17 = lVar17 + 0x1c;
      local_res10 = local_res10 + 1;
      bVar10 = (int)uVar16 < iVar11;
      uVar16 = uVar16 + 1;
    } while (bVar10);
  }
  return;
}

