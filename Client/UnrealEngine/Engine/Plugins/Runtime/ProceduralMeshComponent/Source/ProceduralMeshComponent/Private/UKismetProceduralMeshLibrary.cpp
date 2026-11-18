// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 26

// StaticClass @ 14d261af0

UClass * __cdecl UKismetProceduralMeshLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralMeshComponent",L"KismetProceduralMeshLibrary",
               &Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.InnerSingleton,
               StaticRegisterNativesUKismetProceduralMeshLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UKismetProceduralMeshLibrary>,
               InternalVTableHelperCtorCaller<UKismetProceduralMeshLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.InnerSingleton;
}

// UKismetProceduralMeshLibrary @ 14d265070

UKismetProceduralMeshLibrary * __thiscall
UKismetProceduralMeshLibrary::UKismetProceduralMeshLibrary
          (UKismetProceduralMeshLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetProceduralMeshLibrary__6B_;
  return this;
}

// UKismetProceduralMeshLibrary @ 14d2650a0

UKismetProceduralMeshLibrary * __thiscall
UKismetProceduralMeshLibrary::UKismetProceduralMeshLibrary
          (UKismetProceduralMeshLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UKismetProceduralMeshLibrary__6B_;
  return this;
}

// ~UKismetProceduralMeshLibrary @ 14d2657f0

void __thiscall
UKismetProceduralMeshLibrary::~UKismetProceduralMeshLibrary(UKismetProceduralMeshLibrary *this)

