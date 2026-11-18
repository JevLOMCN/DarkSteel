// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146f117b0

UClass * __cdecl UEnvQueryTest_Dot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Dot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Dot",
               &Z_Registration_Info_UClass_UEnvQueryTest_Dot.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Dot,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Dot>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Dot>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Dot.InnerSingleton;
}

// UEnvQueryTest_Dot @ 146f2cee0

UEnvQueryTest_Dot * __thiscall
UEnvQueryTest_Dot::UEnvQueryTest_Dot(UEnvQueryTest_Dot *this,FVTableHelper *param_1)

{
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Dot__6B_;
  (this->LineA).LineFrom.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineA).LineTo.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineA).Rotation.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineA).DirMode.Value = '\0';
  (this->LineB).LineFrom.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineB).LineTo.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineB).Rotation.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineB).DirMode.Value = '\0';
  return this;
}

// UEnvQueryTest_Dot @ 146f2cf40

UEnvQueryTest_Dot * __thiscall
UEnvQueryTest_Dot::UEnvQueryTest_Dot(UEnvQueryTest_Dot *this,FObjectInitializer *param_1)

{
  UClass *pUVar1;
  
  UEnvQueryTest::UEnvQueryTest((UEnvQueryTest *)this,param_1);
  this->_padding_ = (longlong)&___7UEnvQueryTest_Dot__6B_;
  (this->LineA).LineFrom.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineA).LineTo.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineA).Rotation.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineA).DirMode.Value = '\0';
  (this->LineB).LineFrom.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineB).LineTo.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineB).Rotation.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LineB).DirMode.Value = '\0';
  *(undefined1 *)&this->_padding_ = 0;
  pUVar1 = UEnvQueryItemType_VectorBase::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->_padding_ = (longlong)pUVar1;
  (this->LineA).DirMode.Value = '\x01';
  pUVar1 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->LineA).Rotation.Class.field0_0x0.DebugPtr = pUVar1;
  (this->LineB).DirMode.Value = '\0';
  pUVar1 = UEnvQueryContext_Querier::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->LineB).LineFrom.Class.field0_0x0.DebugPtr = pUVar1;
  pUVar1 = UEnvQueryContext_Item::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->LineB).LineTo.Class.field0_0x0.DebugPtr = pUVar1;
  this->TestMode = Dot3D;
  this->bAbsoluteValue = false;
  return this;
}

// ~UEnvQueryTest_Dot @ 146f2f130

void __thiscall UEnvQueryTest_Dot::~UEnvQueryTest_Dot(UEnvQueryTest_Dot *this)

{
  this->_padding_ = (longlong)&___7UEnvQueryTest_Dot__6B_;
  UEnvQueryTest::~UEnvQueryTest((UEnvQueryTest *)this);
  return;
}

