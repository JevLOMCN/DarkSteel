// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 26

// StaticStruct @ 146d388d0

UScriptStruct * __cdecl FGameplayDebuggerShape::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayDebuggerShape.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayDebugger();
    Z_Registration_Info_UScriptStruct_FGameplayDebuggerShape.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayDebuggerShape,(UObject *)pUVar1,
                         L"GameplayDebuggerShape");
  }
  return Z_Registration_Info_UScriptStruct_FGameplayDebuggerShape.OuterSingleton;
}

// FGameplayDebuggerShape @ 146d3fed0

FGameplayDebuggerShape * __thiscall
FGameplayDebuggerShape::FGameplayDebuggerShape
          (FGameplayDebuggerShape *this,FGameplayDebuggerShape *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->ShapeData).ArrayMax;
  iVar2 = (param_1->ShapeData).ArrayNum;
  _Src = (param_1->ShapeData).AllocatorInstance.Data;
  (this->ShapeData).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->ShapeData).AllocatorInstance.Data,_Src,(longlong)iVar2 * 0x18);
  }
  ::FString::FString(&this->Description,&param_1->Description);
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  this->Type = param_1->Type;
  return this;
}

// Draw @ 146d47da0

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
FGameplayDebuggerShape::Draw
          (FGameplayDebuggerShape *this,UWorld *param_1,FGameplayDebuggerCanvasContext *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  int iVar24;
  TQuat<double> *pTVar25;
  UObject *pUVar26;
  UCanvas *this_00;
  TVector<double> *pTVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  double dVar36;
  undefined8 uVar37;
  float fVar38;
  TVector<double>_u_0 local_258;
  uint local_240 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_238;
  float local_228 [2];
  longlong local_220;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double> local_108;
  TQuat<double> local_e8;
  TQuat<double> local_c8 [4];
  
  uVar33 = 0;
  uVar30 = 0;
  switch(this->Type) {
  case Point:
    if (((this->ShapeData).ArrayNum != 2) ||
       (pFVar10 = (this->ShapeData).AllocatorInstance.Data, *(double *)(pFVar10 + 0x18) <= 0.0))
    break;
    DrawDebugSphere(param_1,(TVector<double> *)(this->ShapeData).AllocatorInstance.Data,
                    (float)*(double *)(pFVar10 + 0x18),0x10,&this->Color,false,__real_bf800000,'\0',
                    0.0);
    goto LAB_146d4893d;
  case Segment:
    iVar24 = (this->ShapeData).ArrayNum;
    if (2 < iVar24) {
      uVar31 = uVar30;
      if ((int)(iVar24 - 1U) < iVar24) {
        uVar31 = ~(iVar24 - 1U) >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar24 = (this->ShapeData).ArrayNum;
      uVar31 = iVar24 - 1;
      if (0.0 < *(double *)
                 ((this->ShapeData).AllocatorInstance.Data + ((longlong)iVar24 + -1) * 0x18)) {
        uVar29 = uVar31 & 0xfffffffe;
        if ((int)uVar31 < iVar24) {
          uVar30 = ~uVar31 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        fVar19 = __real_bf800000;
        dVar36 = *(double *)
                  ((this->ShapeData).AllocatorInstance.Data +
                  (longlong)(this->ShapeData).ArrayNum * 0x18 + -0x18);
        local_220 = (longlong)(int)uVar29;
        local_258._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_258._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_258._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (0 < (int)uVar29) {
          lVar34 = 0;
          uVar35 = uVar33;
          do {
            uVar30 = (uint)uVar35;
            uVar32 = uVar30 + 1;
            uVar31 = 0;
            if ((int)uVar32 < (this->ShapeData).ArrayNum) {
              uVar31 = ~uVar32 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar10 = (this->ShapeData).AllocatorInstance.Data;
            uVar31 = 0;
            if ((int)uVar30 < (this->ShapeData).ArrayNum) {
              uVar31 = ~uVar30 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            DrawDebugLine(param_1,(TVector<double> *)
                                  ((this->ShapeData).AllocatorInstance.Data + lVar34),
                          (TVector<double> *)(pFVar10 + lVar34 + 0x18),&this->Color,false,fVar19,
                          '\0',(float)dVar36);
            uVar31 = 0;
            if ((int)uVar30 < (this->ShapeData).ArrayNum) {
              uVar31 = ~uVar30 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar10 = (this->ShapeData).AllocatorInstance.Data;
            uVar31 = 0;
            if ((int)uVar32 < (this->ShapeData).ArrayNum) {
              uVar31 = ~uVar32 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar9 = (this->ShapeData).AllocatorInstance.Data;
            uVar35 = (ulonglong)(uVar30 + 2);
            uVar33 = uVar33 + 2;
            lVar1 = lVar34 + 0x20;
            lVar2 = lVar34 + 0x28;
            lVar3 = lVar34 + 0x18;
            lVar4 = lVar34 + 8;
            lVar5 = lVar34 + 0x10;
            pFVar11 = pFVar10 + lVar34;
            lVar34 = lVar34 + 0x30;
            local_258._s_0.Y =
                 local_258._s_0.Y + *(double *)(pFVar9 + lVar1) + *(double *)(pFVar10 + lVar4);
            local_258._s_0.Z =
                 local_258._s_0.Z + *(double *)(pFVar9 + lVar2) + *(double *)(pFVar10 + lVar5);
            local_258._s_0.X = local_258._s_0.X + *(double *)(pFVar9 + lVar3) + *(double *)pFVar11;
          } while ((longlong)uVar33 < local_220);
        }
        if (0 < (int)uVar29) {
          dVar36 = __real_3ff0000000000000 / (double)(int)uVar29;
          local_258._s_0.X = local_258._s_0.X * dVar36;
          local_258._s_0.Y = local_258._s_0.Y * dVar36;
          local_258._s_0.Z = local_258._s_0.Z * dVar36;
        }
      }
    }
    break;
  case Box:
    iVar24 = (this->ShapeData).ArrayNum;
    if (iVar24 == 3) {
      pFVar10 = (this->ShapeData).AllocatorInstance.Data;
      DrawDebugBox(param_1,(TVector<double> *)pFVar10,(TVector<double> *)(pFVar10 + 0x18),
                   &this->Color,false,__real_bf800000,'\0',
                   (float)(((TVector<double>_u_0 *)&pFVar10[0x30].field_0x0)->_s_0).X);
    }
    else {
      if (iVar24 != 4) break;
      pFVar10 = (this->ShapeData).AllocatorInstance.Data;
      dVar36 = *(double *)(pFVar10 + 0x48);
      pTVar25 = UE::Math::TQuat<double>::MakeFromEuler
                          (&local_e8,(TVector<double> *)(pFVar10 + 0x30));
      if (((this->ShapeData).ArrayNum < 2) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (this->ShapeData).AllocatorInstance.Data;
      if (((this->ShapeData).ArrayNum < 1) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      DrawDebugBox(param_1,(TVector<double> *)(this->ShapeData).AllocatorInstance.Data,
                   (TVector<double> *)(pFVar10 + 0x18),pTVar25,&this->Color,false,__real_bf800000,
                   '\0',(float)dVar36);
    }
    goto LAB_146d4893d;
  case Cone:
    if (((this->ShapeData).ArrayNum != 3) ||
       (pFVar10 = (this->ShapeData).AllocatorInstance.Data, *(double *)(pFVar10 + 0x30) <= 0.0))
    break;
    dVar36 = *(double *)(pFVar10 + 0x30);
    if (((this->ShapeData).ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    DrawDebugCone(param_1,(TVector<double> *)(this->ShapeData).AllocatorInstance.Data,
                  (TVector<double> *)(pFVar10 + 0x18),(float)dVar36,__real_3e800000,__real_3e800000,
                  0x10,&this->Color,false,__real_bf800000,'\0',0.0);
    goto LAB_146d4893d;
  case Cylinder:
    if ((this->ShapeData).ArrayNum != 2) break;
    pFVar10 = (this->ShapeData).AllocatorInstance.Data;
    dVar36 = *(double *)(pFVar10 + 0x18);
    local_1b8._s_0.Z = *(double *)(pFVar10 + 0x10) + *(double *)(pFVar10 + 0x28);
    local_1b8._s_0.X = (double)*(undefined8 *)pFVar10;
    local_1b8._s_0.Y = (double)*(undefined8 *)(pFVar10 + 8);
    if (((this->ShapeData).ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar10 = (this->ShapeData).AllocatorInstance.Data;
    if (((this->ShapeData).ArrayNum < 2) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_1a0._s_0.X = (double)*(undefined8 *)pFVar10;
    local_1a0._s_0.Y = (double)*(undefined8 *)(pFVar10 + 8);
    local_1a0._s_0.Z =
         *(double *)(pFVar10 + 0x10) - *(double *)((this->ShapeData).AllocatorInstance.Data + 0x28);
    DrawDebugCylinder(param_1,(TVector<double> *)&local_1a0._s_0,(TVector<double> *)&local_1b8._s_0,
                      (float)dVar36,0x10,&this->Color,false,__real_bf800000,'\0',0.0);
    goto LAB_146d4893d;
  case Circle:
    if ((this->ShapeData).ArrayNum != 4) break;
    pFVar10 = (this->ShapeData).AllocatorInstance.Data;
    dVar36 = *(double *)(pFVar10 + 0x50);
    dVar15 = *(double *)(pFVar10 + 0x30);
    dVar16 = *(double *)(pFVar10 + 0x38);
    dVar6 = *(double *)(pFVar10 + 0x40);
    dVar17 = *(double *)(pFVar10 + 0x18);
    dVar18 = *(double *)(pFVar10 + 0x20);
    dVar7 = *(double *)(pFVar10 + 0x28);
    if (((this->ShapeData).ArrayNum < 4) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    dVar8 = *(double *)((this->ShapeData).AllocatorInstance.Data + 0x48);
    if (((this->ShapeData).ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar10 = (this->ShapeData).AllocatorInstance.Data;
    local_148._s_0.X = (double)*(undefined8 *)pFVar10;
    local_148._s_0.Y = (double)*(undefined8 *)(pFVar10 + 8);
    local_148._s_0.Z = (double)*(undefined8 *)(pFVar10 + 0x10);
    local_188._s_0.X = dVar15;
    local_188._s_0.Y = dVar16;
    local_188._s_0.Z = dVar6;
    local_168._s_0.X = dVar17;
    local_168._s_0.Y = dVar18;
    local_168._s_0.Z = dVar7;
    DrawDebugCircle(param_1,(TVector<double> *)&local_148._s_0,(double)(float)dVar8,0x20,
                    &this->Color,false,__real_bf800000,'\0',(float)dVar36,
                    (TVector<double> *)&local_168._s_0,(TVector<double> *)&local_188._s_0,false);
    if (((this->ShapeData).ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    goto LAB_146d48975;
  case Rectangle:
    if ((this->ShapeData).ArrayNum == 4) {
      pFVar10 = (this->ShapeData).AllocatorInstance.Data;
      local_1e8._s_0.X =
           (*(double *)pFVar10 - *(double *)(pFVar10 + 0x18)) + *(double *)(pFVar10 + 0x30);
      local_1e8._s_0.Y =
           *(double *)(pFVar10 + 0x38) + (*(double *)(pFVar10 + 8) - *(double *)(pFVar10 + 0x20));
      local_1e8._s_0.Z =
           *(double *)(pFVar10 + 0x40) + (*(double *)(pFVar10 + 0x10) - *(double *)(pFVar10 + 0x28))
      ;
      local_218._s_0.Y =
           *(double *)(pFVar10 + 0x38) + *(double *)(pFVar10 + 0x20) + *(double *)(pFVar10 + 8);
      local_218._s_0.Z =
           *(double *)(pFVar10 + 0x40) + *(double *)(pFVar10 + 0x28) + *(double *)(pFVar10 + 0x10);
      local_218._s_0.X =
           *(double *)pFVar10 + *(double *)(pFVar10 + 0x18) + *(double *)(pFVar10 + 0x30);
      local_200._s_0.Y =
           (*(double *)(pFVar10 + 0x20) + *(double *)(pFVar10 + 8)) - *(double *)(pFVar10 + 0x38);
      local_200._s_0.Z =
           (*(double *)(pFVar10 + 0x28) + *(double *)(pFVar10 + 0x10)) - *(double *)(pFVar10 + 0x40)
      ;
      local_200._s_0.X =
           (*(double *)pFVar10 + *(double *)(pFVar10 + 0x18)) - *(double *)(pFVar10 + 0x30);
      local_1d0._s_0.Y =
           (*(double *)(pFVar10 + 8) - *(double *)(pFVar10 + 0x20)) - *(double *)(pFVar10 + 0x38);
      local_1d0._s_0.Z =
           (*(double *)(pFVar10 + 0x10) - *(double *)(pFVar10 + 0x28)) - *(double *)(pFVar10 + 0x40)
      ;
      local_1d0._s_0.X =
           (*(double *)pFVar10 - *(double *)(pFVar10 + 0x18)) - *(double *)(pFVar10 + 0x30);
      if (((this->ShapeData).ArrayNum < 4) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      fVar19 = __real_bf800000;
      fVar38 = (float)*(double *)((this->ShapeData).AllocatorInstance.Data + 0x48);
      DrawDebugLine(param_1,(TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_218._s_0,
                    &this->Color,false,__real_bf800000,'\0',fVar38);
      DrawDebugLine(param_1,(TVector<double> *)&local_218._s_0,(TVector<double> *)&local_200._s_0,
                    &this->Color,false,fVar19,'\0',fVar38);
      DrawDebugLine(param_1,(TVector<double> *)&local_200._s_0,(TVector<double> *)&local_1d0._s_0,
                    &this->Color,false,fVar19,'\0',fVar38);
      DrawDebugLine(param_1,(TVector<double> *)&local_1d0._s_0,(TVector<double> *)&local_1e8._s_0,
                    &this->Color,false,fVar19,'\0',fVar38);
    }
    break;
  case Capsule:
    if ((this->ShapeData).ArrayNum != 3) break;
    pTVar25 = UE::Math::TQuat<double>::MakeFromEuler
                        (local_c8,(TVector<double> *)
                                  ((this->ShapeData).AllocatorInstance.Data + 0x30));
    if (((this->ShapeData).ArrayNum < 2) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    dVar36 = *(double *)((this->ShapeData).AllocatorInstance.Data + 0x18);
    if (((this->ShapeData).ArrayNum < 2) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    dVar6 = *(double *)((this->ShapeData).AllocatorInstance.Data + 0x28);
    if (((this->ShapeData).ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    DrawDebugCapsule(param_1,(TVector<double> *)(this->ShapeData).AllocatorInstance.Data,
                     (float)dVar6,(float)dVar36,pTVar25,&this->Color,false,__real_bf800000,'\0',0.0)
    ;
LAB_146d4893d:
    if (((this->ShapeData).ArrayNum < 1) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar23)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
LAB_146d48975:
    pFVar10 = (this->ShapeData).AllocatorInstance.Data;
    local_258._s_0.X = (double)*(undefined8 *)pFVar10;
    local_258._s_0.Y = (double)*(undefined8 *)(pFVar10 + 8);
    local_258._s_0.Z = (double)*(undefined8 *)(pFVar10 + 0x10);
    break;
  case Polygon:
    if (0 < (this->ShapeData).ArrayNum) {
      local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.ArrayNum = 0;
      local_238.ArrayMax = 0;
      local_240[0] = 0;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar37 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      while( true ) {
        iVar24 = (int)uVar33;
        if ((local_238.AllocatorInstance.Data <= (FScriptContainerElement *)local_240) &&
           ((FScriptContainerElement *)local_240 <
            local_238.AllocatorInstance.Data + (longlong)local_238.ArrayMax * 4)) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar23) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar24 = local_238.ArrayNum;
        }
        if (iVar24 == local_238.ArrayMax) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_238.AllocatorInstance,&local_238.ArrayMax);
        }
        local_238.ArrayNum = iVar24 + 1;
        *(uint *)(local_238.AllocatorInstance.Data + (longlong)iVar24 * 4) = local_240[0];
        lVar34 = (longlong)(int)local_240[0];
        uVar30 = 0;
        if ((int)local_240[0] < (this->ShapeData).ArrayNum) {
          uVar30 = ~local_240[0] >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar10 = (this->ShapeData).AllocatorInstance.Data;
        uVar14 = (double)uVar14 + *(double *)(pFVar10 + lVar34 * 0x18);
        uVar13 = (double)uVar13 + *(double *)(pFVar10 + lVar34 * 0x18 + 8);
        uVar37 = (double)uVar37 + *(double *)(pFVar10 + lVar34 * 0x18 + 0x10);
        local_240[0] = local_240[0] + 1;
        if ((this->ShapeData).ArrayNum <= (int)local_240[0]) break;
        uVar33 = local_238._8_8_ & 0xffffffff;
      }
      DrawDebugMesh(param_1,&this->ShapeData,&local_238,&this->Color,false,__real_bf800000,'\0');
      dVar36 = __real_3ff0000000000000 / (double)(this->ShapeData).ArrayNum;
      local_258._s_0.Y = (double)uVar13 * dVar36;
      local_258._s_0.X = dVar36 * (double)uVar14;
      local_258._s_0.Z = (double)uVar37 * dVar36;
      if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.AllocatorInstance.Data);
      }
    }
    break;
  case Polyline:
    iVar24 = (this->ShapeData).ArrayNum;
    if (2 < iVar24) {
      if ((int)(iVar24 - 1U) < iVar24) {
        uVar30 = ~(iVar24 - 1U) >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar24 = (this->ShapeData).ArrayNum;
      uVar30 = iVar24 - 1;
      if (0.0 < *(double *)
                 ((this->ShapeData).AllocatorInstance.Data + ((longlong)iVar24 + -1) * 0x18)) {
        uVar31 = 0;
        if ((int)uVar30 < iVar24) {
          uVar31 = ~uVar30 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar28 = (this->ShapeData).ArrayNum;
        dVar36 = *(double *)
                  ((this->ShapeData).AllocatorInstance.Data + (longlong)iVar28 * 0x18 + -0x18);
        if ((iVar28 < 1) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        fVar19 = __real_bf800000;
        pFVar10 = (this->ShapeData).AllocatorInstance.Data;
        local_258._s_0.X = (double)*(undefined8 *)pFVar10;
        local_258._s_0.Y = (double)*(undefined8 *)(pFVar10 + 8);
        local_258._s_0.Z = (double)*(undefined8 *)(pFVar10 + 0x10);
        if (0 < iVar24 + -2) {
          lVar34 = 0x18;
          do {
            uVar31 = (uint)uVar33;
            uVar32 = uVar31 + 1;
            uVar29 = 0;
            if ((int)uVar32 < (this->ShapeData).ArrayNum) {
              uVar29 = ~uVar32 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar10 = (this->ShapeData).AllocatorInstance.Data;
            uVar29 = 0;
            if ((int)uVar31 < (this->ShapeData).ArrayNum) {
              uVar29 = ~uVar31 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            DrawDebugLine(param_1,(TVector<double> *)
                                  ((this->ShapeData).AllocatorInstance.Data + uVar33 * 0x18),
                          (TVector<double> *)(pFVar10 + lVar34),&this->Color,false,fVar19,'\0',
                          (float)dVar36);
            uVar31 = 0;
            if ((int)uVar32 < (this->ShapeData).ArrayNum) {
              uVar31 = ~uVar32 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar10 = (this->ShapeData).AllocatorInstance.Data;
            uVar33 = (ulonglong)uVar32;
            local_258._s_0.X = local_258._s_0.X + *(double *)(pFVar10 + lVar34);
            local_258._s_0.Y = local_258._s_0.Y + *(double *)(pFVar10 + lVar34 + 8);
            local_258._s_0.Z = local_258._s_0.Z + *(double *)(pFVar10 + lVar34 + 0x10);
            lVar34 = lVar34 + 0x18;
          } while ((int)uVar32 < iVar24 + -2);
        }
        if (0 < (int)uVar30) {
          dVar36 = __real_3ff0000000000000 / (double)(int)uVar30;
          local_258._s_0.X = local_258._s_0.X * dVar36;
          local_258._s_0.Y = local_258._s_0.Y * dVar36;
          local_258._s_0.Z = local_258._s_0.Z * dVar36;
        }
      }
    }
    break;
  case Arrow:
    if (((this->ShapeData).ArrayNum == 3) &&
       (pFVar10 = (this->ShapeData).AllocatorInstance.Data, 0.0 < *(double *)(pFVar10 + 0x30))) {
      dVar36 = *(double *)(pFVar10 + 0x30);
      dVar6 = *(double *)(pFVar10 + 0x38);
      if (((this->ShapeData).ArrayNum < 2) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (this->ShapeData).AllocatorInstance.Data;
      if (((this->ShapeData).ArrayNum < 1) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      DrawDebugDirectionalArrow
                (param_1,(TVector<double> *)(this->ShapeData).AllocatorInstance.Data,
                 (TVector<double> *)(pFVar10 + 0x18),(float)dVar6,&this->Color,false,__real_bf800000
                 ,'\0',(float)dVar36);
      if (((this->ShapeData).ArrayNum < 1) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (this->ShapeData).AllocatorInstance.Data;
      if (((this->ShapeData).ArrayNum < 2) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar11 = (this->ShapeData).AllocatorInstance.Data;
      local_258._s_0.Y =
           (*(double *)(pFVar11 + 0x20) + *(double *)(pFVar10 + 8)) * __real_3fe0000000000000;
      local_258._s_0.Z =
           (*(double *)(pFVar11 + 0x28) + *(double *)(pFVar10 + 0x10)) * __real_3fe0000000000000;
      local_258._s_0.X =
           (*(double *)(pFVar11 + 0x18) + *(double *)pFVar10) * __real_3fe0000000000000;
    }
  }
  iVar24 = (this->Description).Data.ArrayNum;
  iVar28 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar28 = 0;
  }
  if (((iVar28 != 0) && (bVar23 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2), bVar23)) &&
     (pUVar26 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2),
     *(longlong *)&pUVar26[0x12].field_0x20 != 0)) {
    pUVar26 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
    local_228[0] = 1.0;
    bVar23 = FConvexVolume::IntersectSphere
                       ((FConvexVolume *)(*(longlong *)&pUVar26[0x12].field_0x20 + 0xf40),
                        (TVector<double> *)&local_258._s_0,local_228);
    if (bVar23) {
      this_00 = (UCanvas *)FWeakObjectPtr::Get((FWeakObjectPtr *)param_2);
      uVar37 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar13 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
      if (this_00 != (UCanvas *)0x0) {
        local_128._s_0.X = local_258._s_0.X;
        local_128._s_0.Y = local_258._s_0.Y;
        local_128._s_0.Z = local_258._s_0.Z;
        pTVar27 = UCanvas::Project(this_00,&local_108,(TVector<double> *)&local_128._s_0,true);
        uVar37 = (pTVar27->field0_0x0)._s_0.Y;
        uVar13 = (pTVar27->field0_0x0)._s_0.X;
      }
      fVar22 = __real_3f800000;
      fVar19 = param_2->CursorX;
      fVar38 = param_2->CursorY;
      fVar20 = param_2->DefaultX;
      fVar21 = param_2->DefaultY;
      param_2->CursorX = (float)(double)uVar13;
      param_2->CursorY = (float)(double)uVar37;
      param_2->DefaultX = (float)(double)uVar13;
      param_2->DefaultY = (float)(double)uVar37;
      FGameplayDebuggerCanvasContext::Print(param_2,&this->Color,fVar22,&this->Description);
      param_2->CursorX = fVar19;
      param_2->CursorY = fVar38;
      param_2->DefaultX = fVar20;
      param_2->DefaultY = fVar21;
    }
  }
  return;
}

// MakeArrow @ 146d4f7e0

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeArrow
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,float param_3,float param_4,FColor *param_5,FString *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FGameplayDebuggerShape *pFVar7;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar6 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if ((pFVar1 <= param_2) &&
     (param_2 < pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_38 = (double)param_4;
  dStack_30 = (double)param_3;
  local_28 = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = local_38;
  *(double *)(pFVar1 + 8) = dStack_30;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = local_28;
  (__return_storage_ptr__->Color).field0_0x0 = param_5->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_6);
  __return_storage_ptr__->Type = Arrow;
  return __return_storage_ptr__;
}

// MakeBox @ 146d4fa20

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeBox
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,FColor *param_3,FString *param_4)

{
  MakeBox(__return_storage_ptr__,param_1,param_2,__real_3f800000,param_3,param_4);
  return __return_storage_ptr__;
}

// MakeBox @ 146d4fa60

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeBox
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,float param_3,FColor *param_4,FString *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FGameplayDebuggerShape *pFVar7;
  double local_38;
  double dStack_30;
  undefined8 uStack_28;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar6 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if ((pFVar1 <= param_2) &&
     (param_2 < pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_38 = (double)param_3;
  dStack_30 = 0.0;
  uStack_28 = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = local_38;
  *(double *)(pFVar1 + 8) = dStack_30;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = uStack_28;
  (__return_storage_ptr__->Color).field0_0x0 = param_4->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_5);
  __return_storage_ptr__->Type = Box;
  return __return_storage_ptr__;
}

// MakeBox @ 146d4fc90

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeBox
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TRotator<double> *param_2,TVector<double> *param_3,FColor *param_4,FString *param_5)

{
  MakeBox(__return_storage_ptr__,param_1,param_2,param_3,__real_3f800000,param_4,param_5);
  return __return_storage_ptr__;
}

// MakeBox @ 146d4fcd0

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeBox
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TRotator<double> *param_2,TVector<double> *param_3,float param_4,FColor *param_5,
          FString *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FGameplayDebuggerShape *pFVar7;
  FScriptContainerElement *pFVar8;
  double local_48;
  double dStack_40;
  undefined8 uStack_38;
  TVector<double> local_30;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar6 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar8 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar8 + (longlong)iVar6 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if ((pFVar1 <= param_3) &&
     (param_3 < pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  pFVar8 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_3->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar8 + (longlong)iVar6 * 0x18 + 0x10) = (param_3->field0_0x0)._s_0.Z;
  pFVar8 = (FScriptContainerElement *)UE::Math::TRotator<double>::Euler(param_2,&local_30);
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if ((pFVar1 <= pFVar8) &&
     (pFVar8 < pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = *(double *)(pFVar8 + 8);
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (((TVector<double>_u_0 *)&pFVar8->field_0x0)->_s_0).X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = *(undefined8 *)(pFVar8 + 0x10);
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_48 = (double)param_4;
  dStack_40 = 0.0;
  uStack_38 = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  pFVar8 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = local_48;
  *(double *)(pFVar1 + 8) = dStack_40;
  *(undefined8 *)(pFVar8 + (longlong)iVar6 * 0x18 + 0x10) = uStack_38;
  (__return_storage_ptr__->Color).field0_0x0 = param_5->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_6);
  __return_storage_ptr__->Type = Box;
  return __return_storage_ptr__;
}

// MakeCapsule @ 146d4ffa0

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeCapsule
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TRotator<double> *param_2,float param_3,float param_4,FColor *param_5,FString *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FGameplayDebuggerShape *pFVar7;
  FScriptContainerElement *pFVar8;
  double local_58;
  double dStack_50;
  double local_48;
  TVector<double> local_40;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar6 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar8 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  local_58 = (double)param_3;
  *(double *)(pFVar8 + (longlong)iVar6 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  dStack_50 = 0.0;
  local_48 = (double)param_4;
  if ((pFVar1 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  pFVar8 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = local_58;
  *(double *)(pFVar1 + 8) = dStack_50;
  *(double *)(pFVar8 + (longlong)iVar6 * 0x18 + 0x10) = local_48;
  pFVar8 = (FScriptContainerElement *)UE::Math::TRotator<double>::Euler(param_2,&local_40);
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if ((pFVar1 <= pFVar8) &&
     (pFVar8 < pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = *(double *)(pFVar8 + 8);
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (((TVector<double>_u_0 *)&pFVar8->field_0x0)->_s_0).X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = *(undefined8 *)(pFVar8 + 0x10);
  (__return_storage_ptr__->Color).field0_0x0 = param_5->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_6);
  __return_storage_ptr__->Type = Capsule;
  return __return_storage_ptr__;
}

// MakeCapsule @ 146d501f0

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeCapsule
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,float param_2,
          float param_3,FColor *param_4,FString *param_5)

{
  MakeCapsule(__return_storage_ptr__,param_1,&UE::Math::TRotator<double>::ZeroRotator,param_2,
              param_3,param_4,param_5);
  return __return_storage_ptr__;
}

// MakeCircle @ 146d50240

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeCircle
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,float param_4,FColor *param_5,
          FString *param_6)

{
  MakeCircle(__return_storage_ptr__,param_1,param_2,param_3,param_4,__real_3f800000,param_5,param_6)
  ;
  return __return_storage_ptr__;
}

// MakeCircle @ 146d50290

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeCircle
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,float param_4,float param_5,
          FColor *param_6,FString *param_7)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FGameplayDebuggerShape *pFVar7;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar6 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if ((pFVar1 <= param_2) &&
     (param_2 < pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if ((pFVar1 <= param_3) &&
     (param_3 < pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_3->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_3->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_38 = (double)param_4;
  dStack_30 = (double)param_5;
  local_28 = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = local_38;
  *(double *)(pFVar1 + 8) = dStack_30;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = local_28;
  (__return_storage_ptr__->Color).field0_0x0 = param_6->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_7);
  __return_storage_ptr__->Type = Circle;
  return __return_storage_ptr__;
}

// MakeCircle @ 146d50560

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeCircle
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,float param_3,FColor *param_4,FString *param_5)

{
  MakeCircle(__return_storage_ptr__,param_1,param_2,param_3,__real_3f800000,param_4,param_5);
  return __return_storage_ptr__;
}

// MakeCircle @ 146d505a0

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeCircle
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,float param_3,float param_4,FColor *param_5,FString *param_6)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  TVector<double>_u_0 *pTVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FGameplayDebuggerShape *pFVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  TMatrix<double> local_d8;
  
  UE::Math::TRotationMatrix<double>::MakeFromX(&local_d8,param_2);
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar8 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  dVar6 = __real_3e45798ee0000000;
  dVar12 = __real_3ff0000000000000;
  dVar11 = (double)CONCAT44(local_d8.M[1][1]._4_4_,local_d8.M[1][1]._0_4_);
  dVar5 = (double)CONCAT44(local_d8.M[1][0]._4_4_,local_d8.M[1][0]._0_4_);
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar8 + 1;
  dVar10 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar8 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar10;
  *(double *)(pFVar2 + (longlong)iVar8 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  dVar10 = dVar11 * dVar11 + dVar5 * dVar5 + local_d8.M[1][2] * local_d8.M[1][2];
  if (dVar10 == dVar12) {
    local_128._4_4_ = local_d8.M[1][0]._4_4_;
    local_128._0_4_ = local_d8.M[1][0]._0_4_;
    local_128._8_4_ = local_d8.M[1][1]._0_4_;
    local_128._12_4_ = local_d8.M[1][1]._4_4_;
    local_128._s_0.Z = local_d8.M[1][2];
  }
  else if (dVar6 <= dVar10) {
    dVar10 = dVar12 / SQRT(dVar10);
    local_128._s_0.Z = local_d8.M[1][2] * dVar10;
    local_128._8_4_ = SUB84(dVar11 * dVar10,0);
    local_128._s_0.X = dVar5 * dVar10;
    local_128._12_4_ = (int)((ulonglong)(dVar11 * dVar10) >> 0x20);
  }
  else {
    local_128._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_128._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_128._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  pTVar3 = (TVector<double>_u_0 *)(__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if (((pTVar3 <= &local_128) &&
      (&local_128 < pTVar3 + (__return_storage_ptr__->ShapeData).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FGameplayDebuggerShape *)(*pcVar4)();
    return pFVar9;
  }
  iVar8 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar8 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  dVar5 = (double)CONCAT44(local_d8.M[2][1]._4_4_,local_d8.M[2][1]._0_4_);
  dVar10 = (double)CONCAT44(local_d8.M[2][0]._4_4_,local_d8.M[2][0]._0_4_);
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar8 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar8 * 0x18;
  *(double *)pFVar1 = local_128._s_0.X;
  *(double *)(pFVar1 + 8) = local_128._s_0.Y;
  *(double *)(pFVar2 + (longlong)iVar8 * 0x18 + 0x10) = local_128._s_0.Z;
  dVar11 = dVar5 * dVar5 + dVar10 * dVar10 + local_d8.M[2][2] * local_d8.M[2][2];
  if (dVar11 == dVar12) {
    local_110._4_4_ = local_d8.M[2][0]._4_4_;
    local_110._0_4_ = local_d8.M[2][0]._0_4_;
    local_110._8_4_ = local_d8.M[2][1]._0_4_;
    local_110._12_4_ = local_d8.M[2][1]._4_4_;
    local_110._s_0.Z = local_d8.M[2][2];
  }
  else if (dVar11 < dVar6) {
    local_110._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_110._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_110._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar12 = dVar12 / SQRT(dVar11);
    local_110._s_0.Z = local_d8.M[2][2] * dVar12;
    local_110._8_4_ = SUB84(dVar5 * dVar12,0);
    local_110._s_0.X = dVar10 * dVar12;
    local_110._12_4_ = (int)((ulonglong)(dVar5 * dVar12) >> 0x20);
  }
  pTVar3 = (TVector<double>_u_0 *)(__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if (((pTVar3 <= &local_110) &&
      (&local_110 < pTVar3 + (__return_storage_ptr__->ShapeData).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FGameplayDebuggerShape *)(*pcVar4)();
    return pFVar9;
  }
  iVar8 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar8 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar8 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar8 * 0x18;
  *(double *)pFVar1 = local_110._s_0.X;
  *(double *)(pFVar1 + 8) = local_110._s_0.Y;
  *(double *)(pFVar2 + (longlong)iVar8 * 0x18 + 0x10) = local_110._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_f8 = (double)param_3;
  dStack_f0 = (double)param_4;
  local_e8 = 0;
  if (((pFVar1 <= (FScriptContainerElement *)&local_f8) &&
      ((FScriptContainerElement *)&local_f8 <
       pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FGameplayDebuggerShape *)(*pcVar4)();
    return pFVar9;
  }
  iVar8 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar8 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar8 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar8 * 0x18;
  *(double *)pFVar1 = local_f8;
  *(double *)(pFVar1 + 8) = dStack_f0;
  *(undefined8 *)(pFVar2 + (longlong)iVar8 * 0x18 + 0x10) = local_e8;
  (__return_storage_ptr__->Color).field0_0x0 = param_5->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_6);
  __return_storage_ptr__->Type = Circle;
  return __return_storage_ptr__;
}

// MakeCone @ 146d509f0

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeCone
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,float param_3,FColor *param_4,FString *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FGameplayDebuggerShape *pFVar7;
  double local_38;
  double dStack_30;
  undefined8 uStack_28;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar6 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if ((pFVar1 <= param_2) &&
     (param_2 < pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_38 = (double)param_3;
  dStack_30 = 0.0;
  uStack_28 = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = local_38;
  *(double *)(pFVar1 + 8) = dStack_30;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = uStack_28;
  (__return_storage_ptr__->Color).field0_0x0 = param_4->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_5);
  __return_storage_ptr__->Type = Cone;
  return __return_storage_ptr__;
}

// MakeCylinder @ 146d50c20

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeCylinder
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,float param_2,
          float param_3,FColor *param_4,FString *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FGameplayDebuggerShape *pFVar7;
  double local_48;
  double dStack_40;
  double local_38;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar6 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  local_48 = (double)param_2;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  dStack_40 = 0.0;
  local_38 = (double)param_3;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = local_48;
  *(double *)(pFVar1 + 8) = dStack_40;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = local_38;
  (__return_storage_ptr__->Color).field0_0x0 = param_4->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_5);
  __return_storage_ptr__->Type = Cylinder;
  return __return_storage_ptr__;
}

// MakePoint @ 146d51020

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakePoint
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,float param_2,
          FColor *param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FGameplayDebuggerShape *pFVar7;
  double local_38;
  double dStack_30;
  undefined8 uStack_28;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar6 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_38 = (double)param_2;
  dStack_30 = 0.0;
  uStack_28 = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = local_38;
  *(double *)(pFVar1 + 8) = dStack_30;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = uStack_28;
  (__return_storage_ptr__->Color).field0_0x0 = param_3->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_4);
  __return_storage_ptr__->Type = Point;
  return __return_storage_ptr__;
}

// MakePolygon @ 146d511b0

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakePolygon
          (FGameplayDebuggerShape *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,FColor *param_2,FString *param_3
          )

{
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  operator=<UE::Math::TVector<double>_const_,int>(&__return_storage_ptr__->ShapeData,param_1);
  (__return_storage_ptr__->Color).field0_0x0 = param_2->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_3);
  __return_storage_ptr__->Type = Polygon;
  return __return_storage_ptr__;
}

// MakePolyline @ 146d51220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakePolyline
          (FGameplayDebuggerShape *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,FColor *param_2,FString *param_3
          )

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TVector<double> *_Src;
  bool bVar6;
  int iVar7;
  FGameplayDebuggerShape *pFVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)&param_1->ArrayNum;
  piVar1 = &(__return_storage_ptr__->ShapeData).ArrayMax;
  _Src = param_1->DataPtr;
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  iVar7 = (int)uVar2;
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar7;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar7,0,(ForAnyElementType *)__return_storage_ptr__,iVar7,piVar1);
    if (iVar7 != 0) {
      memcpy((__return_storage_ptr__->ShapeData).AllocatorInstance.Data,_Src,(longlong)iVar7 * 0x18)
      ;
    }
  }
  pFVar3 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_48 = ___xmm_00000000000000003ff0000000000000;
  uStack_40 = _UNK_150689518;
  local_38 = 0;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar1 * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGameplayDebuggerShape *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,piVar1);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar7 + 1;
  pFVar4 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar7 * 0x18;
  *(undefined8 *)pFVar3 = local_48;
  *(undefined8 *)(pFVar3 + 8) = uStack_40;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = local_38;
  (__return_storage_ptr__->Color).field0_0x0 = param_2->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_3);
  __return_storage_ptr__->Type = Polyline;
  return __return_storage_ptr__;
}

// MakePolyline @ 146d513c0

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakePolyline
          (FGameplayDebuggerShape *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,float param_2,FColor *param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGameplayDebuggerShape *pFVar6;
  double local_38;
  double dStack_30;
  undefined8 uStack_28;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  operator=<UE::Math::TVector<double>_const_,int>(&__return_storage_ptr__->ShapeData,param_1);
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_38 = (double)param_2;
  dStack_30 = 0.0;
  uStack_28 = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar5 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar5 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar5 * 0x18;
  *(double *)pFVar1 = local_38;
  *(double *)(pFVar1 + 8) = dStack_30;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) = uStack_28;
  (__return_storage_ptr__->Color).field0_0x0 = param_3->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_4);
  __return_storage_ptr__->Type = Polyline;
  return __return_storage_ptr__;
}

// MakeRectangle @ 146d51510

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeRectangle
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,float param_4,float param_5,
          FColor *param_6,FString *param_7)

{
  MakeRectangle(__return_storage_ptr__,param_1,param_2,param_3,param_4,param_5,__real_3f800000,
                param_6,param_7);
  return __return_storage_ptr__;
}

// MakeRectangle @ 146d51580

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeRectangle
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,float param_4,float param_5,
          float param_6,FColor *param_7,FString *param_8)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  FGameplayDebuggerShape *pFVar9;
  undefined1 local_78 [16];
  double local_68;
  undefined1 local_60 [16];
  double local_50;
  double local_48;
  double dStack_40;
  undefined8 uStack_38;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar8 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  dVar6 = __real_3fe0000000000000;
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar8 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar8 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar8 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  dVar4 = (double)param_4 * dVar6;
  local_68 = (double)param_4 * (param_2->field0_0x0)._s_0.Z * dVar6;
  dVar5 = dVar4 * (param_2->field0_0x0)._s_0.Y;
  local_78._8_4_ = SUB84(dVar5,0);
  local_78._0_8_ = dVar4 * (param_2->field0_0x0)._s_0.X;
  local_78._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  if ((pFVar1 <= (FScriptContainerElement *)local_78) &&
     ((FScriptContainerElement *)local_78 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar9;
    }
  }
  iVar8 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar8 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar8 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar8 * 0x18;
  *(undefined8 *)pFVar1 = local_78._0_8_;
  *(undefined8 *)(pFVar1 + 8) = local_78._8_8_;
  *(double *)(pFVar2 + (longlong)iVar8 * 0x18 + 0x10) = local_68;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  dVar4 = (double)param_5 * dVar6;
  local_50 = (double)param_5 * (param_3->field0_0x0)._s_0.Z * dVar6;
  dVar5 = dVar4 * (param_3->field0_0x0)._s_0.Y;
  local_60._8_4_ = SUB84(dVar5,0);
  local_60._0_8_ = dVar4 * (param_3->field0_0x0)._s_0.X;
  local_60._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  if ((pFVar1 <= (FScriptContainerElement *)local_60) &&
     ((FScriptContainerElement *)local_60 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar9;
    }
  }
  iVar8 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar8 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar8 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar8 * 0x18;
  *(undefined8 *)pFVar1 = local_60._0_8_;
  *(undefined8 *)(pFVar1 + 8) = local_60._8_8_;
  *(double *)(pFVar2 + (longlong)iVar8 * 0x18 + 0x10) = local_50;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_48 = (double)param_6;
  dStack_40 = 0.0;
  uStack_38 = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar9;
    }
  }
  iVar8 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar8 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar8 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar8 * 0x18;
  *(double *)pFVar1 = local_48;
  *(double *)(pFVar1 + 8) = dStack_40;
  *(undefined8 *)(pFVar2 + (longlong)iVar8 * 0x18 + 0x10) = uStack_38;
  (__return_storage_ptr__->Color).field0_0x0 = param_7->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_8);
  __return_storage_ptr__->Type = Rectangle;
  return __return_storage_ptr__;
}

// MakeSegment @ 146d518f0

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeSegment
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,FColor *param_3,FString *param_4)

{
  MakeSegment(__return_storage_ptr__,param_1,param_2,__real_3f800000,param_3,param_4);
  return __return_storage_ptr__;
}

// MakeSegment @ 146d51930

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeSegment
          (FGameplayDebuggerShape *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,float param_3,FColor *param_4,FString *param_5)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FGameplayDebuggerShape *pFVar7;
  double local_38;
  double dStack_30;
  undefined8 uStack_28;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  iVar6 = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  if ((__return_storage_ptr__->ShapeData).ArrayMax == 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_1->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  if ((pFVar1 <= param_2) &&
     (param_2 < pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar4;
  *(double *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = (param_2->field0_0x0)._s_0.Z;
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_38 = (double)param_3;
  dStack_30 = 0.0;
  uStack_28 = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar6 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar6 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar6 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar6 * 0x18;
  *(double *)pFVar1 = local_38;
  *(double *)(pFVar1 + 8) = dStack_30;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x18 + 0x10) = uStack_28;
  (__return_storage_ptr__->Color).field0_0x0 = param_4->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_5);
  __return_storage_ptr__->Type = Segment;
  return __return_storage_ptr__;
}

// MakeSegmentList @ 146d51b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeSegmentList
          (FGameplayDebuggerShape *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,FColor *param_2,FString *param_3
          )

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TVector<double> *_Src;
  bool bVar6;
  int iVar7;
  FGameplayDebuggerShape *pFVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)&param_1->ArrayNum;
  piVar1 = &(__return_storage_ptr__->ShapeData).ArrayMax;
  _Src = param_1->DataPtr;
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  iVar7 = (int)uVar2;
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar7;
  if (iVar7 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar7,0,(ForAnyElementType *)__return_storage_ptr__,iVar7,piVar1);
    if (iVar7 != 0) {
      memcpy((__return_storage_ptr__->ShapeData).AllocatorInstance.Data,_Src,(longlong)iVar7 * 0x18)
      ;
    }
  }
  pFVar3 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_48 = ___xmm_00000000000000003ff0000000000000;
  uStack_40 = _UNK_150689518;
  local_38 = 0;
  if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar1 * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FGameplayDebuggerShape *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,piVar1);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar7 + 1;
  pFVar4 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar7 * 0x18;
  *(undefined8 *)pFVar3 = local_48;
  *(undefined8 *)(pFVar3 + 8) = uStack_40;
  *(undefined8 *)(pFVar4 + (longlong)iVar7 * 0x18 + 0x10) = local_38;
  (__return_storage_ptr__->Color).field0_0x0 = param_2->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_3);
  __return_storage_ptr__->Type = Segment;
  return __return_storage_ptr__;
}

// MakeSegmentList @ 146d51d00

FGameplayDebuggerShape * __cdecl
FGameplayDebuggerShape::MakeSegmentList
          (FGameplayDebuggerShape *__return_storage_ptr__,
          TArrayView<UE::Math::TVector<double>_const_,int> *param_1,float param_2,FColor *param_3,
          FString *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FGameplayDebuggerShape *pFVar6;
  double local_38;
  double dStack_30;
  undefined8 uStack_28;
  
  (__return_storage_ptr__->ShapeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ShapeData).ArrayNum = 0;
  (__return_storage_ptr__->ShapeData).ArrayMax = 0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  (__return_storage_ptr__->Color).field0_0x0.Bits = 0;
  __return_storage_ptr__->Type = Invalid;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
  operator=<UE::Math::TVector<double>_const_,int>(&__return_storage_ptr__->ShapeData,param_1);
  pFVar1 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  local_38 = (double)param_2;
  dStack_30 = 0.0;
  uStack_28 = 0;
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1 + (longlong)(__return_storage_ptr__->ShapeData).ArrayMax * 0x18)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FGameplayDebuggerShape *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (__return_storage_ptr__->ShapeData).ArrayNum;
  if (iVar5 == (__return_storage_ptr__->ShapeData).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->ShapeData).ArrayMax);
  }
  (__return_storage_ptr__->ShapeData).ArrayNum = iVar5 + 1;
  pFVar2 = (__return_storage_ptr__->ShapeData).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)iVar5 * 0x18;
  *(double *)pFVar1 = local_38;
  *(double *)(pFVar1 + 8) = dStack_30;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) = uStack_28;
  (__return_storage_ptr__->Color).field0_0x0 = param_3->field0_0x0;
  ::FString::operator=(&__return_storage_ptr__->Description,param_4);
  __return_storage_ptr__->Type = Segment;
  return __return_storage_ptr__;
}

