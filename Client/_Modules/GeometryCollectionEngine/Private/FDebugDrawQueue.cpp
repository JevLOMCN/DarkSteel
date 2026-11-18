// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// DrawDebugCoordinateSystem @ 1463705d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
Chaos::FDebugDrawQueue::DrawDebugCoordinateSystem
          (FDebugDrawQueue *this,TVector<double> *param_1,TRotator<double> *param_2,double param_3,
          bool param_4,float param_5,uchar param_6,float param_7)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FDebugDrawQueue *pFVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar7;
  double dVar8;
  undefined1 auStack_2e8 [32];
  double local_2c8;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined1 local_2a8 [16];
  double local_298;
  TVector<double>_u_0 local_288;
  double local_270;
  double local_268;
  double local_260;
  FColor_u_0 local_258;
  bool local_250;
  float local_248;
  uchar local_244;
  float local_240;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  pFVar6 = GetInstance();
  if (pFVar6->bEnableDebugDrawing != false) {
    pFVar6 = GetInstance();
    if (0 < pFVar6->NumConsumers) {
      lpCriticalSection = &this->CommandQueueCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      dVar7 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
      dVar8 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
      __vdecl_sincos2();
      local_2a8._8_4_ = SUB84(dVar8,0);
      local_2a8._0_8_ = dVar7;
      local_2a8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      __vdecl_sincos2();
      uVar3 = local_2a8._0_8_;
      uVar4 = local_2a8._8_8_;
      dVar2 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
              (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      local_2c8 = dVar7 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      dVar1 = (double)local_2a8._0_8_ * (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      dVar8 = (double)local_2a8._8_8_ * local_2c8;
      local_298 = (param_1->field0_0x0)._s_0.Z;
      local_2a8 = *(undefined1 (*) [16])&param_1->field0_0x0;
      local_2b8 = extraout_XMM0_Da_00;
      uStack_2b4 = extraout_XMM0_Db_00;
      bVar5 = AcceptCommand(this,3,(TVector<double,3> *)local_2a8);
      if (bVar5) {
        local_288._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_288._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_288._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        local_1c0 = (void *)0x0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_260 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * param_3 +
                    (param_1->field0_0x0)._s_0.Z;
        local_270 = (double)uVar4 * (double)uVar3 * param_3 + (param_1->field0_0x0)._s_0.X;
        local_268 = (double)uVar3 * (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * param_3 +
                    (param_1->field0_0x0)._s_0.Y;
        local_248 = param_5;
        local_240 = param_7;
        local_258 = FColor::Red.field0_0x0;
        local_250 = param_4;
        local_244 = param_6;
        local_e0 = 1;
        AddCommand(this,(FLatentDrawCommand *)&local_288._s_0);
        if (local_1c0 != (void *)0x0) {
          FMemory::Free(local_1c0);
        }
        local_288._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_288._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_288._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        local_1c0 = (void *)0x0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_258 = FColor::Green.field0_0x0;
        local_248 = param_5;
        local_240 = param_7;
        local_250 = param_4;
        local_244 = param_6;
        local_e0 = 1;
        local_260 = (param_1->field0_0x0)._s_0.Z - dVar1 * param_3;
        local_270 = ((double)uVar4 * dVar2 -
                    dVar7 * (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc)) * param_3 +
                    (param_1->field0_0x0)._s_0.X;
        local_268 = (dVar7 * (double)uVar4 +
                    (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * dVar2) * param_3 +
                    (param_1->field0_0x0)._s_0.Y;
        AddCommand(this,(FLatentDrawCommand *)&local_288._s_0);
        if (local_1c0 != (void *)0x0) {
          FMemory::Free(local_1c0);
        }
        local_288._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_288._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_1c0 = (void *)0x0;
        local_1b8 = 0;
        local_288._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        local_1b0 = 0;
        local_258 = FColor::Blue.field0_0x0;
        local_250 = param_4;
        local_244 = param_6;
        local_270 = (param_1->field0_0x0)._s_0.X -
                    ((double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
                     (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) + dVar8) * param_3;
        local_248 = param_5;
        local_260 = dVar7 * (double)uVar3 * param_3 + (param_1->field0_0x0)._s_0.Z;
        local_240 = param_7;
        local_268 = ((double)uVar4 * (double)CONCAT44(uStack_2b4,local_2b8) -
                    (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * local_2c8) * param_3 +
                    (param_1->field0_0x0)._s_0.Y;
        local_e0 = 1;
        AddCommand(this,(FLatentDrawCommand *)&local_288._s_0);
        if (local_1c0 != (void *)0x0) {
          FMemory::Free(local_1c0);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