{
  *(undefined ***)this = &___7UKismetProceduralMeshLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CalculateTangentsForMesh @ 14d2684a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UKismetProceduralMeshLibrary::CalculateTangentsForMesh
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ForAnyElementType FVar12;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar13;
  ForAnyElementType FVar14;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *pTVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  TStatId TVar20;
  longlong lVar21;
  int iVar22;
  uint *puVar23;
  ForElementType<FSetElementId> FVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar33;
  uint uVar34;
  longlong lVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  double dVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auStackY_668 [32];
  uint local_618;
  uint local_614;
  TArray<int,TSizedDefaultAllocator<32>_> *local_610;
  uint local_608;
  ForAnyElementType local_600;
  int local_5f8;
  int local_5f4;
  ForAnyElementType local_5f0;
  undefined8 local_5e8;
  ForAnyElementType local_5e0;
  undefined8 local_5d8;
  int local_5d0;
  ulonglong local_5c8;
  ForAnyElementType local_5c0;
  undefined8 local_5b8;
  ForAnyElementType local_5b0;
  undefined8 local_5a8;
  uint local_5a0 [2];
  float local_598 [10];
  ForAnyElementType local_570;
  undefined8 local_568;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_560;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_558;
  FScriptContainerElement *local_550;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_540;
  TArray<int,TSizedDefaultAllocator<32>_> local_530;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_520;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_510;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_500;
  FName local_4f8;
  byte local_4f0;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *local_4e8;
  uint local_4e0 [4];
  undefined8 local_4d0;
  float local_4c8;
  undefined1 local_4c4 [8];
  undefined1 local_4bc [8];
  undefined4 local_4b4;
  char *local_4b0;
  char *local_4a8;
  uint *local_498;
  uint *local_490;
  uint *local_488;
  uint *local_480;
  uint *local_478;
  uint *local_470;
  double local_468;
  double dStack_460;
  double local_458;
  undefined1 uStack_450;
  undefined7 uStack_44f;
  TVector<double>_u_0 local_448;
  double local_430;
  double local_428;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> local_418;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator> local_3c8;
  TMatrix<double> local_378;
  TMatrix<double> local_2f8;
  TMatrix<double> local_278;
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_668;
  local_4e8 = param_5;
  local_610 = param_2;
  local_560 = param_3;
  local_558 = param_1;
  local_500 = param_4;
  TVar20 = FThreadSafeStaticStatInner<FStat_STAT_ProcMesh_CalcTangents,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ProcMesh_CalcTangents,1> *)
                      &StatPtr_STAT_ProcMesh_CalcTangents);
  local_4bc._4_4_ = 0xff;
  local_4b0 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
  ;
  local_4b4 = 2;
  local_4a8 = 
  "void __cdecl UKismetProceduralMeshLibrary::CalculateTangentsForMesh(const class TArray<struct UE::Math::TVector<double>,class TSizedDefaultAllocator<32> > &,const class TArray<int,class TSizedDefaultAllocator<32> > &,const class TArray<struct UE::Math::TVector2<double>,class TSizedDefaultAllocator<32> > &,class TArray<struct UE::Math::TVector<double>,class TSizedDefaultAllocator<32> > &,class TArray<struct FProcMeshTangent,class TSizedDefaultAllocator<32> > &)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_4f8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,(FSourceLocation *)(local_4bc + 4));
  iVar22 = param_1->ArrayNum;
  local_5d0 = iVar22;
  if (iVar22 != 0) {
    iVar19 = param_2->ArrayNum / 3;
    local_5c8 = CONCAT44(local_5c8._4_4_,iVar19);
    local_3c8.Elements._0_8_ = 0;
    local_3c8.Elements._8_8_ = 0;
    local_3c8.Elements._32_8_ = 0;
    local_3c8.Elements._40_4_ = 0;
    local_3c8.Elements._44_4_ = 0x80;
    local_3c8.Elements._48_4_ = 0xffffffff;
    local_3c8.Elements._52_4_ = 0;
    local_3c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_3c8.HashSize = 0;
    local_418.Elements._0_8_ = 0;
    local_418.Elements._8_8_ = 0;
    local_418.Elements._32_8_ = 0;
    local_418.Elements._40_4_ = 0;
    local_418.Elements._44_4_ = 0x80;
    local_418.Elements._48_4_ = 0xffffffff;
    local_418.Elements._52_4_ = 0;
    local_418.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_418.HashSize = 0;
    local_5c0.Data = (FScriptContainerElement *)0x0;
    local_5b8 = 0;
    local_5b0.Data = (FScriptContainerElement *)0x0;
    local_5a8 = 0;
    local_570.Data = (FScriptContainerElement *)0x0;
    local_568 = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar19,&local_5c0,(int *)&local_5b8,(int *)((longlong)&local_5b8 + 4));
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar19,&local_5b0,(int *)&local_5a8,(int *)((longlong)&local_5a8 + 4));
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar19,&local_570,(int *)&local_568,(int *)((longlong)&local_568 + 4));
    local_618 = 0;
    fVar41 = __real_322bcc77;
    fVar51 = __real_3f800000;
    if (0 < iVar19) {
      local_608 = iVar22 - 1;
      do {
        uVar32 = 0;
        uVar30 = uVar32;
        uVar26 = local_608;
        do {
          uVar34 = 0;
          uVar25 = local_618 * 3 + (int)uVar30;
          uVar39 = 0;
          if ((int)uVar25 < param_2->ArrayNum) {
            uVar39 = ~uVar25 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar29 = (param_2->AllocatorInstance).Data;
          iVar22 = param_1->ArrayNum;
          uVar39 = uVar26;
          if (*(int *)(pFVar29 + (longlong)(int)uVar25 * 4) < (int)uVar26) {
            uVar39 = *(uint *)(pFVar29 + (longlong)(int)uVar25 * 4);
          }
          local_4e0[uVar32] = uVar39;
          uVar25 = 0;
          if ((int)uVar39 < iVar22) {
            uVar25 = ~uVar39 >> 0x1f;
          }
          local_614 = uVar39;
          if ((uVar25 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar29 = (param_1->AllocatorInstance).Data;
          lVar21 = (longlong)(int)uVar39;
          dVar3 = *(double *)(pFVar29 + lVar21 * 0x18 + 8);
          dVar47 = *(double *)(pFVar29 + lVar21 * 0x18 + 0x10);
          local_598[uVar32 * 3] = (float)*(double *)(pFVar29 + lVar21 * 0x18);
          local_598[uVar32 * 3 + 1] = (float)dVar3;
          local_598[uVar32 * 3 + 2] = (float)dVar47;
          local_530.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_530.ArrayNum = 0;
          local_530.ArrayMax = 0;
          FindVertOverlaps(local_614,param_1,&local_530);
          if (local_3c8.HashSize == 0) {
LAB_14d268911:
            local_498 = &local_614;
            local_490 = &local_618;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      (&local_3c8,(TPairInitializer<int_const_&,int_const_&> *)local_4c4,
                       (bool *)&local_498);
          }
          else {
            FVar24 = (ForElementType<FSetElementId>)&local_3c8.Hash;
            if (local_3c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar24 = local_3c8.Hash.SecondaryData;
            }
            iVar22 = *(int *)((longlong)FVar24 +
                             (longlong)(int)(local_3c8.HashSize - 1U & local_614) * 4);
            do {
              iVar19 = iVar22;
              iVar22 = iVar19;
              if (iVar19 == -1) break;
              iVar22 = *(int *)(local_3c8.Elements._0_8_ + 8 + (longlong)iVar19 * 0x10);
            } while (*(uint *)(local_3c8.Elements._0_8_ + (longlong)iVar19 * 0x10) != local_614);
            if (iVar19 == -1) goto LAB_14d268911;
            while (puVar23 = (uint *)((longlong)iVar19 * 0x10 + 4 + local_3c8.Elements._0_8_),
                  *puVar23 != local_618) {
              do {
                iVar19 = iVar22;
                if (iVar19 == -1) goto LAB_14d268911;
                iVar22 = *(int *)(local_3c8.Elements._0_8_ + 8 + (longlong)iVar19 * 0x10);
              } while (*(uint *)(local_3c8.Elements._0_8_ + (longlong)iVar19 * 0x10) != local_614);
            }
            if (puVar23 == (uint *)0x0) goto LAB_14d268911;
          }
          if (local_418.HashSize == 0) {
LAB_14d268a01:
            local_488 = &local_614;
            local_480 = &local_618;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      (&local_418,(TPairInitializer<int_const_&,int_const_&> *)(local_4c4 + 4),
                       (bool *)&local_488);
          }
          else {
            FVar24 = (ForElementType<FSetElementId>)&local_418.Hash;
            if (local_418.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar24 = local_418.Hash.SecondaryData;
            }
            iVar22 = *(int *)((longlong)FVar24 +
                             (longlong)(int)(local_418.HashSize - 1U & local_614) * 4);
            do {
              iVar19 = iVar22;
              iVar22 = iVar19;
              if (iVar19 == -1) break;
              iVar22 = *(int *)(local_418.Elements._0_8_ + 8 + (longlong)iVar19 * 0x10);
            } while (*(uint *)(local_418.Elements._0_8_ + (longlong)iVar19 * 0x10) != local_614);
            if (iVar19 == -1) goto LAB_14d268a01;
            while (puVar23 = (uint *)((longlong)iVar19 * 0x10 + 4 + local_418.Elements._0_8_),
                  *puVar23 != local_618) {
              do {
                iVar19 = iVar22;
                if (iVar19 == -1) goto LAB_14d268a01;
                iVar22 = *(int *)(local_418.Elements._0_8_ + 8 + (longlong)iVar19 * 0x10);
              } while (*(uint *)(local_418.Elements._0_8_ + (longlong)iVar19 * 0x10) != local_614);
            }
            if (puVar23 == (uint *)0x0) goto LAB_14d268a01;
          }
          if (0 < local_530.ArrayNum) {
            lVar35 = 0;
            lVar21 = local_418.Elements._0_8_;
            lVar27 = local_3c8.Elements._0_8_;
            do {
              uVar26 = 0;
              if ((int)uVar34 < local_530.ArrayNum) {
                uVar26 = ~uVar34 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , lVar21 = local_418.Elements._0_8_, lVar27 = local_3c8.Elements._0_8_, bVar17)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_5a0[0] = *(uint *)(local_530.AllocatorInstance.Data + lVar35);
              if (local_418.HashSize == 0) {
LAB_14d268b51:
                local_478 = local_5a0;
                local_470 = &local_618;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          (&local_418,(TPairInitializer<int_const_&,int_const_&> *)local_4bc,
                           (bool *)&local_478);
                lVar21 = local_418.Elements._0_8_;
                lVar27 = local_3c8.Elements._0_8_;
              }
              else {
                FVar24 = (ForElementType<FSetElementId>)&local_418.Hash;
                if (local_418.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar24 = local_418.Hash.SecondaryData;
                }
                iVar22 = *(int *)((longlong)FVar24 +
                                 (longlong)(int)(local_418.HashSize - 1U & local_5a0[0]) * 4);
                do {
                  iVar19 = iVar22;
                  iVar22 = iVar19;
                  if (iVar19 == -1) break;
                  iVar22 = *(int *)(lVar21 + 8 + (longlong)iVar19 * 0x10);
                } while (*(uint *)(lVar21 + (longlong)iVar19 * 0x10) != local_5a0[0]);
                if (iVar19 == -1) goto LAB_14d268b51;
                while (puVar23 = (uint *)((longlong)iVar19 * 0x10 + 4 + lVar21),
                      *puVar23 != local_618) {
                  do {
                    iVar19 = iVar22;
                    if (iVar19 == -1) goto LAB_14d268b51;
                    iVar22 = *(int *)(lVar21 + 8 + (longlong)iVar19 * 0x10);
                  } while (*(uint *)(lVar21 + (longlong)iVar19 * 0x10) != local_5a0[0]);
                }
                if (puVar23 == (uint *)0x0) goto LAB_14d268b51;
              }
              uVar26 = local_5a0[0];
              iVar22 = 0;
              local_5e0.Data = (FScriptContainerElement *)0x0;
              local_5d8 = 0;
              if (local_3c8.HashSize != 0) {
                FVar24 = (ForElementType<FSetElementId>)&local_3c8.Hash;
                if (local_3c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar24 = local_3c8.Hash.SecondaryData;
                }
                iVar19 = *(int *)((longlong)FVar24 +
                                 (longlong)(int)(local_3c8.HashSize - 1U & local_5a0[0]) * 4);
                do {
                  iVar18 = iVar19;
                  iVar19 = iVar18;
                  if (iVar18 == -1) break;
                  iVar19 = *(int *)(lVar27 + 8 + (longlong)iVar18 * 0x10);
                } while (*(uint *)(lVar27 + (longlong)iVar18 * 0x10) != local_5a0[0]);
                if (iVar18 != -1) {
                  do {
                    pFVar29 = (FScriptContainerElement *)(lVar27 + 4 + (longlong)iVar18 * 0x10);
                    iVar18 = iVar22;
                    if ((local_5e0.Data <= pFVar29) &&
                       (pFVar29 < local_5e0.Data + (longlong)local_5d8._4_4_ * 4)) {
                      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         );
                      if (bVar17) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      iVar18 = (int)local_5d8;
                    }
                    if (iVar18 == local_5d8._4_4_) {
                      iVar18 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&local_5e0,(int *)((longlong)&local_5d8 + 4));
                    }
                    iVar22 = iVar18 + 1;
                    local_5d8 = CONCAT44(local_5d8._4_4_,iVar22);
                    *(undefined4 *)(local_5e0.Data + (longlong)iVar18 * 4) = *(undefined4 *)pFVar29;
                    do {
                      iVar18 = iVar19;
                      lVar21 = local_418.Elements._0_8_;
                      lVar27 = local_3c8.Elements._0_8_;
                      if (iVar18 == -1) goto LAB_14d268cd7;
                      iVar19 = *(int *)(local_3c8.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10);
                    } while (*(uint *)(local_3c8.Elements._0_8_ + (longlong)iVar18 * 0x10) != uVar26
                            );
                  } while( true );
                }
              }
LAB_14d268cd7:
              uVar26 = 0;
              if (0 < iVar22) {
                do {
                  uVar39 = 0;
                  if ((int)uVar26 < iVar22) {
                    uVar39 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>::
                  EmplaceUnique<int_const_&,int_const_&>
                            ((TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>
                              *)&local_418,(int *)&local_614,
                             (int *)(local_5e0.Data + (longlong)(int)uVar26 * 4));
                  uVar26 = uVar26 + 1;
                  lVar21 = local_418.Elements._0_8_;
                  lVar27 = local_3c8.Elements._0_8_;
                  iVar22 = (int)local_5d8;
                } while ((int)uVar26 < (int)local_5d8);
              }
              if (local_5e0.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_5e0.Data);
                lVar21 = local_418.Elements._0_8_;
                lVar27 = local_3c8.Elements._0_8_;
              }
              uVar34 = uVar34 + 1;
              lVar35 = lVar35 + 4;
              param_2 = local_610;
              param_1 = local_558;
              uVar26 = local_608;
            } while ((int)uVar34 < local_530.ArrayNum);
          }
          if (local_530.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_530.AllocatorInstance.Data);
          }
          pTVar13 = local_560;
          fVar42 = local_598[2];
          fVar43 = local_598[1];
          fVar38 = local_598[0];
          fVar37 = __real_322bcc77;
          uVar30 = (ulonglong)((int)uVar30 + 1);
          uVar32 = uVar32 + 1;
        } while ((longlong)uVar32 < 3);
        fVar55 = local_598[2] - local_598[8];
        fVar54 = local_598[1] - local_598[7];
        fVar53 = local_598[0] - local_598[6];
        fVar46 = fVar55 * (local_598[4] - local_598[7]) - (local_598[5] - local_598[8]) * fVar54;
        fVar48 = fVar53 * (local_598[5] - local_598[8]) - (local_598[3] - local_598[6]) * fVar55;
        local_4c8 = (local_598[3] - local_598[6]) * fVar54 - fVar53 * (local_598[4] - local_598[7]);
        fVar40 = fVar48 * fVar48 + fVar46 * fVar46 + local_4c8 * local_4c8;
        if (fVar40 == fVar51) {
          local_550 = (FScriptContainerElement *)CONCAT44(fVar48,fVar46);
          uVar36 = fVar48;
          uVar57 = fVar46;
          uVar52 = local_4c8;
        }
        else if (fVar41 <= fVar40) {
          fVar51 = fVar51 / SQRT(fVar40);
          uVar36 = fVar51 * fVar48;
          uVar57 = fVar51 * fVar46;
          uVar52 = fVar51 * local_4c8;
        }
        else {
          local_550 = (FScriptContainerElement *)
                      CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
          uVar36 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
          uVar57 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          uVar52 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
        local_4d0 = CONCAT44(fVar48,fVar46);
        if (local_560->ArrayNum == param_1->ArrayNum) {
          lVar21 = (longlong)(int)local_4e0[0];
          uVar26 = 0;
          if ((int)local_4e0[0] < local_560->ArrayNum) {
            uVar26 = ~local_4e0[0] >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar27 = (longlong)(int)local_4e0[1];
          pFVar29 = (pTVar13->AllocatorInstance).Data + lVar21 * 0x10;
          dVar3 = *(double *)pFVar29;
          dVar47 = *(double *)(pFVar29 + 8);
          uVar26 = 0;
          if ((int)local_4e0[1] < pTVar13->ArrayNum) {
            uVar26 = ~local_4e0[1] >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar21 = (longlong)(int)local_4e0[2];
          pFVar29 = (pTVar13->AllocatorInstance).Data + lVar27 * 0x10;
          dVar45 = *(double *)pFVar29;
          dVar44 = *(double *)(pFVar29 + 8);
          uVar26 = 0;
          if ((int)local_4e0[2] < pTVar13->ArrayNum) {
            uVar26 = ~local_4e0[2] >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          dVar11 = _UNK_150689518;
          dVar10 = ___xmm_00000000000000003ff0000000000000;
          dVar9 = _UNK_15061cbc8;
          dVar8 = ___xmm_3ff00000000000000000000000000000;
          dVar7 = __real_3e45798ee0000000;
          dVar6 = __real_3ff0000000000000;
          pFVar29 = (pTVar13->AllocatorInstance).Data + lVar21 * 0x10;
          local_278.M[0][0] = (double)(local_598[3] - fVar38);
          local_278.M[0][3] = 0.0;
          local_278.M[0][1] = (double)(local_598[4] - fVar43);
          local_278.M[0][2] = (double)(local_598[5] - fVar42);
          local_278.M[1][0] = (double)(local_598[6] - fVar38);
          local_278.M[1][1] = (double)(local_598[7] - fVar43);
          local_278.M[1][3] = 0.0;
          local_1f8.M[1][0] = *(double *)pFVar29 - dVar3;
          local_278.M[1][2] = (double)(local_598[8] - fVar42);
          local_278.M[2][0] = (double)fVar38;
          local_278.M[2][2] = (double)fVar42;
          local_278.M[2][1] = (double)fVar43;
          local_1f8.M[0][0] = dVar45 - dVar3;
          local_1f8.M[1][1] = *(double *)(pFVar29 + 8) - dVar47;
          local_1f8.M[0][1] = dVar44 - dVar47;
          local_278.M[2][3] = 0.0;
          uVar26 = SUB84(local_1f8.M[0][0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar39 = (uint)((ulonglong)local_1f8.M[0][0] >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          local_278.M[3][0] = 0.0;
          local_278.M[3][1] = 0.0;
          local_278.M[3][2] = ___xmm_3ff00000000000000000000000000000;
          local_278.M[3][3] = _UNK_15061cbc8;
          local_1f8.M[0][2] = 0.0;
          local_1f8.M[0][3] = 0.0;
          local_1f8.M[1][2] = 0.0;
          local_1f8.M[1][3] = 0.0;
          local_1f8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
          local_1f8.M[2][3] = _UNK_150689518;
          local_1f8.M[3][0] = 0.0;
          local_1f8.M[3][1] = 0.0;
          local_1f8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
          local_1f8.M[3][3] = _UNK_15061cbc8;
          local_1f8.M[2][0] = dVar3;
          local_1f8.M[2][1] = dVar47;
          if ((((__real_3e45798ee0000000 <= (double)CONCAT44(uVar39,uVar26) &&
                 (double)CONCAT44(uVar39,uVar26) != __real_3e45798ee0000000) ||
               (uVar26 = SUB84(local_1f8.M[0][1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
               uVar39 = (uint)((ulonglong)local_1f8.M[0][1] >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
               __real_3e45798ee0000000 <= (double)CONCAT44(uVar39,uVar26) &&
               (double)CONCAT44(uVar39,uVar26) != __real_3e45798ee0000000)) ||
              (__real_3e45798ee0000000 <
               (double)CONCAT44((uint)((ulonglong)local_1f8.M[1][0] >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(local_1f8.M[1][0],0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
             (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)local_1f8.M[1][1] >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_1f8.M[1][1],0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
LAB_14d2692c2:
            FMath::MatrixInverse(&local_178,&local_1f8);
            local_378.M[0][0] = local_178.M[0][0];
            local_378.M[0][1] = local_178.M[0][1];
            local_378.M[0][2] = local_178.M[0][2];
            local_378.M[0][3] = local_178.M[0][3];
            local_378.M[1][0] = local_178.M[1][0];
            local_378.M[1][1] = local_178.M[1][1];
            local_378.M[1][2] = local_178.M[1][2];
            local_378.M[1][3] = local_178.M[1][3];
            local_378.M[2][0] = local_178.M[2][0];
            local_378.M[2][1] = local_178.M[2][1];
            local_378.M[2][2] = local_178.M[2][2];
            local_378.M[2][3] = local_178.M[2][3];
            local_378.M[3][0]._0_4_ = local_178.M[3][0]._0_4_;
            local_378.M[3][0]._4_4_ = local_178.M[3][0]._4_4_;
            local_378.M[3][1]._0_4_ = local_178.M[3][1]._0_4_;
            local_378.M[3][1]._4_4_ = local_178.M[3][1]._4_4_;
            local_378.M[3][2]._0_4_ = local_178.M[3][2]._0_4_;
            local_378.M[3][2]._4_4_ = local_178.M[3][2]._4_4_;
            local_378.M[3][3]._0_4_ = local_178.M[3][3]._0_4_;
            local_378.M[3][3]._4_4_ = local_178.M[3][3]._4_4_;
          }
          else {
            local_448._s_0.Z = __real_3ff0000000000000;
            local_448._s_0.X = dVar3;
            local_448._s_0.Y = dVar47;
            bVar17 = UE::Math::TVector<double>::IsNearlyZero
                               ((TVector<double> *)&local_448._s_0,__real_3e45798ee0000000);
            if (!bVar17) goto LAB_14d2692c2;
            local_378.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
            local_378.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
            local_378.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
            local_378.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
            local_378.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
            local_378.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
            local_378.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
            local_378.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
            local_378.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
            local_378.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
            local_378.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
            local_378.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
            local_378.M[3][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
            local_378.M[3][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
            local_378.M[3][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
            local_378.M[3][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
            local_378.M[3][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_;
            local_378.M[3][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_;
            local_378.M[3][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_;
            local_378.M[3][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_;
          }
          VectorMatrixMultiply(&local_2f8,&local_378,&local_278);
          dVar45 = dVar11 * local_2f8.M[1][0] + dVar10 * local_2f8.M[0][0] + local_2f8.M[2][0] * 0.0
                   + local_2f8.M[3][0] * 0.0;
          dVar3 = dVar11 * local_2f8.M[1][1] + dVar10 * local_2f8.M[0][1] + local_2f8.M[2][1] * 0.0
                  + local_2f8.M[3][1] * 0.0;
          dVar47 = dVar11 * local_2f8.M[1][2] + dVar10 * local_2f8.M[0][2] + local_2f8.M[2][2] * 0.0
                   + local_2f8.M[3][2] * 0.0;
          dVar44 = dVar3 * dVar3 + dVar45 * dVar45 + dVar47 * dVar47;
          if (dVar44 <= dVar7) {
            dVar3 = 0.0;
            dVar47 = 0.0;
            dVar45 = 0.0;
          }
          else {
            local_430 = dVar6 / SQRT(dVar44);
            dVar3 = local_430 * dVar3;
            dVar47 = local_430 * dVar47;
            dVar45 = local_430 * dVar45;
          }
          lVar21 = (longlong)(int)local_618;
          uVar26 = 0;
          if ((int)local_618 < (int)local_5b8) {
            uVar26 = ~local_618 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(float *)(local_5c0.Data + lVar21 * 0xc) = (float)dVar45;
          *(float *)(local_5c0.Data + lVar21 * 0xc + 4) = (float)dVar3;
          *(float *)(local_5c0.Data + lVar21 * 0xc + 8) = (float)dVar47;
          dVar47 = local_2f8.M[1][0] * dVar9 + local_2f8.M[0][0] * dVar8 + local_2f8.M[2][0] * 0.0 +
                   local_2f8.M[3][0] * 0.0;
          dVar3 = local_2f8.M[1][1] * dVar9 + local_2f8.M[0][1] * dVar8 + local_2f8.M[2][1] * 0.0 +
                  local_2f8.M[3][1] * 0.0;
          dVar44 = local_2f8.M[1][2] * dVar9 + local_2f8.M[0][2] * dVar8 + local_2f8.M[2][2] * 0.0 +
                   local_2f8.M[3][2] * 0.0;
          dVar45 = dVar3 * dVar3 + dVar47 * dVar47 + dVar44 * dVar44;
          if (dVar45 <= dVar7) {
            dVar3 = 0.0;
            dVar44 = 0.0;
            dVar47 = 0.0;
          }
          else {
            local_428 = dVar6 / SQRT(dVar45);
            dVar3 = dVar3 * local_428;
            dVar44 = dVar44 * local_428;
            dVar47 = dVar47 * local_428;
          }
          lVar21 = (longlong)(int)local_618;
          uVar26 = 0;
          if ((int)local_618 < (int)local_5a8) {
            uVar26 = ~local_618 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(float *)(local_5b0.Data + lVar21 * 0xc) = (float)dVar47;
          *(float *)(local_5b0.Data + lVar21 * 0xc + 4) = (float)dVar3;
          *(float *)(local_5b0.Data + lVar21 * 0xc + 8) = (float)dVar44;
          fVar51 = __real_3f800000;
        }
        else {
          fVar41 = fVar53 * fVar53 + fVar54 * fVar54 + fVar55 * fVar55;
          uVar49 = fVar53;
          uVar50 = fVar54;
          uVar56 = fVar55;
          if ((fVar41 != __real_3f800000) &&
             (uVar49 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
             uVar50 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
             uVar56 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
             __real_322bcc77 <= fVar41)) {
            fVar41 = __real_3f800000 / SQRT(fVar41);
            uVar49 = fVar53 * fVar41;
            uVar50 = fVar54 * fVar41;
            uVar56 = fVar55 * fVar41;
          }
          lVar21 = (longlong)(int)local_618;
          uVar26 = 0;
          if ((int)local_618 < (int)local_5b8) {
            uVar26 = ~local_618 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(ulonglong *)(local_5c0.Data + lVar21 * 0xc) = CONCAT44(uVar50,uVar49);
          *(undefined4 *)(local_5c0.Data + lVar21 * 0xc + 8) = uVar56;
          lVar21 = (longlong)(int)local_618;
          uVar26 = 0;
          if ((int)local_618 < (int)local_5b8) {
            uVar26 = ~local_618 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar51 = __real_3f800000;
          fVar43 = (float)uVar52 * *(float *)(local_5c0.Data + lVar21 * 0xc + 4) -
                   (float)uVar36 * *(float *)(local_5c0.Data + lVar21 * 0xc + 8);
          fVar42 = (float)uVar36 * *(float *)(local_5c0.Data + lVar21 * 0xc) -
                   (float)uVar57 * *(float *)(local_5c0.Data + lVar21 * 0xc + 4);
          fVar38 = (float)uVar57 * *(float *)(local_5c0.Data + lVar21 * 0xc + 8) -
                   (float)uVar52 * *(float *)(local_5c0.Data + lVar21 * 0xc);
          fVar41 = fVar38 * fVar38 + fVar43 * fVar43 + fVar42 * fVar42;
          uVar49 = fVar43;
          uVar50 = fVar38;
          uVar56 = fVar42;
          if ((fVar41 != __real_3f800000) &&
             (uVar49 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
             uVar50 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
             uVar56 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z, fVar37 <= fVar41)) {
            fVar41 = __real_3f800000 / SQRT(fVar41);
            uVar49 = fVar41 * fVar43;
            uVar50 = fVar38 * fVar41;
            uVar56 = fVar42 * fVar41;
          }
          lVar21 = (longlong)(int)local_618;
          uVar26 = 0;
          if ((int)local_618 < (int)local_5a8) {
            uVar26 = ~local_618 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(ulonglong *)(local_5b0.Data + lVar21 * 0xc) = CONCAT44(uVar50,uVar49);
          *(undefined4 *)(local_5b0.Data + lVar21 * 0xc + 8) = uVar56;
        }
        lVar21 = (longlong)(int)local_618;
        uVar26 = 0;
        if ((int)local_618 < (int)local_568) {
          uVar26 = ~local_618 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(ulonglong *)(local_570.Data + lVar21 * 0xc) = CONCAT44(uVar36,uVar57);
        fVar41 = __real_322bcc77;
        *(undefined4 *)(local_570.Data + lVar21 * 0xc + 8) = uVar52;
        local_618 = local_618 + 1;
        param_2 = local_610;
        iVar22 = local_5d0;
      } while ((int)local_618 < (int)local_5c8);
    }
    uVar30 = 0;
    local_540.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_540.ArrayNum = 0;
    local_540.ArrayMax = 0;
    local_510.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_510.ArrayNum = 0;
    local_510.ArrayMax = 0;
    local_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_520.ArrayNum = 0;
    local_520.ArrayMax = 0;
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::AddZeroed(&local_540,iVar22);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::AddZeroed(&local_510,iVar22);
    TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::AddZeroed(&local_520,iVar22);
    if (0 < param_1->ArrayNum) {
      local_610 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      uVar32 = uVar30;
      do {
        pTVar33 = local_610;
        uVar28 = 0;
        uVar31 = 0;
        local_5f0.Data = (FScriptContainerElement *)0x0;
        local_5e8 = 0;
        uVar26 = (uint)uVar32;
        if (local_418.HashSize != 0) {
          lVar21 = (longlong)(int)uVar26;
          FVar24 = (ForElementType<FSetElementId>)&local_418.Hash;
          if (local_418.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar24 = local_418.Hash.SecondaryData;
          }
          iVar22 = *(int *)((longlong)FVar24 + (longlong)(int)(local_418.HashSize - 1U & uVar26) * 4
                           );
          do {
            iVar19 = iVar22;
            uVar31 = uVar28;
            iVar22 = iVar19;
            if (iVar19 == -1) break;
            iVar22 = *(int *)(local_418.Elements._0_8_ + 8 + (longlong)iVar19 * 0x10);
          } while (*(uint *)(local_418.Elements._0_8_ + (longlong)iVar19 * 0x10) != uVar26);
joined_r0x00014d269a17:
          if (iVar19 != -1) {
            pFVar29 = (FScriptContainerElement *)
                      (local_418.Elements._0_8_ + 4 + (longlong)iVar19 * 0x10);
            iVar19 = (int)uVar31;
            local_5c8 = lVar21;
            if ((local_5f0.Data <= pFVar29) &&
               (local_5e8._4_4_ = (int)(local_5e8 >> 0x20), lVar27 = (longlong)local_5e8._4_4_,
               pFVar29 < local_5f0.Data + lVar27 * 4)) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar17) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar19 = (int)local_5e8;
            }
            if (iVar19 == local_5e8._4_4_) {
              iVar19 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_5f0,(int *)((longlong)&local_5e8 + 4));
            }
            uVar39 = iVar19 + 1;
            local_5e8 = CONCAT44(local_5e8._4_4_,uVar39);
            *(undefined4 *)(local_5f0.Data + (longlong)iVar19 * 4) = *(undefined4 *)pFVar29;
            if (iVar22 == -1) {
              uVar31 = (ulonglong)uVar39;
              goto LAB_14d269b30;
            }
            do {
              iVar18 = iVar22;
              uVar25 = *(uint *)(local_418.Elements._0_8_ + (longlong)iVar18 * 0x10);
              iVar22 = *(int *)(local_418.Elements._0_8_ + 8 + (longlong)iVar18 * 0x10);
              if (uVar25 == uVar26) break;
            } while (iVar22 != -1);
            uVar31 = (ulonglong)uVar39;
            iVar19 = iVar22;
            if (uVar25 == uVar26) {
              iVar19 = iVar18;
            }
            goto joined_r0x00014d269a17;
          }
        }
LAB_14d269b30:
        local_5c8 = (ulonglong)(int)uVar26;
        if (0 < (int)uVar31) {
          uVar32 = uVar28;
          do {
            uVar25 = (uint)uVar28;
            uVar39 = 0;
            if ((int)uVar25 < (int)uVar31) {
              uVar39 = ~uVar25 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar39 = *(uint *)(local_5f0.Data + uVar32);
            lVar21 = (longlong)(int)uVar39;
            uVar34 = 0;
            if ((int)uVar39 < (int)local_568) {
              uVar34 = ~uVar39 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar12.Data = local_570.Data;
            uVar39 = 0;
            if ((int)uVar26 < local_520.ArrayNum) {
              uVar39 = ~uVar26 >> 0x1f;
            }
            if ((uVar39 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar28 = (ulonglong)(uVar25 + 1);
            uVar32 = uVar32 + 4;
            *(float *)(local_520.AllocatorInstance.Data + uVar30) =
                 *(float *)(local_520.AllocatorInstance.Data + uVar30) +
                 *(float *)(FVar12.Data + lVar21 * 0xc);
            *(float *)(local_520.AllocatorInstance.Data + uVar30 + 4) =
                 *(float *)(FVar12.Data + lVar21 * 0xc + 4) +
                 *(float *)(local_520.AllocatorInstance.Data + uVar30 + 4);
            *(float *)(local_520.AllocatorInstance.Data + uVar30 + 8) =
                 *(float *)(FVar12.Data + lVar21 * 0xc + 8) +
                 *(float *)(local_520.AllocatorInstance.Data + uVar30 + 8);
            uVar31 = local_5e8 & 0xffffffff;
            pTVar33 = local_610;
          } while ((int)(uVar25 + 1) < (int)local_5e8);
        }
        uVar39 = 0;
        local_5f8 = 0;
        local_600.Data = (FScriptContainerElement *)0x0;
        local_5f4 = 0;
        if (local_3c8.HashSize != 0) {
          FVar24 = local_3c8.Hash.SecondaryData;
          uVar32 = (longlong)(int)uVar26;
          if (local_3c8.Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
            FVar24 = (ForElementType<FSetElementId>)&local_3c8.Hash;
            uVar32 = local_5c8;
          }
          iVar22 = *(int *)((longlong)FVar24 + ((longlong)(local_3c8.HashSize + -1) & uVar32) * 4);
          do {
            iVar19 = iVar22;
            iVar22 = iVar19;
            if (iVar19 == -1) break;
            iVar22 = *(int *)(local_3c8.Elements._0_8_ + 8 + (longlong)iVar19 * 0x10);
          } while (*(uint *)(local_3c8.Elements._0_8_ + (longlong)iVar19 * 0x10) != uVar26);
          if (iVar19 != -1) {
            do {
              pFVar29 = (FScriptContainerElement *)
                        (local_3c8.Elements._0_8_ + 4 + (longlong)iVar19 * 0x10);
              if (((local_600.Data <= pFVar29) &&
                  (pFVar29 < local_600.Data + (longlong)local_5f4 * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (local_5f8 == local_5f4) {
                local_5f8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_600,&local_5f4);
              }
              iVar18 = local_5f8 + 1;
              *(undefined4 *)(local_600.Data + (longlong)local_5f8 * 4) = *(undefined4 *)pFVar29;
              do {
                iVar19 = iVar22;
                local_5f8 = iVar18;
                if (iVar19 == -1) goto LAB_14d269de6;
                iVar22 = *(int *)(local_3c8.Elements._0_8_ + 8 + (longlong)iVar19 * 0x10);
              } while (*(uint *)(local_3c8.Elements._0_8_ + (longlong)iVar19 * 0x10) != uVar26);
            } while( true );
          }
        }
LAB_14d269de6:
        if (0 < local_5f8) {
          local_608 = ~uVar26 >> 0x1f;
          local_560 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0;
          do {
            pTVar13 = local_560;
            uVar25 = 0;
            if ((int)uVar39 < local_5f8) {
              uVar25 = ~uVar39 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar25 = *(uint *)(local_600.Data + (longlong)&pTVar13->AllocatorInstance);
            lVar21 = (longlong)(int)uVar25;
            uVar34 = 0;
            if ((int)uVar25 < (int)local_5b8) {
              uVar34 = ~uVar25 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_550 = local_5c0.Data;
            uVar34 = 0;
            if ((int)uVar26 < local_540.ArrayNum) {
              uVar34 = local_608;
            }
            if ((uVar34 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(float *)(local_540.AllocatorInstance.Data + uVar30) =
                 *(float *)(local_540.AllocatorInstance.Data + uVar30) +
                 *(float *)(local_550 + lVar21 * 0xc);
            *(float *)(local_540.AllocatorInstance.Data + uVar30 + 4) =
                 *(float *)(local_550 + lVar21 * 0xc + 4) +
                 *(float *)(local_540.AllocatorInstance.Data + uVar30 + 4);
            *(float *)(local_540.AllocatorInstance.Data + uVar30 + 8) =
                 *(float *)(local_550 + lVar21 * 0xc + 8) +
                 *(float *)(local_540.AllocatorInstance.Data + uVar30 + 8);
            uVar34 = 0;
            if ((int)uVar25 < (int)local_5a8) {
              uVar34 = ~uVar25 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar12.Data = local_5b0.Data;
            pTVar33 = local_610;
            uVar25 = 0;
            if ((int)uVar26 < local_510.ArrayNum) {
              uVar25 = local_608;
            }
            if ((uVar25 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            uVar39 = uVar39 + 1;
            *(float *)(local_510.AllocatorInstance.Data + uVar30) =
                 *(float *)(local_510.AllocatorInstance.Data + uVar30) +
                 *(float *)(FVar12.Data + lVar21 * 0xc);
            *(float *)(local_510.AllocatorInstance.Data + uVar30 + 4) =
                 *(float *)(FVar12.Data + lVar21 * 0xc + 4) +
                 *(float *)(local_510.AllocatorInstance.Data + uVar30 + 4);
            local_560 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&(local_560->AllocatorInstance).Data + 4);
            *(float *)(local_510.AllocatorInstance.Data + uVar30 + 8) =
                 *(float *)(FVar12.Data + lVar21 * 0xc + 8) +
                 *(float *)(local_510.AllocatorInstance.Data + uVar30 + 8);
          } while ((int)uVar39 < local_5f8);
        }
        if (local_600.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_600.Data);
        }
        if (local_5f0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5f0.Data);
        }
        local_610 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                    ((longlong)&(pTVar33->AllocatorInstance).Data + 1);
        uVar32 = (ulonglong)(uVar26 + 1);
        uVar30 = uVar30 + 0xc;
        iVar22 = local_5d0;
      } while ((int)(uVar26 + 1) < local_558->ArrayNum);
    }
    pTVar15 = local_500;
    uVar30 = 0;
    piVar1 = &local_500->ArrayMax;
    local_500->ArrayNum = 0;
    piVar2 = &local_500->ArrayNum;
    if (local_500->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_500->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar22,&pTVar15->AllocatorInstance,piVar2,piVar1);
    pTVar16 = local_4e8;
    piVar1 = &local_4e8->ArrayMax;
    local_4e8->ArrayNum = 0;
    piVar2 = &local_4e8->ArrayNum;
    if (local_4e8->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&local_4e8->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar22,&pTVar16->AllocatorInstance,piVar2,piVar1);
    if (0 < iVar22) {
      lVar27 = 0;
      local_610 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      lVar21 = 0;
      uVar32 = uVar30;
      do {
        uVar39 = (uint)uVar30;
        uVar25 = ~uVar39 >> 0x1f;
        uVar26 = 0;
        if ((int)uVar39 < local_540.ArrayNum) {
          uVar26 = uVar25;
        }
        if ((uVar26 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar12.Data = local_540.AllocatorInstance.Data;
        uVar26 = 0;
        if ((int)uVar39 < local_510.ArrayNum) {
          uVar26 = uVar25;
        }
        if ((uVar26 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_558 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                    local_510.AllocatorInstance.Data;
        uVar26 = 0;
        if ((int)uVar39 < local_520.ArrayNum) {
          uVar26 = uVar25;
        }
        if ((uVar26 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar14.Data = local_520.AllocatorInstance.Data;
        fVar37 = *(float *)(FVar12.Data + lVar21);
        fVar38 = *(float *)(FVar12.Data + lVar21 + 4);
        fVar43 = *(float *)(FVar12.Data + lVar21 + 8);
        fVar42 = fVar38 * fVar38 + fVar37 * fVar37 + fVar43 * fVar43;
        if (fVar41 < fVar42) {
          fVar42 = fVar51 / SQRT(fVar42);
          *(float *)(FVar12.Data + lVar21) = fVar42 * fVar37;
          *(float *)(FVar12.Data + lVar21 + 4) = fVar42 * fVar38;
          *(float *)(FVar12.Data + lVar21 + 8) = fVar42 * fVar43;
        }
        fVar37 = *(float *)(local_520.AllocatorInstance.Data + lVar21);
        fVar38 = *(float *)(local_520.AllocatorInstance.Data + lVar21 + 4);
        fVar43 = *(float *)(local_520.AllocatorInstance.Data + lVar21 + 8);
        fVar42 = fVar38 * fVar38 + fVar37 * fVar37 + fVar43 * fVar43;
        if (fVar41 < fVar42) {
          fVar42 = fVar51 / SQRT(fVar42);
          fVar37 = fVar42 * fVar37;
          fVar38 = fVar42 * fVar38;
          fVar43 = fVar42 * fVar43;
          *(float *)(local_520.AllocatorInstance.Data + lVar21) = fVar37;
          *(float *)(local_520.AllocatorInstance.Data + lVar21 + 4) = fVar38;
          *(float *)(local_520.AllocatorInstance.Data + lVar21 + 8) = fVar43;
        }
        uVar26 = 0;
        if ((int)uVar39 < local_500->ArrayNum) {
          uVar26 = uVar25;
        }
        if ((uVar26 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar16 = local_4e8;
        pFVar29 = (local_500->AllocatorInstance).Data;
        *(double *)(pFVar29 + (longlong)local_610) = (double)fVar37;
        *(double *)(pFVar29 + (longlong)local_610 + 8) = (double)fVar38;
        *(double *)(pFVar29 + (longlong)local_610 + 0x10) = (double)fVar43;
        fVar37 = *(float *)(FVar14.Data + lVar21 + 8);
        fVar38 = *(float *)(FVar14.Data + lVar21 + 4) * *(float *)(FVar12.Data + lVar21 + 4) +
                 *(float *)(FVar14.Data + lVar21) * *(float *)(FVar12.Data + lVar21) +
                 fVar37 * *(float *)(FVar12.Data + lVar21 + 8);
        fVar42 = *(float *)(FVar12.Data + lVar21) - fVar38 * *(float *)(FVar14.Data + lVar21);
        fVar43 = *(float *)(FVar12.Data + lVar21 + 4) -
                 fVar38 * *(float *)(FVar14.Data + lVar21 + 4);
        *(float *)(FVar12.Data + lVar21) = fVar42;
        fVar38 = *(float *)(FVar12.Data + lVar21 + 8) - fVar38 * fVar37;
        *(float *)(FVar12.Data + lVar21 + 4) = fVar43;
        *(float *)(FVar12.Data + lVar21 + 8) = fVar38;
        fVar37 = fVar43 * fVar43 + fVar42 * fVar42 + fVar38 * fVar38;
        if (fVar41 < fVar37) {
          fVar37 = fVar51 / SQRT(fVar37);
          fVar42 = fVar42 * fVar37;
          fVar43 = fVar43 * fVar37;
          fVar38 = fVar38 * fVar37;
          *(float *)(FVar12.Data + lVar21) = fVar42;
          *(float *)(FVar12.Data + lVar21 + 4) = fVar43;
          *(float *)(FVar12.Data + lVar21 + 8) = fVar38;
        }
        dStack_460 = (double)fVar43;
        local_468 = (double)fVar42;
        local_458 = (double)fVar38;
        uStack_450 = (fVar42 * *(float *)(FVar14.Data + lVar21 + 8) -
                     fVar38 * *(float *)(FVar14.Data + lVar21)) *
                     *(float *)((longlong)&(local_558->AllocatorInstance).Data + lVar21 + 4) +
                     (fVar38 * *(float *)(FVar14.Data + lVar21 + 4) -
                     fVar43 * *(float *)(FVar14.Data + lVar21 + 8)) *
                     *(float *)((longlong)&(local_558->AllocatorInstance).Data + lVar21) +
                     (fVar43 * *(float *)(FVar14.Data + lVar21) -
                     fVar42 * *(float *)(FVar14.Data + lVar21 + 4)) *
                     *(float *)((longlong)&local_558->ArrayNum + lVar21) < 0.0;
        uVar26 = 0;
        if ((int)uVar39 < local_4e8->ArrayNum) {
          uVar26 = uVar25;
        }
        if ((uVar26 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pTVar16->AllocatorInstance).Data;
        local_610 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_610 + 0x18);
        uVar30 = (ulonglong)(uVar39 + 1);
        uVar32 = uVar32 + 1;
        lVar21 = lVar21 + 0xc;
        pFVar29 = pFVar4 + lVar27;
        *(double *)pFVar29 = local_468;
        *(double *)(pFVar29 + 8) = dStack_460;
        pFVar4 = pFVar4 + lVar27 + 0x10;
        *(double *)pFVar4 = local_458;
        *(ulonglong *)(pFVar4 + 8) = CONCAT71(uStack_44f,uStack_450);
        lVar27 = lVar27 + 0x20;
      } while ((longlong)uVar32 < (longlong)local_5d0);
    }
    if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.AllocatorInstance.Data);
    }
    if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
        local_510.AllocatorInstance.Data !=
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_510.AllocatorInstance.Data);
    }
    if (local_540.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_540.AllocatorInstance.Data);
    }
    if (local_570.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.Data);
    }
    if (local_5b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b0.Data);
    }
    if (local_5c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5c0.Data);
    }
    local_418.HashSize = 0;
    if (local_418.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_418.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_418.Elements);
    local_3c8.HashSize = 0;
    if (local_3c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_3c8.Elements);
  }
  if ((local_4f0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_4f0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_4f0 & 4) != 0) {
    FThreadStats::AddMessage(local_4f8,CycleScopeEnd);
  }
  return;
}

// ConvertQuadToTriangles @ 14d26aaf0

void __cdecl
UKismetProceduralMeshLibrary::ConvertQuadToTriangles
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3,int param_4,
          int param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if ((pFVar1 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_res10[0];
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_res18[0];
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)&param_5) &&
     ((FScriptContainerElement *)&param_5 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = param_5;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_res18[0];
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_res20) &&
     ((FScriptContainerElement *)local_res20 < pFVar1 + (longlong)param_1->ArrayMax * 4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = local_res20[0];
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 <= (FScriptContainerElement *)&param_5) {
    if ((FScriptContainerElement *)&param_5 < pFVar1 + (longlong)param_1->ArrayMax * 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 4) = param_5;
  return;
}

// CopyProceduralMeshFromStaticMeshComponent @ 14d26aea0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent
          (UStaticMeshComponent *param_1,int param_2,UProceduralMeshComponent *param_3,bool param_4)

{
  UStaticMesh *pUVar1;
  UBodySetup *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMaterialInterface *pUVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong local_res8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_d8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_98;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_88;
  void *local_78;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_60;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_50;
  
  if (param_1 != (UStaticMeshComponent *)0x0) {
    pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      if (pUVar1 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    else if (pUVar1 == (UStaticMesh *)0x0) {
      return;
    }
    if (param_3 != (UProceduralMeshComponent *)0x0) {
      pUVar1 = (param_1->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      iVar6 = UStaticMesh::GetNumSections(pUVar1,param_2);
      uVar12 = 0;
      if (0 < iVar6) {
        local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_50.ArrayNum = 0;
        local_50.ArrayMax = 0;
        local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.ArrayNum = 0;
        local_60.ArrayMax = 0;
        local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_70.ArrayNum = 0;
        local_70.ArrayMax = 0;
        uVar10 = uVar12;
        do {
          local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.ArrayNum = 0;
          local_98.ArrayMax = 0;
          iVar8 = (int)uVar10;
          local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.ArrayNum = 0;
          local_a8.ArrayMax = 0;
          local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.ArrayNum = 0;
          local_b8.ArrayMax = 0;
          local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.ArrayNum = 0;
          local_c8.ArrayMax = 0;
          local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.ArrayNum = 0;
          local_d8.ArrayMax = 0;
          GetSectionFromStaticMesh
                    (pUVar1,param_2,iVar8,&local_98,&local_a8,&local_b8,&local_c8,&local_d8);
          local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.ArrayNum = 0;
          local_88.ArrayMax = 0;
          UProceduralMeshComponent::CreateMeshSection
                    (param_3,iVar8,&local_98,&local_a8,&local_b8,&local_c8,&local_50,&local_60,
                     &local_70,&local_88,&local_d8,param_4);
          if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.AllocatorInstance.Data);
          }
          if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.AllocatorInstance.Data);
          }
          if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.AllocatorInstance.Data);
          }
          if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
          }
          if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.AllocatorInstance.Data);
          }
          if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.AllocatorInstance.Data);
          }
          uVar10 = (ulonglong)(iVar8 + 1U);
        } while ((int)(iVar8 + 1U) < iVar6);
      }
      UProceduralMeshComponent::ClearCollisionConvexMeshes(param_3);
      pUVar2 = (pUVar1->BodySetup).field0_0x0.DebugPtr;
      if ((pUVar2 != (UBodySetup *)0x0) &&
         (local_res8 = (longlong)(pUVar2->AggGeom).ConvexElems.ArrayNum, uVar10 = uVar12,
         uVar14 = uVar12, 0 < local_res8)) {
        do {
          pUVar2 = (pUVar1->BodySetup).field0_0x0.DebugPtr;
          uVar9 = (uint)uVar10;
          uVar11 = 0;
          if ((int)uVar9 < (pUVar2->AggGeom).ConvexElems.ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pUVar2->AggGeom).ConvexElems.AllocatorInstance.Data;
          local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e8.ArrayNum = *(int *)(pFVar3 + uVar14 + 0x38);
          lVar13 = (longlong)local_e8.ArrayNum;
          local_78 = *(void **)(pFVar3 + uVar14 + 0x30);
          if (local_e8.ArrayNum == 0) {
            local_e8.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,local_e8.ArrayNum,0,&local_e8.AllocatorInstance,local_e8.ArrayNum,
                       &local_e8.ArrayMax);
            memcpy(local_e8.AllocatorInstance.Data,local_78,lVar13 * 0x18);
          }
          UProceduralMeshComponent::AddCollisionConvexMesh(param_3,&local_e8);
          local_res8 = local_res8 + -1;
          uVar10 = (ulonglong)(uVar9 + 1);
          uVar14 = uVar14 + 0x100;
        } while (local_res8 != 0);
      }
      iVar6 = (**(code **)(param_1->_padding_ + 0x810))(param_1);
      if (0 < iVar6) {
        do {
          pcVar4 = *(code **)(param_3->_padding_ + 0x6b8);
          pUVar7 = UStaticMeshComponent::GetMaterial(param_1,(int)uVar12);
          (*pcVar4)(param_3,uVar12,pUVar7);
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
          iVar6 = (**(code **)(param_1->_padding_ + 0x810))(param_1);
        } while ((int)uVar11 < iVar6);
      }
    }
  }
  return;
}

// CreateGridMeshSplit @ 14d26b510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UKismetProceduralMeshLibrary::CreateGridMeshSplit
          (int param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6,float param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  int local_res8;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  int local_188;
  float local_184;
  float local_180;
  double local_178;
  double dStack_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  double local_f0;
  double local_e8;
  
  pTVar19 = param_5;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  param_6->ArrayNum = 0;
  if (param_6->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_6->AllocatorInstance,0,&param_6->ArrayMax);
  }
  uVar18 = _UNK_150689688;
  uVar17 = ___xmm_3ff00000000000003ff0000000000000;
  uVar16 = _UNK_150689518;
  uVar15 = ___xmm_00000000000000003ff0000000000000;
  uVar14 = _UNK_15061cbc8;
  uVar13 = ___xmm_3ff00000000000000000000000000000;
  dVar12 = __real_3fe0000000000000;
  if ((1 < param_1) && (1 < param_2)) {
    param_5._0_4_ = 0;
    fVar26 = (float)param_1;
    fVar27 = (float)param_2;
    local_f0 = (double)(fVar26 * param_7) * __real_3fe0000000000000;
    dVar25 = (double)(fVar27 * param_7) * __real_3fe0000000000000;
    if (0 < param_2 + -1) {
      iVar1 = param_1 + -1;
      dVar28 = __real_3ff0000000000000;
      fVar29 = __real_40a00000;
      local_184 = fVar26;
      local_180 = fVar27;
      local_e8 = dVar25;
      do {
        local_res8 = 0;
        if (0 < iVar1) {
          local_188 = iVar1 * (int)param_5;
          dVar7 = (double)param_7;
          dVar9 = dVar28 / (double)fVar26;
          dVar10 = (double)((float)(int)param_5 * param_7) - dVar25;
          dVar8 = ((double)(int)param_5 + dVar12) / (double)fVar27;
          do {
            piVar23 = &param_3->ArrayMax;
            iVar3 = local_188 + local_res8;
            pFVar4 = (param_3->AllocatorInstance).Data;
            iVar24 = iVar3 * 4;
            iVar22 = iVar24 + 3;
            local_1c8 = iVar22;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1c8) &&
                ((FScriptContainerElement *)&local_1c8 < pFVar4 + (longlong)*piVar23 * 4)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar21 = param_3->ArrayNum;
            if (iVar21 == *piVar23) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar23);
            }
            iVar2 = iVar24 + 1;
            param_3->ArrayNum = iVar21 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_1c8;
            pFVar4 = (param_3->AllocatorInstance).Data;
            local_1c4 = iVar2;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1c4) &&
                ((FScriptContainerElement *)&local_1c4 < pFVar4 + (longlong)param_3->ArrayMax * 4))
               && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar21 = param_3->ArrayNum;
            if (iVar21 == param_3->ArrayMax) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar21 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_1c4;
            pFVar4 = (param_3->AllocatorInstance).Data;
            local_1c0 = iVar24;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1c0) &&
                ((FScriptContainerElement *)&local_1c0 < pFVar4 + (longlong)param_3->ArrayMax * 4))
               && (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar21 = param_3->ArrayNum;
            if (iVar21 == param_3->ArrayMax) {
              iVar21 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,&param_3->ArrayMax);
            }
            param_3->ArrayNum = iVar21 + 1;
            piVar23 = &param_3->ArrayMax;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_1c0;
            pFVar4 = (param_3->AllocatorInstance).Data;
            local_1bc = iVar22;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1bc) &&
                ((FScriptContainerElement *)&local_1bc < pFVar4 + (longlong)*piVar23 * 4)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_3->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar23);
            }
            param_3->ArrayNum = iVar22 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_1bc;
            local_1b8 = iVar24 + 2;
            pFVar4 = (param_3->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1b8) &&
                ((FScriptContainerElement *)&local_1b8 < pFVar4 + (longlong)*piVar23 * 4)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_3->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar23);
            }
            param_3->ArrayNum = iVar22 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_1b8;
            pFVar4 = (param_3->AllocatorInstance).Data;
            local_1b4 = iVar2;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1b4) &&
                ((FScriptContainerElement *)&local_1b4 < pFVar4 + (longlong)*piVar23 * 4)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_3->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar23);
            }
            param_3->ArrayNum = iVar22 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar22 * 4) = local_1b4;
            fVar26 = FGenericPlatformMath::Fmod((float)iVar3,fVar29);
            pFVar4 = (param_4->AllocatorInstance).Data;
            piVar23 = &param_4->ArrayMax;
            local_190 = (double)(fVar26 * param_7);
            local_1a0 = (double)((float)local_res8 * param_7) - local_f0;
            dStack_198 = dVar10;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1a0) &&
                ((FScriptContainerElement *)&local_1a0 < pFVar4 + (longlong)*piVar23 * 0x18)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_4->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&param_4->AllocatorInstance,piVar23);
            }
            param_4->ArrayNum = iVar22 + 1;
            pFVar5 = (param_4->AllocatorInstance).Data;
            pFVar4 = pFVar5 + (longlong)iVar22 * 0x18;
            *(double *)pFVar4 = local_1a0;
            *(double *)(pFVar4 + 8) = dStack_198;
            *(double *)(pFVar5 + (longlong)iVar22 * 0x18 + 0x10) = local_190;
            pFVar4 = (param_4->AllocatorInstance).Data;
            local_178 = local_1a0 + dVar7;
            dStack_170 = dStack_198;
            dStack_168 = local_190;
            if (((pFVar4 <= (FScriptContainerElement *)&local_178) &&
                ((FScriptContainerElement *)&local_178 < pFVar4 + (longlong)*piVar23 * 0x18)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_4->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&param_4->AllocatorInstance,piVar23);
            }
            param_4->ArrayNum = iVar22 + 1;
            pFVar5 = (param_4->AllocatorInstance).Data;
            pFVar4 = pFVar5 + (longlong)iVar22 * 0x18;
            *(double *)pFVar4 = local_178;
            *(double *)(pFVar4 + 8) = dStack_170;
            *(double *)(pFVar5 + (longlong)iVar22 * 0x18 + 0x10) = dStack_168;
            pFVar4 = (param_4->AllocatorInstance).Data;
            local_160 = local_1a0 + dVar7;
            dStack_158 = dStack_198 + dVar7;
            local_150 = local_190;
            if (((pFVar4 <= (FScriptContainerElement *)&local_160) &&
                ((FScriptContainerElement *)&local_160 < pFVar4 + (longlong)*piVar23 * 0x18)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_4->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&param_4->AllocatorInstance,piVar23);
            }
            param_4->ArrayNum = iVar22 + 1;
            pFVar5 = (param_4->AllocatorInstance).Data;
            pFVar4 = pFVar5 + (longlong)iVar22 * 0x18;
            *(double *)pFVar4 = local_160;
            *(double *)(pFVar4 + 8) = dStack_158;
            *(double *)(pFVar5 + (longlong)iVar22 * 0x18 + 0x10) = local_150;
            pFVar4 = (param_4->AllocatorInstance).Data;
            dStack_140 = dStack_198 + dVar7;
            local_148 = local_1a0;
            local_138 = local_190;
            if (((pFVar4 <= (FScriptContainerElement *)&local_148) &&
                ((FScriptContainerElement *)&local_148 < pFVar4 + (longlong)*piVar23 * 0x18)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_4->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&param_4->AllocatorInstance,piVar23);
            }
            param_4->ArrayNum = iVar22 + 1;
            piVar23 = &pTVar19->ArrayMax;
            pFVar5 = (param_4->AllocatorInstance).Data;
            pFVar4 = pFVar5 + (longlong)iVar22 * 0x18;
            *(double *)pFVar4 = local_148;
            *(double *)(pFVar4 + 8) = dStack_140;
            *(double *)(pFVar5 + (longlong)iVar22 * 0x18 + 0x10) = local_138;
            pFVar4 = (pTVar19->AllocatorInstance).Data;
            local_130 = 0;
            uStack_128 = 0;
            if (((pFVar4 <= (FScriptContainerElement *)&local_130) &&
                ((FScriptContainerElement *)&local_130 < pFVar4 + (longlong)*piVar23 * 0x10)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = pTVar19->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar19->AllocatorInstance,piVar23);
            }
            pTVar19->ArrayNum = iVar22 + 1;
            local_120 = uVar15;
            uStack_118 = uVar16;
            pFVar4 = (pTVar19->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
            *(undefined8 *)pFVar4 = local_130;
            *(undefined8 *)(pFVar4 + 8) = uStack_128;
            pFVar4 = (pTVar19->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_120) &&
                ((FScriptContainerElement *)&local_120 < pFVar4 + (longlong)*piVar23 * 0x10)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = pTVar19->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar19->AllocatorInstance,piVar23);
            }
            pTVar19->ArrayNum = iVar22 + 1;
            local_110 = uVar17;
            uStack_108 = uVar18;
            pFVar4 = (pTVar19->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
            *(undefined8 *)pFVar4 = local_120;
            *(undefined8 *)(pFVar4 + 8) = uStack_118;
            pFVar4 = (pTVar19->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_110) &&
                ((FScriptContainerElement *)&local_110 < pFVar4 + (longlong)*piVar23 * 0x10)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = pTVar19->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar19->AllocatorInstance,piVar23);
            }
            pTVar19->ArrayNum = iVar22 + 1;
            local_100 = uVar13;
            uStack_f8 = uVar14;
            pFVar4 = (pTVar19->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
            *(undefined8 *)pFVar4 = local_110;
            *(undefined8 *)(pFVar4 + 8) = uStack_108;
            pFVar4 = (pTVar19->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_100) &&
                ((FScriptContainerElement *)&local_100 < pFVar4 + (longlong)*piVar23 * 0x10)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = pTVar19->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar19->AllocatorInstance,piVar23);
            }
            pTVar19->ArrayNum = iVar22 + 1;
            piVar23 = &param_6->ArrayMax;
            pFVar4 = (pTVar19->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
            *(undefined8 *)pFVar4 = local_100;
            *(undefined8 *)(pFVar4 + 8) = uStack_f8;
            pFVar4 = (param_6->AllocatorInstance).Data;
            local_1b0 = ((double)local_res8 + dVar12) * dVar9;
            dStack_1a8 = dVar8;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1b0) &&
                ((FScriptContainerElement *)&local_1b0 < pFVar4 + (longlong)*piVar23 * 0x10)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_6->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_6->AllocatorInstance,piVar23);
            }
            param_6->ArrayNum = iVar22 + 1;
            pFVar4 = (param_6->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
            *(double *)pFVar4 = local_1b0;
            *(double *)(pFVar4 + 8) = dStack_1a8;
            pFVar4 = (param_6->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1b0) &&
                ((FScriptContainerElement *)&local_1b0 < pFVar4 + (longlong)*piVar23 * 0x10)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_6->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_6->AllocatorInstance,piVar23);
            }
            param_6->ArrayNum = iVar22 + 1;
            pFVar4 = (param_6->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
            *(double *)pFVar4 = local_1b0;
            *(double *)(pFVar4 + 8) = dStack_1a8;
            pFVar4 = (param_6->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1b0) &&
                ((FScriptContainerElement *)&local_1b0 < pFVar4 + (longlong)*piVar23 * 0x10)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_6->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_6->AllocatorInstance,piVar23);
            }
            param_6->ArrayNum = iVar22 + 1;
            pFVar4 = (param_6->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
            *(double *)pFVar4 = local_1b0;
            *(double *)(pFVar4 + 8) = dStack_1a8;
            pFVar4 = (param_6->AllocatorInstance).Data;
            if (((pFVar4 <= (FScriptContainerElement *)&local_1b0) &&
                ((FScriptContainerElement *)&local_1b0 < pFVar4 + (longlong)*piVar23 * 0x10)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar22 = param_6->ArrayNum;
            if (iVar22 == *piVar23) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_6->AllocatorInstance,piVar23);
            }
            fVar29 = __real_40a00000;
            auVar11._8_8_ = dStack_1a8;
            auVar11._0_8_ = local_1b0;
            local_res8 = local_res8 + 1;
            param_6->ArrayNum = iVar22 + 1;
            *(undefined1 (*) [16])((param_6->AllocatorInstance).Data + (longlong)iVar22 * 0x10) =
                 auVar11;
            dVar25 = local_e8;
            dVar28 = __real_3ff0000000000000;
            fVar26 = local_184;
            fVar27 = local_180;
          } while (local_res8 < iVar1);
        }
        param_5._0_4_ = (int)param_5 + 1;
      } while ((int)param_5 < param_2 + -1);
    }
  }
  return;
}

