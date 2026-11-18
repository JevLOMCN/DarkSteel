// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ExecuteInternal @ 149b0a9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGCleanSplineElement::ExecuteInternal(FPCGCleanSplineElement *this,FPCGContext *param_1)

{
  undefined1 *this_00;
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  UPCGNode *this_01;
  void *_Src;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  FSplinePoint *pFVar10;
  FObjectPtr_u_0 FVar11;
  FPCGContext *pFVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  UClass *pUVar20;
  UPCGSettings *pUVar21;
  TObjectPtr<UPCGSettings>_u_0 TVar22;
  FText *pFVar23;
  FInterpCurveVector *pFVar24;
  FPCGTaggedData *pFVar25;
  UObject *pUVar26;
  UPCGSplineData *this_02;
  TTransform<double> *pTVar27;
  uint uVar28;
  longlong lVar29;
  FScriptContainerElement *_Dst;
  ulonglong uVar30;
  char cVar31;
  longlong lVar32;
  ulonglong uVar33;
  FObjectPtr_u_0 *pFVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  bool bVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  double dVar56;
  undefined1 auVar55 [16];
  double dVar57;
  double dVar58;
  uint uVar59;
  uint uVar60;
  undefined1 auStackY_2b8 [32];
  TArray<FSplinePoint,TSizedDefaultAllocator<32>_> local_288;
  char local_278;
  char local_277;
  char local_276;
  uint local_274;
  <lambda_1> local_270 [8];
  ForAnyElementType local_268;
  undefined8 local_260;
  undefined1 local_258;
  bool local_257;
  longlong local_250;
  FSplinePoint *local_248;
  longlong local_240;
  TObjectPtr<UPCGSettings>_u_0 local_238;
  FSplinePoint *local_230;
  FObjectPtr_u_0 *local_228;
  FSplinePoint *local_220;
  FSplinePoint *local_218;
  FObjectPtr_u_0 local_210;
  uint local_208;
  FObjectPtr_u_0 local_200;
  TObjectPtr<UPCGSettings>_u_0 local_1f8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1f0;
  FObjectPtr_u_0 *local_1e0;
  TVector<double>_u_0 local_1d8;
  TObjectPtr<UObject> local_1c0;
  TTransform<double> *local_1b8;
  FPCGContext *local_1b0;
  UPCGSplineData *local_1a8;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_1a0 [2];
  double local_180;
  FText local_178;
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double local_128;
  TRotator<double> local_120;
  undefined1 local_108 [96];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  bVar38 = CpuChannel->Enabled < 0;
  local_1b0 = param_1;
  if (bVar38) {
    local_276 = '\0';
  }
  else {
    local_276 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId84,"FPCGCleanSplineElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
               ,0x54);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId84);
  }
  cVar31 = !bVar38;
  if ((param_1 == (FPCGContext *)0x0) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("InContext",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                          ,0x56,L""), bVar38)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_01 = param_1->Node;
    if ((this_01 == (UPCGNode *)0x0) ||
       (pUVar21 = UPCGNode::GetSettings(this_01), pUVar21 == (UPCGSettings *)0x0)) {
      pFVar25 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCleanSplineSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_270[0]);
      if (pFVar25 != (FPCGTaggedData *)0x0) {
        local_1f8.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar25->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1f8.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1f8.DebugPtr);
        }
        if (local_1f8.DebugPtr != (UPCGSettings *)0x0) {
          pUVar20 = UPCGCleanSplineSettings::StaticClass();
          bVar38 = FObjectPtr::IsA(&local_1f8.ObjectPtr,pUVar20);
          if (bVar38) {
            local_238.DebugPtr = local_1f8.DebugPtr;
            TVar22 = local_1f8;
            goto LAB_149b0aba6;
          }
        }
      }
    }
    else {
      pUVar21 = UPCGNode::GetSettings(this_01);
      TVar22.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar21);
      if (TVar22.DebugPtr != (UPCGSettings *)0x0) {
        local_238.DebugPtr = TVar22.DebugPtr;
        pUVar20 = UPCGCleanSplineSettings::StaticClass();
        iVar14 = (int)pUVar20->_padding_;
        if ((iVar14 <= *(int *)((TVar22.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar22.DebugPtr)->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
            &pUVar20->_padding_)) goto LAB_149b0aba6;
      }
    }
    local_238.DebugPtr = (UPCGSettings *)0x0;
    TVar22.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar20 = UPCGCleanSplineSettings::StaticClass();
    bVar38 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar20);
    if (bVar38) {
      local_238 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar22 = local_238;
    }
    else {
      local_238.DebugPtr = (UPCGSettings *)0x0;
      TVar22.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_149b0aba6:
  if ((TVar22.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                          ,0x59,L""), bVar38)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  if (((char)TVar22.DebugPtr[1]._padding_ == '\0') && ((char)TVar22.DebugPtr[1]._padding_ == '\0'))
  {
    FPCGDataCollection::operator=(&param_1->OutputData,&param_1->InputData);
    pFVar23 = FText::AsLocalizable_Advanced_LocText
                        (&local_178,L"PCGCleanSplineElement",L"NoOperation",
                         L"No Clean Spline operations selected. Input will be forwarded");
    PCGLog::LogWarningOnGraph(pFVar23,param_1);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
  }
  else {
    dVar42 = (double)TVar22.DebugPtr[1]._padding_;
    if ((char)TVar22.DebugPtr[1]._padding_ == '\0') {
      dVar42 = dVar42 * __real_3f91df46a2529d39;
    }
    dVar42 = cos(dVar42);
    uVar59 = SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar60 = (uint)((ulonglong)dVar42 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((double)CONCAT44(uVar60,uVar59) <= __real_3e45798ee2308c3a) {
      uVar59 = SUB84(__real_3e45798ee2308c3a,0);
      uVar60 = (uint)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
    }
    FPCGDataCollection::GetInputsByPin
              (&param_1->InputData,&local_1f0,&PCGPinConstants::DefaultInputLabel);
    dVar42 = __real_3fe0000000000000;
    uVar30 = (ulonglong)local_1f0.ArrayNum;
    local_208 = local_1f0.ArrayNum;
    pFVar34 = (FObjectPtr_u_0 *)(local_1f0.AllocatorInstance.Data + uVar30 * 0x78);
    local_228 = (FObjectPtr_u_0 *)local_1f0.AllocatorInstance.Data;
    local_1e0 = pFVar34;
    while( true ) {
      uVar33 = 0;
      if (local_1f0.ArrayNum != (uint)uVar30) {
        local_258 = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_258);
      }
      if (local_228 == pFVar34) break;
      local_200 = (FObjectPtr_u_0)local_228->Handle;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149b0ad2d:
        if ((UPCGSpatialData *)local_200.Handle != (UPCGSpatialData *)0x0) {
          pUVar20 = Z_Construct_UClass_UPCGSplineData_NoRegister();
          bVar38 = FObjectPtr::IsA((FObjectPtr *)&local_200,pUVar20);
          FVar11 = local_200;
          if (((bVar38) &&
              (local_210.Handle = local_200.Handle,
              (UPCGSpatialData *)local_200.Handle != (UPCGSpatialData *)0x0)) &&
             (iVar14 = (**(code **)(*(longlong *)local_200.Handle + 0x4a0))(local_200.Handle),
             0 < iVar14)) {
            this_00 = &FVar11.Handle[6].field_0x20;
            local_1b8 = (TTransform<double> *)this_00;
            pFVar24 = FPCGSplineStruct::GetSplinePointsPosition((FPCGSplineStruct *)this_00);
            local_248 = (FSplinePoint *)
                        FPCGSplineStruct::GetSplinePointsRotation((FPCGSplineStruct *)this_00);
            local_230 = (FSplinePoint *)
                        FPCGSplineStruct::GetSplinePointsScale((FPCGSplineStruct *)this_00);
            _Src = *(void **)&FVar11.Handle[0xf].field_0x10;
            uVar16 = *(uint *)&FVar11.Handle[0xf].field_0x18;
            if (((int)uVar16 < 0) &&
               (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar38)) {
              pcVar7 = (code *)swi(3);
              uVar13 = (*pcVar7)();
              return (bool)uVar13;
            }
            uVar36 = *(uint *)&pFVar24->field_0x8;
            local_250 = CONCAT44(local_250._4_4_,uVar36);
            local_278 = '\0';
            local_277 = (**(code **)(*(longlong *)local_210.Handle + 0x510))();
            local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_288.ArrayNum = 0;
            local_288.ArrayMax = 0;
            if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
            }
            uVar30 = uVar33;
            if (0 < (int)uVar36) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x88,8,uVar36,&local_288.AllocatorInstance,0,&local_288.ArrayMax);
              uVar30 = local_288._8_8_ & 0xffffffff;
            }
            local_268.Data = (FScriptContainerElement *)0x0;
            local_260 = 0;
            if (uVar16 == uVar36) {
              if ((int)uVar16 < 0) {
                bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x9a9,L"Invalid range size: %lld");
                if (bVar38) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
              }
              else if (uVar16 == 0) goto LAB_149b0aecf;
              iVar14 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (8,8,uVar16,&local_268,(int *)&local_260,
                                  (int *)((longlong)&local_260 + 4));
              memcpy(local_268.Data + (longlong)iVar14 * 8,_Src,(longlong)(int)uVar16 << 3);
              uVar30 = local_288._8_8_ & 0xffffffff;
            }
LAB_149b0aecf:
            pFVar10 = local_230;
            if (0 < (int)uVar36) {
              iVar14 = (uint)local_250;
              local_240 = 0;
              uVar30 = uVar33;
              do {
                lVar32 = local_240;
                iVar17 = (int)uVar33;
                if ((*(int *)&(pFVar10->Position).field0_0x0 <= iVar17) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar38)) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
                local_250 = *(longlong *)pFVar10;
                if ((*(int *)&(local_248->Position).field0_0x0 <= iVar17) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar38)) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
                local_218 = (FSplinePoint *)
                            UE::Math::TQuat<double>::Rotator
                                      ((TQuat<double> *)(*(longlong *)local_248 + 0x10 + lVar32),
                                       &local_120);
                if ((*(int *)&pFVar24->field_0x8 <= iVar17) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar38)) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
                local_220 = *(FSplinePoint **)pFVar24;
                if ((*(int *)&pFVar24->field_0x8 <= iVar17) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar38)) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
                local_230 = *(FSplinePoint **)pFVar24;
                if ((*(int *)&pFVar24->field_0x8 <= iVar17) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar38)) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
                lVar32 = *(longlong *)pFVar24;
                iVar15 = local_288.ArrayNum;
                if (local_288.ArrayNum == local_288.ArrayMax) {
                  iVar15 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x888,&local_288.AllocatorInstance,&local_288.ArrayMax);
                }
                local_288.ArrayNum = iVar15 + 1U;
                lVar29 = (longlong)iVar15 * 0x88;
                uVar33 = (ulonglong)(iVar17 + 1U);
                *(float *)&local_288.AllocatorInstance.Data[lVar29].field_0x0 = (float)iVar17;
                puVar2 = (undefined8 *)(uVar30 + 8 + lVar32);
                uVar4 = puVar2[1];
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 8) = *puVar2;
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 8 + 8) = uVar4;
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x18) =
                     *(undefined8 *)(uVar30 + 0x18 + lVar32);
                local_240 = local_240 + 0x80;
                puVar2 = (undefined8 *)((longlong)&(local_230->ArriveTangent).field0_0x0 + uVar30);
                uVar4 = puVar2[1];
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x20) = *puVar2;
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x20 + 8) = uVar4;
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x30) =
                     *(undefined8 *)
                      ((longlong)&(local_230->ArriveTangent).field0_0x0 + uVar30 + 0x10);
                puVar2 = (undefined8 *)((longlong)&(local_220->LeaveTangent).field0_0x0 + uVar30);
                uVar4 = puVar2[1];
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x38) = *puVar2;
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x38 + 8) = uVar4;
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x48) =
                     *(undefined8 *)
                      ((longlong)&(local_220->LeaveTangent).field0_0x0 + uVar30 + 0x10);
                dVar3 = (local_218->Position).field0_0x0._s_0.X;
                *(longlong *)(local_288.AllocatorInstance.Data + lVar29 + 0x50) =
                     *(longlong *)local_218;
                *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x50 + 8) = dVar3;
                *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x60) =
                     (local_218->Position).field0_0x0._s_0.Y;
                puVar2 = (undefined8 *)(local_250 + 8 + uVar30);
                uVar4 = puVar2[1];
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x68) = *puVar2;
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x68 + 8) = uVar4;
                puVar2 = (undefined8 *)(local_250 + 0x18 + uVar30);
                uVar30 = uVar30 + 0x58;
                *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x78) = *puVar2;
                local_288.AllocatorInstance.Data[lVar29 + 0x80] = (FScriptContainerElement)0x4;
              } while ((int)(iVar17 + 1U) < iVar14);
              uVar30 = (ulonglong)(iVar15 + 1U);
              cVar31 = local_276;
            }
            uVar33 = 0;
            uVar16 = 0;
            if ((char)local_238.DebugPtr[1]._padding_ != '\0') {
              uVar36 = (int)uVar30 - 1;
              local_250 = (longlong)(int)uVar36;
              local_220 = (FSplinePoint *)(ulonglong)(local_277 == '\0');
              if ((longlong)local_220 <= local_250) {
                lVar32 = local_250 * 0x88;
                do {
                  TVar22 = local_238;
                  if ((int)uVar30 == 0) {
                    bVar38 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<4981127233939701921>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                        ,0xa1,"!ControlPoints.IsEmpty()");
                    if (bVar38) {
                      pcVar7 = (code *)swi(3);
                      uVar13 = (*pcVar7)();
                      return (bool)uVar13;
                    }
                    uVar30 = local_288._8_8_ & 0xffffffff;
                    uVar28 = uVar16;
                  }
                  else {
                    for (uVar28 = uVar36 - 1; (int)uVar28 < 0; uVar28 = uVar28 + (int)uVar30) {
                    }
                  }
                  local_257 = SUB81(TVar22.DebugPtr[1]._padding_,0);
                  dVar3 = (double)TVar22.DebugPtr[1]._padding_;
                  local_274 = ~uVar36 >> 0x1f;
                  uVar37 = uVar16;
                  if ((int)uVar36 < (int)uVar30) {
                    uVar37 = local_274;
                  }
                  if (uVar37 == 0) {
                    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar38) {
                      pcVar7 = (code *)swi(3);
                      uVar13 = (*pcVar7)();
                      return (bool)uVar13;
                    }
                    uVar30 = local_288._8_8_ & 0xffffffff;
                  }
                  local_218 = (FSplinePoint *)((longlong)(int)uVar36 * 0x88);
                  local_230 = (FSplinePoint *)
                              (local_288.AllocatorInstance.Data + (longlong)local_218);
                  uVar35 = ~uVar28 >> 0x1f;
                  uVar37 = uVar16;
                  if ((int)uVar28 < (int)uVar30) {
                    uVar37 = uVar35;
                  }
                  if (uVar37 == 0) {
                    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar38) {
                      pcVar7 = (code *)swi(3);
                      uVar13 = (*pcVar7)();
                      return (bool)uVar13;
                    }
                    uVar30 = local_288._8_8_ & 0xffffffff;
                  }
                  iVar14 = (int)uVar30;
                  lVar29 = (longlong)(int)uVar28 * 0x88;
                  bVar38 = PCGCleanSplineHelpers::ControlPointsAreColocated
                                     ((FSplinePoint *)(local_288.AllocatorInstance.Data + lVar29),
                                      local_230,local_1b8,dVar3,local_257);
                  if (bVar38) {
                    iVar17 = *(int *)((longlong)&local_238.DebugPtr[1]._padding_ + 4);
                    uVar37 = uVar16;
                    if (iVar17 == 3) {
                      if ((local_277 != '\0') || (uVar36 != iVar14 - 1U)) {
LAB_149b0bc07:
                        uVar18 = uVar16;
                        if ((int)uVar36 < iVar14) {
                          uVar18 = local_274;
                        }
                        if (uVar18 == 0) {
                          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar38) {
                            pcVar7 = (code *)swi(3);
                            uVar13 = (*pcVar7)();
                            return (bool)uVar13;
                          }
                          iVar14 = local_288.ArrayNum;
                        }
                        uVar8 = *(undefined8 *)
                                 (local_288.AllocatorInstance.Data + local_250 * 0x88 + 0x38);
                        uVar9 = *(undefined8 *)
                                 (local_288.AllocatorInstance.Data + local_250 * 0x88 + 0x38 + 8);
                        uVar4 = *(undefined8 *)
                                 (local_288.AllocatorInstance.Data + local_250 * 0x88 + 0x48);
                        uVar18 = uVar16;
                        if ((int)uVar28 < iVar14) {
                          uVar18 = uVar35;
                        }
                        if ((uVar18 == 0) &&
                           (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar38)) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                        *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x38) = uVar8;
                        *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x38 + 8) =
                             uVar9;
                        *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x48) = uVar4;
                        uVar28 = local_274;
                        if ((int)local_260 != 0) {
                          if (((int)uVar36 < 0) || ((int)local_260 <= (int)uVar36)) {
                            bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                               ("ControlPointsKeys.IsValidIndex(Index)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                                ,0x96,L"");
                            if (bVar38) {
                              pcVar7 = (code *)swi(3);
                              uVar13 = (*pcVar7)();
                              return (bool)uVar13;
                            }
                          }
                          uVar28 = local_274;
                          uVar35 = uVar16;
                          if ((int)uVar36 < (int)local_260) {
                            uVar35 = local_274;
                          }
                          iVar14 = (int)local_260;
                          if (uVar35 == 0) {
                            bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               );
                            if (bVar38) {
                              pcVar7 = (code *)swi(3);
                              uVar13 = (*pcVar7)();
                              return (bool)uVar13;
                            }
                            iVar14 = (int)local_260;
                          }
                          iVar17 = (iVar14 - uVar36) + -1;
                          if (iVar17 != 0) {
                            memmove(local_268.Data + (longlong)(int)uVar36 * 8,
                                    local_268.Data + (longlong)(int)uVar36 * 8 + 8,
                                    (longlong)iVar17 << 3);
                            iVar14 = (int)local_260;
                          }
                          local_260 = CONCAT44(local_260._4_4_,iVar14 + -1);
                        }
                        if (((int)uVar36 < 0) || (local_288.ArrayNum <= (int)uVar36)) {
                          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("ControlPoints.IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                              ,0x9a,L"");
                          if (bVar38) {
                            pcVar7 = (code *)swi(3);
                            uVar13 = (*pcVar7)();
                            return (bool)uVar13;
                          }
                        }
                        iVar14 = local_288.ArrayNum;
                        if ((int)uVar36 < local_288.ArrayNum) {
                          uVar37 = uVar28;
                        }
                        goto joined_r0x000149b0bbef;
                      }