// GatherLineDirections @ 146f4a930

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
UEnvQueryTest_Dot::GatherLineDirections
          (UEnvQueryTest_Dot *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FEnvQueryInstance *param_2,TRotator<double> *param_3,TSubclassOf<UEnvQueryContext> param_4
          )

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TVector<double>_u_0 *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  uint uVar12;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_48;
  TVector<double>_u_0 local_38;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pUVar11 = *(UClass **)param_4.Class.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar11 == (UClass *)0x0) goto LAB_146f4a9b9;
    UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_146f4a98b:
    pUVar10 = UEnvQueryContext::StaticClass();
    if (pUVar10 == (UClass *)0x0) goto LAB_146f4a9b9;
    iVar8 = (int)pUVar10->_padding_;
    if (((int)pUVar11->_padding_ < iVar8) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar8 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_146f4a9b9;
  }
  else {
    if (pUVar11 != (UClass *)0x0) goto LAB_146f4a98b;
LAB_146f4a9b9:
    pUVar11 = (UClass *)0x0;
  }
  pUVar10 = UEnvQueryContext_Item::StaticClass();
  if (pUVar11 == pUVar10) {
    if (((local_48.AllocatorInstance.Data <= param_3) &&
        (param_3 < (TRotator<double> *)
                   (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x18))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = local_48.ArrayNum;
    if (local_48.ArrayNum == local_48.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&local_48.AllocatorInstance,&local_48.ArrayMax);
    }
    dVar6 = param_3->Yaw;
    local_48.ArrayNum = iVar8 + 1;
    *(double *)&local_48.AllocatorInstance.Data[(longlong)iVar8 * 0x18].field_0x0 = param_3->Pitch;
    *(double *)(local_48.AllocatorInstance.Data + (longlong)iVar8 * 0x18 + 8) = dVar6;
    *(double *)(local_48.AllocatorInstance.Data + (longlong)iVar8 * 0x18 + 0x10) = param_3->Roll;
    goto LAB_146f4aab5;
  }
  lVar2 = *(longlong *)param_4.Class.field0_0x0;
  if ((lVar2 == 0) || (pUVar11 = UEnvQueryContext::StaticClass(), pUVar11 == (UClass *)0x0)) {
LAB_146f4aaa7:
    pUVar11 = (UClass *)0x0;
  }
  else {
    iVar8 = (int)pUVar11->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar11->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_146f4aaa7;
    pUVar11 = *(UClass **)param_4.Class.field0_0x0;
  }
  FEnvQueryInstance::PrepareContext(param_2,pUVar11,&local_48);
LAB_146f4aab5:
  uVar12 = 0;
  if (0 < local_48.ArrayNum) {
    do {
      uVar9 = 0;
      if ((int)uVar12 < local_48.ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Math::TRotator<double>::Vector
                ((TRotator<double> *)
                 (local_48.AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18),
                 (TVector<double> *)&local_38._s_0);
      pTVar3 = (TVector<double>_u_0 *)(param_1->AllocatorInstance).Data;
      if (((pTVar3 <= &local_38) && (&local_38 < pTVar3 + param_1->ArrayMax)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      uVar12 = uVar12 + 1;
      param_1->ArrayNum = iVar8 + 1;
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar4 + (longlong)iVar8 * 0x18;
      *(double *)pFVar1 = local_38._s_0.X;
      *(double *)(pFVar1 + 8) = local_38._s_0.Y;
      *(double *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_38._s_0.Z;
    } while ((int)uVar12 < local_48.ArrayNum);
  }
  if ((TRotator<double> *)local_48.AllocatorInstance.Data != (TRotator<double> *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// GatherLineDirections @ 146f4ac10

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
UEnvQueryTest_Dot::GatherLineDirections
          (UEnvQueryTest_Dot *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FEnvQueryInstance *param_2,TVector<double> *param_3,TSubclassOf<UEnvQueryContext> param_4,
          TSubclassOf<UEnvQueryContext> param_5)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  longlong lVar3;
  TVector<double>_u_0 *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ForAnyElementType FVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  UClass *pUVar15;
  UClass *pUVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  UClass *pUVar20;
  uint uVar21;
  double dVar22;
  double dVar23;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_b8;
  TVector<double>_u_0 local_a8 [4];
  
  pUVar20 = (UClass *)0x0;
  pUVar16 = *(UClass **)param_4.Class.field0_0x0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar16 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar16);
LAB_146f4ac7d:
      pUVar15 = UEnvQueryContext::StaticClass();
      if (pUVar15 != (UClass *)0x0) {
        iVar13 = (int)pUVar15->_padding_;
        if (((int)pUVar16->_padding_ < iVar13) ||
           ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar13 * 8) !=
            &pUVar15->_padding_)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) goto LAB_146f4acae;
      }
    }
  }
  else if (pUVar16 != (UClass *)0x0) goto LAB_146f4ac7d;
  pUVar16 = pUVar20;
LAB_146f4acae:
  pUVar15 = UEnvQueryContext_Item::StaticClass();
  if (pUVar16 == pUVar15) {
    if (((local_b8.AllocatorInstance.Data <= param_3) &&
        (param_3 < local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayMax * 0x18)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = local_b8.ArrayNum;
    if (local_b8.ArrayNum == local_b8.ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
    }
    dVar8 = (param_3->field0_0x0)._s_0.Y;
    local_b8.ArrayNum = iVar13 + 1;
    *(double *)(local_b8.AllocatorInstance.Data + (longlong)iVar13 * 0x18) =
         (param_3->field0_0x0)._s_0.X;
    *(double *)(local_b8.AllocatorInstance.Data + (longlong)iVar13 * 0x18 + 8) = dVar8;
    *(double *)(local_b8.AllocatorInstance.Data + (longlong)iVar13 * 0x18 + 0x10) =
         (param_3->field0_0x0)._s_0.Z;
  }
  else {
    lVar3 = *(longlong *)param_4.Class.field0_0x0;
    pUVar16 = pUVar20;
    if ((lVar3 != 0) && (pUVar15 = UEnvQueryContext::StaticClass(), pUVar15 != (UClass *)0x0)) {
      iVar13 = (int)pUVar15->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar13) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar13 * 8) !=
          &pUVar15->_padding_)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        pUVar16 = *(UClass **)param_4.Class.field0_0x0;
      }
    }
    FEnvQueryInstance::PrepareContext(param_2,pUVar16,&local_b8);
  }
  dVar10 = __real_c7efffffe0000000;
  dVar9 = __real_3e45798ee0000000;
  dVar8 = __real_3ff0000000000000;
  uVar21 = 0;
  dVar23 = __real_47efffffe0000000;
  if (0 < local_b8.ArrayNum) {
    do {
      uVar14 = 0;
      if ((int)uVar21 < local_b8.ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         dVar23 = __real_47efffffe0000000, bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((((dVar10 < *(double *)(local_b8.AllocatorInstance.Data + (longlong)&pUVar20->_padding_))
           && (*(double *)(local_b8.AllocatorInstance.Data + (longlong)&pUVar20->_padding_) < dVar23
              )) && (dVar2 = *(double *)
                              ((longlong)&pUVar20->_padding_ + local_b8.AllocatorInstance.Data),
                    dVar10 < dVar2)) &&
         (((dVar2 < dVar23 &&
           (dVar2 = *(double *)((longlong)&pUVar20->_padding_ + local_b8.AllocatorInstance.Data),
           dVar10 < dVar2)) && (dVar2 < dVar23)))) {
        local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.ArrayNum = 0;
        local_c8.ArrayMax = 0;
        pUVar16 = *(UClass **)param_5.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar16 != (UClass *)0x0) goto LAB_146f4af09;
LAB_146f4af37:
          pUVar16 = (UClass *)0x0;
        }
        else {
          if (pUVar16 == (UClass *)0x0) goto LAB_146f4af37;
          UE::GC::MarkAsReachable((UObject *)pUVar16);
LAB_146f4af09:
          pUVar15 = UEnvQueryContext::StaticClass();
          if (pUVar15 == (UClass *)0x0) goto LAB_146f4af37;
          iVar13 = (int)pUVar15->_padding_;
          if (((int)pUVar16->_padding_ < iVar13) ||
             ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar13 * 8) !=
              &pUVar15->_padding_)) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if (!bVar12) goto LAB_146f4af37;
        }
        pUVar15 = UEnvQueryContext_Item::StaticClass();
        if (pUVar16 == pUVar15) {
          if (((local_c8.AllocatorInstance.Data <= param_3) &&
              (param_3 < local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x18)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar13 = local_c8.ArrayNum;
          if (local_c8.ArrayNum == local_c8.ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
          }
          dVar23 = (param_3->field0_0x0)._s_0.Y;
          local_c8.ArrayNum = iVar13 + 1;
          *(double *)(local_c8.AllocatorInstance.Data + (longlong)iVar13 * 0x18) =
               (param_3->field0_0x0)._s_0.X;
          *(double *)(local_c8.AllocatorInstance.Data + (longlong)iVar13 * 0x18 + 8) = dVar23;
          *(double *)(local_c8.AllocatorInstance.Data + (longlong)iVar13 * 0x18 + 0x10) =
               (param_3->field0_0x0)._s_0.Z;
        }
        else {
          lVar3 = *(longlong *)param_5.Class.field0_0x0;
          if ((lVar3 == 0) || (pUVar16 = UEnvQueryContext::StaticClass(), pUVar16 == (UClass *)0x0))
          {
LAB_146f4b02f:
            pUVar16 = (UClass *)0x0;
          }
          else {
            iVar13 = (int)pUVar16->_padding_;
            if ((*(int *)(lVar3 + 0x38) < iVar13) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar13 * 8) !=
                &pUVar16->_padding_)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (!bVar12) goto LAB_146f4b02f;
            pUVar16 = *(UClass **)param_5.Class.field0_0x0;
          }
          FEnvQueryInstance::PrepareContext(param_2,pUVar16,&local_c8);
        }
        uVar17 = 0;
        uVar19 = uVar17;
        dVar23 = __real_47efffffe0000000;
        iVar13 = local_c8.ArrayNum;
        if (0 < local_c8.ArrayNum) {
          do {
            uVar18 = (uint)uVar19;
            uVar14 = 0;
            if ((int)uVar18 < iVar13) {
              uVar14 = ~uVar18 >> 0x1f;
            }
            if (uVar14 == 0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar12) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar23 = __real_47efffffe0000000;
              iVar13 = local_c8.ArrayNum;
            }
            if ((((dVar10 < *(double *)(local_c8.AllocatorInstance.Data + uVar17)) &&
                 (*(double *)(local_c8.AllocatorInstance.Data + uVar17) < dVar23)) &&
                ((dVar10 < *(double *)(local_c8.AllocatorInstance.Data + uVar17 + 8) &&
                 ((*(double *)(local_c8.AllocatorInstance.Data + uVar17 + 8) < dVar23 &&
                  (dVar10 < *(double *)(local_c8.AllocatorInstance.Data + uVar17 + 0x10))))))) &&
               (*(double *)(local_c8.AllocatorInstance.Data + uVar17 + 0x10) < dVar23)) {
              uVar14 = 0;
              if ((int)uVar18 < iVar13) {
                uVar14 = ~uVar18 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , dVar23 = __real_47efffffe0000000, bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar11.Data = local_c8.AllocatorInstance.Data;
              uVar14 = 0;
              if ((int)uVar21 < local_b8.ArrayNum) {
                uVar14 = ~uVar21 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , dVar23 = __real_47efffffe0000000, bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              dVar2 = *(double *)(FVar11.Data + uVar17) -
                      *(double *)(local_b8.AllocatorInstance.Data + (longlong)&pUVar20->_padding_);
              dVar7 = *(double *)(FVar11.Data + uVar17 + 8) -
                      *(double *)((longlong)&pUVar20->_padding_ + local_b8.AllocatorInstance.Data);
              local_a8[0]._16_8_ =
                   *(double *)(FVar11.Data + uVar17 + 0x10) -
                   *(double *)((longlong)&pUVar20->_padding_ + local_b8.AllocatorInstance.Data);
              dVar22 = dVar7 * dVar7 + dVar2 * dVar2 +
                       (double)local_a8[0]._16_8_ * (double)local_a8[0]._16_8_;
              if (dVar22 == dVar8) {
                local_a8[0]._8_4_ = SUB84(dVar7,0);
                local_a8[0]._0_8_ = dVar2;
                local_a8[0]._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              }
              else if (dVar9 <= dVar22) {
                dVar22 = dVar8 / SQRT(dVar22);
                local_a8[0]._16_8_ = (double)local_a8[0]._16_8_ * dVar22;
                local_a8[0]._8_4_ = SUB84(dVar7 * dVar22,0);
                local_a8[0]._0_8_ = dVar2 * dVar22;
                local_a8[0]._12_4_ = (int)((ulonglong)(dVar7 * dVar22) >> 0x20);
              }
              else {
                local_a8[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                local_a8[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                local_a8[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              }
              pTVar4 = (TVector<double>_u_0 *)(param_1->AllocatorInstance).Data;
              if (((pTVar4 <= local_a8) && (local_a8 < pTVar4 + param_1->ArrayMax)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), dVar23 = __real_47efffffe0000000, bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              iVar13 = param_1->ArrayNum;
              if (iVar13 == param_1->ArrayMax) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
                dVar23 = __real_47efffffe0000000;
              }
              param_1->ArrayNum = iVar13 + 1;
              pFVar5 = (param_1->AllocatorInstance).Data;
              pFVar1 = pFVar5 + (longlong)iVar13 * 0x18;
              *(undefined8 *)pFVar1 = local_a8[0]._s_0.X;
              *(undefined8 *)(pFVar1 + 8) = local_a8[0]._s_0.Y;
              *(undefined8 *)(pFVar5 + (longlong)iVar13 * 0x18 + 0x10) = local_a8[0]._s_0.Z;
              iVar13 = local_c8.ArrayNum;
            }
            uVar17 = uVar17 + 0x18;
            uVar19 = (ulonglong)(uVar18 + 1);
          } while ((int)(uVar18 + 1) < iVar13);
        }
        if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.AllocatorInstance.Data);
          dVar23 = __real_47efffffe0000000;
        }
      }
      uVar21 = uVar21 + 1;
      pUVar20 = (UClass *)&pUVar20->_padding_;
    } while ((int)uVar21 < local_b8.ArrayNum);
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return;
}