// CreateGridMeshTriangles @ 14d26c4d0

void __cdecl
UKismetProceduralMeshLibrary::CreateGridMeshTriangles
          (int param_1,int param_2,bool param_3,TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  if (((1 < param_1) && (1 < param_2)) && (0 < (int)(param_1 - 1U))) {
    iVar3 = 1;
    iVar5 = param_2 + -1;
    uVar4 = (ulonglong)(param_1 - 1U);
    do {
      lVar2 = (longlong)param_2 + -1;
      if (0 < iVar5) {
        iVar1 = iVar3;
        if (param_3) {
          do {
            ConvertQuadToTriangles(param_4,iVar1 + -1,iVar1 + iVar5,iVar1 + param_2,iVar1);
            iVar1 = iVar1 + 1;
            lVar2 = lVar2 + -1;
          } while (lVar2 != 0);
        }
        else {
          do {
            ConvertQuadToTriangles(param_4,iVar1 + -1,iVar1,iVar1 + param_2,iVar1 + iVar5);
            lVar2 = lVar2 + -1;
            iVar1 = iVar1 + 1;
          } while (lVar2 != 0);
        }
      }
      iVar3 = iVar3 + param_2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// CreateGridMeshWelded @ 14d26c600

void __cdecl
UKismetProceduralMeshLibrary::CreateGridMeshWelded
          (int param_1,int param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,float param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  undefined8 local_e0;
  
  pTVar14 = param_5;
  piVar3 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar3);
  }
  piVar4 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (*piVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_4->AllocatorInstance,0,piVar4);
  }
  piVar5 = &param_5->ArrayMax;
  param_5->ArrayNum = 0;
  if (*piVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_5->AllocatorInstance,0,piVar5);
  }
  fVar13 = __real_3f800000;
  if ((1 < param_1) && (1 < param_2)) {
    uVar1 = param_2 - 1;
    iVar2 = param_1 + -1;
    dVar10 = (double)((float)iVar2 * param_6) * __real_3fe0000000000000;
    param_5._0_4_ = 0;
    dVar12 = (double)((float)(int)uVar1 * param_6) * __real_3fe0000000000000;
    do {
      iVar19 = 0;
      dVar11 = (double)((float)(int)param_5 / ((float)param_2 - fVar13));
      dVar9 = (double)((float)(int)param_5 * param_6) - dVar12;
      do {
        pFVar6 = (param_4->AllocatorInstance).Data;
        local_e0 = 0;
        local_f0 = (double)((float)iVar19 * param_6) - dVar10;
        dStack_e8 = dVar9;
        if (((pFVar6 <= (FScriptContainerElement *)&local_f0) &&
            ((FScriptContainerElement *)&local_f0 < pFVar6 + (longlong)*piVar4 * 0x18)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = param_4->ArrayNum;
        if (iVar16 == *piVar4) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_4->AllocatorInstance,piVar4);
        }
        param_4->ArrayNum = iVar16 + 1;
        pFVar7 = (param_4->AllocatorInstance).Data;
        pFVar6 = pFVar7 + (longlong)iVar16 * 0x18;
        *(double *)pFVar6 = local_f0;
        *(double *)(pFVar6 + 8) = dStack_e8;
        *(undefined8 *)(pFVar7 + (longlong)iVar16 * 0x18 + 0x10) = local_e0;
        pFVar6 = (pTVar14->AllocatorInstance).Data;
        local_100 = (double)((fVar13 / ((float)param_1 - fVar13)) * (float)iVar19);
        dStack_f8 = dVar11;
        if (((pFVar6 <= (FScriptContainerElement *)&local_100) &&
            ((FScriptContainerElement *)&local_100 < pFVar6 + (longlong)*piVar5 * 0x10)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar16 = pTVar14->ArrayNum;
        if (iVar16 == *piVar5) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar14->AllocatorInstance,piVar5);
        }
        iVar19 = iVar19 + 1;
        pTVar14->ArrayNum = iVar16 + 1;
        pFVar6 = (pTVar14->AllocatorInstance).Data + (longlong)iVar16 * 0x10;
        *(double *)pFVar6 = local_100;
        *(double *)(pFVar6 + 8) = dStack_f8;
      } while (iVar19 < param_1);
      param_5._0_4_ = (int)param_5 + 1;
    } while ((int)param_5 < param_2);
    if (0 < (int)uVar1) {
      iVar19 = 0;
      uVar18 = (ulonglong)uVar1;
      do {
        iVar16 = 0;
        if (0 < iVar2) {
          do {
            pFVar6 = (param_3->AllocatorInstance).Data;
            local_118 = iVar19 + iVar16;
            if (((pFVar6 <= (FScriptContainerElement *)&local_118) &&
                ((FScriptContainerElement *)&local_118 < pFVar6 + (longlong)*piVar3 * 4)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar17 = param_3->ArrayNum;
            if (iVar17 == *piVar3) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar3);
            }
            param_3->ArrayNum = iVar17 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_118;
            local_114 = local_118 + param_1;
            pFVar6 = (param_3->AllocatorInstance).Data;
            if (((pFVar6 <= (FScriptContainerElement *)&local_114) &&
                ((FScriptContainerElement *)&local_114 < pFVar6 + (longlong)*piVar3 * 4)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar17 = param_3->ArrayNum;
            if (iVar17 == *piVar3) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar3);
            }
            param_3->ArrayNum = iVar17 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_114;
            pFVar6 = (param_3->AllocatorInstance).Data;
            local_110 = local_118 + 1;
            if (((pFVar6 <= (FScriptContainerElement *)&local_110) &&
                ((FScriptContainerElement *)&local_110 < pFVar6 + (longlong)*piVar3 * 4)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar17 = param_3->ArrayNum;
            if (iVar17 == *piVar3) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar3);
            }
            param_3->ArrayNum = iVar17 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_110;
            pFVar6 = (param_3->AllocatorInstance).Data;
            local_10c = local_118 + 1;
            if (((pFVar6 <= (FScriptContainerElement *)&local_10c) &&
                ((FScriptContainerElement *)&local_10c < pFVar6 + (longlong)*piVar3 * 4)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar17 = param_3->ArrayNum;
            if (iVar17 == *piVar3) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar3);
            }
            param_3->ArrayNum = iVar17 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_10c;
            local_108 = local_118 + param_1;
            pFVar6 = (param_3->AllocatorInstance).Data;
            if (((pFVar6 <= (FScriptContainerElement *)&local_108) &&
                ((FScriptContainerElement *)&local_108 < pFVar6 + (longlong)*piVar3 * 4)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar17 = param_3->ArrayNum;
            if (iVar17 == *piVar3) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar3);
            }
            param_3->ArrayNum = iVar17 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_108;
            local_104 = local_118 + 1 + param_1;
            pFVar6 = (param_3->AllocatorInstance).Data;
            if (((pFVar6 <= (FScriptContainerElement *)&local_104) &&
                ((FScriptContainerElement *)&local_104 < pFVar6 + (longlong)*piVar3 * 4)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar17 = param_3->ArrayNum;
            if (iVar17 == *piVar3) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&param_3->AllocatorInstance,piVar3);
            }
            iVar16 = iVar16 + 1;
            param_3->ArrayNum = iVar17 + 1;
            *(int *)((param_3->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_104;
          } while (iVar16 < iVar2);
        }
        iVar19 = iVar19 + param_1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  return;
}

// GenerateBoxMesh @ 14d26eb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UKismetProceduralMeshLibrary::GenerateBoxMesh
          (TVector<double> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint uVar22;
  uint uVar23;
  uint7 uStack_ff;
  uint7 uStack_df;
  uint7 uStack_bf;
  uint7 uStack_9f;
  uint7 uStack_7f;
  uint7 uStack_5f;
  
  dVar4 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  uVar18 = (uint)__xmm_80000000000000008000000000000000;
  uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar22 = SUB84(dVar4,0) ^ uVar18;
  uVar23 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar19;
  uVar20 = CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ uVar19,SUB84(dVar5,0) ^ uVar18);
  uVar21 = CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar19,SUB84(dVar6,0) ^ uVar18);
  uVar8 = CONCAT44(uVar23,uVar22);
  uVar11 = CONCAT44(uVar23,uVar22);
  uVar12 = CONCAT44(uVar23,uVar22);
  uVar13 = CONCAT44(uVar23,uVar22);
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  param_2->ArrayNum = 0;
  piVar1 = &param_2->ArrayNum;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,0x18,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  param_4->ArrayNum = 0;
  piVar2 = &param_4->ArrayNum;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,0x18,&param_4->AllocatorInstance,piVar2,&param_4->ArrayMax);
  param_6->ArrayNum = 0;
  piVar3 = &param_6->ArrayNum;
  if (param_6->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&param_6->AllocatorInstance,0,&param_6->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,0x18,&param_6->AllocatorInstance,piVar3,&param_6->ArrayMax);
  if (*piVar1 < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)pFVar9 = uVar8;
  *(double *)(pFVar9 + 8) = dVar5;
  *(double *)(pFVar9 + 0x10) = dVar6;
  if (*piVar1 < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0x18) = dVar4;
  *(double *)(pFVar9 + 0x20) = dVar5;
  *(double *)(pFVar9 + 0x28) = dVar6;
  if (*piVar1 < 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0x30) = dVar4;
  *(undefined8 *)(pFVar9 + 0x38) = uVar20;
  *(double *)(pFVar9 + 0x40) = dVar6;
  if (*piVar1 < 4) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x48) = uVar11;
  *(undefined8 *)(pFVar9 + 0x50) = uVar20;
  *(double *)(pFVar9 + 0x58) = dVar6;
  ConvertQuadToTriangles(param_3,0,1,2,3);
  if (*piVar2 < 4) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x48) = 0;
  *(undefined8 *)(pFVar9 + 0x50) = 0;
  *(undefined8 *)(pFVar9 + 0x58) = 0x3ff0000000000000;
  uVar14 = *(undefined8 *)(pFVar9 + 0x48);
  uVar15 = *(undefined8 *)(pFVar9 + 0x50);
  uVar7 = *(undefined8 *)(pFVar9 + 0x58);
  if (*piVar2 < 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x30) = uVar14;
  *(undefined8 *)(pFVar9 + 0x38) = uVar15;
  *(undefined8 *)(pFVar9 + 0x40) = uVar7;
  if (*piVar2 < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x18) = uVar14;
  *(undefined8 *)(pFVar9 + 0x20) = uVar15;
  *(undefined8 *)(pFVar9 + 0x28) = uVar7;
  if (*piVar2 < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)pFVar9 = uVar14;
  *(undefined8 *)(pFVar9 + 8) = uVar15;
  uVar15 = _UNK_1508ffb28;
  uVar14 = ___xmm_bff00000000000000000000000000000;
  *(undefined8 *)(pFVar9 + 0x10) = uVar7;
  if (*piVar3 < 4) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  lVar16 = (ulonglong)uStack_ff << 8;
  *(undefined8 *)(pFVar9 + 0x60) = uVar14;
  *(undefined8 *)(pFVar9 + 0x68) = uVar15;
  *(undefined8 *)(pFVar9 + 0x70) = 0;
  *(longlong *)(pFVar9 + 0x78) = lVar16;
  if (*piVar3 < 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x40) = uVar14;
  *(undefined8 *)(pFVar9 + 0x48) = uVar15;
  *(undefined8 *)(pFVar9 + 0x50) = 0;
  *(longlong *)(pFVar9 + 0x58) = lVar16;
  if (*piVar3 < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x20) = uVar14;
  *(undefined8 *)(pFVar9 + 0x28) = uVar15;
  *(undefined8 *)(pFVar9 + 0x30) = 0;
  *(longlong *)(pFVar9 + 0x38) = lVar16;
  if (*piVar3 < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)pFVar9 = uVar14;
  *(undefined8 *)(pFVar9 + 8) = uVar15;
  *(undefined8 *)(pFVar9 + 0x10) = 0;
  *(longlong *)(pFVar9 + 0x18) = lVar16;
  if (*piVar1 < 5) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x60) = uVar12;
  *(double *)(pFVar9 + 0x68) = dVar5;
  *(undefined8 *)(pFVar9 + 0x70) = uVar21;
  if (*piVar1 < 6) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x78) = uVar8;
  *(double *)(pFVar9 + 0x80) = dVar5;
  *(double *)(pFVar9 + 0x88) = dVar6;
  if (*piVar1 < 7) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x90) = uVar11;
  *(undefined8 *)(pFVar9 + 0x98) = uVar20;
  *(double *)(pFVar9 + 0xa0) = dVar6;
  if (*piVar1 < 8) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xa8) = uVar13;
  *(undefined8 *)(pFVar9 + 0xb0) = uVar20;
  *(undefined8 *)(pFVar9 + 0xb8) = uVar21;
  ConvertQuadToTriangles(param_3,4,5,6,7);
  if (*piVar2 < 8) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xa8) = 0xbff0000000000000;
  *(undefined8 *)(pFVar9 + 0xb0) = 0;
  *(undefined8 *)(pFVar9 + 0xb8) = 0;
  uVar14 = *(undefined8 *)(pFVar9 + 0xa8);
  uVar15 = *(undefined8 *)(pFVar9 + 0xb0);
  uVar7 = *(undefined8 *)(pFVar9 + 0xb8);
  if (*piVar2 < 7) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x90) = uVar14;
  *(undefined8 *)(pFVar9 + 0x98) = uVar15;
  *(undefined8 *)(pFVar9 + 0xa0) = uVar7;
  if (*piVar2 < 6) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x78) = uVar14;
  *(undefined8 *)(pFVar9 + 0x80) = uVar15;
  *(undefined8 *)(pFVar9 + 0x88) = uVar7;
  if (*piVar2 < 5) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x60) = uVar14;
  *(undefined8 *)(pFVar9 + 0x68) = uVar15;
  uVar15 = _UNK_1508ffb28;
  uVar14 = ___xmm_bff00000000000000000000000000000;
  *(undefined8 *)(pFVar9 + 0x70) = uVar7;
  if (*piVar3 < 8) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  lVar16 = (ulonglong)uStack_df << 8;
  *(undefined8 *)(pFVar9 + 0xe0) = uVar14;
  *(undefined8 *)(pFVar9 + 0xe8) = uVar15;
  *(undefined8 *)(pFVar9 + 0xf0) = 0;
  *(longlong *)(pFVar9 + 0xf8) = lVar16;
  if (*piVar3 < 7) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xc0) = uVar14;
  *(undefined8 *)(pFVar9 + 200) = uVar15;
  *(undefined8 *)(pFVar9 + 0xd0) = 0;
  *(longlong *)(pFVar9 + 0xd8) = lVar16;
  if (*piVar3 < 6) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xa0) = uVar14;
  *(undefined8 *)(pFVar9 + 0xa8) = uVar15;
  *(undefined8 *)(pFVar9 + 0xb0) = 0;
  *(longlong *)(pFVar9 + 0xb8) = lVar16;
  if (*piVar3 < 5) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x80) = uVar14;
  *(undefined8 *)(pFVar9 + 0x88) = uVar15;
  *(undefined8 *)(pFVar9 + 0x90) = 0;
  *(longlong *)(pFVar9 + 0x98) = lVar16;
  if (*piVar1 < 9) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0xc0) = dVar4;
  *(double *)(pFVar9 + 200) = dVar5;
  *(undefined8 *)(pFVar9 + 0xd0) = uVar21;
  if (*piVar1 < 10) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0xd8) = dVar4;
  *(double *)(pFVar9 + 0xe0) = dVar5;
  *(double *)(pFVar9 + 0xe8) = dVar6;
  if (*piVar1 < 0xb) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xf0) = uVar8;
  *(double *)(pFVar9 + 0xf8) = dVar5;
  *(double *)(pFVar9 + 0x100) = dVar6;
  if (*piVar1 < 0xc) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x108) = uVar12;
  *(double *)(pFVar9 + 0x110) = dVar5;
  *(undefined8 *)(pFVar9 + 0x118) = uVar21;
  ConvertQuadToTriangles(param_3,8,9,10,0xb);
  if (*piVar2 < 0xc) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x108) = 0;
  *(undefined8 *)(pFVar9 + 0x110) = 0x3ff0000000000000;
  *(undefined8 *)(pFVar9 + 0x118) = 0;
  uVar7 = *(undefined8 *)(pFVar9 + 0x108);
  uVar14 = *(undefined8 *)(pFVar9 + 0x110);
  uVar8 = *(undefined8 *)(pFVar9 + 0x118);
  if (*piVar2 < 0xb) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xf0) = uVar7;
  *(undefined8 *)(pFVar9 + 0xf8) = uVar14;
  *(undefined8 *)(pFVar9 + 0x100) = uVar8;
  if (*piVar2 < 10) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xd8) = uVar7;
  *(undefined8 *)(pFVar9 + 0xe0) = uVar14;
  *(undefined8 *)(pFVar9 + 0xe8) = uVar8;
  if (*piVar2 < 9) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xc0) = uVar7;
  *(undefined8 *)(pFVar9 + 200) = uVar14;
  uVar14 = _UNK_15076ad98;
  uVar7 = ___xmm_0000000000000000bff0000000000000;
  *(undefined8 *)(pFVar9 + 0xd0) = uVar8;
  if (*piVar3 < 0xc) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  lVar16 = (ulonglong)uStack_bf << 8;
  *(undefined8 *)(pFVar9 + 0x160) = uVar7;
  *(undefined8 *)(pFVar9 + 0x168) = uVar14;
  *(undefined8 *)(pFVar9 + 0x170) = 0;
  *(longlong *)(pFVar9 + 0x178) = lVar16;
  if (*piVar3 < 0xb) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x140) = uVar7;
  *(undefined8 *)(pFVar9 + 0x148) = uVar14;
  *(undefined8 *)(pFVar9 + 0x150) = 0;
  *(longlong *)(pFVar9 + 0x158) = lVar16;
  if (*piVar3 < 10) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x120) = uVar7;
  *(undefined8 *)(pFVar9 + 0x128) = uVar14;
  *(undefined8 *)(pFVar9 + 0x130) = 0;
  *(longlong *)(pFVar9 + 0x138) = lVar16;
  if (*piVar3 < 9) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x100) = uVar7;
  *(undefined8 *)(pFVar9 + 0x108) = uVar14;
  *(undefined8 *)(pFVar9 + 0x110) = 0;
  *(longlong *)(pFVar9 + 0x118) = lVar16;
  if (*piVar1 < 0xd) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0x120) = dVar4;
  *(undefined8 *)(pFVar9 + 0x128) = uVar20;
  *(undefined8 *)(pFVar9 + 0x130) = uVar21;
  if (*piVar1 < 0xe) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0x138) = dVar4;
  *(undefined8 *)(pFVar9 + 0x140) = uVar20;
  *(double *)(pFVar9 + 0x148) = dVar6;
  if (*piVar1 < 0xf) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0x150) = dVar4;
  *(double *)(pFVar9 + 0x158) = dVar5;
  *(double *)(pFVar9 + 0x160) = dVar6;
  if (*piVar1 < 0x10) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0x168) = dVar4;
  *(double *)(pFVar9 + 0x170) = dVar5;
  *(undefined8 *)(pFVar9 + 0x178) = uVar21;
  ConvertQuadToTriangles(param_3,0xc,0xd,0xe,0xf);
  if (*piVar2 < 0x10) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x168) = 0x3ff0000000000000;
  *(undefined8 *)(pFVar9 + 0x170) = 0;
  *(undefined8 *)(pFVar9 + 0x178) = 0;
  uVar7 = *(undefined8 *)(pFVar9 + 0x168);
  uVar14 = *(undefined8 *)(pFVar9 + 0x170);
  uVar8 = *(undefined8 *)(pFVar9 + 0x178);
  if (*piVar2 < 0xf) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x150) = uVar7;
  *(undefined8 *)(pFVar9 + 0x158) = uVar14;
  *(undefined8 *)(pFVar9 + 0x160) = uVar8;
  if (*piVar2 < 0xe) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x138) = uVar7;
  *(undefined8 *)(pFVar9 + 0x140) = uVar14;
  *(undefined8 *)(pFVar9 + 0x148) = uVar8;
  if (*piVar2 < 0xd) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x120) = uVar7;
  *(undefined8 *)(pFVar9 + 0x128) = uVar14;
  uVar14 = _UNK_15061cbc8;
  uVar7 = ___xmm_3ff00000000000000000000000000000;
  *(undefined8 *)(pFVar9 + 0x130) = uVar8;
  if (*piVar3 < 0x10) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  lVar16 = (ulonglong)uStack_9f << 8;
  *(undefined8 *)(pFVar9 + 0x1e0) = uVar7;
  *(undefined8 *)(pFVar9 + 0x1e8) = uVar14;
  *(undefined8 *)(pFVar9 + 0x1f0) = 0;
  *(longlong *)(pFVar9 + 0x1f8) = lVar16;
  if (*piVar3 < 0xf) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x1c0) = uVar7;
  *(undefined8 *)(pFVar9 + 0x1c8) = uVar14;
  *(undefined8 *)(pFVar9 + 0x1d0) = 0;
  *(longlong *)(pFVar9 + 0x1d8) = lVar16;
  if (*piVar3 < 0xe) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x1a0) = uVar7;
  *(undefined8 *)(pFVar9 + 0x1a8) = uVar14;
  *(undefined8 *)(pFVar9 + 0x1b0) = 0;
  *(longlong *)(pFVar9 + 0x1b8) = lVar16;
  if (*piVar3 < 0xd) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x180) = uVar7;
  *(undefined8 *)(pFVar9 + 0x188) = uVar14;
  *(undefined8 *)(pFVar9 + 400) = 0;
  *(longlong *)(pFVar9 + 0x198) = lVar16;
  if (*piVar1 < 0x11) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x180) = uVar13;
  *(undefined8 *)(pFVar9 + 0x188) = uVar20;
  *(undefined8 *)(pFVar9 + 400) = uVar21;
  if (*piVar1 < 0x12) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x198) = uVar11;
  *(undefined8 *)(pFVar9 + 0x1a0) = uVar20;
  *(double *)(pFVar9 + 0x1a8) = dVar6;
  if (*piVar1 < 0x13) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0x1b0) = dVar4;
  *(undefined8 *)(pFVar9 + 0x1b8) = uVar20;
  *(double *)(pFVar9 + 0x1c0) = dVar6;
  if (*piVar1 < 0x14) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0x1c8) = dVar4;
  *(undefined8 *)(pFVar9 + 0x1d0) = uVar20;
  *(undefined8 *)(pFVar9 + 0x1d8) = uVar21;
  ConvertQuadToTriangles(param_3,0x10,0x11,0x12,0x13);
  if (*piVar2 < 0x14) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x1c8) = 0;
  *(undefined8 *)(pFVar9 + 0x1d0) = 0xbff0000000000000;
  *(undefined8 *)(pFVar9 + 0x1d8) = 0;
  uVar11 = *(undefined8 *)(pFVar9 + 0x1c8);
  uVar7 = *(undefined8 *)(pFVar9 + 0x1d0);
  uVar8 = *(undefined8 *)(pFVar9 + 0x1d8);
  if (*piVar2 < 0x13) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x1b0) = uVar11;
  *(undefined8 *)(pFVar9 + 0x1b8) = uVar7;
  *(undefined8 *)(pFVar9 + 0x1c0) = uVar8;
  if (*piVar2 < 0x12) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x198) = uVar11;
  *(undefined8 *)(pFVar9 + 0x1a0) = uVar7;
  *(undefined8 *)(pFVar9 + 0x1a8) = uVar8;
  if (*piVar2 < 0x11) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x180) = uVar11;
  *(undefined8 *)(pFVar9 + 0x188) = uVar7;
  uVar7 = _UNK_150689518;
  uVar11 = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)(pFVar9 + 400) = uVar8;
  if (*piVar3 < 0x14) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  lVar16 = (ulonglong)uStack_7f << 8;
  *(undefined8 *)(pFVar9 + 0x260) = uVar11;
  *(undefined8 *)(pFVar9 + 0x268) = uVar7;
  *(undefined8 *)(pFVar9 + 0x270) = 0;
  *(longlong *)(pFVar9 + 0x278) = lVar16;
  if (*piVar3 < 0x13) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x240) = uVar11;
  *(undefined8 *)(pFVar9 + 0x248) = uVar7;
  *(undefined8 *)(pFVar9 + 0x250) = 0;
  *(longlong *)(pFVar9 + 600) = lVar16;
  if (*piVar3 < 0x12) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x220) = uVar11;
  *(undefined8 *)(pFVar9 + 0x228) = uVar7;
  *(undefined8 *)(pFVar9 + 0x230) = 0;
  *(longlong *)(pFVar9 + 0x238) = lVar16;
  if (*piVar3 < 0x11) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x200) = uVar11;
  *(undefined8 *)(pFVar9 + 0x208) = uVar7;
  *(undefined8 *)(pFVar9 + 0x210) = 0;
  *(longlong *)(pFVar9 + 0x218) = lVar16;
  if (*piVar1 < 0x15) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x1e0) = uVar13;
  *(undefined8 *)(pFVar9 + 0x1e8) = uVar20;
  *(undefined8 *)(pFVar9 + 0x1f0) = uVar21;
  if (*piVar1 < 0x16) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0x1f8) = dVar4;
  *(undefined8 *)(pFVar9 + 0x200) = uVar20;
  *(undefined8 *)(pFVar9 + 0x208) = uVar21;
  if (*piVar1 < 0x17) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(double *)(pFVar9 + 0x210) = dVar4;
  *(double *)(pFVar9 + 0x218) = dVar5;
  *(undefined8 *)(pFVar9 + 0x220) = uVar21;
  if (*piVar1 < 0x18) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x228) = uVar12;
  *(double *)(pFVar9 + 0x230) = dVar5;
  *(undefined8 *)(pFVar9 + 0x238) = uVar21;
  ConvertQuadToTriangles(param_3,0x14,0x15,0x16,0x17);
  if (*piVar2 < 0x18) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x228) = 0;
  *(undefined8 *)(pFVar9 + 0x230) = 0;
  *(undefined8 *)(pFVar9 + 0x238) = 0xbff0000000000000;
  uVar11 = *(undefined8 *)(pFVar9 + 0x228);
  uVar12 = *(undefined8 *)(pFVar9 + 0x230);
  uVar8 = *(undefined8 *)(pFVar9 + 0x238);
  if (*piVar2 < 0x17) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x210) = uVar11;
  *(undefined8 *)(pFVar9 + 0x218) = uVar12;
  *(undefined8 *)(pFVar9 + 0x220) = uVar8;
  if (*piVar2 < 0x16) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x1f8) = uVar11;
  *(undefined8 *)(pFVar9 + 0x200) = uVar12;
  *(undefined8 *)(pFVar9 + 0x208) = uVar8;
  if (*piVar2 < 0x15) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_4->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x1e0) = uVar11;
  *(undefined8 *)(pFVar9 + 0x1e8) = uVar12;
  uVar12 = _UNK_15061cbc8;
  uVar11 = ___xmm_3ff00000000000000000000000000000;
  *(undefined8 *)(pFVar9 + 0x1f0) = uVar8;
  if (*piVar3 < 0x18) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  lVar16 = (ulonglong)uStack_5f << 8;
  *(undefined8 *)(pFVar9 + 0x2e0) = uVar11;
  *(undefined8 *)(pFVar9 + 0x2e8) = uVar12;
  *(undefined8 *)(pFVar9 + 0x2f0) = 0;
  *(longlong *)(pFVar9 + 0x2f8) = lVar16;
  if (*piVar3 < 0x17) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x2c0) = uVar11;
  *(undefined8 *)(pFVar9 + 0x2c8) = uVar12;
  *(undefined8 *)(pFVar9 + 0x2d0) = 0;
  *(longlong *)(pFVar9 + 0x2d8) = lVar16;
  if (*piVar3 < 0x16) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x2a0) = uVar11;
  *(undefined8 *)(pFVar9 + 0x2a8) = uVar12;
  *(undefined8 *)(pFVar9 + 0x2b0) = 0;
  *(longlong *)(pFVar9 + 0x2b8) = lVar16;
  if (*piVar3 < 0x15) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_6->AllocatorInstance).Data;
  piVar1 = &param_5->ArrayMax;
  piVar2 = &param_5->ArrayNum;
  *(undefined8 *)(pFVar9 + 0x280) = uVar11;
  *(undefined8 *)(pFVar9 + 0x288) = uVar12;
  *(undefined8 *)(pFVar9 + 0x290) = 0;
  *(longlong *)(pFVar9 + 0x298) = lVar16;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_5->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0x18,&param_5->AllocatorInstance,piVar2,piVar1);
  if (*piVar2 < 0x15) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x140) = 0;
  *(undefined8 *)(pFVar9 + 0x148) = 0;
  uVar8 = *(undefined8 *)(pFVar9 + 0x140);
  uVar11 = *(undefined8 *)(pFVar9 + 0x148);
  if (*piVar2 < 0x11) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x100) = uVar8;
  *(undefined8 *)(pFVar9 + 0x108) = uVar11;
  if (*piVar2 < 0xd) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xc0) = uVar8;
  *(undefined8 *)(pFVar9 + 200) = uVar11;
  if (*piVar2 < 9) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x80) = uVar8;
  *(undefined8 *)(pFVar9 + 0x88) = uVar11;
  if (*piVar2 < 5) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x40) = uVar8;
  *(undefined8 *)(pFVar9 + 0x48) = uVar11;
  if (*piVar2 < 1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)pFVar9 = uVar8;
  *(undefined8 *)(pFVar9 + 8) = uVar11;
  if (*piVar2 < 0x16) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x150) = 0;
  *(undefined8 *)(pFVar9 + 0x158) = 0x3ff0000000000000;
  uVar8 = *(undefined8 *)(pFVar9 + 0x150);
  uVar11 = *(undefined8 *)(pFVar9 + 0x158);
  if (*piVar2 < 0x12) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x110) = uVar8;
  *(undefined8 *)(pFVar9 + 0x118) = uVar11;
  if (*piVar2 < 0xe) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xd0) = uVar8;
  *(undefined8 *)(pFVar9 + 0xd8) = uVar11;
  if (*piVar2 < 10) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x90) = uVar8;
  *(undefined8 *)(pFVar9 + 0x98) = uVar11;
  if (*piVar2 < 6) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x50) = uVar8;
  *(undefined8 *)(pFVar9 + 0x58) = uVar11;
  if (*piVar2 < 2) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x10) = uVar8;
  *(undefined8 *)(pFVar9 + 0x18) = uVar11;
  if (*piVar2 < 0x17) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x160) = 0x3ff0000000000000;
  *(undefined8 *)(pFVar9 + 0x168) = 0x3ff0000000000000;
  uVar8 = *(undefined8 *)(pFVar9 + 0x160);
  uVar11 = *(undefined8 *)(pFVar9 + 0x168);
  if (*piVar2 < 0x13) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x120) = uVar8;
  *(undefined8 *)(pFVar9 + 0x128) = uVar11;
  if (*piVar2 < 0xf) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xe0) = uVar8;
  *(undefined8 *)(pFVar9 + 0xe8) = uVar11;
  if (*piVar2 < 0xb) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xa0) = uVar8;
  *(undefined8 *)(pFVar9 + 0xa8) = uVar11;
  if (*piVar2 < 7) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x60) = uVar8;
  *(undefined8 *)(pFVar9 + 0x68) = uVar11;
  if (*piVar2 < 3) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x20) = uVar8;
  *(undefined8 *)(pFVar9 + 0x28) = uVar11;
  if (*piVar2 < 0x18) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x170) = 0x3ff0000000000000;
  *(undefined8 *)(pFVar9 + 0x178) = 0;
  uVar8 = *(undefined8 *)(pFVar9 + 0x170);
  uVar11 = *(undefined8 *)(pFVar9 + 0x178);
  if (*piVar2 < 0x14) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x130) = uVar8;
  *(undefined8 *)(pFVar9 + 0x138) = uVar11;
  if (*piVar2 < 0x10) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xf0) = uVar8;
  *(undefined8 *)(pFVar9 + 0xf8) = uVar11;
  if (*piVar2 < 0xc) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0xb0) = uVar8;
  *(undefined8 *)(pFVar9 + 0xb8) = uVar11;
  if (*piVar2 < 8) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x70) = uVar8;
  *(undefined8 *)(pFVar9 + 0x78) = uVar11;
  if (*piVar2 < 4) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = (param_5->AllocatorInstance).Data;
  *(undefined8 *)(pFVar9 + 0x30) = uVar8;
  *(undefined8 *)(pFVar9 + 0x38) = uVar11;
  return;
}