LAB_149b0b306:
                      if ((int)uVar28 < iVar14) {
                        uVar37 = uVar35;
                      }
                      if (uVar37 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                        iVar14 = local_288.ArrayNum;
                      }
                      uVar8 = *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x20);
                      uVar9 = *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x20 + 8);
                      uVar4 = *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x30);
                      uVar37 = uVar16;
                      if ((int)uVar36 < iVar14) {
                        uVar37 = local_274;
                      }
                      if ((uVar37 == 0) &&
                         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar38)) {
                        pcVar7 = (code *)swi(3);
                        uVar13 = (*pcVar7)();
                        return (bool)uVar13;
                      }
                      *(undefined8 *)(local_288.AllocatorInstance.Data + local_250 * 0x88 + 0x20) =
                           uVar8;
                      *(undefined8 *)
                       (local_288.AllocatorInstance.Data + local_250 * 0x88 + 0x20 + 8) = uVar9;
                      *(undefined8 *)(local_288.AllocatorInstance.Data + local_250 * 0x88 + 0x30) =
                           uVar4;
                      if ((int)local_260 != 0) {
                        if (((int)uVar28 < 0) || ((int)local_260 <= (int)uVar28)) {
                          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("ControlPointsKeys.IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                              ,0x96,L"");
                          if (bVar38) {
                            pcVar7 = (code *)swi(3);
                            uVar13 = (*pcVar7)();
                            return (bool)uVar13;
                          }
                        }
                        uVar37 = uVar16;
                        if ((int)uVar28 < (int)local_260) {
                          uVar37 = uVar35;
                        }
                        iVar14 = (int)local_260;
                        if (uVar37 == 0) {
                          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar38) {
                            pcVar7 = (code *)swi(3);
                            uVar13 = (*pcVar7)();
                            return (bool)uVar13;
                          }
                          iVar14 = (int)local_260;
                        }
                        iVar17 = (iVar14 - uVar28) + -1;
                        if (iVar17 != 0) {
                          memmove(local_268.Data + (longlong)(int)uVar28 * 8,
                                  local_268.Data + (longlong)(int)uVar28 * 8 + 8,
                                  (longlong)iVar17 << 3);
                          iVar14 = (int)local_260;
                        }
                        local_260 = CONCAT44(local_260._4_4_,iVar14 + -1);
                      }
                      if (((int)uVar28 < 0) || (local_288.ArrayNum <= (int)uVar28)) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ControlPoints.IsValidIndex(Index)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                            ,0x9a,L"");
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                      }
                      uVar37 = uVar16;
                      if ((int)uVar28 < local_288.ArrayNum) {
                        uVar37 = uVar35;
                      }
                      iVar14 = local_288.ArrayNum;
                      if (uVar37 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                        iVar14 = local_288.ArrayNum;
                      }
                      _Dst = local_288.AllocatorInstance.Data + lVar29;
                      iVar17 = iVar14 - uVar28;
                    }
                    else {
                      if (iVar17 == 0) goto LAB_149b0bc07;
                      if (iVar17 == 1) goto LAB_149b0b306;
                      if (iVar17 != 2) {
                        if (iVar17 == 3) {
                          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("!\"Enclosing block should never be called\"",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                              ,0xdd,L"");
                          if (bVar38) {
                            pcVar7 = (code *)swi(3);
                            uVar13 = (*pcVar7)();
                            return (bool)uVar13;
                          }
                          uVar30 = local_288._8_8_ & 0xffffffff;
                        }
                        goto LAB_149b0be35;
                      }
                      uVar18 = uVar16;
                      if ((int)uVar36 < iVar14) {
                        uVar18 = local_274;
                      }
                      if (uVar18 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                        iVar14 = local_288.ArrayNum;
                      }
                      local_230 = (FSplinePoint *)local_288.AllocatorInstance.Data;
                      uVar18 = uVar16;
                      if ((int)uVar28 < iVar14) {
                        uVar18 = uVar35;
                      }
                      if (uVar18 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                        iVar14 = local_288.ArrayNum;
                      }
                      dVar3 = *(double *)(local_288.AllocatorInstance.Data + lVar29 + 8);
                      dVar5 = *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x10);
                      dVar6 = *(double *)((longlong)&(local_230->Position).field0_0x0 + lVar32);
                      dVar48 = *(double *)((longlong)&(local_230->Position).field0_0x0 + lVar32 + 8)
                      ;
                      uVar18 = uVar16;
                      if ((int)uVar28 < iVar14) {
                        uVar18 = uVar35;
                      }
                      local_180 = (*(double *)
                                    ((longlong)&(local_230->Position).field0_0x0 + lVar32 + 0x10) -
                                  *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x18)) *
                                  dVar42 + *(double *)
                                            (local_288.AllocatorInstance.Data + lVar29 + 0x18);
                      if ((uVar18 == 0) &&
                         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar38)) {
                        pcVar7 = (code *)swi(3);
                        uVar13 = (*pcVar7)();
                        return (bool)uVar13;
                      }
                      uVar18 = local_274;
                      *(double *)(local_288.AllocatorInstance.Data + lVar29 + 8) =
                           (dVar6 - dVar3) * dVar42 + dVar3;
                      *(double *)(local_288.AllocatorInstance.Data + lVar29 + 8 + 8) =
                           (dVar48 - dVar5) * dVar42 + dVar5;
                      *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x18) = local_180;
                      uVar19 = uVar16;
                      if ((int)uVar36 < local_288.ArrayNum) {
                        uVar19 = local_274;
                      }
                      if (uVar19 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                      }
                      local_240 = local_250 * 0x88;
                      uVar19 = uVar16;
                      if ((int)uVar28 < local_288.ArrayNum) {
                        uVar19 = uVar35;
                      }
                      local_248 = (FSplinePoint *)local_288.AllocatorInstance.Data;
                      iVar14 = local_288.ArrayNum;
                      if (uVar19 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                        iVar14 = local_288.ArrayNum;
                      }
                      dStack_148 = *(double *)((longlong)&(local_248->Rotation).Yaw + local_240) -
                                   *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x58);
                      local_150 = *(double *)((longlong)&(local_248->Rotation).Pitch + local_240) -
                                  *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x50);
                      local_140 = *(double *)((longlong)&(local_248->Rotation).Roll + local_240) -
                                  *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x60);
                      auVar50._8_4_ = SUB84(dStack_148,0);
                      auVar50._0_8_ = local_150;
                      auVar50._12_4_ = (int)((ulonglong)dStack_148 >> 0x20);
                      auVar43 = divpd(auVar50,(undefined1  [16])
                                              GlobalVectorConstants::Double360.XY.m128d_f64);
                      auVar49._8_8_ = 0;
                      auVar49._0_8_ = local_140;
                      auVar50 = roundpd(auVar49,auVar43,3);
                      auVar44._8_8_ = 0;
                      auVar44._0_8_ = local_140;
                      auVar43 = divpd(auVar44,(undefined1  [16])
                                              GlobalVectorConstants::Double360.ZW.m128d_f64);
                      dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
                      auVar51._0_8_ = auVar50._0_8_ * dVar3;
                      dVar5 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
                      auVar51._8_8_ = auVar50._8_8_ * dVar5;
                      dVar54 = local_150 - auVar51._0_8_;
                      dVar56 = dStack_148 - auVar51._8_8_;
                      auVar43 = roundpd(auVar51,auVar43,3);
                      dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
                      auVar45._8_4_ = SUB84(dVar56,0);
                      auVar45._0_8_ = dVar54;
                      auVar45._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
                      dVar57 = local_140 - auVar43._0_8_ * dVar6;
                      dVar58 = 0.0 - auVar43._8_8_ *
                                     GlobalVectorConstants::Double360.ZW.m128d_f64[1];
                      dVar48 = auVar45._8_8_ + dVar5;
                      uVar30 = -(ulonglong)(0.0 <= dVar57);
                      uVar40 = -(ulonglong)(0.0 <= dVar58);
                      uVar39 = -(ulonglong)(0.0 <= dVar54);
                      uVar41 = -(ulonglong)(0.0 <= dVar56);
                      auVar52._0_8_ = uVar39 & (ulonglong)dVar54;
                      auVar52._8_4_ = (undefined4)(uVar41 & (ulonglong)dVar56);
                      auVar52._12_4_ = (undefined4)((uVar41 & (ulonglong)dVar56) >> 0x20);
                      auVar53._0_4_ = ~(uint)uVar39 & SUB84(dVar54 + dVar3,0);
                      auVar53._4_4_ =
                           ~(uint)(uVar39 >> 0x20) & (uint)((ulonglong)(dVar54 + dVar3) >> 0x20);
                      auVar53._8_4_ = ~(uint)uVar41 & SUB84(dVar48,0);
                      auVar53._12_4_ = ~(uint)(uVar41 >> 0x20) & (uint)((ulonglong)dVar48 >> 0x20);
                      auVar46._8_4_ = SUB84(dVar58,0);
                      auVar46._0_8_ = dVar57;
                      auVar46._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
                      dVar48 = auVar46._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
                      auVar53 = auVar53 | auVar52;
                      auVar55._0_4_ = ~(uint)uVar30 & SUB84(dVar57 + dVar6,0);
                      auVar55._4_4_ =
                           ~(uint)(uVar30 >> 0x20) & (uint)((ulonglong)(dVar57 + dVar6) >> 0x20);
                      auVar55._8_4_ = ~(uint)uVar40 & SUB84(dVar48,0);
                      auVar55._12_4_ = ~(uint)(uVar40 >> 0x20) & (uint)((ulonglong)dVar48 >> 0x20);
                      auVar43._8_4_ = (int)(uVar40 & (ulonglong)dVar58);
                      auVar43._0_8_ = uVar30 & (ulonglong)dVar57;
                      auVar43._12_4_ = (int)((uVar40 & (ulonglong)dVar58) >> 0x20);
                      auVar55 = auVar55 | auVar43;
                      uVar39 = -(ulonglong)
                                (GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar53._0_8_);
                      uVar41 = -(ulonglong)
                                (GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar53._8_8_);
                      uVar40 = -(ulonglong)
                                (GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar55._0_8_);
                      local_168._0_8_ = uVar39 & (ulonglong)(auVar53._0_8_ - dVar3);
                      uVar30 = uVar41 & (ulonglong)(auVar53._8_8_ - dVar5);
                      local_168._8_4_ = (undefined4)uVar30;
                      local_168._12_4_ = (undefined4)(uVar30 >> 0x20);
                      auVar47._0_4_ = ~(uint)uVar39 & auVar53._0_4_;
                      auVar47._4_4_ = ~(uint)(uVar39 >> 0x20) & auVar53._4_4_;
                      auVar47._8_4_ = ~(uint)uVar41 & auVar53._8_4_;
                      auVar47._12_4_ = ~(uint)(uVar41 >> 0x20) & auVar53._12_4_;
                      local_168 = local_168 | auVar47;
                      dVar48 = local_168._0_8_;
                      dVar54 = local_168._8_8_;
                      dVar3 = *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x50);
                      local_158 = (double)((ulonglong)(auVar55._0_8_ - dVar6) & uVar40 |
                                          CONCAT44(~(uint)(uVar40 >> 0x20) & auVar55._4_4_,
                                                   ~(uint)uVar40 & auVar55._0_4_));
                      dVar5 = *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x58);
                      local_180 = local_158 * dVar42 +
                                  *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x60);
                      uVar19 = uVar16;
                      if ((int)uVar28 < iVar14) {
                        uVar19 = uVar35;
                      }
                      if ((uVar19 == 0) &&
                         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar38)) {
                        pcVar7 = (code *)swi(3);
                        uVar13 = (*pcVar7)();
                        return (bool)uVar13;
                      }
                      *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x50) =
                           dVar48 * dVar42 + dVar3;
                      *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x50 + 8) =
                           dVar54 * dVar42 + dVar5;
                      *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x60) = local_180;
                      uVar19 = uVar16;
                      if ((int)uVar36 < local_288.ArrayNum) {
                        uVar19 = uVar18;
                      }
                      if (uVar19 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                      }
                      local_248 = (FSplinePoint *)local_288.AllocatorInstance.Data;
                      uVar19 = uVar16;
                      if ((int)uVar28 < local_288.ArrayNum) {
                        uVar19 = uVar35;
                      }
                      iVar14 = local_288.ArrayNum;
                      if (uVar19 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                        iVar14 = local_288.ArrayNum;
                      }
                      dVar3 = *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x68);
                      dVar5 = *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x70);
                      dVar6 = *(double *)((longlong)&(local_248->Scale).field0_0x0 + local_240);
                      dVar48 = *(double *)((longlong)&(local_248->Scale).field0_0x0 + local_240 + 8)
                      ;
                      uVar19 = uVar16;
                      if ((int)uVar28 < iVar14) {
                        uVar19 = uVar35;
                      }
                      local_180 = (*(double *)
                                    ((longlong)&(local_248->Scale).field0_0x0 + local_240 + 0x10) -
                                  *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x78)) *
                                  dVar42 + *(double *)
                                            (local_288.AllocatorInstance.Data + lVar29 + 0x78);
                      if ((uVar19 == 0) &&
                         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar38)) {
                        pcVar7 = (code *)swi(3);
                        uVar13 = (*pcVar7)();
                        return (bool)uVar13;
                      }
                      *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x68) =
                           (dVar6 - dVar3) * dVar42 + dVar3;
                      *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x68 + 8) =
                           (dVar48 - dVar5) * dVar42 + dVar5;
                      *(double *)(local_288.AllocatorInstance.Data + lVar29 + 0x78) = local_180;
                      uVar19 = uVar16;
                      if ((int)uVar36 < local_288.ArrayNum) {
                        uVar19 = uVar18;
                      }
                      if (uVar19 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                      }
                      uVar8 = *(undefined8 *)(local_288.AllocatorInstance.Data + local_240 + 0x38);
                      uVar9 = *(undefined8 *)
                               (local_288.AllocatorInstance.Data + local_240 + 0x38 + 8);
                      uVar4 = *(undefined8 *)(local_288.AllocatorInstance.Data + local_240 + 0x48);
                      uVar19 = uVar16;
                      if ((int)uVar28 < local_288.ArrayNum) {
                        uVar19 = uVar35;
                      }
                      if ((uVar19 == 0) &&
                         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar38)) {
                        pcVar7 = (code *)swi(3);
                        uVar13 = (*pcVar7)();
                        return (bool)uVar13;
                      }
                      *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x38) = uVar8;
                      *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x38 + 8) = uVar9;
                      *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x48) = uVar4;
                      if ((int)local_260 != 0) {
                        if (((int)uVar36 < 0) || ((int)local_260 <= (int)uVar36)) {
                          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("ControlPointsKeys.IsValidIndex(Index)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                              ,0x96,L"");
                          if (bVar38) {
                            pcVar7 = (code *)swi(3);
                            uVar13 = (*pcVar7)();
                            return (bool)uVar13;
                          }
                        }
                        uVar28 = uVar16;
                        if ((int)uVar36 < (int)local_260) {
                          uVar28 = uVar18;
                        }
                        iVar14 = (int)local_260;
                        if (uVar28 == 0) {
                          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar38) {
                            pcVar7 = (code *)swi(3);
                            uVar13 = (*pcVar7)();
                            return (bool)uVar13;
                          }
                          iVar14 = (int)local_260;
                        }
                        iVar17 = (iVar14 - uVar36) + -1;
                        if (iVar17 != 0) {
                          memmove(local_268.Data + (longlong)(int)uVar36 * 8,
                                  local_268.Data + (longlong)(int)uVar36 * 8 + 8,
                                  (longlong)iVar17 << 3);
                          iVar14 = (int)local_260;
                        }
                        local_260 = CONCAT44(local_260._4_4_,iVar14 + -1);
                      }
                      if (((int)uVar36 < 0) || (local_288.ArrayNum <= (int)uVar36)) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ControlPoints.IsValidIndex(Index)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                            ,0x9a,L"");
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                      }
                      iVar14 = local_288.ArrayNum;
                      if ((int)uVar36 < local_288.ArrayNum) {
                        uVar37 = local_274;
                      }
