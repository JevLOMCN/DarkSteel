// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// BuildMeshSections @ 14407ccf0

TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> * __cdecl
FGeometryCollectionSection::BuildMeshSections
          (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FManagedArrayCollection *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FName FVar7;
  ForAnyElementType FVar8;
  TManagedArray<int> *pTVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar15;
  TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *pTVar16;
  TTuple<FName,FManagedArrayCollection::FGroupInfo> *pTVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  uint *puVar26;
  uint *puVar27;
  uint uVar28;
  uint *puVar29;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  uint local_a8;
  ForAnyElementType local_a0;
  int local_98 [4];
  longlong local_88;
  TManagedArray<int> *local_80;
  longlong local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  FVar7 = FGeometryCollection::FacesGroup;
  puVar22 = (uint *)0x0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  pFVar14 = ::FName::FName(&local_60,"MaterialID");
  local_68 = FVar7;
  local_70 = *pFVar14;
  pTVar15 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  FVar7 = FGeometryCollection::FacesGroup;
  puVar18 = (uint *)&pTVar15->field_0x10;
  if (pTVar15 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    puVar18 = puVar22;
  }
  if ((puVar18 != (uint *)0x0) && ((char)*puVar18 == '\x05')) {
    if (*(longlong *)(puVar18 + 8) == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedManagedArray != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                          ,0x306,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar16;
      }
    }
    else {
      pFVar14 = ::FName::FName(local_58,"MaterialID");
      local_80 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar14,FVar7);
      local_a8 = 0;
      local_88 = -1;
      uVar11 = 0;
      if (0 < param_2->ArrayNum) {
        local_78 = 0;
        puVar18 = puVar22;
        do {
          lVar24 = local_78;
          pTVar9 = local_80;
          uVar20 = (uint)puVar18;
          uVar23 = 0;
          uVar21 = uVar23;
          if ((int)uVar20 < param_3->ArrayNum) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          uVar21 = *(uint *)((param_3->AllocatorInstance).Data + lVar24);
          uVar12 = uVar23;
          if ((int)uVar21 < *(int *)&pTVar9->field_0x18) {
            uVar12 = ~uVar21 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          uVar21 = *(uint *)(*(longlong *)&pTVar9->field_0x10 + (longlong)(int)uVar21 * 4);
          uVar12 = (uint)local_c0;
          uVar19 = local_c0;
          while (local_c0 = uVar19, (int)uVar12 < (int)(uVar21 + 1)) {
            local_c0._4_4_ = (uint)(uVar19 >> 0x20);
            bVar10 = uVar12 == local_c0._4_4_;
            if (bVar10) {
              uVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_c8,(int *)((longlong)&local_c0 + 4));
            }
            local_c0 = CONCAT44(local_c0._4_4_,uVar12 + 1);
            lVar24 = (longlong)(int)uVar12 * 0x20;
            uVar28 = ~uVar12 >> 0x1f;
            *(undefined8 *)(local_c8.Data + lVar24) = 0;
            *(undefined8 *)(local_c8.Data + lVar24 + 8) = 0;
            *(undefined8 *)(local_c8.Data + lVar24 + 0x10) = 0;
            *(undefined8 *)(local_c8.Data + lVar24 + 0x10 + 8) = 0;
            uVar20 = uVar23;
            if ((int)uVar12 < (int)(uVar12 + 1)) {
              uVar20 = uVar28;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
            *(uint *)(local_c8.Data + lVar24) = uVar12;
            uVar20 = uVar23;
            if ((int)uVar12 < (int)(uint)local_c0) {
              uVar20 = uVar28;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
            *(undefined4 *)(local_c8.Data + lVar24 + 4) = 0xffffffff;
            uVar20 = uVar11;
            if ((int)uVar12 < (int)(uint)local_c0) {
              uVar20 = uVar28;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
            *(undefined4 *)(local_c8.Data + lVar24 + 8) = 0;
            uVar20 = uVar11;
            if ((int)uVar12 < (int)(uint)local_c0) {
              uVar20 = uVar28;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
            *(undefined4 *)(local_c8.Data + lVar24 + 0xc) = 0;
            uVar20 = uVar11;
            if ((int)uVar12 < (int)(uint)local_c0) {
              uVar20 = uVar28;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
            *(undefined4 *)(local_c8.Data + lVar24 + 0x10) = 0;
            uVar20 = local_a8;
            uVar19 = local_c0;
            lVar24 = local_78;
            uVar12 = (uint)local_c0;
          }
          uVar23 = uVar11;
          if ((int)uVar21 < (int)uVar12) {
            uVar23 = ~uVar21 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          local_a8 = uVar20 + 1;
          puVar18 = (uint *)(ulonglong)local_a8;
          local_78 = lVar24 + 4;
          *(int *)(local_c8.Data + (longlong)(int)uVar21 * 0x20 + 8) =
               *(int *)(local_c8.Data + (longlong)(int)uVar21 * 0x20 + 8) + 1;
        } while ((int)local_a8 < param_2->ArrayNum);
      }
      if (0 < (int)(uint)local_c0) {
        puVar18 = puVar22;
        puVar26 = puVar22;
        do {
          uVar20 = (uint)puVar18;
          if (uVar20 == 0) {
            if (((int)(uint)local_c0 < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
            uVar23 = 1;
            *(undefined4 *)((longlong)(puVar26 + 1) + local_c8.Data) = 0;
          }
          else {
            uVar21 = uVar11;
            if ((int)(uVar20 - 1) < (int)(uint)local_c0) {
              uVar21 = -uVar20 >> 0x1f;
            }
            iVar13 = (uint)local_c0;
            if (uVar21 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                          (*pcVar6)();
                return pTVar16;
              }
              iVar13 = (uint)local_c0;
            }
            FVar8.Data = local_c8.Data;
            uVar21 = uVar11;
            if ((int)(uVar20 - 1) < iVar13) {
              uVar21 = -uVar20 >> 0x1f;
            }
            if (uVar21 == 0) {
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar10) {
                pcVar6 = (code *)swi(3);
                pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                          (*pcVar6)();
                return pTVar16;
              }
              iVar13 = (uint)local_c0;
            }
            iVar2 = *(int *)(FVar8.Data + -0x18 + (longlong)puVar26);
            uVar23 = ~uVar20 >> 0x1f;
            iVar3 = *(int *)((longlong)(puVar26 + -7) + local_c8.Data);
            uVar21 = uVar11;
            if ((int)uVar20 < iVar13) {
              uVar21 = uVar23;
            }
            if ((uVar21 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
            *(int *)((longlong)(puVar26 + 1) + local_c8.Data) = iVar2 * 3 + iVar3;
          }
          pTVar17 = TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,FManagedArrayCollection::FGroupInfo>,TDefaultMapHashableKeyFuncs<FName,FManagedArrayCollection::FGroupInfo,0>,FDefaultSetAllocator>
                            *)&param_1->GroupInfo,FGeometryCollection::VerticesGroup);
          puVar18 = (uint *)&pTVar17->field_0x8;
          if (pTVar17 == (TTuple<FName,FManagedArrayCollection::FGroupInfo> *)0x0) {
            puVar18 = puVar22;
          }
          uVar21 = uVar11;
          if (puVar18 != (uint *)0x0) {
            uVar21 = *puVar18;
          }
          if (((uVar23 & (int)uVar20 < (int)(uint)local_c0) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          local_88 = local_88 + 1;
          puVar18 = (uint *)(ulonglong)(uVar20 + 1);
          *(uint *)((longlong)(puVar26 + 4) + local_c8.Data) = uVar21 - 1;
          puVar26 = puVar26 + 8;
        } while ((int)(uVar20 + 1) < (int)(uint)local_c0);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_2->ArrayNum,&param_4->AllocatorInstance,&param_4->ArrayNum,
                 &param_4->ArrayMax);
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98[0] = 0;
      local_98[1] = 0;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(uint)local_c0,&local_a0,local_98,local_98 + 1);
      puVar18 = puVar22;
      puVar26 = puVar22;
      puVar27 = puVar22;
      puVar29 = puVar22;
      uVar20 = (uint)local_c0;
      if (0 < (int)(uint)local_c0) {
        do {
          uVar21 = (uint)puVar18;
          uVar20 = uVar11;
          if ((int)uVar21 < local_98[0]) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          *(int *)((longlong)puVar29 + local_a0.Data) = (int)puVar26;
          uVar20 = uVar11;
          if ((int)uVar21 < (int)(uint)local_c0) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if (uVar20 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
          }
          puVar18 = (uint *)(ulonglong)(uVar21 + 1);
          puVar26 = (uint *)(ulonglong)
                            (uint)((int)puVar26 + *(int *)((longlong)(puVar27 + 2) + local_c8.Data))
          ;
          puVar27 = puVar27 + 8;
          puVar29 = puVar29 + 1;
          uVar20 = (uint)local_c0;
        } while ((int)(uVar21 + 1) < (int)(uint)local_c0);
      }
      puVar18 = puVar22;
      puVar26 = puVar22;
      puVar27 = puVar22;
      if (0 < param_2->ArrayNum) {
        do {
          uVar21 = (uint)puVar18;
          uVar20 = uVar11;
          if ((int)uVar21 < param_3->ArrayNum) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          uVar20 = *(uint *)((longlong)puVar26 + (longlong)(param_3->AllocatorInstance).Data);
          uVar23 = uVar11;
          if ((int)uVar20 < *(int *)&local_80->field_0x18) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          uVar20 = *(uint *)(*(longlong *)&local_80->field_0x10 + (longlong)(int)uVar20 * 4);
          uVar23 = uVar11;
          if ((int)uVar20 < local_98[0]) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          pFVar25 = local_a0.Data + (longlong)(int)uVar20 * 4;
          uVar20 = uVar11;
          if ((int)uVar21 < param_2->ArrayNum) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          uVar20 = *(uint *)pFVar25;
          pFVar5 = (param_2->AllocatorInstance).Data;
          uVar1 = *(undefined8 *)(pFVar5 + (longlong)puVar27);
          uVar4 = *(undefined4 *)(pFVar5 + 8 + (longlong)puVar27);
          *(uint *)pFVar25 = uVar20 + 1;
          uVar23 = uVar11;
          if ((int)uVar20 < param_4->ArrayNum) {
            uVar23 = ~uVar20 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
            return pTVar16;
          }
          pFVar25 = (param_4->AllocatorInstance).Data;
          *(undefined8 *)(pFVar25 + (longlong)(int)uVar20 * 0xc) = uVar1;
          *(undefined4 *)(pFVar25 + (longlong)(int)uVar20 * 0xc + 8) = uVar4;
          puVar18 = (uint *)(ulonglong)(uVar21 + 1);
          puVar26 = puVar26 + 1;
          puVar27 = puVar27 + 3;
        } while ((int)(uVar21 + 1) < param_2->ArrayNum);
        uVar20 = (uint)local_c0;
      }
      uVar19 = (ulonglong)uVar20;
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar19);
      }
      if (local_b0._4_4_ < (int)uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,uVar20,&local_b8,(int)local_b0,(int *)((longlong)&local_b0 + 4));
        uVar19 = local_c0 & 0xffffffff;
      }
      puVar18 = puVar22;
      if (0 < (int)uVar19) {
        do {
          uVar21 = (uint)puVar22;
          uVar20 = uVar11;
          if ((int)uVar21 < (int)uVar19) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if (uVar20 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
            uVar19 = local_c0 & 0xffffffff;
          }
          if (0 < *(int *)((longlong)(puVar18 + 2) + local_c8.Data)) {
            uVar20 = uVar11;
            if ((int)uVar21 < (int)uVar19) {
              uVar20 = ~uVar21 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
            pFVar25 = local_c8.Data + (longlong)puVar18;
            if (((local_b8.Data <= pFVar25) &&
                (pFVar25 < local_b8.Data + (longlong)local_b0._4_4_ * 0x20)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar6 = (code *)swi(3);
              pTVar16 = (TArray<FGeometryCollectionSection,TSizedDefaultAllocator<32>_> *)
                        (*pcVar6)();
              return pTVar16;
            }
            iVar13 = (int)local_b0;
            if ((int)local_b0 == local_b0._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_b8,(int *)((longlong)&local_b0 + 4));
            }
            local_b0 = CONCAT44(local_b0._4_4_,iVar13 + 1);
            uVar1 = *(undefined8 *)(pFVar25 + 8);
            *(undefined8 *)(local_b8.Data + (longlong)iVar13 * 0x20) = *(undefined8 *)pFVar25;
            *(undefined8 *)(local_b8.Data + (longlong)iVar13 * 0x20 + 8) = uVar1;
            uVar1 = *(undefined8 *)(pFVar25 + 0x18);
            *(undefined8 *)(local_b8.Data + (longlong)iVar13 * 0x20 + 0x10) =
                 *(undefined8 *)(pFVar25 + 0x10);
            *(undefined8 *)(local_b8.Data + (longlong)iVar13 * 0x20 + 0x10 + 8) = uVar1;
            uVar19 = local_c0 & 0xffffffff;
          }
          puVar22 = (uint *)(ulonglong)(uVar21 + 1);
          puVar18 = puVar18 + 8;
        } while ((int)(uVar21 + 1) < (int)uVar19);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
    }
  }
  FVar8.Data = local_b8.Data;
  local_b8.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = FVar8.Data;
  __return_storage_ptr__->ArrayNum = (int)local_b0;
  __return_storage_ptr__->ArrayMax = local_b0._4_4_;
  local_b0 = 0;
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return __return_storage_ptr__;
}