// GatherLineDirections @ 146f4b3e0

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
UEnvQueryTest_Dot::GatherLineDirections
          (UEnvQueryTest_Dot *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          FEnvQueryInstance *param_2,TSubclassOf<UEnvQueryContext> param_3,
          TSubclassOf<UEnvQueryContext> param_4,TSubclassOf<UEnvQueryContext> param_5,bool param_6,
          TVector<double> *param_7,TRotator<double> *param_8)

{
  UObject *local_18;
  UObject *local_10;
  
  if (param_6) {
    local_18 = *(UObject **)param_5.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18);
    }
    GatherLineDirections(this,param_1,param_2,param_8,(TSubclassOf<UEnvQueryContext>)&local_18);
  }
  else {
    local_18 = *(UObject **)param_4.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18);
    }
    local_10 = *(UObject **)param_3.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_10);
    }
    GatherLineDirections
              (this,param_1,param_2,param_7,(TSubclassOf<UEnvQueryContext>)&local_10,
               (TSubclassOf<UEnvQueryContext>)&local_18);
  }
  return;
}

// GetDescriptionDetails @ 146f52f60

FText * __thiscall
UEnvQueryTest_Dot::GetDescriptionDetails(UEnvQueryTest_Dot *this,FText *__return_storage_ptr__)