// GetPrivateStaticClass @ 14d273230

UClass * __cdecl UKismetProceduralMeshLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralMeshComponent",L"KismetProceduralMeshLibrary",
               &Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.InnerSingleton,
               StaticRegisterNativesUKismetProceduralMeshLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UKismetProceduralMeshLibrary>,
               InternalVTableHelperCtorCaller<UKismetProceduralMeshLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKismetProceduralMeshLibrary.InnerSingleton;
}

// GetSectionFromProceduralMesh @ 14d273430

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh
          (UProceduralMeshComponent *param_1,int param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong local_res8;
  
  if (((param_1 != (UProceduralMeshComponent *)0x0) && (-1 < param_2)) &&
     (param_2 < (param_1->ProcMeshSections).ArrayNum)) {
    if ((param_2 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar19 = (param_1->ProcMeshSections).AllocatorInstance.Data + (longlong)param_2 * 0x60;
    uVar3 = *(uint *)(pFVar19 + 8);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_3,uVar3,Default);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (param_5,uVar3,Default);
    iVar13 = param_6->ArrayNum;
    piVar1 = &param_6->ArrayNum;
    if (iVar13 < (int)uVar3) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar3 - iVar13,&param_6->AllocatorInstance,piVar1,&param_6->ArrayMax);
    }
    else {
      if ((int)uVar3 < 0) goto LAB_14d273b25;
      if ((int)uVar3 < iVar13) {
        uVar18 = iVar13 - uVar3;
        if (((int)(uVar3 | uVar18) < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar18 != 0) {
          pFVar14 = (param_6->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x10;
          iVar13 = (*piVar1 - uVar18) - uVar3;
          if (iVar13 != 0) {
            memmove(pFVar14,pFVar14 + (longlong)(int)uVar18 * 0x10,(longlong)iVar13 << 4);
          }
          *piVar1 = *piVar1 - uVar18;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&param_6->AllocatorInstance,*piVar1,&param_6->ArrayMax);
        }
      }
    }
    iVar13 = param_7->ArrayNum;
    piVar1 = &param_7->ArrayNum;
    if (iVar13 < (int)uVar3) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar3 - iVar13,&param_7->AllocatorInstance,piVar1,&param_7->ArrayMax);
    }
    else {
      if ((int)uVar3 < 0) {
LAB_14d273b25:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if ((int)uVar3 < iVar13) {
        uVar18 = iVar13 - uVar3;
        if (((int)(uVar3 | uVar18) < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar18 != 0) {
          pFVar14 = (param_7->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x20;
          iVar13 = (*piVar1 - uVar18) - uVar3;
          if (iVar13 != 0) {
            memmove(pFVar14,pFVar14 + (longlong)(int)uVar18 * 0x20,(longlong)iVar13 << 5);
          }
          *piVar1 = *piVar1 - uVar18;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,&param_7->AllocatorInstance,*piVar1,&param_7->ArrayMax);
        }
      }
    }
    uVar18 = 0;
    if (0 < (int)uVar3) {
      lVar16 = 0;
      local_res8 = 0;
      lVar22 = 0;
      lVar21 = 0;
      lVar20 = 0;
      do {
        uVar15 = ~uVar18 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar18 < *(int *)(pFVar19 + 8)) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar17 = (undefined4 *)(*(longlong *)pFVar19 + lVar20);
        uVar4 = *puVar17;
        uVar7 = puVar17[1];
        uVar8 = puVar17[2];
        uVar9 = puVar17[3];
        uVar12 = 0;
        if ((int)uVar18 < param_3->ArrayNum) {
          uVar12 = uVar15;
        }
        uVar2 = *(undefined8 *)(puVar17 + 4);
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_3->AllocatorInstance).Data;
        pFVar14 = pFVar5 + lVar21;
        *(undefined4 *)pFVar14 = uVar4;
        *(undefined4 *)(pFVar14 + 4) = uVar7;
        *(undefined4 *)(pFVar14 + 8) = uVar8;
        *(undefined4 *)(pFVar14 + 0xc) = uVar9;
        *(undefined8 *)(pFVar5 + lVar21 + 0x10) = uVar2;
        uVar4 = puVar17[6];
        uVar7 = puVar17[7];
        uVar8 = puVar17[8];
        uVar9 = puVar17[9];
        uVar2 = *(undefined8 *)(puVar17 + 10);
        uVar12 = 0;
        if ((int)uVar18 < param_5->ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (param_5->AllocatorInstance).Data;
        pFVar14 = pFVar5 + lVar21;
        *(undefined4 *)pFVar14 = uVar4;
        *(undefined4 *)(pFVar14 + 4) = uVar7;
        *(undefined4 *)(pFVar14 + 8) = uVar8;
        *(undefined4 *)(pFVar14 + 0xc) = uVar9;
        *(undefined8 *)(pFVar5 + lVar21 + 0x10) = uVar2;
        uVar4 = puVar17[0x16];
        uVar7 = puVar17[0x17];
        uVar8 = puVar17[0x18];
        uVar9 = puVar17[0x19];
        uVar12 = 0;
        if ((int)uVar18 < param_6->ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar14 = (param_6->AllocatorInstance).Data + local_res8;
        *(undefined4 *)pFVar14 = uVar4;
        *(undefined4 *)(pFVar14 + 4) = uVar7;
        *(undefined4 *)(pFVar14 + 8) = uVar8;
        *(undefined4 *)(pFVar14 + 0xc) = uVar9;
        uVar4 = puVar17[0xc];
        uVar7 = puVar17[0xd];
        uVar8 = puVar17[0xe];
        uVar9 = puVar17[0xf];
        uVar2 = *(undefined8 *)(puVar17 + 0x10);
        uVar10 = *(undefined8 *)(puVar17 + 0x12);
        uVar12 = 0;
        if ((int)uVar18 < *piVar1) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar18 = uVar18 + 1;
        local_res8 = local_res8 + 0x10;
        lVar16 = lVar16 + 1;
        lVar20 = lVar20 + 0x98;
        lVar21 = lVar21 + 0x18;
        pFVar5 = (param_7->AllocatorInstance).Data;
        pFVar14 = pFVar5 + lVar22;
        *(undefined4 *)pFVar14 = uVar4;
        *(undefined4 *)(pFVar14 + 4) = uVar7;
        *(undefined4 *)(pFVar14 + 8) = uVar8;
        *(undefined4 *)(pFVar14 + 0xc) = uVar9;
        pFVar5 = pFVar5 + lVar22 + 0x10;
        *(undefined8 *)pFVar5 = uVar2;
        *(undefined8 *)(pFVar5 + 8) = uVar10;
        lVar22 = lVar22 + 0x20;
      } while (lVar16 < (int)uVar3);
    }
    iVar13 = param_4->ArrayNum;
    piVar1 = &param_4->ArrayNum;
    uVar3 = *(uint *)(pFVar19 + 0x18);
    if (iVar13 < (int)uVar3) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3 - iVar13,&param_4->AllocatorInstance,piVar1,&param_4->ArrayMax);
    }
    else {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
      if ((int)uVar3 < iVar13) {
        uVar18 = iVar13 - uVar3;
        if (((int)(uVar3 | uVar18) < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar18 != 0) {
          pFVar14 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar3 * 4;
          iVar13 = (*piVar1 - uVar18) - uVar3;
          if (iVar13 != 0) {
            memmove(pFVar14,pFVar14 + (longlong)(int)uVar18 * 4,(longlong)iVar13 << 2);
          }
          *piVar1 = *piVar1 - uVar18;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&param_4->AllocatorInstance,*piVar1,&param_4->ArrayMax);
        }
      }
    }
    uVar18 = 0;
    if (0 < (int)uVar3) {
      lVar16 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar18 < *(int *)(pFVar19 + 0x18)) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar4 = *(undefined4 *)(*(longlong *)(pFVar19 + 0x10) + lVar16 * 4);
        uVar12 = 0;
        if ((int)uVar18 < *piVar1) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar18 = uVar18 + 1;
        *(undefined4 *)((param_4->AllocatorInstance).Data + lVar16 * 4) = uVar4;
        lVar16 = lVar16 + 1;
      } while (lVar16 < (int)uVar3);
    }
  }
  return;
}

// GetSectionFromStaticMesh @ 14d273b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UKismetProceduralMeshLibrary::GetSectionFromStaticMesh
          (UStaticMesh *param_1,int param_2,int param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FTokenizedMessage *pFVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FMessageLog *this;
  FText *pFVar10;
  TSharedRef<FTokenizedMessage,1> *pTVar11;
  TSharedRef<FTextToken,1> *pTVar12;
  TSharedRef<FUObjectToken,1> *pTVar13;
  FStaticMeshRenderData *pFVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStackY_238 [32];
  int local_1e8 [2];
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *local_1e0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_1d8;
  FName local_1d0;
  TSharedRef<IMessageToken,1> local_1c8;
  TSharedRef<IMessageToken,1> local_1b8;
  TSharedRef<IMessageToken,1> local_1a8;
  FIndexArrayView local_198;
  TSharedRef<FTokenizedMessage,1> local_188;
  TSharedRef<FTextToken,1> local_178;
  FText local_168;
  TSharedRef<FTokenizedMessage,1> local_158;
  TSharedRef<FUObjectToken,1> local_148;
  FText local_138;
  TSharedRef<FTokenizedMessage,1> local_128;
  TSharedRef<FTextToken,1> local_118;
  FText local_108;
  TSharedRef<FTokenizedMessage,1> local_f8;
  FText local_e8;
  FMessageLog local_d8;
  undefined1 local_a8 [64];
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1d8 = param_6;
  local_1e0 = param_8;
  if (param_1 != (UStaticMesh *)0x0) {
    if (param_1->bAllowCPUAccess == '\0') {
      ::FName::FName(&local_1d0,"PIE");
      this = FMessageLog::FMessageLog(&local_d8,&local_1d0);
      pFVar10 = FText::FText(&local_e8);
      pTVar11 = FMessageLog::Warning(this,&local_f8,pFVar10);
      pFVar4 = pTVar11->Object;
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_108,L"KismetProcMeshLibrary",L"GetSectionFromStaticMeshStart",
                           L"Calling GetSectionFromStaticMesh on");
      pTVar12 = FTextToken::Create(&local_118,pFVar10,true);
      local_1a8.Object = (IMessageToken *)pTVar12->Object;
      local_1a8.SharedReferenceCount.ReferenceController =
           (pTVar12->SharedReferenceCount).ReferenceController;
      if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar11 = FTokenizedMessage::AddToken(pFVar4,&local_128,&local_1a8);
      pFVar4 = pTVar11->Object;
      pFVar10 = FText::FText(&local_138);
      pTVar13 = FUObjectToken::Create(&local_148,(UObject *)param_1,pFVar10);
      local_1b8.Object = (IMessageToken *)pTVar13->Object;
      local_1b8.SharedReferenceCount.ReferenceController =
           (pTVar13->SharedReferenceCount).ReferenceController;
      if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar11 = FTokenizedMessage::AddToken(pFVar4,&local_158,&local_1b8);
      pFVar4 = pTVar11->Object;
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_168,L"KismetProcMeshLibrary",L"GetSectionFromStaticMeshEnd",
                           L"but \'Allow CPU Access\' is not enabled. This is required for converting StaticMesh to ProceduralMeshComponent in cooked builds."
                          );
      pTVar12 = FTextToken::Create(&local_178,pFVar10,true);
      local_1c8.Object = (IMessageToken *)pTVar12->Object;
      local_1c8.SharedReferenceCount.ReferenceController =
           (pTVar12->SharedReferenceCount).ReferenceController;
      if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FTokenizedMessage::AddToken(pFVar4,&local_188,&local_1c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      if (local_168.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.SharedReferenceCount.ReferenceController);
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog(&local_d8);
    }
    pFVar14 = UStaticMesh::GetRenderData(param_1);
    if (((pFVar14 != (FStaticMeshRenderData *)0x0) &&
        (pFVar14 = UStaticMesh::GetRenderData(param_1), -1 < param_2)) &&
       (param_2 < (pFVar14->LODResources).Array.ArrayNum)) {
      pFVar14 = UStaticMesh::GetRenderData(param_1);
      uVar16 = 0;
      if (param_2 < (pFVar14->LODResources).Array.ArrayNum) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar5 = *(longlong *)
               ((pFVar14->LODResources).Array.AllocatorInstance.Data + (longlong)param_2 * 8);
      if ((-1 < param_3) && (param_3 < *(int *)(lVar5 + 0x38))) {
        param_4->ArrayNum = 0;
        if (param_4->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
        }
        piVar1 = &param_5->ArrayMax;
        param_5->ArrayNum = 0;
        if (param_5->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&param_5->AllocatorInstance,0,piVar1);
        }
        local_1d8->ArrayNum = 0;
        if (local_1d8->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&local_1d8->AllocatorInstance,0,&local_1d8->ArrayMax);
        }
        param_7->ArrayNum = 0;
        if (param_7->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
        }
        local_1e0->ArrayNum = 0;
        if (local_1e0->ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,&local_1e0->AllocatorInstance,0,&local_1e0->ArrayMax);
        }
        local_a8._0_8_ = 0;
        local_a8._8_8_ = 0;
        local_a8._32_8_ = 0;
        local_a8._40_4_ = 0;
        uVar16 = 0;
        if (param_3 < *(int *)(lVar5 + 0x38)) {
          uVar16 = (uint)~param_3 >> 0x1f;
        }
        local_a8._52_4_ = 0;
        local_68 = (void *)0x0;
        local_60 = 0;
        local_a8._44_4_ = 0x80;
        local_a8._48_4_ = 0xffffffff;
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar17 = *(longlong *)(lVar5 + 0x30);
        if (*(longlong *)(lVar5 + 0x30) == 0) {
          lVar17 = lVar5 + 0x10;
        }
        lVar17 = (longlong)param_3 * 0x1c + lVar17;
        iVar2 = *(int *)(lVar17 + 8);
        iVar3 = *(int *)(lVar17 + 4);
        FRawStaticIndexBuffer::GetArrayView((FRawStaticIndexBuffer *)(lVar5 + 0x228),&local_198);
        for (uVar16 = *(uint *)(lVar17 + 4); uVar16 < (uint)(iVar2 * 3 + iVar3); uVar16 = uVar16 + 1
            ) {
          if (local_198.b32Bit == false) {
            uVar15 = (uint)*(ushort *)
                            ((longlong)local_198.UntypedIndexData + (longlong)(int)uVar16 * 2);
          }
          else {
            uVar15 = *(uint *)((longlong)local_198.UntypedIndexData + (longlong)(int)uVar16 * 4);
          }
          local_1e8[0] = GetNewIndexForOldVertIndex
                                   (uVar15,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                            *)local_a8,(FStaticMeshVertexBuffers *)(lVar5 + 0xd0),
                                    param_4,local_1d8,param_7,local_1e0);
          pFVar6 = (param_5->AllocatorInstance).Data;
          if (((pFVar6 <= (FScriptContainerElement *)local_1e8) &&
              ((FScriptContainerElement *)local_1e8 < pFVar6 + (longlong)*piVar1 * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar9 = param_5->ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_5->AllocatorInstance,piVar1);
          }
          param_5->ArrayNum = iVar9 + 1;
          *(int *)((param_5->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_1e8[0];
        }
        local_60 = 0;
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_a8);
      }
    }
  }
  return;
}