joined_r0x000149b0bbef:
                      if (uVar37 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                        iVar14 = local_288.ArrayNum;
                      }
                      _Dst = local_288.AllocatorInstance.Data + (longlong)&local_218->InputKey;
                      iVar17 = iVar14 - uVar36;
                    }
                    if (iVar17 + -1 != 0) {
                      memmove(_Dst,_Dst + 0x88,(longlong)(iVar17 + -1) * 0x88);
                      iVar14 = local_288.ArrayNum;
                    }
                    uVar30 = (ulonglong)(iVar14 - 1U);
                    local_278 = '\x01';
                    local_288.ArrayNum = iVar14 - 1U;
                  }
LAB_149b0be35:
                  uVar36 = uVar36 - 1;
                  local_250 = local_250 + -1;
                  lVar32 = lVar32 + -0x88;
                  cVar31 = local_276;
                } while ((longlong)local_220 <= local_250);
              }
            }
            if ((char)local_238.DebugPtr[1]._padding_ != '\0') {
              uVar36 = (int)uVar30 - 1;
              lVar32 = (longlong)(int)uVar36;
              uVar39 = 2;
              if (local_277 != '\0') {
                uVar39 = uVar33;
              }
              local_274 = uVar36;
              if ((longlong)uVar39 <= lVar32) {
                lVar29 = lVar32 * 0x88;
                uVar28 = (int)uVar30 - 2;
                local_230 = (FSplinePoint *)((lVar32 - uVar39) + 1);
                local_240 = CONCAT44(local_240._4_4_,uVar28);
                do {
                  local_274 = uVar36;
                  if ((int)uVar30 == 0) {
                    bVar38 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<4981127233939701921>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                        ,0xa1,"!ControlPoints.IsEmpty()");
                    if (bVar38) {
                      pcVar7 = (code *)swi(3);
                      uVar13 = (*pcVar7)();
                      return (bool)uVar13;
                    }
                    uVar30 = local_288._8_8_ & 0xffffffff;
                    uVar28 = (uint)local_240;
                    uVar37 = uVar16;
                  }
                  else {
                    for (uVar37 = uVar28 - 1; (int)uVar37 < 0; uVar37 = uVar37 + (int)uVar30) {
                    }
                  }
                  if ((int)uVar30 == 0) {
                    bVar38 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<4981127233939701921>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                        ,0xa1,"!ControlPoints.IsEmpty()");
                    if (bVar38) {
                      pcVar7 = (code *)swi(3);
                      uVar13 = (*pcVar7)();
                      return (bool)uVar13;
                    }
                    uVar30 = local_288._8_8_ & 0xffffffff;
                    uVar28 = uVar16;
                  }
                  else {
                    for (; (int)uVar28 < 0; uVar28 = uVar28 + (int)uVar30) {
                    }
                  }
                  local_250 = CONCAT44(local_250._4_4_,~uVar36 >> 0x1f);
                  uVar35 = uVar16;
                  if ((int)uVar36 < (int)uVar30) {
                    uVar35 = ~uVar36 >> 0x1f;
                  }
                  if (uVar35 == 0) {
                    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar38) {
                      pcVar7 = (code *)swi(3);
                      uVar13 = (*pcVar7)();
                      return (bool)uVar13;
                    }
                    uVar30 = local_288._8_8_ & 0xffffffff;
                  }
                  local_220 = (FSplinePoint *)local_288.AllocatorInstance.Data;
                  if ((int)uVar30 <= (int)uVar28) {
                    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar38) {
                      pcVar7 = (code *)swi(3);
                      uVar13 = (*pcVar7)();
                      return (bool)uVar13;
                    }
                    uVar30 = local_288._8_8_ & 0xffffffff;
                  }
                  local_248 = (FSplinePoint *)((ulonglong)uVar28 * 0x88);
                  local_218 = (FSplinePoint *)local_288.AllocatorInstance.Data;
                  if ((int)uVar30 <= (int)uVar37) {
                    bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar38) {
                      pcVar7 = (code *)swi(3);
                      uVar13 = (*pcVar7)();
                      return (bool)uVar13;
                    }
                    uVar30 = local_288._8_8_ & 0xffffffff;
                  }
                  lVar32 = (ulonglong)uVar37 * 0x88;
                  local_1d8._s_0.X =
                       *(double *)((longlong)&(local_220->Position).field0_0x0 + lVar29) -
                       *(double *)(local_288.AllocatorInstance.Data + lVar32 + 8);
                  local_1d8._s_0.Y =
                       *(double *)((longlong)&(local_220->Position).field0_0x0 + lVar29 + 8) -
                       *(double *)(local_288.AllocatorInstance.Data + lVar32 + 0x10);
                  local_1d8._s_0.Z =
                       *(double *)((longlong)&(local_220->Position).field0_0x0 + lVar29 + 0x10) -
                       *(double *)(local_288.AllocatorInstance.Data + lVar32 + 0x18);
                  bVar38 = PCGCleanSplineHelpers::VectorsAreCollinear
                                     ((TVector<double> *)
                                      (local_288.AllocatorInstance.Data + lVar32 + 0x38),
                                      (TVector<double> *)&local_1d8._s_0,
                                      (double)CONCAT44(uVar60,uVar59));
                  if ((((bVar38) &&
                       (bVar38 = PCGCleanSplineHelpers::VectorsAreCollinear
                                           ((TVector<double> *)
                                            ((longlong)&(local_218->ArriveTangent).field0_0x0 +
                                            (longlong)&local_248->InputKey),
                                            (TVector<double> *)&local_1d8._s_0,
                                            (double)CONCAT44(uVar60,uVar59)), bVar38)) &&
                      (bVar38 = PCGCleanSplineHelpers::VectorsAreCollinear
                                          ((TVector<double> *)
                                           ((longlong)&(local_218->LeaveTangent).field0_0x0 +
                                           (longlong)&local_248->InputKey),
                                           (TVector<double> *)&local_1d8._s_0,
                                           (double)CONCAT44(uVar60,uVar59)), bVar38)) &&
                     (bVar38 = PCGCleanSplineHelpers::VectorsAreCollinear
                                         ((TVector<double> *)
                                          ((longlong)&(local_220->ArriveTangent).field0_0x0 + lVar29
                                          ),(TVector<double> *)&local_1d8._s_0,
                                          (double)CONCAT44(uVar60,uVar59)), bVar38)) {
                    uVar36 = uVar16;
                    if ((int)local_274 < (int)uVar30) {
                      uVar36 = (uint)local_250;
                    }
                    iVar14 = (int)uVar30;
                    if (uVar36 == 0) {
                      bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar38) {
                        pcVar7 = (code *)swi(3);
                        uVar13 = (*pcVar7)();
                        return (bool)uVar13;
                      }
                      iVar14 = local_288.ArrayNum;
                    }
                    local_220 = (FSplinePoint *)local_288.AllocatorInstance.Data;
                    if (iVar14 <= (int)uVar37) {
                      bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar38) {
                        pcVar7 = (code *)swi(3);
                        uVar13 = (*pcVar7)();
                        return (bool)uVar13;
                      }
                      iVar14 = local_288.ArrayNum;
                    }
                    dVar3 = *(double *)((longlong)&(local_220->Position).field0_0x0 + lVar29);
                    dVar5 = *(double *)((longlong)&(local_220->Position).field0_0x0 + lVar29 + 8);
                    local_128 = *(double *)
                                 ((longlong)&(local_220->Position).field0_0x0 + lVar29 + 0x10) -
                                *(double *)(local_288.AllocatorInstance.Data + lVar32 + 0x18);
                    dVar6 = *(double *)(local_288.AllocatorInstance.Data + lVar32 + 8);
                    dVar48 = *(double *)(local_288.AllocatorInstance.Data + lVar32 + 0x10);
                    if ((iVar14 <= (int)uVar37) &&
                       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar38)) {
                      pcVar7 = (code *)swi(3);
                      uVar13 = (*pcVar7)();
                      return (bool)uVar13;
                    }
                    *(double *)(local_288.AllocatorInstance.Data + lVar32 + 0x38) = dVar3 - dVar6;
                    *(double *)(local_288.AllocatorInstance.Data + lVar32 + 0x38 + 8) =
                         dVar5 - dVar48;
                    *(double *)(local_288.AllocatorInstance.Data + lVar32 + 0x48) = local_128;
                    if (local_288.ArrayNum <= (int)uVar37) {
                      bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar38) {
                        pcVar7 = (code *)swi(3);
                        uVar13 = (*pcVar7)();
                        return (bool)uVar13;
                      }
                    }
                    uVar36 = local_274;
                    uVar8 = *(undefined8 *)(local_288.AllocatorInstance.Data + lVar32 + 0x38);
                    uVar9 = *(undefined8 *)(local_288.AllocatorInstance.Data + lVar32 + 0x38 + 8);
                    uVar4 = *(undefined8 *)(local_288.AllocatorInstance.Data + lVar32 + 0x48);
                    uVar37 = uVar16;
                    if ((int)local_274 < local_288.ArrayNum) {
                      uVar37 = (uint)local_250;
                    }
                    if ((uVar37 == 0) &&
                       (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar38)) {
                      pcVar7 = (code *)swi(3);
                      uVar13 = (*pcVar7)();
                      return (bool)uVar13;
                    }
                    *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x20) = uVar8;
                    *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x20 + 8) = uVar9;
                    *(undefined8 *)(local_288.AllocatorInstance.Data + lVar29 + 0x30) = uVar4;
                    if ((int)local_260 != 0) {
                      if ((int)local_260 <= (int)uVar28) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ControlPointsKeys.IsValidIndex(Index)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                            ,0x96,L"");
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                        if ((int)local_260 <= (int)uVar28) {
                          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar38) {
                            pcVar7 = (code *)swi(3);
                            uVar13 = (*pcVar7)();
                            return (bool)uVar13;
                          }
                        }
                      }
                      iVar17 = ((int)local_260 - uVar28) + -1;
                      iVar14 = (int)local_260;
                      if (iVar17 != 0) {
                        memmove(local_268.Data + (ulonglong)uVar28 * 8,
                                local_268.Data + (ulonglong)uVar28 * 8 + 8,(longlong)iVar17 << 3);
                        iVar14 = (int)local_260;
                      }
                      local_260 = CONCAT44(local_260._4_4_,iVar14 + -1);
                    }
                    if (local_288.ArrayNum <= (int)uVar28) {
                      bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ControlPoints.IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGCleanSpline.cpp"
                                          ,0x9a,L"");
                      if (bVar38) {
                        pcVar7 = (code *)swi(3);
                        uVar13 = (*pcVar7)();
                        return (bool)uVar13;
                      }
                      if (local_288.ArrayNum <= (int)uVar28) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar7 = (code *)swi(3);
                          uVar13 = (*pcVar7)();
                          return (bool)uVar13;
                        }
                      }
                    }
                    iVar17 = (local_288.ArrayNum - uVar28) + -1;
                    iVar14 = local_288.ArrayNum;
                    if (iVar17 != 0) {
                      memmove(local_288.AllocatorInstance.Data + (longlong)&local_248->InputKey,
                              local_288.AllocatorInstance.Data + (longlong)&local_248->InputKey +
                              0x88,(longlong)iVar17 * 0x88);
                      iVar14 = local_288.ArrayNum;
                    }
                    uVar30 = (ulonglong)(iVar14 - 1U);
                    local_278 = '\x01';
                    local_288.ArrayNum = iVar14 - 1U;
                    local_274 = uVar36;
                  }
                  uVar36 = local_274 - 1;
                  uVar28 = (uint)local_240 - 1;
                  lVar29 = lVar29 + -0x88;
                  local_240 = CONCAT44(local_240._4_4_,uVar28);
                  local_230 = (FSplinePoint *)((longlong)local_230 + -1);
                } while (local_230 != (FSplinePoint *)0x0);
                local_230 = (FSplinePoint *)0x0;
                cVar31 = local_276;
                local_274 = uVar36;
              }
            }
            pFVar12 = local_1b0;
            piVar1 = &(local_1b0->OutputData).TaggedData.ArrayMax;
            iVar14 = (local_1b0->OutputData).TaggedData.ArrayNum;
            if (iVar14 == *piVar1) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x878,(ForAnyElementType *)&local_1b0->OutputData,piVar1);
            }
            (pFVar12->OutputData).TaggedData.ArrayNum = iVar14 + 1;
            pFVar25 = FPCGTaggedData::FPCGTaggedData
                                ((FPCGTaggedData *)
                                 ((pFVar12->OutputData).TaggedData.AllocatorInstance.Data +
                                 (longlong)iVar14 * 0x78),(FPCGTaggedData *)local_228);
            if (local_278 != '\0') {
              uVar30 = uVar33;
              if (0 < local_288.ArrayNum) {
                do {
                  uVar28 = (uint)uVar30;
                  uVar36 = uVar16;
                  if ((int)uVar28 < local_288.ArrayNum) {
                    uVar36 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar36 == 0) &&
                     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar38)) {
                    pcVar7 = (code *)swi(3);
                    uVar13 = (*pcVar7)();
                    return (bool)uVar13;
                  }
                  *(float *)(local_288.AllocatorInstance.Data + uVar33) = (float)(int)uVar28;
                  uVar33 = uVar33 + 0x88;
                  uVar30 = (ulonglong)(uVar28 + 1);
                } while ((int)(uVar28 + 1) < local_288.ArrayNum);
              }
              bVar38 = IsInGameThread();
              if (bVar38) {
                pUVar26 = GetTransientPackageAsObject();
                this_02 = NewObject<UPCGSplineData>(pUVar26);
              }
              else {
                if (((pFVar12->AsyncState).bIsRunningOnMainThread != false) &&
                   (bVar38 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<4331830188552749348>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                        ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar38)) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
                FGCScopeGuard::FGCScopeGuard((FGCScopeGuard *)local_270);
                pUVar26 = GetTransientPackageAsObject();
                this_02 = NewObject<UPCGSplineData>(pUVar26);
                FGCScopeGuard::~FGCScopeGuard((FGCScopeGuard *)local_270);
                if ((this_02 == (UPCGSplineData *)0x0) &&
                   (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Object",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                                        ,0x12a,L""), bVar38)) {
                  pcVar7 = (code *)swi(3);
                  uVar13 = (*pcVar7)();
                  return (bool)uVar13;
                }
                local_1a8 = this_02;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (this_02 != (UPCGSplineData *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)this_02);
                }
                TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                ::Emplace<TObjectPtr<UObject>_>
                          (&pFVar12->AsyncObjects,&local_1c0,(bool *)&local_1a8);
              }
              FVar11 = local_210;
              UPCGSpatialData::InitializeFromData
                        ((UPCGSpatialData *)this_02,(UPCGSpatialData *)local_210.Handle,
                         (UPCGMetadata *)0x0,true,true);
              local_1a0[0].AllocatorInstance.Data = local_268.Data;
              local_1a0[0].ArrayNum = (int)local_260;
              local_268.Data = (FScriptContainerElement *)0x0;
              local_1a0[0].ArrayMax = local_260._4_4_;
              local_260 = 0;
              pTVar27 = (TTransform<double> *)
                        (**(code **)(*(longlong *)FVar11.Handle + 0x498))(FVar11.Handle,local_108);
              bVar38 = (bool)(**(code **)(*(longlong *)FVar11.Handle + 0x510))(FVar11.Handle);
              UPCGSplineData::Initialize(this_02,&local_288,bVar38,pTVar27,local_1a0);
              FPCGDataPtrWrapper::operator=(&pFVar25->Data,(UPCGData *)this_02);
            }
            if (local_268.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_268.Data);
            }
            pFVar34 = local_1e0;
            if ((FSplinePoint *)local_288.AllocatorInstance.Data != (FSplinePoint *)0x0) {
              FMemory::Free(local_288.AllocatorInstance.Data);
              pFVar34 = local_1e0;
            }
          }
        }
      }
      else if ((UPCGSpatialData *)local_200.Handle != (UPCGSpatialData *)0x0) {
        UE::GC::MarkAsReachable(local_200.Handle);
        goto LAB_149b0ad2d;
      }
      uVar30 = (ulonglong)local_208;
      local_228 = local_228 + 0xf;
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_1f0.AllocatorInstance.Data,local_1f0.ArrayNum);
    if ((FPCGTaggedData *)local_1f0.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
  }
  if (cVar31 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