{
  UEnvQueryTest::DescribeFloatTestParams((UEnvQueryTest *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDescriptionTitle @ 146f54d00

FText * __thiscall
UEnvQueryTest_Dot::GetDescriptionTitle(UEnvQueryTest_Dot *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  FString local_68;
  FString local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  if (this->TestMode == Dot3D) {
    pwVar2 = L"";
  }
  else {
    if (this->TestMode != Dot2D) goto LAB_146f54d5d;
    pwVar2 = L" 2D";
  }
  ::FString::operator=(&local_68,pwVar2);
LAB_146f54d5d:
  pFVar1 = FEnvDirection::ToText(&this->LineB,&local_28);
  FText::ToString(pFVar1);
  pFVar1 = FEnvDirection::ToText(&this->LineA,&local_38);
  FText::ToString(pFVar1);
  UEnvQueryTypes::GetShortTypeName(&local_48,(UObject *)this);
  FText::ToString(&local_48);
  ::FString::PrintfImpl(&local_58,L"%s%s%s: %s and %s");
  FText::FromString(__return_storage_ptr__,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f590d0

UClass * __cdecl UEnvQueryTest_Dot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnvQueryTest_Dot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"EnvQueryTest_Dot",
               &Z_Registration_Info_UClass_UEnvQueryTest_Dot.InnerSingleton,
               StaticRegisterNativesUEnvQueryTest_Dot,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UEnvQueryTest_Dot>,
               InternalVTableHelperCtorCaller<UEnvQueryTest_Dot>,local_res8,
               UEnvQueryTest::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnvQueryTest_Dot.InnerSingleton;
}

// RequiresPerItemUpdates @ 146f66b70

bool __thiscall
UEnvQueryTest_Dot::RequiresPerItemUpdates
          (UEnvQueryTest_Dot *this,TSubclassOf<UEnvQueryContext> param_1,
          TSubclassOf<UEnvQueryContext> param_2,TSubclassOf<UEnvQueryContext> param_3,bool param_4)

{
  bool bVar1;
  UObject *local_18 [2];
  
  if (param_4) {
    local_18[0] = *(UObject **)param_3.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
    bVar1 = UEnvQueryTest::IsContextPerItem
                      ((UEnvQueryTest *)this,(TSubclassOf<UEnvQueryContext>)local_18);
    return bVar1;
  }
  local_18[0] = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18[0]);
  }
  bVar1 = UEnvQueryTest::IsContextPerItem
                    ((UEnvQueryTest *)this,(TSubclassOf<UEnvQueryContext>)local_18);
  if (!bVar1) {
    local_18[0] = *(UObject **)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_18[0]);
    }
    bVar1 = UEnvQueryTest::IsContextPerItem
                      ((UEnvQueryTest *)this,(TSubclassOf<UEnvQueryContext>)local_18);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// RunTest @ 146f6c9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UEnvQueryTest_Dot::RunTest(UEnvQueryTest_Dot *this,FEnvQueryInstance *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  uchar uVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UEnvQueryItemType_VectorBase *pUVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  undefined8 uVar16;
  longlong lVar17;
  char cVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  UObject *pUVar25;
  FProperty *pFVar26;
  longlong *plVar27;
  TVector<double>_u_0 *pTVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  float fVar43;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_280;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_270;
  FItemIterator local_260;
  UClass *local_238;
  UClass *local_230;
  UClass *local_228;
  UClass *local_220;
  UClass *local_218;
  UClass *local_210;
  UClass *local_208;
  UClass *local_200;
  UClass *local_1f8;
  UClass *local_1f0;
  UClass *local_1e8;
  UClass *local_1e0;
  LARGE_INTEGER local_1d8;
  UClass *local_1d0;
  UClass *local_1c8;
  UClass *local_1c0;
  UClass *local_1b8;
  UClass *local_1b0;
  UClass *local_1a8;
  TRotator<double> local_1a0;
  TVector<double>_u_0 local_188;
  double local_170;
  double local_168;
  TVector<double>_u_0 local_160;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 local_118;
  TVector<double> local_108;
  undefined1 local_f0 [184];
  
  pUVar25 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)&param_1->_padding_ + 4));
  if (pUVar25 == (UObject *)0x0) {
    return;
  }
  plVar27 = (longlong *)this->_padding_;
  if (plVar27 != (longlong *)0x0) {
    this->_padding_ = 0;
    (**(code **)(*plVar27 + 0x2b0))(plVar27,pUVar25);
    if ((FName)this->_padding_ != (FName)0x0) {
      pFVar26 = UStruct::FindPropertyByName
                          (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
      if ((pFVar26 == (FProperty *)0x0) ||
         (cVar18 = (**(code **)(this->_padding_ + 8))(&this->_padding_,pFVar26), cVar18 == '\0')) {
        local_res18[0] = 0;
        bVar19 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res18);
        if (!bVar19) goto LAB_146f6cabf;
      }
      this->_padding_ = (longlong)pFVar26;
    }
  }