// SliceProceduralMesh @ 14d276d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d277704) */
/* WARNING: Removing unreachable block (ram,0x00014d277715) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UKismetProceduralMeshLibrary::SliceProceduralMesh
          (UProceduralMeshComponent *param_1,TVector<double> *param_2,TVector<double> *param_3,
          bool param_4,UProceduralMeshComponent **param_5,EProcMeshSliceCapOption param_6,
          UMaterialInterface *param_7)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  UObject *pUVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  UProceduralMeshComponent **ppUVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  undefined4 uVar29;
  TVector<double> *pTVar30;
  uint *puVar31;
  UClass *pUVar32;
  UProceduralMeshComponent *pUVar33;
  FName FVar34;
  longlong lVar35;
  longlong lVar36;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *this;
  longlong *plVar37;
  TPairInitializer<int_const_&,int_const_&> *pTVar38;
  uint *puVar39;
  ForElementType<FSetElementId> FVar40;
  ForAnyElementType FVar41;
  uint uVar42;
  FScriptContainerElement *pFVar43;
  FKConvexElem *pFVar44;
  uint uVar45;
  FProcMeshSection *pFVar46;
  uint *puVar47;
  ulonglong uVar48;
  longlong lVar49;
  UProceduralMeshComponent **ppUVar50;
  TVector<double>_u_0 *pTVar51;
  int *piVar52;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar53;
  uint **ppuVar54;
  uint *puVar55;
  uint *puVar56;
  ulonglong uVar57;
  UProceduralMeshComponent *pUVar58;
  uint uVar59;
  ulonglong uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar72;
  undefined4 uVar77;
  double dVar73;
  double dVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined8 uVar78;
  float fVar79;
  undefined1 auVar80 [16];
  double dVar84;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auStackY_958 [32];
  ForAnyElementType local_900;
  uint local_8f8;
  uint uStack_8f4;
  ForAnyElementType local_8f0;
  undefined8 local_8e8;
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_8e0;
  TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_8d0;
  uint local_8c0;
  int local_8bc;
  int local_8b8;
  undefined4 local_8b4;
  undefined4 local_8b0;
  int local_8ac;
  int local_8a8;
  int local_8a4;
  int local_8a0;
  int local_89c;
  int local_898;
  FColor_u_0 local_894;
  int local_890;
  int local_88c;
  int local_888;
  uint local_884;
  uint local_880;
  int local_87c;
  int local_878;
  int local_874;
  uint local_870 [2];
  ForAnyElementType local_868;
  int local_860 [2];
  TArray<FUtilEdge3D,TSizedDefaultAllocator<32>_> local_858;
  UProceduralMeshComponent *local_848;
  uint local_840;
  FProcMeshSection *local_838;
  UMaterialInterface *local_830;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_828;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_818;
  undefined8 local_808;
  longlong local_800;
  UMaterialInterface *local_7f8;
  uint local_7f0 [6];
  TPlane<double> local_7d8;
  int local_7b8;
  int local_7b4;
  int *local_7b0 [3];
  TVector<double>_u_0 local_798;
  UProceduralMeshComponent **local_780;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float local_760 [4];
  longlong local_750;
  int *local_748;
  FScriptContainerElement *local_740;
  TArray<FUtilEdge2D,TSizedDefaultAllocator<32>_> local_738;
  TVector<double>_u_0 local_728;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  TVector<float>_u_0 local_688;
  undefined1 local_67c [20];
  int *local_668;
  double dStack_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  uint *local_5c8 [4];
  int *local_5a8;
  uint *local_5a0;
  int *local_598;
  TVector<double>_u_0 local_590;
  TPlane<double> local_578;
  TVector<double>_u_0 local_548;
  double dStack_530;
  double local_528;
  double dStack_520;
  undefined8 local_518;
  undefined1 local_508 [16];
  double local_4f8;
  double local_4f0;
  double dStack_4e8;
  double local_4e0;
  TTransform<double> local_4d8;
  double local_478;
  double dStack_470;
  undefined1 local_468 [16];
  double local_458;
  double dStack_450;
  undefined8 local_448;
  TVector<double> local_438;
  undefined1 local_418 [128];
  undefined1 local_398 [56];
  TVector<double>_u_0 TStack_360;
  uchar local_348;
  undefined8 local_347;
  bool local_33f;
  FProcMeshSection local_338;
  undefined1 local_2d8 [80];
  uchar local_288;
  undefined8 local_287;
  bool local_27f;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_278;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_228;
  undefined1 local_1d8 [80];
  uchar local_188;
  undefined8 local_187;
  bool local_17f;
  TArray<FUtilPoly2D,TSizedDefaultAllocator<32>_> local_178;
  TMatrix<double> local_168;
  int local_e8 [8];
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_958;
  local_780 = param_5;
  local_830 = param_7;
  if (param_1 != (UProceduralMeshComponent *)0x0) {
    local_4d8.Translation.XY.m128d_f64[0] = (double)param_1->_padding_;
    local_4d8.Translation.XY.m128d_f64[1] = (double)param_1->_padding_;
    local_4d8.Translation.ZW.m128d_f64[0] = (double)param_1->_padding_;
    local_4d8.Translation.ZW.m128d_f64[1] = (double)param_1->_padding_;
    dVar11 = (double)param_1->_padding_;
    dVar12 = (double)param_1->_padding_;
    dVar73 = (double)param_1->_padding_;
    dVar74 = (double)param_1->_padding_;
    dVar14 = (double)param_1->_padding_;
    dVar15 = (double)param_1->_padding_;
    dVar16 = (double)param_1->_padding_;
    local_4d8.Scale3D.ZW.m128d_f64[1] = (double)param_1->_padding_;
    local_848 = param_1;
    local_4d8.Rotation.XY.m128d_f64[0] = dVar11;
    local_4d8.Rotation.XY.m128d_f64[1] = dVar12;
    local_4d8.Rotation.ZW.m128d_f64[0] = dVar73;
    local_4d8.Rotation.ZW.m128d_f64[1] = dVar74;
    local_4d8.Scale3D.XY.m128d_f64[0] = dVar14;
    local_4d8.Scale3D.XY.m128d_f64[1] = dVar15;
    local_4d8.Scale3D.ZW.m128d_f64[0] = dVar16;
    UE::Math::TTransform<double>::InverseTransformPosition
              (&local_4d8,(TVector<double> *)&local_590._s_0,param_2);
    dVar73 = dVar73 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar74 = dVar74 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar11 = dVar11 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar12 = dVar12 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar71 = *(undefined1 (*) [16])&param_3->field0_0x0;
    dVar68 = (param_3->field0_0x0)._s_0.Z;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = dVar68;
    dVar84 = auVar71._8_8_;
    auVar75._8_4_ = SUB84(dVar12,0);
    auVar75._0_8_ = dVar11;
    auVar75._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar81._0_8_ = dVar84 * dVar11 - dVar12 * auVar71._0_8_;
    auVar81._8_8_ = dVar68 * dVar12 - dVar73 * dVar84;
    auVar65 = blendpd(auVar71,auVar80,2);
    auVar82._8_4_ = SUB84(dVar74,0);
    auVar82._0_8_ = dVar73;
    auVar82._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
    auVar76 = blendpd(auVar75,auVar82,2);
    auVar66._0_8_ = auVar65._0_8_ * dVar73 - auVar76._0_8_ * dVar68;
    auVar66._8_8_ = auVar65._8_8_ * dVar74 - auVar76._8_8_ * 0.0;
    auVar82 = blendpd(auVar81,auVar66,2);
    dVar9 = auVar81._8_8_ + auVar81._8_8_;
    dVar10 = auVar66._0_8_ + auVar66._0_8_;
    uVar29 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar83._0_8_ = auVar82._0_8_ + auVar82._0_8_;
    auVar83._8_8_ = auVar82._8_8_ + auVar82._8_8_;
    auVar69._8_4_ = SUB84(dVar10,0);
    auVar69._0_8_ = dVar9;
    auVar69._12_4_ = uVar29;
    auVar65._8_4_ = SUB84(dVar10,0);
    auVar65._0_8_ = dVar9;
    auVar65._12_4_ = uVar29;
    auVar82 = blendpd(auVar65,auVar83,2);
    auVar70._0_8_ = auVar69._8_8_ * dVar11 - dVar9 * dVar12;
    auVar70._8_8_ = auVar83._0_8_ * dVar12 - dVar10 * dVar73;
    auVar67._0_8_ = auVar82._0_8_ * dVar73 - auVar83._0_8_ * auVar76._0_8_;
    auVar67._8_8_ = auVar82._8_8_ * dVar74 - auVar83._8_8_ * auVar76._8_8_;
    dVar9 = dVar9 * dVar74 + auVar71._0_8_ + auVar70._8_8_;
    dVar10 = dVar10 * dVar74 + dVar84 + auVar67._0_8_;
    auVar71 = blendpd(auVar70,auVar67,2);
    local_508._8_4_ = SUB84(dVar10,0);
    local_508._0_8_ = dVar9;
    local_508._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_798._s_0.X = dVar14 * dVar9;
    local_4f8 = auVar83._0_8_ * dVar74 + dVar68 + auVar71._0_8_;
    local_798._s_0.Y = dVar15 * dVar10;
    local_798._s_0.Z = dVar16 * local_4f8;
    local_4f0 = dVar14;
    dStack_4e8 = dVar15;
    local_4e0 = dVar16;
    pTVar30 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_798._s_0,&local_438,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector);
    fVar17 = __real_3f800000;
    uVar42 = 0;
    iVar24 = (param_1->ProcMeshSections).ArrayNum;
    local_7d8._padding_ = (longlong)(pTVar30->field0_0x0)._s_0.Z;
    local_880 = 0;
    local_7d8._padding_ = (longlong)(pTVar30->field0_0x0)._s_0.X;
    local_7d8._padding_ = (longlong)(pTVar30->field0_0x0)._s_0.Y;
    local_900.Data = (FScriptContainerElement *)0x0;
    local_8f8 = 0;
    uStack_8f4 = 0;
    local_8f0.Data = (FScriptContainerElement *)0x0;
    local_8e8 = 0;
    local_858.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_858.ArrayNum = 0;
    local_858.ArrayMax = 0;
    local_7d8.W = local_590._s_0.Y * (double)local_7d8._padding_ +
                  local_590._s_0.X * (double)local_7d8._padding_ +
                  local_590._s_0.Z * (double)local_7d8._padding_;
    local_798._0_8_ = local_7d8._padding_;
    local_798._8_8_ = local_7d8._padding_;
    local_798._16_8_ = local_7d8._padding_;
    if (0 < iVar24) {
      if (iVar24 < 1) goto LAB_14d27727c;
      do {
        uVar42 = local_880;
        if (((int)local_880 < 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar46 = (FProcMeshSection *)
                  ((param_1->ProcMeshSections).AllocatorInstance.Data + (longlong)(int)uVar42 * 0x60
                  );
        local_838 = pFVar46;
        if (((pFVar46 != (FProcMeshSection *)0x0) &&
            (piVar52 = &(pFVar46->ProcIndexBuffer).ArrayNum, local_67c._4_8_ = piVar52,
            0 < (pFVar46->ProcIndexBuffer).ArrayNum)) &&
           (piVar1 = &(pFVar46->ProcVertexBuffer).ArrayNum, local_748 = piVar1,
           0 < (pFVar46->ProcVertexBuffer).ArrayNum)) {
          local_548._s_0.X = (pFVar46->SectionLocalBox).Min.field0_0x0._s_0.X;
          local_548._s_0.Y = (pFVar46->SectionLocalBox).Min.field0_0x0._s_0.Y;
          local_548._s_0.Z = (pFVar46->SectionLocalBox).Min.field0_0x0._s_0.Z;
          dStack_530 = (pFVar46->SectionLocalBox).Max.field0_0x0._s_0.X;
          local_528 = (pFVar46->SectionLocalBox).Max.field0_0x0._s_0.Y;
          dStack_520 = (pFVar46->SectionLocalBox).Max.field0_0x0._s_0.Z;
          local_518._0_1_ = (pFVar46->SectionLocalBox).IsValid;
          local_518._1_1_ = (pFVar46->SectionLocalBox).Pad[0];
          local_518._2_1_ = (pFVar46->SectionLocalBox).Pad[1];
          local_518._3_1_ = (pFVar46->SectionLocalBox).Pad[2];
          local_518._4_1_ = (pFVar46->SectionLocalBox).Pad[3];
          local_518._5_1_ = (pFVar46->SectionLocalBox).Pad[4];
          local_518._6_1_ = (pFVar46->SectionLocalBox).Pad[5];
          local_518._7_1_ = (pFVar46->SectionLocalBox).Pad[6];
          iVar24 = BoxPlaneCompare((TBox<double> *)&local_548._s_0,&local_7d8);
          if (iVar24 == -1) {
            if (param_4) {
              if (((local_900.Data <= pFVar46) &&
                  (pFVar46 < (FProcMeshSection *)(local_900.Data + (longlong)(int)uStack_8f4 * 0x60)
                  )) && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar23)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (local_8f8 == uStack_8f4) {
                local_8f8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x860,&local_900,(int *)&uStack_8f4);
              }
              lVar35 = (longlong)(int)local_8f8;
              local_8f8 = local_8f8 + 1;
              FProcMeshSection::FProcMeshSection
                        ((FProcMeshSection *)(local_900.Data + lVar35 * 0x60),pFVar46);
              local_7f8 = (UMaterialInterface *)
                          (**(code **)(param_1->_padding_ + 0x690))(param_1,uVar42);
              if (((local_8f0.Data <= (FScriptContainerElement *)&local_7f8) &&
                  ((FScriptContainerElement *)&local_7f8 <
                   local_8f0.Data + (longlong)local_8e8._4_4_ * 8)) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar23)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar24 = (int)local_8e8;
              if ((int)local_8e8 == local_8e8._4_4_) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_8f0,(int *)((longlong)&local_8e8 + 4));
              }
              local_8e8 = CONCAT44(local_8e8._4_4_,iVar24 + 1);
              *(UMaterialInterface **)(local_8f0.Data + (longlong)iVar24 * 8) = local_7f8;
            }
            UProceduralMeshComponent::ClearMeshSection(param_1,uVar42);
          }
          else if (iVar24 != 1) {
            pFVar43 = (FScriptContainerElement *)0x0;
            local_33f = true;
            local_398._0_8_ = (TVector<double>_u_0 *)0x0;
            local_398._8_4_ = 0;
            local_398._12_4_ = 0;
            local_398._16_8_ = (FScriptContainerElement *)0x0;
            auVar71 = ZEXT816(0);
            local_398._24_4_ = 0;
            local_398._28_4_ = 0;
            local_398._32_16_ = ZEXT816(0);
            local_398._48_8_ = (FScriptContainerElement *)0x0;
            TStack_360._s_0.X = 0.0;
            TStack_360._s_0.Y = 0.0;
            TStack_360._s_0.Z = 0.0;
            local_348 = '\0';
            local_347._0_1_ = '\0';
            local_347._1_1_ = '\0';
            local_347._2_1_ = '\0';
            local_347._3_1_ = '\0';
            local_347._4_1_ = '\0';
            local_347._5_1_ = '\0';
            local_347._6_1_ = '\0';
            local_347._7_1_ = false;
            local_740 = (FScriptContainerElement *)0x0;
            if (param_4) {
              local_1d8._0_8_ = (FScriptContainerElement *)0x0;
              local_1d8._8_4_ = 0;
              local_1d8._12_4_ = 0;
              local_1d8._16_8_ = (FScriptContainerElement *)0x0;
              local_1d8._24_4_ = 0;
              local_1d8._28_4_ = 0;
              local_188 = '\0';
              local_187._0_1_ = '\0';
              local_187._1_1_ = '\0';
              local_187._2_1_ = '\0';
              local_187._3_1_ = '\0';
              local_187._4_1_ = '\0';
              local_187._5_1_ = '\0';
              local_187._6_1_ = '\0';
              local_187._7_1_ = false;
              local_1d8._32_8_ = 0.0;
              local_1d8._40_8_ = 0.0;
              local_1d8._64_8_ = 0.0;
              local_1d8._72_8_ = 0.0;
              local_17f = true;
              local_1d8._48_16_ = auVar71;
              if (((local_900.Data <= (FProcMeshSection *)local_1d8) &&
                  ((FScriptContainerElement *)local_1d8 <
                   local_900.Data + (longlong)(int)uStack_8f4 * 0x60)) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar23)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (local_8f8 == uStack_8f4) {
                local_8f8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x860,&local_900,(int *)&uStack_8f4);
              }
              uVar25 = local_8f8;
              lVar35 = (longlong)(int)local_8f8;
              local_8f8 = local_8f8 + 1;
              FProcMeshSection::FProcMeshSection
                        ((FProcMeshSection *)(local_900.Data + lVar35 * 0x60),
                         (FProcMeshSection *)local_1d8);
              if ((FScriptContainerElement *)local_1d8._16_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_1d8._16_8_);
              }
              if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_1d8._0_8_);
              }
              uVar45 = 0;
              if ((int)uVar25 < (int)local_8f8) {
                uVar45 = ~uVar25 >> 0x1f;
              }
              if ((uVar45 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar43 = local_900.Data + lVar35 * 0x60;
              local_740 = pFVar43;
              local_808 = (**(code **)(param_1->_padding_ + 0x690))(param_1,uVar42);
              if (((local_8f0.Data <= (FScriptContainerElement *)&local_808) &&
                  ((FScriptContainerElement *)&local_808 <
                   local_8f0.Data + (longlong)local_8e8._4_4_ * 8)) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar23)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar24 = (int)local_8e8;
              if ((int)local_8e8 == local_8e8._4_4_) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_8f0,(int *)((longlong)&local_8e8 + 4));
              }
              local_8e8 = CONCAT44(local_8e8._4_4_,iVar24 + 1);
              *(undefined8 *)(local_8f0.Data + (longlong)iVar24 * 8) = local_808;
            }
            iVar24 = *piVar1;
            local_228.Elements._0_8_ = 0;
            local_228.Elements._32_8_ = 0;
            local_228.Elements._40_4_ = 0;
            local_228.Elements._52_4_ = 0;
            local_228.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_228.HashSize = 0;
            local_278.Elements._0_8_ = 0;
            local_278.Elements._32_8_ = 0;
            local_278.Elements._40_4_ = 0;
            local_278.Elements._52_4_ = 0;
            local_278.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_278.HashSize = 0;
            local_868.Data = (FScriptContainerElement *)0x0;
            local_228.Elements._8_8_ = 0;
            local_228.Elements._44_4_ = 0x80;
            local_228.Elements._48_4_ = 0xffffffff;
            local_278.Elements._8_8_ = 0;
            local_278.Elements._44_4_ = 0x80;
            local_278.Elements._48_4_ = 0xffffffff;
            local_860[0] = 0;
            local_860[1] = 0;
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar24,&local_868,local_860,local_860 + 1);
            local_8c0 = 0;
            if (0 < iVar24) {
              do {
                local_838 = pFVar46;
                pFVar46 = local_838;
                uVar25 = local_8c0;
                uVar45 = 0;
                if ((int)local_8c0 < *piVar1) {
                  uVar45 = ~local_8c0 >> 0x1f;
                }
                if ((uVar45 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pTVar51 = (TVector<double>_u_0 *)
                          ((pFVar46->ProcVertexBuffer).AllocatorInstance.Data +
                          (longlong)(int)uVar25 * 0x98);
                lVar35 = (longlong)(int)local_8c0;
                uVar25 = 0;
                if ((int)local_8c0 < local_860[0]) {
                  uVar25 = ~local_8c0 >> 0x1f;
                }
                dVar68 = ((double)local_7d8._padding_ * (pTVar51->_s_0).X +
                          (double)local_7d8._padding_ * *(double *)((longlong)pTVar51 + 8) +
                         (double)local_7d8._padding_ * *(double *)((longlong)pTVar51 + 0x10)) -
                         local_7d8.W;
                if ((uVar25 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                *(float *)(local_868.Data + lVar35 * 4) = (float)dVar68;
                lVar35 = (longlong)(int)local_8c0;
                uVar25 = 0;
                if ((int)local_8c0 < local_860[0]) {
                  uVar25 = ~local_8c0 >> 0x1f;
                }
                if ((uVar25 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                if (*(float *)(local_868.Data + lVar35 * 4) <= 0.0) {
                  if (pFVar43 != (FScriptContainerElement *)0x0) {
                    if (((*(TVector<double>_u_0 **)&pFVar43->field_0x0 <= pTVar51) &&
                        (pTVar51 < (TVector<double>_u_0 *)
                                   ((longlong)*(TVector<double>_u_0 **)&pFVar43->field_0x0 +
                                   (longlong)*(int *)(pFVar43 + 0xc) * 0x98))) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar23)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar27 = *(int *)(pFVar43 + 8);
                    if (iVar27 == *(int *)(pFVar43 + 0xc)) {
                      iVar27 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x898,(ForAnyElementType *)pFVar43,(int *)(pFVar43 + 0xc))
                      ;
                    }
                    *(int *)(pFVar43 + 8) = iVar27 + 1;
                    uVar78 = *(undefined8 *)((longlong)pTVar51 + 8);
                    lVar35 = (longlong)iVar27 * 0x98;
                    pFVar4 = *(FScriptContainerElement **)&pFVar43->field_0x0;
                    *(double *)(pFVar4 + lVar35) = (pTVar51->_s_0).X;
                    *(undefined8 *)(pFVar4 + lVar35 + 8) = uVar78;
                    dVar68 = pTVar51[1]._s_0.X;
                    *(undefined8 *)(pFVar4 + lVar35 + 0x10) =
                         *(undefined8 *)((longlong)pTVar51 + 0x10);
                    *(double *)(pFVar4 + lVar35 + 0x10 + 8) = dVar68;
                    uVar78 = *(undefined8 *)((longlong)pTVar51 + 0x28);
                    *(undefined8 *)(pFVar4 + lVar35 + 0x20) =
                         *(undefined8 *)((longlong)pTVar51 + 0x20);
                    *(undefined8 *)(pFVar4 + lVar35 + 0x20 + 8) = uVar78;
                    uVar78 = *(undefined8 *)((longlong)pTVar51 + 0x38);
                    *(double *)(pFVar4 + lVar35 + 0x30) = pTVar51[2]._s_0.X;
                    *(undefined8 *)(pFVar4 + lVar35 + 0x30 + 8) = uVar78;
                    dVar68 = pTVar51[3]._s_0.X;
                    *(undefined8 *)(pFVar4 + lVar35 + 0x40) =
                         *(undefined8 *)((longlong)pTVar51 + 0x40);
                    *(double *)(pFVar4 + lVar35 + 0x40 + 8) = dVar68;
                    uVar78 = *(undefined8 *)((longlong)pTVar51 + 0x58);
                    *(undefined8 *)(pFVar4 + lVar35 + 0x50) =
                         *(undefined8 *)((longlong)pTVar51 + 0x50);
                    *(undefined8 *)(pFVar4 + lVar35 + 0x50 + 8) = uVar78;
                    uVar78 = *(undefined8 *)((longlong)pTVar51 + 0x68);
                    *(double *)(pFVar4 + lVar35 + 0x60) = pTVar51[4]._s_0.X;
                    *(undefined8 *)(pFVar4 + lVar35 + 0x60 + 8) = uVar78;
                    dVar68 = pTVar51[5]._s_0.X;
                    *(undefined8 *)(pFVar4 + lVar35 + 0x70) =
                         *(undefined8 *)((longlong)pTVar51 + 0x70);
                    *(double *)(pFVar4 + lVar35 + 0x70 + 8) = dVar68;
                    uVar78 = *(undefined8 *)((longlong)pTVar51 + 0x88);
                    *(undefined8 *)(pFVar4 + lVar35 + 0x80) =
                         *(undefined8 *)((longlong)pTVar51 + 0x80);
                    *(undefined8 *)(pFVar4 + lVar35 + 0x80 + 8) = uVar78;
                    *(double *)(pFVar4 + lVar35 + 0x90) = pTVar51[6]._s_0.X;
                    local_7b4 = iVar27;
                    UE::Math::TBox<double>::operator+=
                              ((TBox<double> *)(pFVar43 + 0x20),(TVector<double> *)&pTVar51->_s_0);
                    local_5c8[3] = &local_8c0;
                    ppuVar54 = local_5c8 + 3;
                    local_5a8 = &local_7b4;
                    pTVar38 = (TPairInitializer<int_const_&,int_const_&> *)(local_67c + 0xc);
                    this = &local_278;
                    goto LAB_14d278330;
                  }
                }
                else {
                  if ((((ulonglong)local_398._0_8_ <= pTVar51) &&
                      (pTVar51 < (TVector<double>_u_0 *)
                                 (local_398._0_8_ + (longlong)(int)local_398._12_4_ * 0x98))) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar23)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar27 = local_398._8_4_;
                  if (local_398._8_4_ == local_398._12_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x898,(ForAnyElementType *)local_398,
                                        (int *)(local_398 + 0xc));
                  }
                  local_398._8_4_ = iVar27 + 1;
                  uVar78 = *(undefined8 *)((longlong)pTVar51 + 8);
                  lVar35 = (longlong)iVar27 * 0x98;
                  *(double *)(local_398._0_8_ + lVar35) = (pTVar51->_s_0).X;
                  *(undefined8 *)((FScriptContainerElement *)(local_398._0_8_ + lVar35) + 8) =
                       uVar78;
                  dVar68 = pTVar51[1]._s_0.X;
                  *(undefined8 *)(local_398._0_8_ + lVar35 + 0x10) =
                       *(undefined8 *)((longlong)pTVar51 + 0x10);
                  *(double *)((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x10) + 8) =
                       dVar68;
                  uVar78 = *(undefined8 *)((longlong)pTVar51 + 0x28);
                  *(undefined8 *)(local_398._0_8_ + lVar35 + 0x20) =
                       *(undefined8 *)((longlong)pTVar51 + 0x20);
                  *(undefined8 *)((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x20) + 8)
                       = uVar78;
                  uVar78 = *(undefined8 *)((longlong)pTVar51 + 0x38);
                  *(double *)(local_398._0_8_ + lVar35 + 0x30) = pTVar51[2]._s_0.X;
                  *(undefined8 *)((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x30) + 8)
                       = uVar78;
                  dVar68 = pTVar51[3]._s_0.X;
                  *(undefined8 *)(local_398._0_8_ + lVar35 + 0x40) =
                       *(undefined8 *)((longlong)pTVar51 + 0x40);
                  *(double *)((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x40) + 8) =
                       dVar68;
                  uVar78 = *(undefined8 *)((longlong)pTVar51 + 0x58);
                  *(undefined8 *)(local_398._0_8_ + lVar35 + 0x50) =
                       *(undefined8 *)((longlong)pTVar51 + 0x50);
                  *(undefined8 *)((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x50) + 8)
                       = uVar78;
                  uVar78 = *(undefined8 *)((longlong)pTVar51 + 0x68);
                  *(double *)(local_398._0_8_ + lVar35 + 0x60) = pTVar51[4]._s_0.X;
                  *(undefined8 *)((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x60) + 8)
                       = uVar78;
                  dVar68 = pTVar51[5]._s_0.X;
                  *(undefined8 *)(local_398._0_8_ + lVar35 + 0x70) =
                       *(undefined8 *)((longlong)pTVar51 + 0x70);
                  *(double *)((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x70) + 8) =
                       dVar68;
                  uVar78 = *(undefined8 *)((longlong)pTVar51 + 0x88);
                  *(undefined8 *)(local_398._0_8_ + lVar35 + 0x80) =
                       *(undefined8 *)((longlong)pTVar51 + 0x80);
                  *(undefined8 *)((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x80) + 8)
                       = uVar78;
                  *(double *)(local_398._0_8_ + lVar35 + 0x90) = pTVar51[6]._s_0.X;
                  if (local_348 == '\0') {
                    local_398._32_16_ = *(undefined1 (*) [16])pTVar51;
                    TStack_360._s_0.X = local_398._32_8_;
                    TStack_360._s_0.Y = local_398._40_8_;
                    local_398._48_8_ = *(undefined8 *)((longlong)pTVar51 + 0x10);
                    local_348 = '\x01';
                    uVar78 = (FScriptContainerElement *)local_398._48_8_;
                  }
                  else {
                    dVar68 = *(double *)pTVar51;
                    uVar29 = SUB84(dVar68,0);
                    uVar62 = (undefined4)((ulonglong)dVar68 >> 0x20);
                    if ((double)local_398._32_8_ <= dVar68) {
                      uVar29 = local_398._32_4_;
                      uVar62 = local_398._36_4_;
                    }
                    local_398._36_4_ = uVar62;
                    local_398._32_4_ = uVar29;
                    if (*(double *)((longlong)pTVar51 + 8) <= (double)local_398._40_8_) {
                      local_398._40_8_ = *(double *)((longlong)pTVar51 + 8);
                    }
                    dVar68 = *(double *)((longlong)pTVar51 + 0x10);
                    uVar29 = SUB84(dVar68,0);
                    uVar62 = (undefined4)((ulonglong)dVar68 >> 0x20);
                    if ((double)local_398._48_8_ <= dVar68) {
                      uVar29 = (undefined4)local_398._48_8_;
                      uVar62 = SUB84(local_398._48_8_,4);
                    }
                    local_398._48_8_ = CONCAT44(uVar62,uVar29);
                    uVar78 = (pTVar51->_s_0).X;
                    if ((pTVar51->_s_0).X <= TStack_360._s_0.X) {
                      uVar78 = TStack_360._s_0.X;
                    }
                    uVar29 = SUB84(TStack_360._s_0.Y,0);
                    uVar62 = (undefined4)((ulonglong)TStack_360._8_8_ >> 0x20);
                    dVar68 = *(double *)((longlong)pTVar51 + 8);
                    if (TStack_360._s_0.Y <= dVar68) {
                      uVar29 = SUB84(dVar68,0);
                      uVar62 = (undefined4)((ulonglong)dVar68 >> 0x20);
                    }
                    TStack_360._s_0.Y = (double)CONCAT44(uVar62,uVar29);
                    TStack_360._s_0.X = (double)uVar78;
                    uVar78 = *(FScriptContainerElement **)((longlong)pTVar51 + 0x10);
                    if ((double)*(FScriptContainerElement **)((longlong)pTVar51 + 0x10) <=
                        TStack_360._s_0.Z) {
                      uVar78 = TStack_360._s_0.Z;
                    }
                  }
                  TStack_360._s_0.Z = (double)uVar78;
                  local_5a0 = &local_8c0;
                  ppuVar54 = &local_5a0;
                  local_598 = &local_7b8;
                  pTVar38 = (TPairInitializer<int_const_&,int_const_&> *)local_67c;
                  this = &local_228;
                  local_7b8 = iVar27;
LAB_14d278330:
                  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                            (this,pTVar38,(bool *)ppuVar54);
                }
                local_8c0 = local_8c0 + 1;
                pFVar46 = local_838;
              } while ((int)local_8c0 < iVar24);
            }
            local_884 = 0;
            if (0 < *piVar52) {
              local_750 = 0;
              do {
                pFVar46 = local_838;
                lVar35 = 0;
                puVar47 = local_7f0;
                lVar36 = local_750 - (longlong)local_7f0;
                lVar49 = 3;
                uVar42 = local_884;
                do {
                  uVar25 = 0;
                  if ((int)uVar42 < (pFVar46->ProcIndexBuffer).ArrayNum) {
                    uVar25 = ~uVar42 >> 0x1f;
                  }
                  if ((uVar25 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  puVar56 = (uint *)0x0;
                  uVar29 = local_228.Elements._8_4_;
                  uVar25 = *(uint *)((pFVar46->ProcIndexBuffer).AllocatorInstance.Data + lVar36 +
                                    (longlong)puVar47);
                  *puVar47 = uVar25;
                  puVar39 = puVar56;
                  if (uVar29 != local_228.Elements._52_4_) {
                    FVar40 = (ForElementType<FSetElementId>)&local_228.Hash;
                    if (local_228.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar40 = local_228.Hash.SecondaryData;
                    }
                    uVar45 = *(uint *)((longlong)FVar40 +
                                      (ulonglong)(local_228.HashSize - 1U & uVar25) * 4);
                    while ((puVar39 = puVar56, uVar45 != 0xffffffff &&
                           (puVar39 = (uint *)((longlong)(int)uVar45 * 0x10 +
                                              local_228.Elements._0_8_), *puVar39 != uVar25))) {
                      uVar45 = puVar39[2];
                    }
                  }
                  puVar55 = puVar39 + 1;
                  if (puVar39 == (uint *)0x0) {
                    puVar55 = puVar56;
                  }
                  *(uint **)((longlong)local_7b0 + lVar35) = puVar55;
                  if (param_4) {
                    puVar39 = puVar56;
                    if (local_278.Elements._8_4_ != local_278.Elements._52_4_) {
                      FVar40 = (ForElementType<FSetElementId>)&local_278.Hash;
                      if (local_278.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FVar40 = local_278.Hash.SecondaryData;
                      }
                      uVar45 = *(uint *)((longlong)FVar40 +
                                        (ulonglong)(local_278.HashSize - 1U & uVar25) * 4);
                      while ((puVar39 = puVar56, uVar45 != 0xffffffff &&
                             (puVar39 = (uint *)((longlong)(int)uVar45 * 0x10 +
                                                local_278.Elements._0_8_), *puVar39 != uVar25))) {
                        uVar45 = puVar39[2];
                      }
                    }
                    puVar31 = puVar39 + 1;
                    if (puVar39 == (uint *)0x0) {
                      puVar31 = puVar56;
                    }
                    *(uint **)((longlong)local_5c8 + lVar35) = puVar31;
                    if (((puVar55 != (uint *)0x0) == (puVar31 != (uint *)0x0)) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(SlicedV[i] != nullptr) != (SlicedOtherV[i] != nullptr)"
                                            ,
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
                                            ,0x38c,L""), bVar23)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  pFVar43 = local_740;
                  piVar52 = local_7b0[1];
                  uVar48 = 0;
                  uVar42 = uVar42 + 1;
                  puVar47 = puVar47 + 1;
                  lVar35 = lVar35 + 8;
                  lVar49 = lVar49 + -1;
                } while (lVar49 != 0);
                if (local_7b0[0] == (int *)0x0) {
                  if ((local_7b0[1] != (int *)0x0) || (local_7b0[2] != (int *)0x0))
                  goto LAB_14d2789b6;
                  if (local_740 != (FScriptContainerElement *)0x0) {
                    local_870[0] = *local_5c8[0];
                    /* WARNING: Load size is inaccurate */
                    if (((local_740[0x10] <= (FScriptContainerElement *)local_870) &&
                        ((FScriptContainerElement *)local_870 <
                         local_740[0x10] + (longlong)*(int *)(local_740 + 0x1c) * 4)) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar23)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar24 = *(int *)(pFVar43 + 0x18);
                    if (iVar24 == *(int *)(pFVar43 + 0x1c)) {
                      iVar24 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)(pFVar43 + 0x10),
                                          (int *)(pFVar43 + 0x1c));
                    }
                    *(int *)(pFVar43 + 0x18) = iVar24 + 1;
                    /* WARNING: Load size is inaccurate */
                    *(uint *)(pFVar43[0x10] + (longlong)iVar24 * 4) = local_870[0];
                    local_8b4 = *local_5c8[1];
                    /* WARNING: Load size is inaccurate */
                    if (((pFVar43[0x10] <= (FScriptContainerElement *)&local_8b4) &&
                        ((FScriptContainerElement *)&local_8b4 <
                         pFVar43[0x10] + (longlong)*(int *)(pFVar43 + 0x1c) * 4)) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar23)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar24 = *(int *)(pFVar43 + 0x18);
                    if (iVar24 == *(int *)(pFVar43 + 0x1c)) {
                      iVar24 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)(pFVar43 + 0x10),
                                          (int *)(pFVar43 + 0x1c));
                    }
                    *(int *)(pFVar43 + 0x18) = iVar24 + 1;
                    /* WARNING: Load size is inaccurate */
                    *(undefined4 *)(pFVar43[0x10] + (longlong)iVar24 * 4) = local_8b4;
                    local_8b0 = *local_5c8[2];
                    /* WARNING: Load size is inaccurate */
                    if (((pFVar43[0x10] <= (FScriptContainerElement *)&local_8b0) &&
                        ((FScriptContainerElement *)&local_8b0 <
                         pFVar43[0x10] + (longlong)*(int *)(pFVar43 + 0x1c) * 4)) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar23)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar24 = *(int *)(pFVar43 + 0x18);
                    if (iVar24 == *(int *)(pFVar43 + 0x1c)) {
                      iVar24 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,(ForAnyElementType *)(pFVar43 + 0x10),
                                          (int *)(pFVar43 + 0x1c));
                    }
                    *(int *)(pFVar43 + 0x18) = iVar24 + 1;
                    /* WARNING: Load size is inaccurate */
                    *(undefined4 *)(pFVar43[0x10] + (longlong)iVar24 * 4) = local_8b0;
                  }
                }
                else if ((local_7b0[1] == (int *)0x0) || (local_7b0[2] == (int *)0x0)) {
LAB_14d2789b6:
                  lVar35 = (longlong)(int)local_7f0[0];
                  local_840 = 0;
                  local_8bc = 0;
                  local_8b8 = 0;
                  uVar42 = 0;
                  if ((int)local_7f0[0] < local_860[0]) {
                    uVar42 = ~local_7f0[0] >> 0x1f;
                  }
                  if (uVar42 == 0) {
                    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar23) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  lVar49 = (longlong)(int)local_7f0[1];
                  local_760[0] = *(float *)(local_868.Data + lVar35 * 4);
                  uVar42 = 0;
                  if ((int)local_7f0[1] < local_860[0]) {
                    uVar42 = ~local_7f0[1] >> 0x1f;
                  }
                  iVar24 = local_860[0];
                  if (uVar42 == 0) {
                    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar23) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar24 = local_860[0];
                  }
                  lVar35 = (longlong)(int)local_7f0[2];
                  local_760[1] = (float)*(undefined4 *)(local_868.Data + lVar49 * 4);
                  uVar42 = 0;
                  if ((int)local_7f0[2] < iVar24) {
                    uVar42 = ~local_7f0[2] >> 0x1f;
                  }
                  if ((uVar42 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  lVar49 = 0;
                  local_800 = 0;
                  iVar24 = 1;
                  local_760[2] = (float)*(undefined4 *)(local_868.Data + lVar35 * 4);
                  uVar57 = uVar48;
                  uVar60 = uVar48;
                  do {
                    piVar52 = (int *)0x0;
                    if (*(longlong *)((longlong)local_7b0 + lVar49) == 0) {
                      if (param_4) {
                        if ((3 < (longlong)uVar57) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("NumOtherFinalVerts < 4",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
                                                ,0x3c0,L""), bVar23)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        local_8bc = local_8bc + 1;
                        local_e8[uVar57] = **(int **)((longlong)local_5c8 + lVar49);
                        uVar57 = uVar57 + 1;
                      }
                    }
                    else {
                      if ((3 < (longlong)uVar48) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("NumFinalVerts < 4",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
                                              ,0x3ba,L""), bVar23)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      piVar52 = *(int **)((longlong)local_7b0 + lVar49);
                      local_840 = (int)uVar60 + 1;
                      uVar60 = (ulonglong)local_840;
                      local_e8[uVar48 + 4] = *piVar52;
                      uVar48 = uVar48 + 1;
                    }
                    iVar27 = iVar24 + (iVar24 / 3 + (iVar24 >> 0x1f) +
                                      (int)(((longlong)iVar24 / 3 + ((longlong)iVar24 >> 0x3f) &
                                            0xffffffffU) >> 0x1f)) * -3;
                    if ((piVar52 == (int *)0x0) != (local_7b0[iVar27] == (int *)0x0)) {
                      uVar42 = local_7f0[iVar27];
                      fVar79 = *(float *)((longlong)local_760 + local_800) /
                               (*(float *)((longlong)local_760 + local_800) - local_760[iVar27]);
                      uVar25 = 0;
                      if ((int)uVar42 < *local_748) {
                        uVar25 = ~uVar42 >> 0x1f;
                      }
                      if (fVar17 <= fVar79) {
                        fVar79 = fVar17;
                      }
                      if (fVar79 <= 0.0) {
                        fVar79 = 0.0;
                      }
                      if ((uVar25 == 0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar23)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pFVar4 = (local_838->ProcVertexBuffer).AllocatorInstance.Data;
                      uVar25 = *(uint *)((longlong)local_7f0 + local_800);
                      uVar45 = 0;
                      if ((int)uVar25 < *local_748) {
                        uVar45 = ~uVar25 >> 0x1f;
                      }
                      if ((uVar45 == 0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar23)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      InterpolateVert((FProcMeshVertex *)&local_728._s_0,
                                      (FProcMeshVertex *)
                                      ((local_838->ProcVertexBuffer).AllocatorInstance.Data +
                                      (longlong)(int)uVar25 * 0x98),
                                      (FProcMeshVertex *)(pFVar4 + (longlong)(int)uVar42 * 0x98),
                                      fVar79);
                      if ((((ulonglong)local_398._0_8_ <= &local_728) &&
                          (&local_728 <
                           (TVector<double>_u_0 *)
                           (local_398._0_8_ + (longlong)(int)local_398._12_4_ * 0x98))) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar23)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar27 = local_398._8_4_;
                      if (local_398._8_4_ == local_398._12_4_) {
                        iVar27 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x898,(ForAnyElementType *)local_398,
                                            (int *)(local_398 + 0xc));
                      }
                      local_398._8_4_ = iVar27 + 1;
                      lVar35 = (longlong)iVar27 * 0x98;
                      *(double *)(local_398._0_8_ + lVar35) = local_728._s_0.X;
                      *(double *)((FScriptContainerElement *)(local_398._0_8_ + lVar35) + 8) =
                           local_728._s_0.Y;
                      *(double *)(local_398._0_8_ + lVar35 + 0x10) = local_728._s_0.Z;
                      *(undefined8 *)
                       ((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x10) + 8) =
                           uStack_710;
                      *(undefined8 *)(local_398._0_8_ + lVar35 + 0x20) = local_708;
                      *(undefined8 *)
                       ((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x20) + 8) =
                           uStack_700;
                      *(undefined8 *)(local_398._0_8_ + lVar35 + 0x30) = local_6f8;
                      *(undefined8 *)
                       ((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x30) + 8) =
                           uStack_6f0;
                      *(undefined8 *)(local_398._0_8_ + lVar35 + 0x40) = local_6e8;
                      *(undefined8 *)
                       ((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x40) + 8) =
                           uStack_6e0;
                      *(undefined8 *)(local_398._0_8_ + lVar35 + 0x50) = local_6d8;
                      *(undefined8 *)
                       ((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x50) + 8) =
                           uStack_6d0;
                      *(undefined8 *)(local_398._0_8_ + lVar35 + 0x60) = local_6c8;
                      *(undefined8 *)
                       ((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x60) + 8) =
                           uStack_6c0;
                      *(undefined8 *)(local_398._0_8_ + lVar35 + 0x70) = local_6b8;
                      *(undefined8 *)
                       ((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x70) + 8) =
                           uStack_6b0;
                      *(undefined8 *)(local_398._0_8_ + lVar35 + 0x80) = local_6a8;
                      *(undefined8 *)
                       ((FScriptContainerElement *)(local_398._0_8_ + lVar35 + 0x80) + 8) =
                           uStack_6a0;
                      *(undefined8 *)(local_398._0_8_ + lVar35 + 0x90) = local_698;
                      uVar29 = local_728._0_4_;
                      uVar61 = local_728._12_4_;
                      uVar62 = (undefined4)((ulonglong)local_728._16_8_ >> 0x20);
                      uVar72 = local_728._8_4_;
                      uVar77 = local_728._4_4_;
                      if (local_348 == '\0') {
                        local_348 = '\x01';
                        TStack_360._s_0.Z = local_728._s_0.Z;
                        local_398._32_16_ = local_728._0_16_;
                        local_398._48_8_ = local_728._s_0.Z;
                        TStack_360._s_0.X = local_728._s_0.X;
                        TStack_360._s_0.Y = local_728._s_0.Y;
                      }
                      else {
                        uVar64 = local_398._32_4_;
                        uVar63 = local_398._36_4_;
                        if (local_728._s_0.X <= (double)local_398._32_8_) {
                          uVar64 = uVar29;
                          uVar63 = uVar77;
                        }
                        if (local_728._s_0.Y <= (double)local_398._40_8_) {
                          local_398._40_8_ = local_728._s_0.Y;
                        }
                        local_398._36_4_ = uVar63;
                        local_398._32_4_ = uVar64;
                        uVar64 = (int)local_398._48_8_;
                        uVar63 = SUB84(local_398._48_8_,4);
                        if (local_728._s_0.Z <= (double)local_398._48_8_) {
                          uVar64 = SUB84(local_728._s_0.Z,0);
                          uVar63 = uVar62;
                        }
                        if (TStack_360._s_0.Y <= local_728._s_0.Y) {
                          TStack_360._s_0.Y = local_728._s_0.Y;
                        }
                        local_398._48_8_ = (FScriptContainerElement *)CONCAT44(uVar63,uVar64);
                        uVar64 = SUB84(TStack_360._s_0.X,0);
                        uVar63 = (int)((ulonglong)TStack_360._0_8_ >> 0x20);
                        if (TStack_360._s_0.X <= local_728._s_0.X) {
                          uVar64 = uVar29;
                          uVar63 = uVar77;
                        }
                        TStack_360._s_0.X = (double)CONCAT44(uVar63,uVar64);
                        uVar64 = SUB84(TStack_360._s_0.Z,0);
                        uVar63 = (int)((ulonglong)TStack_360._16_8_ >> 0x20);
                        if (TStack_360._s_0.Z <= local_728._s_0.Z) {
                          uVar64 = SUB84(local_728._s_0.Z,0);
                          uVar63 = uVar62;
                        }
                        TStack_360._s_0.Z = (double)CONCAT44(uVar63,uVar64);
                      }
                      if (3 < (longlong)uVar48) {
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("NumFinalVerts < 4",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
                                            ,0x3d4,L"");
                        if (bVar23) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        uVar29 = local_728._0_4_;
                        uVar77 = local_728._4_4_;
                        uVar72 = local_728._8_4_;
                        uVar61 = local_728._12_4_;
                      }
                      local_840 = local_840 + 1;
                      uVar60 = (ulonglong)local_840;
                      local_e8[uVar48 + 4] = iVar27;
                      uVar48 = uVar48 + 1;
                      auVar76 = local_728._0_16_;
                      if (pFVar43 != (FScriptContainerElement *)0x0) {
                        if (((*(TVector<double>_u_0 **)&pFVar43->field_0x0 <= &local_728) &&
                            (&local_728 <
                             (TVector<double>_u_0 *)
                             ((longlong)*(TVector<double>_u_0 **)&pFVar43->field_0x0 +
                             (longlong)*(int *)(pFVar43 + 0xc) * 0x98))) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar23)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar27 = *(int *)(pFVar43 + 8);
                        if (iVar27 == *(int *)(pFVar43 + 0xc)) {
                          iVar27 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x898,(ForAnyElementType *)pFVar43,
                                              (int *)(pFVar43 + 0xc));
                        }
                        auVar76 = local_728._0_16_;
                        *(int *)(pFVar43 + 8) = iVar27 + 1;
                        lVar35 = (longlong)iVar27 * 0x98;
                        pFVar4 = *(FScriptContainerElement **)&pFVar43->field_0x0;
                        *(undefined1 (*) [16])(pFVar4 + lVar35) = local_728._0_16_;
                        *(double *)(pFVar4 + lVar35 + 0x10) = local_728._s_0.Z;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x10 + 8) = uStack_710;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x20) = local_708;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x20 + 8) = uStack_700;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x30) = local_6f8;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x30 + 8) = uStack_6f0;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x40) = local_6e8;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x40 + 8) = uStack_6e0;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x50) = local_6d8;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x50 + 8) = uStack_6d0;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x60) = local_6c8;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x60 + 8) = uStack_6c0;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x70) = local_6b8;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x70 + 8) = uStack_6b0;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x80) = local_6a8;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x80 + 8) = uStack_6a0;
                        *(undefined8 *)(pFVar4 + lVar35 + 0x90) = local_698;
                        uVar72 = local_728._8_4_;
                        uVar61 = local_728._12_4_;
                        uVar29 = local_728._0_4_;
                        uVar77 = local_728._4_4_;
                        uVar62 = SUB84(local_728._s_0.Z,0);
                        if (pFVar43[0x50] == (FScriptContainerElement)0x0) {
                          pFVar43[0x50] = (FScriptContainerElement)0x1;
                          *(double *)(pFVar43 + 0x38) = local_728._s_0.X;
                          *(double *)(pFVar43 + 0x40) = local_728._s_0.Y;
                          *(double *)(pFVar43 + 0x20) = local_728._s_0.X;
                          *(double *)(pFVar43 + 0x28) = local_728._s_0.Y;
                          *(double *)(pFVar43 + 0x48) = local_728._s_0.Z;
                          *(double *)(pFVar43 + 0x30) = local_728._s_0.Z;
                        }
                        else {
                    /* WARNING: Load size is inaccurate */
                          FVar41.Data = pFVar43[0x20];
                    /* WARNING: Load size is inaccurate */
                          uVar64 = (int)FVar41.Data;
                          uVar63 = (int)((ulonglong)FVar41.Data >> 0x20);
                          if (local_728._s_0.X <= (double)FVar41.Data) {
                            uVar64 = uVar29;
                            uVar63 = uVar77;
                          }
                          uVar78 = pFVar43[0x28];
                          if (local_728._s_0.Y <= (double)pFVar43[0x28]) {
                            uVar78 = local_728._s_0.Y;
                          }
                          FVar41.Data._4_4_ = uVar63;
                          FVar41.Data._0_4_ = uVar64;
                          *(FScriptContainerElement **)(pFVar43 + 0x20) = FVar41.Data;
                          uVar64 = (undefined4)((ulonglong)local_728._16_8_ >> 0x20);
                    /* WARNING: Load size is inaccurate */
                          FVar41.Data = pFVar43[0x30];
                          if ((double)FVar41.Data <= local_728._s_0.Z) {
                            uVar62 = SUB84(FVar41.Data,0);
                            uVar64 = (undefined4)((ulonglong)FVar41.Data >> 0x20);
                          }
                          *(undefined8 *)(pFVar43 + 0x28) = uVar78;
                    /* WARNING: Load size is inaccurate */
                          uVar78 = local_728._s_0.X;
                          if (local_728._s_0.X <= (double)pFVar43[0x38]) {
                            uVar78 = pFVar43[0x38];
                          }
                          FVar7.Data._4_4_ = uVar64;
                          FVar7.Data._0_4_ = uVar62;
                          *(FScriptContainerElement **)(pFVar43 + 0x30) = FVar7.Data;
                    /* WARNING: Load size is inaccurate */
                          FVar41.Data = pFVar43[0x40];
                          uVar62 = uVar72;
                          uVar64 = uVar61;
                          if (local_728._s_0.Y <= (double)FVar41.Data) {
                            uVar62 = SUB84(FVar41.Data,0);
                            uVar64 = (undefined4)((ulonglong)FVar41.Data >> 0x20);
                          }
                          *(undefined8 *)(pFVar43 + 0x38) = uVar78;
                    /* WARNING: Load size is inaccurate */
                          uVar78 = pFVar43[0x48];
                          if ((double)pFVar43[0x48] <= local_728._s_0.Z) {
                            uVar78 = local_728._s_0.Z;
                          }
                          FVar8.Data._4_4_ = uVar64;
                          FVar8.Data._0_4_ = uVar62;
                          *(FScriptContainerElement **)(pFVar43 + 0x40) = FVar8.Data;
                          *(undefined8 *)(pFVar43 + 0x48) = uVar78;
                        }
                        if (3 < (longlong)uVar57) {
                          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("NumOtherFinalVerts < 4",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
                                              ,0x3dc,L"");
                          if (bVar23) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          uVar29 = local_728._0_4_;
                          uVar77 = local_728._4_4_;
                          uVar72 = local_728._8_4_;
                          uVar61 = local_728._12_4_;
                        }
                        local_8bc = local_8bc + 1;
                        local_e8[uVar57] = iVar27;
                        uVar57 = uVar57 + 1;
                      }
                      if (local_8b8 < 2) {
                        if (local_8b8 != 0) goto LAB_14d2791c7;
                        local_778 = (float)(double)CONCAT44(uVar77,uVar29);
                        fStack_774 = (float)(double)CONCAT44(uVar61,uVar72);
                        fStack_770 = (float)local_728._s_0.Z;
                      }
                      else {
                        bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("ClippedEdges < 2",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
                                            ,0x3e1,L"");
                        if (bVar23) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        uVar72 = local_728._8_4_;
                        uVar61 = local_728._12_4_;
                        uVar29 = local_728._0_4_;
                        uVar77 = local_728._4_4_;
LAB_14d2791c7:
                        fStack_76c = (float)(double)CONCAT44(uVar77,uVar29);
                        local_768 = (float)(double)CONCAT44(uVar61,uVar72);
                        fStack_764 = (float)local_728._s_0.Z;
                      }
                      local_8b8 = local_8b8 + 1;
                    }
                    local_800 = local_800 + 4;
                    lVar49 = lVar49 + 8;
                    iVar24 = iVar24 + 1;
                  } while (iVar24 != 4);
                  lVar35 = 2;
                  if (2 < (longlong)(int)uVar60) {
                    do {
                      local_8ac = local_e8[4];
                      if ((((ulonglong)local_398._16_8_ <= (FScriptContainerElement *)&local_8ac) &&
                          ((FScriptContainerElement *)&local_8ac <
                           (FScriptContainerElement *)
                           (local_398._16_8_ + (longlong)(int)local_398._28_4_ * 4))) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar23)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar24 = local_398._24_4_;
                      if (local_398._24_4_ == local_398._28_4_) {
                        iVar24 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)(local_398 + 0x10),
                                            (int *)(local_398 + 0x1c));
                      }
                      local_398._24_4_ = iVar24 + 1;
                      *(int *)(local_398._16_8_ + (longlong)iVar24 * 4) = local_8ac;
                      local_8a8 = local_e8[lVar35 + 3];
                      if ((((ulonglong)local_398._16_8_ <= (FScriptContainerElement *)&local_8a8) &&
                          ((FScriptContainerElement *)&local_8a8 <
                           (FScriptContainerElement *)
                           (local_398._16_8_ + (longlong)(int)local_398._28_4_ * 4))) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar23)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar24 = local_398._24_4_;
                      if (local_398._24_4_ == local_398._28_4_) {
                        iVar24 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)(local_398 + 0x10),
                                            (int *)(local_398 + 0x1c));
                      }
                      local_398._24_4_ = iVar24 + 1;
                      *(int *)(local_398._16_8_ + (longlong)iVar24 * 4) = local_8a8;
                      local_8a4 = local_e8[lVar35 + 4];
                      if ((((ulonglong)local_398._16_8_ <= (FScriptContainerElement *)&local_8a4) &&
                          ((FScriptContainerElement *)&local_8a4 <
                           (FScriptContainerElement *)
                           (local_398._16_8_ + (longlong)(int)local_398._28_4_ * 4))) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar23)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      iVar24 = local_398._24_4_;
                      if (local_398._24_4_ == local_398._28_4_) {
                        iVar24 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,(ForAnyElementType *)(local_398 + 0x10),
                                            (int *)(local_398 + 0x1c));
                      }
                      lVar35 = lVar35 + 1;
                      local_398._24_4_ = iVar24 + 1;
                      *(int *)(local_398._16_8_ + (longlong)iVar24 * 4) = local_8a4;
                    } while (lVar35 < (int)uVar60);
                  }
                  if (pFVar43 != (FScriptContainerElement *)0x0) {
                    lVar35 = (longlong)local_8bc;
                    lVar49 = 2;
                    if (2 < lVar35) {
                      do {
                    /* WARNING: Load size is inaccurate */
                        local_8a0 = local_e8[0];
                        if (((pFVar43[0x10] <= (FScriptContainerElement *)&local_8a0) &&
                            ((FScriptContainerElement *)&local_8a0 <
                             pFVar43[0x10] + (longlong)*(int *)(pFVar43 + 0x1c) * 4)) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar23)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar24 = *(int *)(pFVar43 + 0x18);
                        if (iVar24 == *(int *)(pFVar43 + 0x1c)) {
                          iVar24 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,(ForAnyElementType *)(pFVar43 + 0x10),
                                              (int *)(pFVar43 + 0x1c));
                        }
                        *(int *)(pFVar43 + 0x18) = iVar24 + 1;
                    /* WARNING: Load size is inaccurate */
                        *(int *)(pFVar43[0x10] + (longlong)iVar24 * 4) = local_8a0;
                        local_89c = local_e8[lVar49 + -1];
                    /* WARNING: Load size is inaccurate */
                        if (((pFVar43[0x10] <= (FScriptContainerElement *)&local_89c) &&
                            ((FScriptContainerElement *)&local_89c <
                             pFVar43[0x10] + (longlong)*(int *)(pFVar43 + 0x1c) * 4)) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar23)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar24 = *(int *)(pFVar43 + 0x18);
                        if (iVar24 == *(int *)(pFVar43 + 0x1c)) {
                          iVar24 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,(ForAnyElementType *)(pFVar43 + 0x10),
                                              (int *)(pFVar43 + 0x1c));
                        }
                        *(int *)(pFVar43 + 0x18) = iVar24 + 1;
                    /* WARNING: Load size is inaccurate */
                        *(int *)(pFVar43[0x10] + (longlong)iVar24 * 4) = local_89c;
                        local_898 = local_e8[lVar49];
                    /* WARNING: Load size is inaccurate */
                        if (((pFVar43[0x10] <= (FScriptContainerElement *)&local_898) &&
                            ((FScriptContainerElement *)&local_898 <
                             pFVar43[0x10] + (longlong)*(int *)(pFVar43 + 0x1c) * 4)) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar23)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        iVar24 = *(int *)(pFVar43 + 0x18);
                        if (iVar24 == *(int *)(pFVar43 + 0x1c)) {
                          iVar24 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,(ForAnyElementType *)(pFVar43 + 0x10),
                                              (int *)(pFVar43 + 0x1c));
                        }
                        lVar49 = lVar49 + 1;
                        *(int *)(pFVar43 + 0x18) = iVar24 + 1;
                    /* WARNING: Load size is inaccurate */
                        *(int *)(pFVar43[0x10] + (longlong)iVar24 * 4) = local_898;
                      } while (lVar49 < lVar35);
                    }
                  }
                  if (local_8b8 == 1) {
                    bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ClippedEdges != 1",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\KismetProceduralMeshLibrary.cpp"
                                        ,0x402,L"");
                    if (bVar23) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                  }
                  else if (local_8b8 == 2) {
                    if (((local_858.AllocatorInstance.Data <= (FScriptContainerElement *)&local_778)
                        && ((FScriptContainerElement *)&local_778 <
                            local_858.AllocatorInstance.Data + (longlong)local_858.ArrayMax * 0x18))
                       && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar23)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar24 = local_858.ArrayNum;
                    if (local_858.ArrayNum == local_858.ArrayMax) {
                      iVar24 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x418,&local_858.AllocatorInstance,&local_858.ArrayMax);
                    }
                    local_858.ArrayNum = iVar24 + 1;
                    *(ulonglong *)(local_858.AllocatorInstance.Data + (longlong)iVar24 * 0x18) =
                         CONCAT44(fStack_774,local_778);
                    *(ulonglong *)(local_858.AllocatorInstance.Data + (longlong)iVar24 * 0x18 + 8) =
                         CONCAT44(fStack_76c,fStack_770);
                    *(ulonglong *)
                     (local_858.AllocatorInstance.Data + (longlong)iVar24 * 0x18 + 0x10) =
                         CONCAT44(fStack_764,local_768);
                  }
                }
                else {
                  local_87c = *local_7b0[0];
                  if ((((ulonglong)local_398._16_8_ <= (FScriptContainerElement *)&local_87c) &&
                      ((FScriptContainerElement *)&local_87c <
                       (FScriptContainerElement *)
                       (local_398._16_8_ + (longlong)(int)local_398._28_4_ * 4))) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar23)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar24 = local_398._24_4_;
                  if (local_398._24_4_ == local_398._28_4_) {
                    iVar24 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)(local_398 + 0x10),
                                        (int *)(local_398 + 0x1c));
                  }
                  iVar27 = iVar24 + 1;
                  *(int *)(local_398._16_8_ + (longlong)iVar24 * 4) = local_87c;
                  local_878 = *piVar52;
                  local_398._24_4_ = iVar27;
                  if ((((ulonglong)local_398._16_8_ <= (FScriptContainerElement *)&local_878) &&
                      ((FScriptContainerElement *)&local_878 <
                       (FScriptContainerElement *)
                       (local_398._16_8_ + (longlong)(int)local_398._28_4_ * 4))) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar23)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  if (local_398._24_4_ == local_398._28_4_) {
                    local_398._24_4_ =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)(local_398 + 0x10),
                                    (int *)(local_398 + 0x1c));
                  }
                  iVar24 = local_398._24_4_ + 1;
                  *(int *)(local_398._16_8_ + (longlong)(int)local_398._24_4_ * 4) = local_878;
                  local_874 = *local_7b0[2];
                  local_398._24_4_ = iVar24;
                  if ((((ulonglong)local_398._16_8_ <= (FScriptContainerElement *)&local_874) &&
                      ((FScriptContainerElement *)&local_874 <
                       (FScriptContainerElement *)
                       (local_398._16_8_ + (longlong)(int)local_398._28_4_ * 4))) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar23)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar24 = local_398._24_4_;
                  if (local_398._24_4_ == local_398._28_4_) {
                    iVar24 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)(local_398 + 0x10),
                                        (int *)(local_398 + 0x1c));
                  }
                  local_398._24_4_ = iVar24 + 1;
                  *(int *)(local_398._16_8_ + (longlong)iVar24 * 4) = local_874;
                }
                local_884 = local_884 + 3;
                local_750 = local_750 + 0xc;
                uVar42 = local_880;
              } while ((int)local_884 < *(int *)local_67c._4_8_);
            }
            if ((pFVar43 != (FScriptContainerElement *)0x0) &&
               ((*(int *)(pFVar43 + 0x18) == 0 || (*(int *)(pFVar43 + 8) == 0)))) {
              uVar45 = local_8f8 - 1;
              uVar25 = 0;
              if ((int)uVar45 < (int)local_8f8) {
                uVar25 = ~uVar45 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar23)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar43 = local_900.Data + (longlong)(int)uVar45 * 0x60;
              if (*(void **)(pFVar43 + 0x10) != (void *)0x0) {
                FMemory::Free(*(void **)(pFVar43 + 0x10));
              }
              if (*(void **)&pFVar43->field_0x0 != (void *)0x0) {
                FMemory::Free(*(void **)&pFVar43->field_0x0);
              }
              iVar24 = (local_8f8 - uVar45) + -1;
              if (iVar24 != 0) {
                memmove(pFVar43,pFVar43 + 0x60,(longlong)iVar24 * 0x60);
              }
              local_8f8 = local_8f8 - 1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x60,8,&local_900,local_8f8,(int *)&uStack_8f4);
            }
            param_1 = local_848;
            if (((int)local_398._24_4_ < 1) || ((int)local_398._8_4_ < 1)) {
              UProceduralMeshComponent::ClearMeshSection(local_848,uVar42);
            }
            else {
              UProceduralMeshComponent::SetProcMeshSection
                        (local_848,uVar42,(FProcMeshSection *)local_398);
            }
            if (local_868.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_868.Data);
            }
            local_278.HashSize = 0;
            if (local_278.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_278.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_278.Elements);
            local_228.HashSize = 0;
            if (local_228.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_228.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_228.Elements);
            if ((FScriptContainerElement *)local_398._16_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_398._16_8_);
            }
            if ((TVector<double>_u_0 *)local_398._0_8_ != (TVector<double>_u_0 *)0x0) {
              FMemory::Free((void *)local_398._0_8_);
            }
          }
        }
