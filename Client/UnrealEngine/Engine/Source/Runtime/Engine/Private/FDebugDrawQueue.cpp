// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DrawDebugSphere @ 1482f6f90

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
Chaos::FDebugDrawQueue::DrawDebugSphere
          (FDebugDrawQueue *this,TVector<double> *param_1,double param_2,int param_3,FColor *param_4
          ,bool param_5,float param_6,uchar param_7,float param_8)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FDebugDrawQueue *pFVar2;
  undefined1 auStack_228 [32];
  double local_208;
  double dStack_200;
  double local_1f8;
  TVector<double>_u_0 local_1e8 [2];
  FColor_u_0 local_1b8;
  int local_1b4;
  bool local_1b0;
  float local_1a8;
  uchar local_1a4;
  float local_1a0;
  double local_198;
  void *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  pFVar2 = GetInstance();
  if (pFVar2->bEnableDebugDrawing != false) {
    pFVar2 = GetInstance();
    if (0 < pFVar2->NumConsumers) {
      lpCriticalSection = &this->CommandQueueCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_208 = (param_1->field0_0x0)._s_0.X;
      dStack_200 = (param_1->field0_0x0)._s_0.Y;
      local_1f8 = (param_1->field0_0x0)._s_0.Z;
      bVar1 = AcceptCommand(this,param_3 * param_3,(TVector<double,3> *)&local_208);
      if (bVar1) {
        local_1e8[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
        local_1e8[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
        local_1e8[0]._16_8_ = (param_1->field0_0x0)._s_0.Z;
        local_120 = (void *)0x0;
        local_118 = 0;
        local_110 = 0;
        local_1a8 = param_6;
        local_1b8._s_0 = *(FColor_u_0_s_0 *)&param_4->field0_0x0;
        local_1b0 = param_5;
        local_1a4 = param_7;
        local_1a0 = param_8;
        local_40 = 3;
        local_1b4 = param_3;
        local_198 = param_2;
        AddCommand(this,(FLatentDrawCommand *)&local_1e8[0]._s_0);
        if (local_120 != (void *)0x0) {
          FMemory::Free(local_120);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