LAB_146f6cabf:
  if (((FProperty *)this->_padding_ == (FProperty *)0x0) ||
     (plVar27 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this->_padding_,(UObject *)this->_padding_,0),
     plVar27 == (longlong *)0x0)) {
    plVar27 = &this->_padding_;
  }
  fVar2 = *(float *)plVar27;
  plVar27 = (longlong *)this->_padding_;
  if (plVar27 != (longlong *)0x0) {
    this->_padding_ = 0;
    (**(code **)(*plVar27 + 0x2b0))(plVar27,pUVar25);
    if ((FName)this->_padding_ != (FName)0x0) {
      pFVar26 = UStruct::FindPropertyByName
                          (*(UStruct **)(this->_padding_ + 0x10),(FName)this->_padding_);
      if ((pFVar26 == (FProperty *)0x0) ||
         (cVar18 = (**(code **)(this->_padding_ + 8))(&this->_padding_,pFVar26), cVar18 == '\0')) {
        local_res20[0] = 0;
        bVar19 = `FAIDataProviderValue::BindData'::__l9::<lambda_1>::operator()(local_res20);
        if (!bVar19) goto LAB_146f6cb5c;
      }
      this->_padding_ = (longlong)pFVar26;
    }
  }
LAB_146f6cb5c:
  if (((FProperty *)this->_padding_ == (FProperty *)0x0) ||
     (plVar27 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)this->_padding_,(UObject *)this->_padding_,0),
     plVar27 == (longlong *)0x0)) {
    plVar27 = &this->_padding_;
  }
  fVar3 = *(float *)plVar27;
  uVar4 = (this->LineA).DirMode.Value;
  local_238 = (this->LineA).Rotation.Class.field0_0x0.DebugPtr;
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 0;
  local_280.ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_238 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_238);
  }
  local_230 = (this->LineA).LineTo.Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_230 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_230);
  }
  local_228 = (this->LineA).LineFrom.Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_228 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_228);
  }
  bVar19 = RequiresPerItemUpdates
                     (this,(TSubclassOf<UEnvQueryContext>)&local_228,
                      (TSubclassOf<UEnvQueryContext>)&local_230,
                      (TSubclassOf<UEnvQueryContext>)&local_238,uVar4 == '\x01');
  if (!bVar19) {
    uVar4 = (this->LineA).DirMode.Value;
    pUVar5 = (this->LineA).Rotation.Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pUVar6 = (this->LineA).LineTo.Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    pUVar7 = (this->LineA).LineFrom.Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if (uVar4 == '\x01') {
      local_220 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      GatherLineDirections
                (this,&local_280,param_1,&UE::Math::TRotator<double>::ZeroRotator,
                 (TSubclassOf<UEnvQueryContext>)&local_220);
    }
    else {
      local_218 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      local_210 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      GatherLineDirections
                (this,&local_280,param_1,&UE::Math::TVector<double>::ZeroVector,
                 (TSubclassOf<UEnvQueryContext>)&local_210,(TSubclassOf<UEnvQueryContext>)&local_218
                );
    }
    if (local_280.ArrayNum == 0) goto LAB_146f6d76c;
  }
  uVar4 = (this->LineB).DirMode.Value;
  local_208 = (this->LineB).Rotation.Class.field0_0x0.DebugPtr;
  local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.ArrayNum = 0;
  local_270.ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_208 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_208);
  }
  local_200 = (this->LineB).LineTo.Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_200 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_200);
  }
  local_1f8 = (this->LineB).LineFrom.Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1f8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1f8);
  }
  bVar20 = RequiresPerItemUpdates
                     (this,(TSubclassOf<UEnvQueryContext>)&local_1f8,
                      (TSubclassOf<UEnvQueryContext>)&local_200,
                      (TSubclassOf<UEnvQueryContext>)&local_208,uVar4 == '\x01');
  if (bVar20) {
LAB_146f6ceee:
    FEnvQueryInstance::FItemIterator::FItemIterator(&local_260,(UEnvQueryTest *)this,param_1,-1);
    uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    dVar13 = __real_4170000000000000;
    dVar12 = __real_3e45798ee0000000;
    dVar11 = __real_3ff0000000000000;
    while (((dVar41 = local_260.Deadline, uVar32 = (uint)local_260._padding_,
            lVar17 = local_260._padding_,
            (int)(uint)local_260._padding_ < *(int *)(local_260._padding_ + 8) &&
            ((*(byte *)(local_260._padding_ + 0x10c) & 2) == 0)) &&
           ((local_260.Deadline < 0.0 ||
            (QueryPerformanceCounter(&local_1d8),
            (double)local_1d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar13 < dVar41))))
          ) {
      if ((bVar19) || (bVar20)) {
        if (((this->LineA).DirMode.Value == '\x01') && ((this->LineB).DirMode.Value == '\x01')) {
          pTVar28 = &local_160;
          local_160._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_160._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_160._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          pTVar28 = &UEnvQueryTest::GetItemLocation((UEnvQueryTest *)this,&local_108,param_1,uVar32)
                     ->field0_0x0;
        }
        local_188._s_0.X = (((TVector<double>_u_0 *)&(pTVar28->_s_0).X)->_s_0).X;
        local_188._s_0.Y = (pTVar28->_s_0).Y;
        local_188._s_0.Z = (pTVar28->_s_0).Z;
        if (((this->LineA).DirMode.Value == '\x01') ||
           (uVar35 = UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_,
           uVar36 = UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_,
           uVar37 = UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_,
           uVar38 = UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_,
           dVar41 = UE::Math::TRotator<double>::ZeroRotator.Roll,
           (this->LineB).DirMode.Value == '\x01')) {
          pUVar8 = (param_1->ItemTypeVectorCDO).field0_0x0.DebugPtr;
          if (pUVar8 == (UEnvQueryItemType_VectorBase *)0x0) {
            puVar29 = &local_148;
            local_148 = CONCAT44(UE::Math::TRotator<double>::ZeroRotator.Pitch._4_4_,
                                 UE::Math::TRotator<double>::ZeroRotator.Pitch._0_4_);
            uStack_140 = CONCAT44(UE::Math::TRotator<double>::ZeroRotator.Yaw._4_4_,
                                  UE::Math::TRotator<double>::ZeroRotator.Yaw._0_4_);
            local_138 = UE::Math::TRotator<double>::ZeroRotator.Roll;
          }
          else {
            pcVar9 = *(code **)(*(longlong *)pUVar8 + 0x2d0);
            uVar22 = 0;
            if ((int)uVar32 < (int)param_1->_padding_) {
              uVar22 = ~uVar32 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            puVar29 = (undefined8 *)(*pcVar9)(pUVar8,local_f0);
          }
          uVar35 = *(undefined4 *)puVar29;
          uVar36 = *(undefined4 *)((longlong)puVar29 + 4);
          uVar37 = *(undefined4 *)(puVar29 + 1);
          uVar38 = *(undefined4 *)((longlong)puVar29 + 0xc);
          dVar41 = (double)puVar29[2];
        }
        uVar16 = local_280._8_8_;
        local_1a0.Pitch._0_4_ = uVar35;
        local_1a0.Pitch._4_4_ = uVar36;
        local_1a0.Yaw._0_4_ = uVar37;
        local_1a0.Yaw._4_4_ = uVar38;
        local_1a0.Roll = dVar41;
        if (bVar19) {
          iVar24 = local_280.ArrayMax;
          local_280._8_8_ = (ulonglong)(uint)local_280.ArrayMax << 0x20;
          if (((longlong)uVar16 < 0) && (iVar24 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&local_280.AllocatorInstance,0,&local_280.ArrayMax);
          }
          uVar4 = (this->LineA).DirMode.Value;
          pUVar5 = (this->LineA).Rotation.Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          pUVar6 = (this->LineA).LineTo.Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          pUVar7 = (this->LineA).LineFrom.Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          if (uVar4 == '\x01') {
            local_1d0 = pUVar5;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            GatherLineDirections
                      (this,&local_280,param_1,&local_1a0,(TSubclassOf<UEnvQueryContext>)&local_1d0)
            ;
          }
          else {
            local_1c8 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            local_1c0 = pUVar7;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            GatherLineDirections
                      (this,&local_280,param_1,(TVector<double> *)&local_188._s_0,
                       (TSubclassOf<UEnvQueryContext>)&local_1c0,
                       (TSubclassOf<UEnvQueryContext>)&local_1c8);
          }
        }
        uVar16 = local_270._8_8_;
        if (bVar20) {
          iVar24 = local_270.ArrayMax;
          local_270._8_8_ = (ulonglong)(uint)local_270.ArrayMax << 0x20;
          if (((longlong)uVar16 < 0) && (iVar24 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&local_270.AllocatorInstance,0,&local_270.ArrayMax);
          }
          uVar4 = (this->LineB).DirMode.Value;
          pUVar5 = (this->LineB).Rotation.Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          pUVar6 = (this->LineB).LineTo.Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          pUVar7 = (this->LineB).LineFrom.Class.field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          if (uVar4 == '\x01') {
            local_1b8 = pUVar5;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            GatherLineDirections
                      (this,&local_270,param_1,&local_1a0,(TSubclassOf<UEnvQueryContext>)&local_1b8)
            ;
          }
          else {
            local_1b0 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            local_1a8 = pUVar7;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar7);
            }
            GatherLineDirections
                      (this,&local_270,param_1,(TVector<double> *)&local_188._s_0,
                       (TSubclassOf<UEnvQueryContext>)&local_1a8,
                       (TSubclassOf<UEnvQueryContext>)&local_1b0);
          }
        }
      }
      uVar30 = 0;
      if (0 < local_280.ArrayNum) {
        uVar33 = local_270._8_8_ & 0xffffffff;
        uVar34 = uVar30;
        iVar24 = local_280.ArrayNum;
        do {
          uVar31 = 0;
          uVar32 = (uint)uVar30;
          uVar30 = uVar31;
          if (0 < (int)uVar33) {
            do {
              fVar43 = 0.0;
              uVar22 = (uint)uVar31;
              if (this->TestMode == Dot3D) {
                uVar23 = 0;
                if ((int)uVar22 < (int)uVar33) {
                  uVar23 = ~uVar22 >> 0x1f;
                }
                if (uVar23 == 0) {
                  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar21) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar24 = local_280.ArrayNum;
                }
                FVar15.Data = local_270.AllocatorInstance.Data;
                uVar23 = 0;
                if ((int)uVar32 < iVar24) {
                  uVar23 = ~uVar32 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                dVar41 = *(double *)(FVar15.Data + uVar30 + 8) *
                         *(double *)(local_280.AllocatorInstance.Data + uVar34 + 8) +
                         *(double *)(FVar15.Data + uVar30) *
                         *(double *)(local_280.AllocatorInstance.Data + uVar34) +
                         *(double *)(FVar15.Data + uVar30 + 0x10) *
                         *(double *)(local_280.AllocatorInstance.Data + uVar34 + 0x10);
LAB_146f6d64e:
                fVar43 = (float)dVar41;
              }
              else {
                if (this->TestMode == Dot2D) {
                  uVar23 = 0;
                  if ((int)uVar32 < iVar24) {
                    uVar23 = ~uVar32 >> 0x1f;
                  }
                  iVar24 = (int)uVar33;
                  if (uVar23 == 0) {
                    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar21) {
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    iVar24 = local_270.ArrayNum;
                  }
                  FVar15.Data = local_280.AllocatorInstance.Data;
                  uVar23 = 0;
                  if ((int)uVar22 < iVar24) {
                    uVar23 = ~uVar22 >> 0x1f;
                  }
                  if ((uVar23 == 0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar21)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  pFVar1 = FVar15.Data + uVar34;
                  dVar41 = *(double *)pFVar1;
                  dVar10 = *(double *)(pFVar1 + 8);
                  dVar42 = *(double *)(local_270.AllocatorInstance.Data + uVar30);
                  dVar40 = *(double *)(local_270.AllocatorInstance.Data + uVar30 + 8);
                  local_118 = *(undefined8 *)(FVar15.Data + uVar34 + 0x10);
                  dVar39 = dVar10 * dVar10 + dVar41 * dVar41;
                  if (dVar12 < dVar39) {
                    local_170 = dVar11 / SQRT(dVar39);
                    dVar41 = dVar41 * local_170;
                    dVar10 = dVar10 * local_170;
                  }
                  dVar39 = dVar40 * dVar40 + dVar42 * dVar42;
                  if (dVar12 < dVar39) {
                    local_168 = dVar11 / SQRT(dVar39);
                    dVar42 = dVar42 * local_168;
                    dVar40 = dVar40 * local_168;
                  }
                  dVar41 = dVar40 * dVar10 + dVar42 * dVar41;
                  goto LAB_146f6d64e;
                }
                if (1 < (byte)LogEQS._0_1_) {
                  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
                }
              }
              iVar24 = _isnan((double)fVar43);
              if (iVar24 == 0) {
                if (this->bAbsoluteValue != false) {
                  fVar43 = (float)((uint)fVar43 & uVar14);
                }
              }
              else {
                fVar43 = 0.0;
              }
              FEnvQueryInstance::FItemIterator::SetScore
                        (&local_260,(uint)*(byte *)((longlong)&this->_padding_ + 4),
                         (uint)*(byte *)((longlong)&this->_padding_ + 2),fVar43,fVar2,fVar3);
              uVar33 = local_270._8_8_ & 0xffffffff;
              uVar31 = (ulonglong)(uVar22 + 1);
              uVar30 = uVar30 + 0x18;
              iVar24 = local_280.ArrayNum;
            } while ((int)(uVar22 + 1) < local_270.ArrayNum);
          }
          uVar30 = (ulonglong)(uVar32 + 1);
          uVar34 = uVar34 + 0x18;
        } while ((int)(uVar32 + 1) < iVar24);
      }
      FEnvQueryInstance::FItemIterator::StoreTestResult(&local_260);
      if ((*(byte *)(local_260._padding_ + 0x10c) & 2) == 0) {
        local_260.ItemScore = 0.0;
        local_260.NumPassedForItem = 0;
        local_260.NumTestsForItem = 0;
        local_260.bForced = '\0';
        local_260.bPassed = '\x01';
        FEnvQueryInstance::FConstItemIterator::operator++((FConstItemIterator *)&local_260);
      }
    }
    *(uint *)(lVar17 + 0xec) = uVar32;
  }
  else {
    uVar4 = (this->LineB).DirMode.Value;
    pUVar5 = (this->LineB).Rotation.Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pUVar6 = (this->LineB).LineTo.Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    pUVar7 = (this->LineB).LineFrom.Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    if (uVar4 == '\x01') {
      local_1f0 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      GatherLineDirections
                (this,&local_270,param_1,&UE::Math::TRotator<double>::ZeroRotator,
                 (TSubclassOf<UEnvQueryContext>)&local_1f0);
    }
    else {
      local_1e8 = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      local_1e0 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      GatherLineDirections
                (this,&local_270,param_1,&UE::Math::TVector<double>::ZeroVector,
                 (TSubclassOf<UEnvQueryContext>)&local_1e0,(TSubclassOf<UEnvQueryContext>)&local_1e8
                );
    }
    if (local_270.ArrayNum != 0) goto LAB_146f6ceee;
  }
  if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.AllocatorInstance.Data);
  }
LAB_146f6d76c:
  if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUEnvQueryTest_Dot @ 146f76eb0

void __cdecl UEnvQueryTest_Dot::StaticRegisterNativesUEnvQueryTest_Dot(void)

{
  return;
}