LAB_14d27727c:
        iVar24 = (param_1->ProcMeshSections).ArrayNum;
        local_880 = uVar42 + 1;
      } while ((int)local_880 < iVar24);
    }
    uVar42 = 0;
    if ((param_6 != NoCap) && (0 < local_858.ArrayNum)) {
      local_2d8._0_8_ = (FScriptContainerElement *)0x0;
      local_2d8._8_4_ = 0;
      local_2d8._12_4_ = 0;
      local_2d8._16_8_ = (FScriptContainerElement *)0x0;
      local_2d8._48_16_ = ZEXT816(0);
      local_2d8._24_4_ = 0;
      local_2d8._28_4_ = 0;
      local_2d8._32_8_ = 0.0;
      local_2d8._40_8_ = 0.0;
      local_2d8._64_8_ = 0.0;
      local_2d8._72_8_ = 0.0;
      local_288 = '\0';
      local_287._0_1_ = '\0';
      local_287._1_1_ = '\0';
      local_287._2_1_ = '\0';
      local_287._3_1_ = '\0';
      local_287._4_1_ = '\0';
      local_287._5_1_ = '\0';
      local_287._6_1_ = '\0';
      local_287._7_1_ = false;
      local_27f = true;
      if (param_6 == UseLastSectionForCap) {
        iVar24 = iVar24 + -1;
        pFVar46 = UProceduralMeshComponent::GetProcMeshSection(param_1,iVar24);
        FProcMeshSection::operator=((FProcMeshSection *)local_2d8,pFVar46);
      }
      local_738.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_738.ArrayNum = 0;
      local_738.ArrayMax = 0;
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 0;
      local_178.ArrayMax = 0;
      FGeomTools::ProjectEdges(&local_738,&local_168,&local_858,&local_7d8);
      local_894.Bits = 0xffffffff;
      FGeomTools::Buid2DPolysFromEdges(&local_178,&local_738,(FColor *)&local_894._s_0);
      fVar17 = __real_42800000;
      local_880 = local_2d8._8_4_;
      local_884 = local_2d8._24_4_;
      if (0 < local_178.ArrayNum) {
        do {
          uVar25 = 0;
          if ((int)uVar42 < local_178.ArrayNum) {
            uVar25 = ~uVar42 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FGeomTools::GeneratePlanarTilingPolyUVs
                    ((FUtilPoly2D *)
                     (local_178.AllocatorInstance.Data + (longlong)(int)uVar42 * 0x10),fVar17);
          uVar29 = local_2d8._8_4_;
          uVar25 = 0;
          if ((int)uVar42 < local_178.ArrayNum) {
            uVar25 = ~uVar42 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          Transform2DPolygonTo3D
                    ((FUtilPoly2D *)
                     (local_178.AllocatorInstance.Data + (longlong)(int)uVar42 * 0x10),&local_168,
                     (TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)local_2d8,
                     (TBox<double> *)(local_2d8 + 0x20));
          local_688._s_0.X = (float)local_798._s_0.X;
          local_688._s_0.Y = (float)local_798._s_0.Y;
          local_688._s_0.Z = (float)local_798._s_0.Z;
          TriangulatePoly((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(local_2d8 + 0x10),
                          (TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)local_2d8,uVar29,
                          (TVector<float> *)&local_688._s_0);
          uVar42 = uVar42 + 1;
          param_1 = local_848;
        } while ((int)uVar42 < local_178.ArrayNum);
      }
      uVar42 = local_880;
      UProceduralMeshComponent::SetProcMeshSection(param_1,iVar24,(FProcMeshSection *)local_2d8);
      if (param_6 == CreateNewSectionForCap) {
        (**(code **)(param_1->_padding_ + 0x6b8))(param_1,iVar24);
      }
      if (param_4) {
        if (param_6 == CreateNewSectionForCap) {
          local_338.SectionLocalBox.Pad[0] = '\0';
          local_338.SectionLocalBox.Pad[1] = '\0';
          local_338.SectionLocalBox.Pad[2] = '\0';
          local_338.SectionLocalBox.Pad[3] = '\0';
          local_338.SectionLocalBox.Pad[4] = '\0';
          local_338.SectionLocalBox.Pad[5] = '\0';
          local_338.SectionLocalBox.Pad[6] = '\0';
          local_338.bEnableCollision = false;
          local_338.ProcVertexBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_338.ProcVertexBuffer.ArrayNum = 0;
          local_338.ProcVertexBuffer.ArrayMax = 0;
          local_338.ProcIndexBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_338.ProcIndexBuffer.ArrayNum = 0;
          local_338.ProcIndexBuffer.ArrayMax = 0;
          local_338.SectionLocalBox.Min.field0_0x0._s_0.X = 0.0;
          local_338.SectionLocalBox.Min.field0_0x0._s_0.Y = 0.0;
          local_338.SectionLocalBox.Min.field0_0x0._s_0.Z = 0.0;
          local_338.SectionLocalBox.Max.field0_0x0._s_0.X = 0.0;
          local_338.SectionLocalBox.Max.field0_0x0._s_0.Y = 0.0;
          local_338.SectionLocalBox.Max.field0_0x0._s_0.Z = 0.0;
          local_338.SectionLocalBox.IsValid = '\0';
          local_338.bSectionVisible = (bool)param_6;
          if (((local_900.Data <= &local_338) &&
              (&local_338 < (FProcMeshSection *)(local_900.Data + (longlong)(int)uStack_8f4 * 0x60))
              ) && (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_8f8 == uStack_8f4) {
            local_8f8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x860,&local_900,(int *)&uStack_8f4);
          }
          uVar25 = local_8f8 + 1;
          lVar35 = (longlong)(int)local_8f8 * 0x60;
          *(undefined8 *)&local_900.Data[lVar35].field_0x0 = 0;
          *(FScriptContainerElement **)&local_900.Data[lVar35].field_0x0 =
               local_338.ProcVertexBuffer.AllocatorInstance.Data;
          *(int *)(local_900.Data + lVar35 + 8) = local_338.ProcVertexBuffer.ArrayNum;
          *(int *)(local_900.Data + lVar35 + 0xc) = local_338.ProcVertexBuffer.ArrayMax;
          *(undefined8 *)(local_900.Data + lVar35 + 0x10) = 0;
          *(FScriptContainerElement **)(local_900.Data + lVar35 + 0x10) =
               local_338.ProcIndexBuffer.AllocatorInstance.Data;
          *(int *)(local_900.Data + lVar35 + 0x18) = local_338.ProcIndexBuffer.ArrayNum;
          *(int *)(local_900.Data + lVar35 + 0x1c) = local_338.ProcIndexBuffer.ArrayMax;
          *(double *)(local_900.Data + lVar35 + 0x20) =
               local_338.SectionLocalBox.Min.field0_0x0._s_0.X;
          *(double *)(local_900.Data + lVar35 + 0x20 + 8) =
               local_338.SectionLocalBox.Min.field0_0x0._s_0.Y;
          *(double *)(local_900.Data + lVar35 + 0x30) =
               local_338.SectionLocalBox.Min.field0_0x0._s_0.Z;
          *(double *)(local_900.Data + lVar35 + 0x30 + 8) =
               local_338.SectionLocalBox.Max.field0_0x0._s_0.X;
          *(double *)(local_900.Data + lVar35 + 0x40) =
               local_338.SectionLocalBox.Max.field0_0x0._s_0.Y;
          *(double *)(local_900.Data + lVar35 + 0x40 + 8) =
               local_338.SectionLocalBox.Max.field0_0x0._s_0.Z;
          *(ulonglong *)(local_900.Data + lVar35 + 0x50) =
               CONCAT71(local_338.SectionLocalBox.Pad,local_338.SectionLocalBox.IsValid);
          local_900.Data[lVar35 + 0x58] = (FScriptContainerElement)local_338.bEnableCollision;
          local_900.Data[lVar35 + 0x59] = (FScriptContainerElement)local_338.bSectionVisible;
          local_338.ProcIndexBuffer.ArrayNum = 0;
          local_338.ProcIndexBuffer.ArrayMax = 0;
          local_338.ProcIndexBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_338.ProcVertexBuffer.ArrayNum = 0;
          local_338.ProcVertexBuffer.ArrayMax = 0;
          local_338.ProcVertexBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_8f8 = uVar25;
          if (((local_8f0.Data <= (FScriptContainerElement *)&local_830) &&
              ((FScriptContainerElement *)&local_830 <
               local_8f0.Data + (longlong)local_8e8._4_4_ * 8)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar24 = (int)local_8e8;
          if ((int)local_8e8 == local_8e8._4_4_) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_8f0,(int *)((longlong)&local_8e8 + 4));
          }
          local_8e8 = CONCAT44(local_8e8._4_4_,iVar24 + 1);
          *(UMaterialInterface **)(local_8f0.Data + (longlong)iVar24 * 8) = local_830;
        }
        uVar25 = 0;
        if ((int)(local_8f8 - 1) < (int)local_8f8) {
          uVar25 = ~(local_8f8 - 1) >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar25 = local_8f8;
        FVar41.Data = local_900.Data;
        dVar68 = __real_bff0000000000000;
        iVar24 = *(int *)(local_900.Data + (longlong)(int)local_8f8 * 0x60 + -0x58);
        if ((int)uVar42 < (int)local_2d8._8_4_) {
          lVar35 = (longlong)(int)uVar42 * 0x98;
          uVar45 = uVar42;
          do {
            uVar26 = 0;
            if ((int)uVar45 < (int)local_2d8._8_4_) {
              uVar26 = ~uVar45 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_668 = *(int **)(local_2d8._0_8_ + lVar35);
            dStack_660 = *(double *)((FScriptContainerElement *)(local_2d8._0_8_ + lVar35) + 8);
            local_658 = *(double *)(local_2d8._0_8_ + lVar35 + 0x10);
            dStack_630 = *(double *)
                          ((FScriptContainerElement *)(local_2d8._0_8_ + lVar35 + 0x30) + 8);
            dStack_650 = *(double *)
                          ((FScriptContainerElement *)(local_2d8._0_8_ + lVar35 + 0x10) + 8) *
                         dVar68;
            dStack_620 = *(double *)
                          ((FScriptContainerElement *)(local_2d8._0_8_ + lVar35 + 0x40) + 8);
            local_648 = *(double *)(local_2d8._0_8_ + lVar35 + 0x20) * dVar68;
            local_618 = *(undefined8 *)(local_2d8._0_8_ + lVar35 + 0x50);
            uStack_610 = *(undefined8 *)
                          ((FScriptContainerElement *)(local_2d8._0_8_ + lVar35 + 0x50) + 8);
            auVar76._0_8_ = *(double *)(local_2d8._0_8_ + lVar35 + 0x30) * dVar68;
            auVar76._8_8_ = dStack_630;
            local_608 = *(undefined8 *)(local_2d8._0_8_ + lVar35 + 0x60);
            uStack_600 = *(undefined8 *)
                          ((FScriptContainerElement *)(local_2d8._0_8_ + lVar35 + 0x60) + 8);
            local_628 = *(double *)(local_2d8._0_8_ + lVar35 + 0x40) * dVar68;
            local_5f8 = *(undefined8 *)(local_2d8._0_8_ + lVar35 + 0x70);
            uStack_5f0 = *(undefined8 *)
                          ((FScriptContainerElement *)(local_2d8._0_8_ + lVar35 + 0x70) + 8);
            local_5e8 = *(undefined8 *)(local_2d8._0_8_ + lVar35 + 0x80);
            uStack_5e0 = *(undefined8 *)
                          ((FScriptContainerElement *)(local_2d8._0_8_ + lVar35 + 0x80) + 8);
            local_5d8 = *(undefined8 *)(local_2d8._0_8_ + lVar35 + 0x90);
            dStack_640 = *(double *)
                          ((FScriptContainerElement *)(local_2d8._0_8_ + lVar35 + 0x20) + 8) *
                         dVar68;
            dStack_630 = dStack_630 * dVar68;
            local_638 = auVar76._0_8_;
            if (((*(int ***)&FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x60].field_0x0 <=
                  &local_668) &&
                (&local_668 <
                 *(int ***)&FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x60].field_0x0 +
                 (longlong)*(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x54) * 0x13)) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar23)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar27 = *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x58);
            if (iVar27 == *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x54)) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x898,(ForAnyElementType *)
                                        (FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x60),
                                  (int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x54));
            }
            *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x58) = iVar27 + 1;
            lVar36 = (longlong)iVar27 * 0x98;
            lVar49 = *(longlong *)&FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x60].field_0x0;
            *(double *)(lVar36 + lVar49) = (double)local_668;
            ((double *)(lVar36 + lVar49))[1] = dStack_660;
            pdVar2 = (double *)(lVar36 + 0x10 + lVar49);
            *pdVar2 = local_658;
            pdVar2[1] = dStack_650;
            pdVar2 = (double *)(lVar36 + 0x20 + lVar49);
            *pdVar2 = local_648;
            pdVar2[1] = dStack_640;
            pdVar2 = (double *)(lVar36 + 0x30 + lVar49);
            *pdVar2 = local_638;
            pdVar2[1] = dStack_630;
            pdVar2 = (double *)(lVar36 + 0x40 + lVar49);
            *pdVar2 = local_628;
            pdVar2[1] = dStack_620;
            puVar3 = (undefined8 *)(lVar36 + 0x50 + lVar49);
            *puVar3 = local_618;
            puVar3[1] = uStack_610;
            puVar3 = (undefined8 *)(lVar36 + 0x60 + lVar49);
            *puVar3 = local_608;
            puVar3[1] = uStack_600;
            puVar3 = (undefined8 *)(lVar36 + 0x70 + lVar49);
            *puVar3 = local_5f8;
            puVar3[1] = uStack_5f0;
            puVar3 = (undefined8 *)(lVar36 + 0x80 + lVar49);
            *puVar3 = local_5e8;
            puVar3[1] = uStack_5e0;
            *(undefined8 *)(lVar36 + 0x90 + lVar49) = local_5d8;
            if (FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x10] == (FScriptContainerElement)0x0) {
              *(int **)&FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x28].field_0x0 = local_668;
              *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x20) = dStack_660;
              FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x10] = (FScriptContainerElement)0x1;
              *(int **)&FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x40].field_0x0 = local_668;
              *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x38) = dStack_660;
              *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x18) = local_658;
              *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x30) = local_658;
            }
            else {
              uVar61 = (undefined4)((ulonglong)local_668 >> 0x20);
              dVar9 = *(double *)&FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x40].field_0x0;
              uVar29 = (int)local_668;
              uVar62 = uVar61;
              if (dVar9 <= (double)local_668) {
                uVar29 = SUB84(dVar9,0);
                uVar62 = (undefined4)((ulonglong)dVar9 >> 0x20);
              }
              dVar9 = *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x30);
              if (local_658 <= *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x30)) {
                dVar9 = local_658;
              }
              *(ulonglong *)&FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x40].field_0x0 =
                   CONCAT44(uVar62,uVar29);
              uVar29 = SUB84(dStack_660,0);
              uVar62 = (undefined4)((ulonglong)dStack_660 >> 0x20);
              dVar10 = *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x38);
              if (dVar10 <= dStack_660) {
                uVar29 = SUB84(dVar10,0);
                uVar62 = (undefined4)((ulonglong)dVar10 >> 0x20);
              }
              dVar10 = dStack_660;
              if (dStack_660 <= *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x20)) {
                dVar10 = *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x20);
              }
              auVar76._8_8_ = 0;
              auVar76._0_8_ = dVar10;
              *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x30) = dVar9;
              *(ulonglong *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x38) =
                   CONCAT44(uVar62,uVar29);
              dVar9 = *(double *)&FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x28].field_0x0;
              uVar29 = SUB84(dVar9,0);
              uVar62 = (int)((ulonglong)dVar9 >> 0x20);
              if (dVar9 <= (double)local_668) {
                uVar29 = (int)local_668;
                uVar62 = uVar61;
              }
              *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x20) = dVar10;
              *(ulonglong *)&FVar41.Data[(longlong)(int)uVar25 * 0x60 + -0x28].field_0x0 =
                   CONCAT44(uVar62,uVar29);
              dVar9 = *(double *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x18);
              uVar29 = SUB84(dVar9,0);
              uVar62 = (undefined4)((ulonglong)dVar9 >> 0x20);
              if (dVar9 <= local_658) {
                uVar29 = SUB84(local_658,0);
                uVar62 = (undefined4)((ulonglong)local_658 >> 0x20);
              }
              *(ulonglong *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x18) =
                   CONCAT44(uVar62,uVar29);
            }
            uVar45 = uVar45 + 1;
            lVar35 = lVar35 + 0x98;
          } while ((int)uVar45 < (int)local_2d8._8_4_);
        }
        iVar24 = iVar24 - uVar42;
        if ((int)local_884 < (int)local_2d8._24_4_) {
          pFVar43 = FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x50;
          lVar35 = (longlong)(int)local_884 * 4 + 4;
          uVar42 = local_884 + 1;
          do {
            uVar45 = 0;
            if ((int)(uVar42 - 1) < (int)local_2d8._24_4_) {
              uVar45 = ~(uVar42 - 1) >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_890 = *(int *)(local_2d8._16_8_ + lVar35 + -4) + iVar24;
            if (((*(FScriptContainerElement **)&pFVar43->field_0x0 <=
                  (FScriptContainerElement *)&local_890) &&
                ((FScriptContainerElement *)&local_890 <
                 *(FScriptContainerElement **)&pFVar43->field_0x0 +
                 (longlong)*(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x44) * 4)) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar23)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar27 = *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x48);
            if (iVar27 == *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x44)) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar43,
                                  (int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x44));
            }
            *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x48) = iVar27 + 1;
            *(int *)(*(FScriptContainerElement **)&pFVar43->field_0x0 + (longlong)iVar27 * 4) =
                 local_890;
            uVar45 = 0;
            if ((int)(uVar42 + 1) < (int)local_2d8._24_4_) {
              uVar45 = ~(uVar42 + 1) >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_88c = *(int *)(local_2d8._16_8_ + lVar35 + 4) + iVar24;
            if (((*(FScriptContainerElement **)&pFVar43->field_0x0 <=
                  (FScriptContainerElement *)&local_88c) &&
                ((FScriptContainerElement *)&local_88c <
                 *(FScriptContainerElement **)&pFVar43->field_0x0 +
                 (longlong)*(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x44) * 4)) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar23)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar27 = *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x48);
            if (iVar27 == *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x44)) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar43,
                                  (int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x44));
            }
            *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x48) = iVar27 + 1;
            *(int *)(*(FScriptContainerElement **)&pFVar43->field_0x0 + (longlong)iVar27 * 4) =
                 local_88c;
            uVar45 = 0;
            if ((int)uVar42 < (int)local_2d8._24_4_) {
              uVar45 = ~uVar42 >> 0x1f;
            }
            if ((uVar45 == 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar23)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_888 = *(int *)(local_2d8._16_8_ + lVar35) + iVar24;
            if (((*(FScriptContainerElement **)&pFVar43->field_0x0 <=
                  (FScriptContainerElement *)&local_888) &&
                ((FScriptContainerElement *)&local_888 <
                 *(FScriptContainerElement **)&pFVar43->field_0x0 +
                 (longlong)*(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x44) * 4)) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar23)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar27 = *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x48);
            if (iVar27 == *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x44)) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar43,
                                  (int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x44));
            }
            *(int *)(FVar41.Data + (longlong)(int)uVar25 * 0x60 + -0x48) = iVar27 + 1;
            lVar35 = lVar35 + 0xc;
            *(int *)(*(FScriptContainerElement **)&pFVar43->field_0x0 + (longlong)iVar27 * 4) =
                 local_888;
            iVar27 = uVar42 + 2;
            uVar42 = uVar42 + 3;
          } while (iVar27 < (int)local_2d8._24_4_);
        }
      }
      DestructItems<FUtilPoly2D,int>
                ((FUtilPoly2D *)local_178.AllocatorInstance.Data,local_178.ArrayNum);
      if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
      if (local_738.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_738.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_2d8._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_2d8._16_8_);
      }
      param_1 = local_848;
      if ((FScriptContainerElement *)local_2d8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_2d8._0_8_);
        param_1 = local_848;
      }
    }
    uVar57 = 0;
    local_8e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8e0.ArrayNum = 0;
    local_8e0.ArrayMax = 0;
    local_8d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8d0.ArrayNum = 0;
    local_8d0.ArrayMax = 0;
    lVar35 = (**(code **)(param_1->_padding_ + 0x800))(param_1);
    uVar21 = _UNK_15066df7c;
    uVar20 = _UNK_15066df78;
    uVar19 = __xmm_80000000000000008000000000000000._4_4_;
    uVar18 = (uint)__xmm_80000000000000008000000000000000;
    uVar26 = _UNK_15061cc8c;
    uVar45 = _UNK_15061cc88;
    uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar42 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar68 = __real_3fe0000000000000;
    iVar24 = *(int *)(lVar35 + 0x70);
    uVar48 = uVar57;
    if (0 < iVar24) {
      do {
        uVar78 = auVar76._8_8_;
        uVar59 = (uint)uVar48;
        uVar28 = 0;
        if ((int)uVar59 < iVar24) {
          uVar28 = ~uVar59 >> 0x1f;
        }
        if (uVar28 == 0) {
          bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          uVar78 = auVar76._8_8_;
          if (bVar23) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar44 = (FKConvexElem *)(*(longlong *)(lVar35 + 0x68) + uVar57);
        local_478 = (pFVar44->ElemBox).Min.field0_0x0._s_0.X;
        dStack_470 = (pFVar44->ElemBox).Min.field0_0x0._s_0.Y;
        local_468 = *(undefined1 (*) [16])((longlong)&(pFVar44->ElemBox).Min.field0_0x0 + 0x10);
        local_458 = (pFVar44->ElemBox).Max.field0_0x0._s_0.Y;
        dStack_450 = (pFVar44->ElemBox).Max.field0_0x0._s_0.Z;
        local_448._0_1_ = (pFVar44->ElemBox).IsValid;
        local_448._1_1_ = (pFVar44->ElemBox).Pad[0];
        local_448._2_1_ = (pFVar44->ElemBox).Pad[1];
        local_448._3_1_ = (pFVar44->ElemBox).Pad[2];
        local_448._4_1_ = (pFVar44->ElemBox).Pad[3];
        local_448._5_1_ = (pFVar44->ElemBox).Pad[4];
        local_448._6_1_ = (pFVar44->ElemBox).Pad[5];
        local_448._7_1_ = (pFVar44->ElemBox).Pad[6];
        auVar13._4_8_ = uVar78;
        auVar13._0_4_ = local_468._4_4_;
        auVar71._0_8_ = auVar13._0_8_ << 0x20;
        auVar71._8_4_ = local_468._8_4_;
        auVar71._12_4_ = local_468._12_4_;
        dVar73 = (auVar71._8_8_ - local_478) * dVar68;
        dVar11 = (local_458 - dStack_470) * dVar68;
        dVar9 = (dStack_450 - local_468._0_8_) * dVar68;
        dVar12 = dVar11 * (double)local_7d8._padding_;
        dVar74 = dVar73 * (double)local_7d8._padding_;
        dVar10 = dVar9 * (double)local_7d8._padding_;
        auVar76._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar74 >> 0x20) & uVar25,SUB84(dVar74,0) & uVar42);
        auVar76._8_4_ = local_468._8_4_ & uVar45;
        auVar76._12_4_ = local_468._12_4_ & uVar26;
        dVar10 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar25,
                                  SUB84(dVar12,0) & uVar42) + auVar76._0_8_ +
                 (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & uVar25,
                                  SUB84(dVar10,0) & uVar42);
        dVar9 = ((dVar11 + dStack_470) * (double)local_7d8._padding_ +
                 (dVar73 + local_478) * (double)local_7d8._padding_ +
                (dVar9 + local_468._0_8_) * (double)local_7d8._padding_) - local_7d8.W;
        if (dVar10 < dVar9) {
          if (((local_8e0.AllocatorInstance.Data <= &pFVar44->VertexData) &&
              (&pFVar44->VertexData <
               local_8e0.AllocatorInstance.Data + (longlong)local_8e0.ArrayMax * 0x10)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar24 = local_8e0.ArrayNum;
          if (local_8e0.ArrayNum == local_8e0.ArrayMax) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_8e0.AllocatorInstance,&local_8e0.ArrayMax);
          }
          local_8e0.ArrayNum = iVar24 + 1;
          FVar41.Data = local_8e0.AllocatorInstance.Data;
LAB_14d27a2b2:
          pTVar53 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)FVar41.Data + (longlong)iVar24 * 0x10);
          (pTVar53->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          iVar24 = (pFVar44->VertexData).ArrayNum;
          pFVar43 = (pFVar44->VertexData).AllocatorInstance.Data;
          pTVar53->ArrayNum = iVar24;
          if (iVar24 == 0) {
            pTVar53->ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar24,0,(ForAnyElementType *)pTVar53,iVar24,&pTVar53->ArrayMax);
            memcpy((pTVar53->AllocatorInstance).Data,pFVar43,(longlong)iVar24 * 0x18);
          }
        }
        else if ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar19,
                                  SUB84(dVar10,0) ^ uVar18) <= dVar9) {
          local_828.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_828.ArrayNum = 0;
          local_828.ArrayMax = 0;
          SliceConvexElem(pFVar44,&local_7d8,&local_828);
          if (3 < local_828.ArrayNum) {
            if (((local_8e0.AllocatorInstance.Data <= &local_828) &&
                (&local_828 <
                 (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                 (local_8e0.AllocatorInstance.Data + (longlong)local_8e0.ArrayMax * 0x10))) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar23)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar24 = local_8e0.ArrayNum;
            if (local_8e0.ArrayNum == local_8e0.ArrayMax) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_8e0.AllocatorInstance,&local_8e0.ArrayMax);
            }
            FVar41.Data = local_828.AllocatorInstance.Data;
            pFVar43 = local_8e0.AllocatorInstance.Data + (longlong)iVar24 * 0x10;
            local_8e0.ArrayNum = iVar24 + 1;
            *(FScriptContainerElement **)&pFVar43->field_0x0 = (FScriptContainerElement *)0x0;
            lVar49 = (longlong)local_828.ArrayNum;
            *(int *)(pFVar43 + 8) = local_828.ArrayNum;
            if (local_828.ArrayNum == 0) {
              *(int *)(pFVar43 + 0xc) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,local_828.ArrayNum,0,(ForAnyElementType *)pFVar43,local_828.ArrayNum
                         ,(int *)(pFVar43 + 0xc));
              memcpy(*(FScriptContainerElement **)&pFVar43->field_0x0,FVar41.Data,lVar49 * 0x18);
            }
          }
          if (param_4) {
            local_578._padding_._0_4_ = (uint)local_7d8._padding_ ^ uVar18;
            local_578._padding_._4_4_ = local_7d8._padding_._4_4_ ^ uVar19;
            local_578._padding_._0_4_ = (uint)local_7d8._padding_ ^ uVar20;
            local_578._padding_._4_4_ = local_7d8._padding_._4_4_ ^ uVar21;
            local_818.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_578._padding_._0_4_ = (uint)local_7d8._padding_ ^ uVar18;
            local_578._padding_._4_4_ = local_7d8._padding_._4_4_ ^ uVar19;
            local_578.W._0_4_ = local_7d8.W._0_4_ ^ uVar20;
            local_578.W._4_4_ = local_7d8.W._4_4_ ^ uVar21;
            local_818.ArrayNum = 0;
            local_818.ArrayMax = 0;
            SliceConvexElem(pFVar44,&local_578,&local_818);
            if (3 < local_818.ArrayNum) {
              if (((local_8d0.AllocatorInstance.Data <= &local_818) &&
                  (&local_818 <
                   (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                   (local_8d0.AllocatorInstance.Data + (longlong)local_8d0.ArrayMax * 0x10))) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar23)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar24 = local_8d0.ArrayNum;
              if (local_8d0.ArrayNum == local_8d0.ArrayMax) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_8d0.AllocatorInstance,&local_8d0.ArrayMax);
              }
              FVar41.Data = local_818.AllocatorInstance.Data;
              pFVar43 = local_8d0.AllocatorInstance.Data + (longlong)iVar24 * 0x10;
              local_8d0.ArrayNum = iVar24 + 1;
              *(FScriptContainerElement **)&pFVar43->field_0x0 = (FScriptContainerElement *)0x0;
              lVar49 = (longlong)local_818.ArrayNum;
              *(int *)(pFVar43 + 8) = local_818.ArrayNum;
              if (local_818.ArrayNum == 0) {
                *(int *)(pFVar43 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,local_818.ArrayNum,0,(ForAnyElementType *)pFVar43,
                           local_818.ArrayNum,(int *)(pFVar43 + 0xc));
                memcpy(*(FScriptContainerElement **)&pFVar43->field_0x0,FVar41.Data,lVar49 * 0x18);
              }
            }
            if (local_818.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_818.AllocatorInstance.Data);
            }
          }
          if (local_828.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_828.AllocatorInstance.Data);
          }
        }
        else if (param_4) {
          if (((local_8d0.AllocatorInstance.Data <= &pFVar44->VertexData) &&
              (&pFVar44->VertexData <
               local_8d0.AllocatorInstance.Data + (longlong)local_8d0.ArrayMax * 0x10)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar24 = local_8d0.ArrayNum;
          if (local_8d0.ArrayNum == local_8d0.ArrayMax) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_8d0.AllocatorInstance,&local_8d0.ArrayMax);
          }
          local_8d0.ArrayNum = iVar24 + 1;
          FVar41.Data = local_8d0.AllocatorInstance.Data;
          goto LAB_14d27a2b2;
        }
        iVar24 = *(int *)(lVar35 + 0x70);
        uVar57 = uVar57 + 0x100;
        uVar48 = (ulonglong)(uVar59 + 1);
      } while ((int)(uVar59 + 1) < iVar24);
    }
    pUVar58 = local_848;
    lVar35 = 0;
    UProceduralMeshComponent::SetCollisionConvexMeshes(local_848,&local_8e0);
    if (param_4) {
      pUVar5 = (UObject *)pUVar58->_padding_;
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar32 = UProceduralMeshComponent::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_418,pUVar32);
      local_418._8_8_ = pUVar5;
      pUVar33 = (UProceduralMeshComponent *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_418);
      if (local_418._64_8_ != 0) {
        plVar37 = (longlong *)(local_418 + 0x50);
        if ((longlong *)local_418._104_8_ != (longlong *)0x0) {
          plVar37 = (longlong *)local_418._104_8_;
        }
        (**(code **)(*plVar37 + 0x10))();
      }
      ppUVar22 = local_780;
      *local_780 = pUVar33;
      USceneComponent::SetWorldTransform
                ((USceneComponent *)pUVar33,(TTransform<double> *)&pUVar58->_padding_,false,
                 (FHitResult *)0x0,None);
      uVar42 = 0;
      ppUVar50 = ppUVar22;
      if (0 < (int)local_8f8) {
        do {
          pUVar58 = *ppUVar22;
          uVar25 = 0;
          if ((int)uVar42 < (int)local_8f8) {
            uVar25 = ~uVar42 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          UProceduralMeshComponent::SetProcMeshSection
                    (pUVar58,uVar42,
                     (FProcMeshSection *)(local_900.Data + (longlong)(int)uVar42 * 0x60));
          pUVar58 = *ppUVar22;
          pcVar6 = *(code **)(pUVar58->_padding_ + 0x6b8);
          uVar25 = 0;
          if ((int)uVar42 < (int)local_8e8) {
            uVar25 = ~uVar42 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          (*pcVar6)(pUVar58,uVar42,*(undefined8 *)(local_8f0.Data + lVar35));
          uVar42 = uVar42 + 1;
          lVar35 = lVar35 + 8;
          ppUVar50 = local_780;
          pUVar58 = local_848;
        } while ((int)uVar42 < (int)local_8f8);
      }
      pUVar33 = *ppUVar50;
      pcVar6 = *(code **)(pUVar33->_padding_ + 0x788);
      FVar34 = UPrimitiveComponent::GetCollisionProfileName((UPrimitiveComponent *)pUVar58);
      (*pcVar6)(pUVar33,*(undefined8 *)FVar34,1);
      pUVar33 = *ppUVar50;
      pcVar6 = *(code **)(pUVar33->_padding_ + 0x780);
      uVar29 = (**(code **)(pUVar58->_padding_ + 0x5e0))(pUVar58);
      (*pcVar6)(pUVar33,uVar29);
      (*ppUVar50)->bUseComplexAsSimpleCollision = pUVar58->bUseComplexAsSimpleCollision;
      UProceduralMeshComponent::SetCollisionConvexMeshes(*ppUVar50,&local_8d0);
      UActorComponent::RegisterComponent((UActorComponent *)*ppUVar50);
    }
    DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               local_8d0.AllocatorInstance.Data,local_8d0.ArrayNum);
    if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
        local_8d0.AllocatorInstance.Data !=
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_8d0.AllocatorInstance.Data);
    }
    DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               local_8e0.AllocatorInstance.Data,local_8e0.ArrayNum);
    if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
        local_8e0.AllocatorInstance.Data !=
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_8e0.AllocatorInstance.Data);
    }
    if (local_858.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.AllocatorInstance.Data);
    }
    if (local_8f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f0.Data);
    }
    DestructItems<FProcMeshSection,int>((FProcMeshSection *)local_900.Data,local_8f8);
    if ((FProcMeshSection *)local_900.Data != (FProcMeshSection *)0x0) {
      FMemory::Free(local_900.Data);
    }
  }
  return;
}

// StaticRegisterNativesUKismetProceduralMeshLibrary @ 14d27a620

void __cdecl UKismetProceduralMeshLibrary::StaticRegisterNativesUKismetProceduralMeshLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCalculateTangentsForMesh @ 14d27ddb0

void __cdecl
UKismetProceduralMeshLibrary::execCalculateTangentsForMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_48;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pTVar4 = &local_28;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar6 = &local_38;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pTVar5 = &local_48;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pTVar2 = &local_58;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pTVar3 = &local_68;
  if ((TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CalculateTangentsForMesh(pTVar4,pTVar6,pTVar5,pTVar2,pTVar3);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execConvertQuadToTriangles @ 14d27e150

void __cdecl
UKismetProceduralMeshLibrary::execConvertQuadToTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  int local_res20 [2];
  int local_28;
  int local_24;
  TArray<int,TSizedDefaultAllocator<32>_> local_20;
  
  local_20.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ArrayNum = 0;
  local_20.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  local_24 = 0;
  pTVar2 = &local_20;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_24,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_24);
  }
  local_28 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ConvertQuadToTriangles(pTVar2,local_24,local_28,local_res20[0],local_res10[0]);
  if (local_20.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.AllocatorInstance.Data);
  }
  return;
}

// execCopyProceduralMeshFromStaticMeshComponent @ 14d27e310

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UKismetProceduralMeshLibrary::execCopyProceduralMeshFromStaticMeshComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UStaticMesh *pUVar3;
  UBodySetup *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  UProceduralMeshComponent *this;
  int iVar7;
  int iVar8;
  UMaterialInterface *pUVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UStaticMeshComponent *this_00;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  longlong local_res10;
  int local_res20 [2];
  int local_f8 [2];
  UProceduralMeshComponent *local_f0;
  UStaticMeshComponent *local_e8;
  UStaticMeshComponent *local_e0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_c8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_78;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_48;
  
  uVar14 = 0;
  local_e8 = (UStaticMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_f8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_f0 = (UProceduralMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  this_00 = local_e8;
  this = local_f0;
  iVar8 = local_f8[0];
  bVar17 = local_res20[0] != 0;
  local_e0 = local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_e8 != (UStaticMeshComponent *)0x0) {
    pUVar3 = (local_e8->StaticMesh).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 == (UStaticMesh *)0x0) {
        return;
      }
    }
    else {
      if (pUVar3 == (UStaticMesh *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if (this != (UProceduralMeshComponent *)0x0) {
      pUVar3 = (this_00->StaticMesh).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      iVar7 = UStaticMesh::GetNumSections(pUVar3,iVar8);
      if (0 < iVar7) {
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
        local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.ArrayNum = 0;
        local_58.ArrayMax = 0;
        local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ArrayNum = 0;
        local_68.ArrayMax = 0;
        uVar12 = uVar14;
        do {
          local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.ArrayNum = 0;
          local_88.ArrayMax = 0;
          iVar10 = (int)uVar12;
          local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.ArrayNum = 0;
          local_98.ArrayMax = 0;
          local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.ArrayNum = 0;
          local_a8.ArrayMax = 0;
          local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b8.ArrayNum = 0;
          local_b8.ArrayMax = 0;
          local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.ArrayNum = 0;
          local_c8.ArrayMax = 0;
          GetSectionFromStaticMesh
                    (pUVar3,iVar8,iVar10,&local_88,&local_98,&local_a8,&local_b8,&local_c8);
          local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.ArrayNum = 0;
          local_78.ArrayMax = 0;
          UProceduralMeshComponent::CreateMeshSection
                    (this,iVar10,&local_88,&local_98,&local_a8,&local_b8,&local_48,&local_58,
                     &local_68,&local_78,&local_c8,bVar17);
          if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.AllocatorInstance.Data);
          }
          if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.AllocatorInstance.Data);
          }
          if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.AllocatorInstance.Data);
          }
          if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.AllocatorInstance.Data);
          }
          if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.AllocatorInstance.Data);
          }
          if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.AllocatorInstance.Data);
          }
          uVar12 = (ulonglong)(iVar10 + 1U);
          this_00 = local_e0;
        } while ((int)(iVar10 + 1U) < iVar7);
      }
      UProceduralMeshComponent::ClearCollisionConvexMeshes(this);
      pUVar4 = (pUVar3->BodySetup).field0_0x0.DebugPtr;
      if ((pUVar4 != (UBodySetup *)0x0) &&
         (local_res10 = (longlong)(pUVar4->AggGeom).ConvexElems.ArrayNum, uVar12 = uVar14,
         uVar16 = uVar14, 0 < local_res10)) {
        do {
          pUVar4 = (pUVar3->BodySetup).field0_0x0.DebugPtr;
          uVar11 = (uint)uVar12;
          uVar13 = 0;
          if ((int)uVar11 < (pUVar4->AggGeom).ConvexElems.ArrayNum) {
            uVar13 = ~uVar11 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (pUVar4->AggGeom).ConvexElems.AllocatorInstance.Data;
          local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.ArrayNum = *(int *)(pFVar5 + uVar16 + 0x38);
          lVar15 = (longlong)local_d8.ArrayNum;
          local_e0 = *(UStaticMeshComponent **)(pFVar5 + uVar16 + 0x30);
          if (local_d8.ArrayNum == 0) {
            local_d8.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,local_d8.ArrayNum,0,&local_d8.AllocatorInstance,local_d8.ArrayNum,
                       &local_d8.ArrayMax);
            memcpy(local_d8.AllocatorInstance.Data,local_e0,lVar15 * 0x18);
          }
          UProceduralMeshComponent::AddCollisionConvexMesh(this,&local_d8);
          local_res10 = local_res10 + -1;
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar16 = uVar16 + 0x100;
        } while (local_res10 != 0);
      }
      iVar8 = (**(code **)(this_00->_padding_ + 0x810))(this_00);
      if (0 < iVar8) {
        do {
          pcVar6 = *(code **)(this->_padding_ + 0x6b8);
          pUVar9 = UStaticMeshComponent::GetMaterial(this_00,(int)uVar14);
          (*pcVar6)(this,uVar14,pUVar9);
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          iVar8 = (**(code **)(this_00->_padding_ + 0x810))(this_00);
        } while ((int)uVar13 < iVar8);
      }
    }
  }
  return;
}

// execCreateGridMeshSplit @ 14d27e780

void __cdecl
UKismetProceduralMeshLibrary::execCreateGridMeshSplit
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  float local_res10 [2];
  int local_res20 [2];
  int local_78 [2];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_60;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_50;
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  local_78[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  pTVar3 = &local_40;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  pTVar5 = &local_50;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  pTVar4 = &local_60;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res10[0] = 0.0;
  pTVar2 = &local_70;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CreateGridMeshSplit(local_78[0],local_res20[0],pTVar3,pTVar5,pTVar4,pTVar2,local_res10[0]);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// execCreateGridMeshTriangles @ 14d27ea30

void __cdecl
UKismetProceduralMeshLibrary::execCreateGridMeshTriangles
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  int iVar2;
  FField **ppFVar3;
  FProperty *pFVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  bool bVar11;
  int local_res20 [2];
  int local_58;
  int local_54;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  local_54 = 0;
  FIntProperty::StaticClass();
  ppFVar3 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_54,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_54);
  }
  local_58 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar11 = local_res20[0] == 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  iVar2 = local_54;
  iVar5 = local_58;
  pTVar9 = &local_50;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar9->ArrayNum = 0;
  if (pTVar9->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar9->AllocatorInstance,0,&pTVar9->ArrayMax);
  }
  if (((1 < iVar2) && (1 < iVar5)) && (uVar1 = iVar2 - 1, 0 < (int)uVar1)) {
    iVar2 = iVar5 + -1;
    iVar10 = 1;
    uVar8 = (ulonglong)uVar1;
    do {
      if (0 < iVar2) {
        lVar7 = (longlong)iVar2;
        iVar6 = iVar10;
        if (bVar11) {
          do {
            ConvertQuadToTriangles(pTVar9,iVar6 + -1,iVar6,iVar6 + iVar5,iVar6 + iVar2);
            iVar6 = iVar6 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        else {
          do {
            ConvertQuadToTriangles(pTVar9,iVar6 + -1,iVar6 + iVar2,iVar6 + iVar5,iVar6);
            lVar7 = lVar7 + -1;
            iVar6 = iVar6 + 1;
          } while (lVar7 != 0);
        }
      }
      iVar10 = iVar10 + iVar5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// execCreateGridMeshWelded @ 14d27eca0

void __cdecl
UKismetProceduralMeshLibrary::execCreateGridMeshWelded
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  float local_res10 [4];
  int local_res20 [2];
  int local_68 [2];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_60;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_50;
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  
  local_68[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  pTVar4 = &local_40;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  pTVar3 = &local_50;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res10[0] = 0.0;
  pTVar2 = &local_60;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CreateGridMeshWelded(local_68[0],local_res20[0],pTVar4,pTVar3,pTVar2,local_res10[0]);
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// execGenerateBoxMesh @ 14d27f740

void __cdecl
UKismetProceduralMeshLibrary::execGenerateBoxMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_98;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_68;
  double local_58;
  double dStack_50;
  double local_48;
  TVector<double>_u_0 local_38;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pTVar4 = &local_68;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pTVar6 = &local_78;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  pTVar5 = &local_88;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  pTVar3 = &local_98;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pTVar2 = &local_a8;
  if ((TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  local_38._s_0.X = local_58;
  local_38._s_0.Y = dStack_50;
  local_38._s_0.Z = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GenerateBoxMesh((TVector<double> *)&local_38._s_0,pTVar4,pTVar6,pTVar5,pTVar3,pTVar2);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execGetSectionFromProceduralMesh @ 14d27fa20

void __cdecl
UKismetProceduralMeshLibrary::execGetSectionFromProceduralMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res10 [2];
  UProceduralMeshComponent *local_res20;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_78;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  
  local_res20 = (UProceduralMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar4 = &local_38;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pTVar6 = &local_48;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pTVar5 = &local_58;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pTVar3 = &local_68;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar2 = &local_78;
  if ((TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetSectionFromProceduralMesh(local_res20,local_res10[0],pTVar4,pTVar6,pTVar5,pTVar3,pTVar2);
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execGetSectionFromStaticMesh @ 14d27fcf0

void __cdecl
UKismetProceduralMeshLibrary::execGetSectionFromStaticMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res10 [2];
  int local_res20 [2];
  UStaticMesh *local_88;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_80;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_40;
  
  local_88 = (UStaticMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  pTVar4 = &local_40;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  pTVar6 = &local_50;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  pTVar5 = &local_60;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  pTVar3 = &local_70;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pTVar2 = &local_80;
  if ((TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetSectionFromStaticMesh
            (local_88,local_res20[0],local_res10[0],pTVar4,pTVar6,pTVar5,pTVar3,pTVar2);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// execSliceProceduralMesh @ 14d2801d0

void __cdecl
UKismetProceduralMeshLibrary::execSliceProceduralMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UProceduralMeshComponent **ppUVar2;
  bool bVar3;
  EProcMeshSliceCapOption local_res10 [8];
  int local_res20 [2];
  UProceduralMeshComponent *local_a8;
  UMaterialInterface *local_a0;
  UProceduralMeshComponent *local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38;
  
  local_98 = (UProceduralMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
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
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  local_a8 = (UProceduralMeshComponent *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = NoCap;
  ppUVar2 = &local_a8;
  if ((UProceduralMeshComponent **)param_2->MostRecentPropertyAddress !=
      (UProceduralMeshComponent **)0x0) {
    ppUVar2 = (UProceduralMeshComponent **)param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_a0 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_58._s_0.X = local_90;
  local_58._s_0.Y = dStack_88;
  local_58._s_0.Z = local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38._s_0.X = local_78;
  local_38._s_0.Y = dStack_70;
  local_38._s_0.Z = local_68;
  SliceProceduralMesh(local_98,(TVector<double> *)&local_38._s_0,(TVector<double> *)&local_58._s_0,
                      bVar3,ppUVar2,local_res10[0],local_a0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*ppUVar2 != (UProceduralMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)*ppUVar2);
  }
  return;
}

