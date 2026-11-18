// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 51

// StaticClass @ 149f1f2f0

UClass * __cdecl UPCGNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNode",&Z_Registration_Info_UClass_UPCGNode.InnerSingleton,
               StaticRegisterNativesUPCGNode,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGNode>,InternalVTableHelperCtorCaller<UPCGNode>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNode.InnerSingleton;
}

// UPCGNode @ 149f32c30

UPCGNode * __thiscall UPCGNode::UPCGNode(UPCGNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGNode__6B_;
  (this->NodeTitle).ComparisonIndex = 0;
  (this->NodeTitle).Number = 0;
  (this->SettingsInterface).field0_0x0.DebugPtr = (UPCGSettingsInterface *)0x0;
  (this->OutboundNodes_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutboundNodes_DEPRECATED).ArrayNum = 0;
  (this->OutboundNodes_DEPRECATED).ArrayMax = 0;
  (this->InboundEdges_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InboundEdges_DEPRECATED).ArrayNum = 0;
  (this->InboundEdges_DEPRECATED).ArrayMax = 0;
  (this->OutboundEdges_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutboundEdges_DEPRECATED).ArrayNum = 0;
  (this->OutboundEdges_DEPRECATED).ArrayMax = 0;
  (this->InputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputPins).ArrayNum = 0;
  (this->InputPins).ArrayMax = 0;
  (this->OutputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputPins).ArrayNum = 0;
  (this->OutputPins).ArrayMax = 0;
  return this;
}

// UPCGNode @ 149f32c90

UPCGNode * __thiscall UPCGNode::UPCGNode(UPCGNode *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UPCGSettingsInterface *pUVar4;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGNode__6B_;
  (this->NodeTitle).ComparisonIndex = 0;
  (this->NodeTitle).Number = 0;
  (this->SettingsInterface).field0_0x0.DebugPtr = (UPCGSettingsInterface *)0x0;
  (this->OutboundNodes_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutboundNodes_DEPRECATED).ArrayNum = 0;
  (this->OutboundNodes_DEPRECATED).ArrayMax = 0;
  (this->InboundEdges_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InboundEdges_DEPRECATED).ArrayNum = 0;
  (this->InboundEdges_DEPRECATED).ArrayMax = 0;
  (this->OutboundEdges_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutboundEdges_DEPRECATED).ArrayNum = 0;
  (this->OutboundEdges_DEPRECATED).ArrayMax = 0;
  (this->InputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputPins).ArrayNum = 0;
  (this->InputPins).ArrayMax = 0;
  (this->OutputPins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputPins).ArrayNum = 0;
  (this->OutputPins).ArrayMax = 0;
  pFVar2 = ::FName::FName(&local_res8,L"DefaultNodeSettings");
  FVar1 = *pFVar2;
  pUVar3 = UPCGTrivialSettings::StaticClass();
  pUVar4 = (UPCGSettingsInterface *)
           FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar3,pUVar3,false,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPCGSettingsInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->SettingsInterface).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UPCGNode @ 149f34aa0

void __thiscall UPCGNode::~UPCGNode(UPCGNode *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGNode__6B_;
  pFVar1 = (this->OutputPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutboundEdges_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InboundEdges_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutboundNodes_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 149f36570

void __thiscall
`UPCGNode::CreateDefaultPins'::__l2::<lambda_1>::operator()
          (void *this,TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  uint uVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res20 [8];
  longlong local_50;
  undefined8 local_48 [2];
  
  pFVar14 = (param_2->AllocatorInstance).Data;
  uVar3 = param_2->ArrayNum;
  uVar11 = (ulonglong)(int)uVar3;
  pFVar12 = pFVar14 + 0x20;
  pFVar13 = pFVar14 + uVar11 * 0x30;
  while( true ) {
    if (param_2->ArrayNum != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar14 == pFVar13) break;
    local_48[0] = *(undefined8 *)this;
    lVar10 = (*(code *)**(undefined8 **)((longlong)this + 8))
                       ((*(undefined8 **)((longlong)this + 8))[1],local_48);
    pUVar4 = *(UObject **)this;
    local_50 = lVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    lVar7 = local_50;
    *(UObject **)(lVar10 + 0x28) = pUVar4;
    *(undefined8 *)(local_50 + 0x48) = *(undefined8 *)pFVar14;
    pFVar1 = (FScriptContainerElement *)(local_50 + 0x58);
    *(FScriptContainerElement *)(local_50 + 0x50) = pFVar12[-0x18];
    if (pFVar1 != pFVar12 + -0x10) {
      iVar9 = *(int *)(pFVar12 + -8);
      piVar2 = (int *)(local_50 + 100);
      pFVar5 = *(FScriptContainerElement **)&pFVar12[-0x10].field_0x0;
      *(int *)(local_50 + 0x60) = iVar9;
      if ((iVar9 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar9,*piVar2,(ForAnyElementType *)pFVar1,iVar9,piVar2);
        ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                  (*(FScriptContainerElement **)&pFVar1->field_0x0,(FPCGDataTypeBaseId *)pFVar5,
                   iVar9);
      }
    }
    *(undefined4 *)(lVar7 + 0x68) = *(undefined4 *)pFVar12;
    *(FScriptContainerElement *)(lVar7 + 0x70) = pFVar12[8];
    *(FScriptContainerElement *)(lVar7 + 0x71) = pFVar12[9];
    *(FScriptContainerElement *)(lVar7 + 0x72) = pFVar12[10];
    *(FScriptContainerElement *)(lVar7 + 0x73) = pFVar12[0xb];
    pFVar1 = (param_1->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)&local_50) &&
       ((FScriptContainerElement *)&local_50 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    pFVar14 = pFVar14 + 0x30;
    param_1->ArrayNum = iVar9 + 1;
    pFVar12 = pFVar12 + 0x30;
    *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_50;
    uVar11 = (ulonglong)uVar3;
  }
  return;
}

// operator() @ 149f36e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UPCGNode::UpdatePins'::__l2::<lambda_1>::operator()
          (void *this,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  FString *pFVar11;
  uint uVar12;
  FScriptContainerElement *_Dst;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  FName local_a0;
  FName local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  uVar1 = param_1->ArrayNum;
  iVar14 = uVar1 - 2;
  bVar6 = false;
  bVar5 = false;
  if (-1 < iVar14) {
    lVar13 = (longlong)iVar14 * 0x30;
    lVar16 = (longlong)iVar14 + 1;
    do {
      uVar1 = uVar1 - 1;
      iVar9 = param_1->ArrayNum;
      lVar15 = lVar16;
      lVar3 = lVar13;
      uVar12 = uVar1;
      if ((int)uVar1 < iVar9) {
        do {
          uVar8 = 0;
          if ((int)uVar12 < iVar9) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          if ((param_1->ArrayNum <= iVar14) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(longlong *)((param_1->AllocatorInstance).Data + lVar13) ==
              *(longlong *)(pFVar2 + lVar3 + 0x30)) {
            lVar3 = *(longlong *)(*(longlong *)this + 0x20);
            if (lVar3 == 0) {
LAB_149f3704e:
              bVar5 = true;
              pFVar11 = ::FString::FString(&local_70,L"Unknown");
            }
            else {
              pUVar10 = Z_Construct_UClass_UPCGGraph_NoRegister();
              iVar9 = (int)pUVar10->_padding_;
              if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar9) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar9 * 8) !=
                  &pUVar10->_padding_)) goto LAB_149f3704e;
              local_a0 = *(FName *)(lVar3 + 0x18);
              bVar6 = true;
              ::FName::ToString(&local_a0,&local_80);
              pFVar11 = &local_80;
            }
            pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
            (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar11->Data).ArrayNum = 0;
            (pFVar11->Data).ArrayMax = 0;
            if ((bVar5) &&
               (bVar5 = false,
               local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_70.Data.AllocatorInstance.Data);
            }
            if ((bVar6) &&
               (bVar6 = false,
               local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
              FMemory::Free(local_80.Data.AllocatorInstance.Data);
            }
            if (2 < (byte)LogPCG._0_1_) {
              if ((param_1->ArrayNum <= iVar14) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              ::FName::ToString((FName *)((param_1->AllocatorInstance).Data + lVar13),local_60);
              local_98 = *(FName *)(*(longlong *)this + 0x18);
              ::FName::ToString(&local_98,&local_90);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_90.Data.AllocatorInstance.Data);
              }
              if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
              }
            }
            uVar8 = 0;
            if ((int)uVar12 < param_1->ArrayNum) {
              uVar8 = ~uVar12 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            _Dst = (param_1->AllocatorInstance).Data + lVar15 * 0x30;
            if (*(void **)(_Dst + 0x10) != (void *)0x0) {
              FMemory::Free(*(void **)(_Dst + 0x10));
            }
            iVar9 = (param_1->ArrayNum - uVar12) + -1;
            if (iVar9 != 0) {
              memmove(_Dst,_Dst + 0x30,(longlong)iVar9 * 0x30);
            }
            param_1->ArrayNum = param_1->ArrayNum + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            break;
          }
          iVar9 = param_1->ArrayNum;
          uVar12 = uVar12 + 1;
          lVar15 = lVar15 + 1;
          lVar3 = lVar3 + 0x30;
        } while ((int)uVar12 < iVar9);
      }
      iVar14 = iVar14 + -1;
      lVar16 = lVar16 + -1;
      lVar13 = lVar13 + -0x30;
    } while (-1 < iVar14);
  }
  return;
}

// operator() @ 149f37300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGPin * __thiscall
`UPCGNode::UpdatePins'::__l2::<lambda_1>::operator()(void *this,UPCGNode *param_1)

{
  UClass *pUVar1;
  UPCGPin *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPCGPin::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UPCGPin *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// operator() @ 149f38960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149f38db4) */
/* WARNING: Removing unreachable block (ram,0x000149f38de3) */

EPCGChangeType __thiscall
`UPCGNode::UpdatePins'::__l2::<lambda_2>::operator()
          (void *this,TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *param_2)

{
  FPCGDataTypeIdentifier *pFVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  UPCGPin *pUVar4;
  FPCGDataTypeBaseId *pFVar5;
  UObject *pUVar6;
  ForAnyElementType FVar7;
  undefined8 uVar8;
  code *pcVar9;
  byte bVar10;
  bool bVar11;
  EPCGChangeType EVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  FName *pFVar18;
  ulonglong uVar19;
  ForElementType<FSetElementId> FVar20;
  FScriptContainerElement *pFVar21;
  FName *pFVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  FPCGPinProperties *pFVar25;
  longlong lVar26;
  undefined8 *puVar27;
  FPCGPinProperties *pFVar28;
  char cVar29;
  longlong lVar30;
  undefined1 auStackY_198 [32];
  byte local_148;
  char local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143 [3];
  ForAnyElementType local_140;
  uint local_138;
  uint local_134;
  TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> local_130;
  UPCGPin *local_120;
  TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> local_118;
  uint local_108;
  longlong local_100;
  undefined8 *local_f8;
  longlong local_f0;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *local_e8;
  FScriptContainerElement *local_e0;
  TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *local_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *local_c0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_b8;
  byte *local_b0;
  undefined8 local_a8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_147 = '\0';
  local_148 = 0;
  local_108 = param_1->ArrayNum;
  uVar17 = (ulonglong)(int)local_108;
  pFVar23 = (param_1->AllocatorInstance).Data;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  local_e0 = pFVar23 + uVar17 * 8;
  iVar13 = 0;
  local_f8 = this;
  local_e8 = param_2;
  local_d8 = param_1;
LAB_149f389d0:
  do {
    pFVar21 = local_e0;
    if (param_1->ArrayNum != (int)uVar17) {
      local_146 = 0;
      `TCheckedPointerIterator<UPCGPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_146);
      iVar13 = local_130.ArrayNum;
    }
    if (pFVar23 == pFVar21) {
      iVar13 = param_2->ArrayNum;
      uVar14 = 0;
      pFVar28 = (FPCGPinProperties *)(param_2->AllocatorInstance).Data;
      local_140.Data = (FScriptContainerElement *)0x0;
      local_138 = 0;
      local_134 = 0;
      pFVar25 = pFVar28 + iVar13;
      do {
        if (param_2->ArrayNum != iVar13) {
          local_145 = 0;
          `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_145);
          uVar14 = local_138;
        }
        if (pFVar28 == pFVar25) {
          if ((local_130.ArrayNum == 1) && (uVar14 == 1)) {
            FPCGPinProperties::operator=
                      (&(*(UPCGPin **)local_130.AllocatorInstance.Data)->Properties,
                       (FPCGPinProperties *)local_140.Data);
            bVar10 = local_148;
            if ((local_130.ArrayNum < 1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar9 = (code *)swi(3);
              EVar12 = (*pcVar9)();
              return EVar12;
            }
            bVar11 = UPCGPin::BreakAllIncompatibleEdges
                               (*(UPCGPin **)local_130.AllocatorInstance.Data,
                                (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>
                                 *)local_f8[2]);
            local_148 = bVar11 | bVar10;
            cVar29 = '\x01';
          }
          else {
            pFVar21 = (param_1->AllocatorInstance).Data;
            iVar13 = param_1->ArrayNum;
            local_98.Elements._0_8_ = 0;
            local_98.Elements._8_8_ = 0;
            local_98.Elements._32_8_ = 0;
            pFVar23 = pFVar21 + (longlong)iVar13 * 8;
            local_98.Elements._40_4_ = 0;
            local_98.Elements._44_4_ = 0x80;
            local_98.Elements._48_4_ = 0xffffffff;
            local_98.Elements._52_4_ = 0;
            local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_98.HashSize = 0;
            local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_118.ArrayNum = 0;
            local_118.ArrayMax = 0;
            while( true ) {
              if (param_1->ArrayNum != iVar13) {
                local_144 = 0;
                `TCheckedPointerIterator<UPCGPin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_144);
              }
              if (pFVar21 == pFVar23) break;
              local_100 = *(longlong *)pFVar21;
              lVar26 = *(longlong *)(local_100 + 0x48);
              uVar14 = ::GetTypeHash((FNameEntryId)(uint)lVar26);
              if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
                FVar20 = (ForElementType<FSetElementId>)&local_98.Hash;
                if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar20 = local_98.Hash.SecondaryData;
                }
                for (iVar15 = *(int *)((longlong)FVar20 +
                                      (ulonglong)
                                      (local_98.HashSize - 1U &
                                      (int)((ulonglong)lVar26 >> 0x20) + uVar14) * 4); iVar15 != -1;
                    iVar15 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar15 * 0x10)) {
                  if (*(longlong *)(local_98.Elements._0_8_ + (longlong)iVar15 * 0x10) == lVar26) {
                    if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_100)
                        && ((FScriptContainerElement *)&local_100 <
                            local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 8)) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar11)) {
                      pcVar9 = (code *)swi(3);
                      EVar12 = (*pcVar9)();
                      return EVar12;
                    }
                    iVar15 = local_118.ArrayNum;
                    if (local_118.ArrayNum == local_118.ArrayMax) {
                      iVar15 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&local_118.AllocatorInstance,&local_118.ArrayMax);
                    }
                    local_118.ArrayNum = iVar15 + 1;
                    *(longlong *)(local_118.AllocatorInstance.Data + (longlong)iVar15 * 8) =
                         local_100;
                    break;
                  }
                }
              }
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        (&local_98,(FName *)local_d0,(bool *)(local_100 + 0x48));
              pFVar21 = pFVar21 + 8;
            }
            if (((local_130.ArrayNum != 0) || (local_138 != 0)) || (local_118.ArrayNum != 0)) {
              local_147 = '\x01';
            }
            local_b0 = &local_148;
            local_a8 = local_f8[2];
            local_c0 = param_1;
            local_b8 = &local_98;
            ``UPCGNode::UpdatePins'::__l2::<lambda_2>::operator()'::__l29::<lambda_3>::operator()
                      (&local_c0,&local_130,true);
            ``UPCGNode::UpdatePins'::__l2::<lambda_2>::operator()'::__l29::<lambda_3>::operator()
                      (&local_c0,&local_118,false);
            uVar19 = (ulonglong)(int)local_138;
            local_108 = local_138;
            pFVar23 = local_140.Data + 8;
            local_e0 = local_140.Data + uVar19 * 0x30;
            uVar17 = uVar19;
            while( true ) {
              pFVar21 = local_e0;
              if ((int)uVar19 != (int)uVar17) {
                local_143[0] = 0;
                `TCheckedPointerIterator<FPCGPinProperties,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_143);
              }
              pFVar2 = pFVar23 + -8;
              if (pFVar2 == pFVar21) break;
              lVar26 = *(longlong *)&pFVar2->field_0x0;
              uVar14 = ::GetTypeHash((FNameEntryId)(uint)lVar26);
              if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
                FVar20 = (ForElementType<FSetElementId>)&local_98.Hash;
                if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar20 = local_98.Hash.SecondaryData;
                }
                for (iVar13 = *(int *)((longlong)FVar20 +
                                      (ulonglong)
                                      (local_98.HashSize - 1U &
                                      (int)((ulonglong)lVar26 >> 0x20) + uVar14) * 4); iVar13 != -1;
                    iVar13 = *(int *)(local_98.Elements._0_8_ + 8 + (longlong)iVar13 * 0x10)) {
                  if (*(longlong *)(local_98.Elements._0_8_ + (longlong)iVar13 * 0x10) == lVar26) {
                    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<1525383761460462661>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGNode.cpp"
                                        ,0x445,"!AllPinNames.Contains(UnmatchedProperty.Label)");
                    if (bVar11) {
                      pcVar9 = (code *)swi(3);
                      EVar12 = (*pcVar9)();
                      return EVar12;
                    }
                    goto LAB_149f3938d;
                  }
                }
              }
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        (&local_98,(FName *)(local_d0 + 4),(bool *)pFVar2);
              pFVar21 = (param_2->AllocatorInstance).Data;
              iVar13 = param_1->ArrayNum;
              iVar15 = local_e8->ArrayNum;
              for (pFVar24 = pFVar21; pFVar24 != pFVar21 + (longlong)iVar15 * 0x30;
                  pFVar24 = pFVar24 + 0x30) {
                if ((((*(longlong *)pFVar24 == *(longlong *)&pFVar2->field_0x0) &&
                     (bVar11 = FPCGDataTypeIdentifier::IsIdentical
                                         ((FPCGDataTypeIdentifier *)(pFVar24 + 0x10),
                                          (FPCGDataTypeIdentifier *)(pFVar23 + 8)), bVar11)) &&
                    ((pFVar24[0x2b] == pFVar23[0x23] &&
                     ((pFVar24[0x28] == pFVar23[0x20] && (pFVar24[8] == *pFVar23)))))) &&
                   ((pFVar24[0x29] == pFVar23[0x21] && (pFVar24[0x2a] == pFVar23[0x22])))) {
                  iVar15 = (int)(((longlong)pFVar24 - (longlong)pFVar21) / 0x30);
                  goto LAB_149f3918e;
                }
              }
              iVar15 = -1;
LAB_149f3918e:
              puVar27 = local_f8;
              if (iVar15 < iVar13) {
                iVar13 = iVar15;
              }
              local_c8 = *local_f8;
              lVar26 = (**(code **)local_f8[1])(((undefined8 *)local_f8[1])[1],&local_c8);
              pUVar6 = (UObject *)*puVar27;
              local_f0 = lVar26;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              lVar30 = local_f0;
              *(UObject **)(lVar26 + 0x28) = pUVar6;
              *(undefined8 *)(local_f0 + 0x48) = *(undefined8 *)&pFVar2->field_0x0;
              pFVar21 = (FScriptContainerElement *)(local_f0 + 0x58);
              *(FScriptContainerElement *)(local_f0 + 0x50) = *pFVar23;
              if (pFVar21 != pFVar23 + 8) {
                iVar15 = *(int *)(pFVar23 + 0x10);
                piVar3 = (int *)(local_f0 + 100);
                    /* WARNING: Load size is inaccurate */
                FVar7.Data = pFVar23[8];
                *(int *)(local_f0 + 0x60) = iVar15;
                if ((iVar15 == 0) && (*piVar3 == 0)) {
                  *piVar3 = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,iVar15,*piVar3,(ForAnyElementType *)pFVar21,iVar15,piVar3);
                  ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                            (*(FScriptContainerElement **)pFVar21,(FPCGDataTypeBaseId *)FVar7.Data,
                             iVar15);
                }
              }
              param_1 = local_d8;
              *(undefined4 *)(lVar30 + 0x68) = *(undefined4 *)(pFVar23 + 0x18);
              *(FScriptContainerElement *)(lVar30 + 0x70) = pFVar23[0x20];
              *(FScriptContainerElement *)(lVar30 + 0x71) = pFVar23[0x21];
              *(FScriptContainerElement *)(lVar30 + 0x72) = pFVar23[0x22];
              *(FScriptContainerElement *)(lVar30 + 0x73) = pFVar23[0x23];
              pFVar21 = (local_d8->AllocatorInstance).Data;
              if (((pFVar21 <= (FScriptContainerElement *)&local_f0) &&
                  ((FScriptContainerElement *)&local_f0 < pFVar21 + (longlong)local_d8->ArrayMax * 8
                  )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar11)) {
                pcVar9 = (code *)swi(3);
                EVar12 = (*pcVar9)();
                return EVar12;
              }
              iVar15 = param_1->ArrayNum;
              if (iVar15 == param_1->ArrayMax) {
                iVar15 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
              }
              pFVar21 = (param_1->AllocatorInstance).Data;
              param_1->ArrayNum = iVar15 + 1;
              pFVar21 = pFVar21 + (longlong)iVar13 * 8;
              memmove(pFVar21 + 8,pFVar21,(longlong)(iVar15 - iVar13) << 3);
              *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_f0;
              param_2 = local_e8;
LAB_149f3938d:
              uVar19 = (ulonglong)local_138;
              pFVar23 = pFVar23 + 0x30;
              uVar17 = (ulonglong)local_108;
            }
            if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.AllocatorInstance.Data);
            }
            local_98.HashSize = 0;
            if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_98.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_98.Elements);
            cVar29 = local_147;
          }
          if ((param_1->ArrayNum != param_2->ArrayNum) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pins.Num() == PinProperties.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGNode.cpp"
                                  ,0x455,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            EVar12 = (*pcVar9)();
            return EVar12;
          }
          iVar13 = param_2->ArrayNum;
          uVar14 = 0;
          if (0 < iVar13) {
            lVar30 = 0;
            lVar26 = 0;
            do {
              uVar16 = 0;
              if ((int)uVar14 < iVar13) {
                uVar16 = ~uVar14 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                EVar12 = (*pcVar9)();
                return EVar12;
              }
              pFVar23 = (param_1->AllocatorInstance).Data;
              if (pFVar23 != pFVar23 + (longlong)param_1->ArrayNum * 8) {
                pFVar21 = pFVar23;
                do {
                  if (*(longlong *)(*(longlong *)pFVar21 + 0x48) ==
                      *(longlong *)((param_2->AllocatorInstance).Data + lVar26)) {
                    uVar16 = (uint)((longlong)pFVar21 - (longlong)pFVar23 >> 3);
                    goto LAB_149f3949e;
                  }
                  pFVar21 = pFVar21 + 8;
                } while (pFVar21 != pFVar23 + (longlong)param_1->ArrayNum * 8);
              }
              uVar16 = 0xffffffff;
LAB_149f3949e:
              if (uVar14 != uVar16) {
                cVar29 = '\x01';
                if ((((int)uVar14 < 0) || ((int)uVar16 < 0)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0xce6,L""), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  EVar12 = (*pcVar9)();
                  return EVar12;
                }
                if (((param_1->ArrayNum <= (int)uVar14) || (param_1->ArrayNum <= (int)uVar16)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0xce7,L""), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  EVar12 = (*pcVar9)();
                  return EVar12;
                }
                pFVar23 = (param_1->AllocatorInstance).Data;
                uVar8 = *(undefined8 *)(pFVar23 + lVar30);
                *(undefined8 *)(pFVar23 + lVar30) =
                     *(undefined8 *)(pFVar23 + (longlong)(int)uVar16 * 8);
                *(undefined8 *)(pFVar23 + (longlong)(int)uVar16 * 8) = uVar8;
              }
              iVar13 = param_2->ArrayNum;
              uVar14 = uVar14 + 1;
              lVar26 = lVar26 + 0x30;
              lVar30 = lVar30 + 8;
            } while ((int)uVar14 < iVar13);
          }
          bVar11 = local_148 != 0;
          DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)local_140.Data,local_138);
          if ((FPCGPinProperties *)local_140.Data != (FPCGPinProperties *)0x0) {
            FMemory::Free(local_140.Data);
          }
          if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.AllocatorInstance.Data);
          }
          return -(uint)(cVar29 != '\0') & Node | -(uint)bVar11 & Edge;
        }
        pFVar21 = (param_1->AllocatorInstance).Data;
        pFVar23 = pFVar21 + (longlong)param_1->ArrayNum * 8;
        if (pFVar21 != pFVar23) {
          do {
            if (*(FName *)(*(longlong *)pFVar21 + 0x48) == pFVar28->Label) goto LAB_149f38d8c;
            pFVar21 = pFVar21 + 8;
          } while (pFVar21 != pFVar23);
        }
        if (((local_140.Data <= pFVar28) &&
            (pFVar28 < (FPCGPinProperties *)(local_140.Data + (longlong)(int)local_134 * 0x30))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), uVar14 = local_138, bVar11)) {
          pcVar9 = (code *)swi(3);
          EVar12 = (*pcVar9)();
          return EVar12;
        }
        if (uVar14 == local_134) {
          uVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,&local_140,(int *)&local_134);
        }
        local_138 = uVar14 + 1;
        pFVar23 = local_140.Data + (longlong)(int)uVar14 * 0x30;
        *(FName *)&pFVar23->field_0x0 = pFVar28->Label;
        pFVar23[8] = (FScriptContainerElement)pFVar28->Usage;
        FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                  ((FPCGDataTypeIdentifier *)(pFVar23 + 0x10),&pFVar28->AllowedTypes);
        pFVar23[0x28] = (FScriptContainerElement)pFVar28->bAllowMultipleData;
        pFVar23[0x29] = (FScriptContainerElement)pFVar28->PinStatus;
        pFVar23[0x2a] = (FScriptContainerElement)pFVar28->bInvisiblePin;
        pFVar23[0x2b] = (FScriptContainerElement)pFVar28->bAllowMultipleConnections;
        uVar14 = local_138;
LAB_149f38d8c:
        pFVar28 = pFVar28 + 1;
      } while( true );
    }
    pFVar22 = (FName *)(param_2->AllocatorInstance).Data;
    pUVar4 = *(UPCGPin **)&pFVar23->field_0x0;
    pFVar18 = pFVar22 + (longlong)param_2->ArrayNum * 6;
    local_120 = pUVar4;
    if (pFVar22 != pFVar18) {
      do {
        if (*pFVar22 == (pUVar4->Properties).Label) {
          if ((((((pUVar4->Properties).Label != *pFVar22) ||
                (bVar11 = FPCGDataTypeIdentifier::IsIdentical
                                    (&(pUVar4->Properties).AllowedTypes,
                                     (FPCGDataTypeIdentifier *)(pFVar22 + 2)), !bVar11)) ||
               ((pUVar4->Properties).bAllowMultipleConnections !=
                (bool)*(char *)((longlong)&pFVar22[5].ComparisonIndex.Value + 3))) ||
              (((pUVar4->Properties).bAllowMultipleData !=
                (bool)(char)pFVar22[5].ComparisonIndex.Value ||
               ((pUVar4->Properties).Usage != (EPCGPinUsage)pFVar22[1].ComparisonIndex.Value)))) ||
             (((pUVar4->Properties).PinStatus !=
               *(EPCGPinStatus *)((longlong)&pFVar22[5].ComparisonIndex.Value + 1) ||
              (puVar27 = local_f8,
              (pUVar4->Properties).bInvisiblePin !=
              (bool)*(char *)((longlong)&pFVar22[5].ComparisonIndex.Value + 2))))) {
            pUVar4 = local_120;
            (local_120->Properties).Label = *pFVar22;
            pFVar1 = &(local_120->Properties).AllowedTypes;
            (local_120->Properties).Usage = (EPCGPinUsage)pFVar22[1].ComparisonIndex.Value;
            if (pFVar1 != (FPCGDataTypeIdentifier *)(pFVar22 + 2)) {
              uVar14 = pFVar22[3].ComparisonIndex.Value;
              piVar3 = &(local_120->Properties).AllowedTypes.Ids.ArrayMax;
              pFVar5 = *(FPCGDataTypeBaseId **)&pFVar22[2].ComparisonIndex;
              iVar13 = *piVar3;
              (local_120->Properties).AllowedTypes.Ids.ArrayNum = uVar14;
              if ((uVar14 == 0) && (iVar13 == 0)) {
                *piVar3 = 0;
                param_2 = local_e8;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,uVar14,iVar13,(ForAnyElementType *)pFVar1,uVar14,piVar3);
                ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                          ((pFVar1->Ids).AllocatorInstance.Data,pFVar5,uVar14);
                param_2 = local_e8;
              }
            }
            puVar27 = local_f8;
            bVar10 = local_148;
            (pUVar4->Properties).AllowedTypes.CustomSubtype = pFVar22[4].ComparisonIndex.Value;
            (pUVar4->Properties).bAllowMultipleData = SUB41(pFVar22[5].ComparisonIndex.Value,0);
            (pUVar4->Properties).PinStatus =
                 *(EPCGPinStatus *)((longlong)&pFVar22[5].ComparisonIndex.Value + 1);
            (pUVar4->Properties).bInvisiblePin =
                 *(bool *)((longlong)&pFVar22[5].ComparisonIndex.Value + 2);
            (pUVar4->Properties).bAllowMultipleConnections =
                 *(bool *)((longlong)&pFVar22[5].ComparisonIndex.Value + 3);
            bVar11 = UPCGPin::BreakAllIncompatibleEdges
                               (local_120,
                                (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>
                                 *)local_f8[2]);
            local_148 = bVar11 | bVar10;
            local_147 = '\x01';
            param_1 = local_d8;
          }
          bVar10 = local_148;
          if (local_120->bPropertiesHaveChangedOnDeprecation == false) goto LAB_149f38ada;
          bVar11 = UPCGPin::BreakAllIncompatibleEdges
                             (local_120,
                              (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *
                              )puVar27[2]);
          uVar17 = (ulonglong)local_108;
          local_148 = bVar11 | bVar10;
          pFVar23 = pFVar23 + 8;
          local_120->bPropertiesHaveChangedOnDeprecation = false;
          iVar13 = local_130.ArrayNum;
          goto LAB_149f389d0;
        }
        pFVar22 = pFVar22 + 6;
      } while (pFVar22 != pFVar18);
    }
    if ((local_130.AllocatorInstance.Data <= (FScriptContainerElement *)&local_120) &&
       ((FScriptContainerElement *)&local_120 <
        local_130.AllocatorInstance.Data + (longlong)local_130.ArrayMax * 8)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        EVar12 = (*pcVar9)();
        return EVar12;
      }
      iVar13 = local_130.ArrayNum;
    }
    if (iVar13 == local_130.ArrayMax) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_130.AllocatorInstance,&local_130.ArrayMax);
    }
    local_130.ArrayNum = iVar13 + 1;
    *(UPCGPin **)(local_130.AllocatorInstance.Data + (longlong)iVar13 * 8) = local_120;
LAB_149f38ada:
    pFVar23 = pFVar23 + 8;
    uVar17 = (ulonglong)local_108;
    iVar13 = local_130.ArrayNum;
  } while( true );
}

// AddEdgeTo @ 149f3b1a0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGNode * __thiscall
UPCGNode::AddEdgeTo(UPCGNode *this,FName param_1,UPCGNode *param_2,FName param_3)

{
  int iVar1;
  UPCGGraph *this_00;
  UClass *pUVar2;
  UPCGNode *pUVar3;
  FName local_res10;
  FName local_res20;
  
  this_00 = (UPCGGraph *)this->_padding_;
  if (this_00 != (UPCGGraph *)0x0) {
    local_res10 = param_1;
    local_res20 = param_3;
    pUVar2 = Z_Construct_UClass_UPCGGraph_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar3 = UPCGGraph::AddEdge(this_00,this,&local_res10,param_2,&local_res20);
      return pUVar3;
    }
  }
  return (UPCGNode *)0x0;
}

// BeginDestroy @ 149f3c890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPCGNode::BeginDestroy(UPCGNode *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UPCGNode **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CreateDefaultPins @ 149f40fe0

void __thiscall
UPCGNode::CreateDefaultPins(UPCGNode *this,TFunctionRef<UPCGPin_*___cdecl(UPCGNode_*)> *param_1)

{
  int iVar1;
  UPCGSettingsInterface *pUVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FPCGPinProperties *local_68;
  int local_60;
  UPCGNode *local_58;
  TFunctionRef<UPCGPin_*___cdecl(UPCGNode_*)> *local_50;
  FPCGPinProperties *local_48;
  int local_40;
  longlong *plVar9;
  
  pUVar2 = (this->SettingsInterface).field0_0x0.DebugPtr;
  plVar11 = (longlong *)0x0;
  plVar5 = plVar11;
  local_58 = this;
  local_50 = param_1;
  if (((pUVar2 == (UPCGSettingsInterface *)0x0) ||
      (plVar5 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x388))(), plVar5 == (longlong *)0x0))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Settings",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGNode.cpp"
                            ,0x395,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar6 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)
           (**(code **)(*plVar5 + 0x3b8))(plVar5,&local_68);
  pFVar8 = (this->InputPins).AllocatorInstance.Data;
  iVar1 = (this->InputPins).ArrayNum;
  pFVar10 = pFVar8 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->InputPins).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar10) break;
    pFVar8 = pFVar8 + 8;
  }
  `UPCGNode::CreateDefaultPins'::__l2::<lambda_1>::operator()
            (&local_58,(TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *)&this->InputPins,pTVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar10 = (this->InputPins).AllocatorInstance.Data, plVar9 = plVar11,
     0 < (this->InputPins).ArrayNum)) {
    do {
      if (*(UObject **)pFVar10 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(*(UObject **)pFVar10);
      }
      uVar7 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar7;
      pFVar10 = pFVar10 + 8;
    } while ((int)uVar7 < (this->InputPins).ArrayNum);
  }
  DestructItems<FPCGPinProperties,int>(local_68,local_60);
  if (local_68 != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_68);
  }
  pTVar6 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)
           (**(code **)(*plVar5 + 0x3c0))(plVar5,&local_48);
  pFVar8 = (this->OutputPins).AllocatorInstance.Data;
  iVar1 = (this->OutputPins).ArrayNum;
  pFVar10 = pFVar8 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->OutputPins).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar8 == pFVar10) break;
    pFVar8 = pFVar8 + 8;
  }
  `UPCGNode::CreateDefaultPins'::__l2::<lambda_1>::operator()
            (&local_58,(TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *)&this->OutputPins,pTVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pFVar10 = (this->OutputPins).AllocatorInstance.Data, 0 < (this->OutputPins).ArrayNum)) {
    do {
      if (*(UObject **)pFVar10 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(*(UObject **)pFVar10);
      }
      uVar7 = (int)plVar11 + 1;
      plVar11 = (longlong *)(ulonglong)uVar7;
      pFVar10 = pFVar10 + 8;
    } while ((int)uVar7 < (this->OutputPins).ArrayNum);
  }
  DestructItems<FPCGPinProperties,int>(local_48,local_40);
  if (local_48 != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// GetAuthoredTitleLine @ 149f47f00

FText * __thiscall UPCGNode::GetAuthoredTitleLine(UPCGNode *this,FText *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_28;
  FString local_18;
  
  if (this->NodeTitle == (FName)0x0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"PCGNode",L"NodeTitle",L"Unnamed Node");
  }
  else {
    pFVar1 = ::FName::ToString(&this->NodeTitle,&local_18);
    pFVar1 = ::FName::NameToDisplayString(&local_28,pFVar1,false);
    FText::FromString(__return_storage_ptr__,pFVar1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultTitle @ 149f49670

FText * __thiscall UPCGNode::GetDefaultTitle(UPCGNode *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"PCGNode",L"NodeTitle",L"Unnamed Node");
  return __return_storage_ptr__;
}

// GetFirstConnectedInputPin @ 149f4a8b0

UPCGPin * __thiscall UPCGNode::GetFirstConnectedInputPin(UPCGNode *this)

{
  int iVar1;
  int iVar2;
  UPCGPin *pUVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  pFVar8 = (this->InputPins).AllocatorInstance.Data;
  iVar1 = (this->InputPins).ArrayNum;
  pFVar6 = pFVar8 + (longlong)iVar1 * 8;
  local_res10 = pFVar6;
  do {
    if ((this->InputPins).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar6) {
      return (UPCGPin *)0x0;
    }
    pUVar3 = *(UPCGPin **)pFVar8;
    if (pUVar3 != (UPCGPin *)0x0) {
      pFVar5 = (pUVar3->Edges).AllocatorInstance.Data;
      iVar7 = 0;
      iVar2 = (pUVar3->Edges).ArrayNum;
      pFVar6 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pUVar3->Edges).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (pFVar5 == pFVar6) break;
        bVar4 = UPCGEdge::IsValid(*(UPCGEdge **)pFVar5);
        if (bVar4) {
          iVar7 = iVar7 + 1;
        }
        pFVar5 = pFVar5 + 8;
      }
      pFVar6 = local_res10;
      if (0 < iVar7) {
        return pUVar3;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetFirstConnectedOutputPin @ 149f4a960

UPCGPin * __thiscall UPCGNode::GetFirstConnectedOutputPin(UPCGNode *this)

{
  int iVar1;
  int iVar2;
  UPCGPin *pUVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  pFVar8 = (this->OutputPins).AllocatorInstance.Data;
  iVar1 = (this->OutputPins).ArrayNum;
  pFVar6 = pFVar8 + (longlong)iVar1 * 8;
  local_res10 = pFVar6;
  do {
    if ((this->OutputPins).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar6) {
      return (UPCGPin *)0x0;
    }
    pUVar3 = *(UPCGPin **)pFVar8;
    if (pUVar3 != (UPCGPin *)0x0) {
      pFVar5 = (pUVar3->Edges).AllocatorInstance.Data;
      iVar7 = 0;
      iVar2 = (pUVar3->Edges).ArrayNum;
      pFVar6 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pUVar3->Edges).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (pFVar5 == pFVar6) break;
        bVar4 = UPCGEdge::IsValid(*(UPCGEdge **)pFVar5);
        if (bVar4) {
          iVar7 = iVar7 + 1;
        }
        pFVar5 = pFVar5 + 8;
      }
      pFVar6 = local_res10;
      if (0 < iVar7) {
        return pUVar3;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetGeneratedTitleLine @ 149f4aa90

FText * __thiscall UPCGNode::GetGeneratedTitleLine(UPCGNode *this,FText *__return_storage_ptr__)

{
  UPCGSettingsInterface *pUVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  pUVar1 = (this->SettingsInterface).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPCGSettingsInterface *)0x0) &&
     (plVar3 = (longlong *)(**(code **)(pUVar1->_padding_ + 0x388))(), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x3d0))(plVar3,&local_18);
    if (1 < local_18.Data.ArrayNum) {
      FText::FromString(__return_storage_ptr__,&local_18);
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar4->Flags;
  return __return_storage_ptr__;
}

// GetGraph @ 149f4ab50

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGGraph * __thiscall UPCGNode::GetGraph(UPCGNode *this)

{
  int iVar1;
  UPCGGraph *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UPCGGraph *)this->_padding_;
  if (pUVar2 != (UPCGGraph *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGGraph_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPCGGraph *)0x0;
}

// GetInboundEdgesNum @ 149f4abf0

int __thiscall UPCGNode::GetInboundEdgesNum(UPCGNode *this)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  pFVar12 = (this->InputPins).AllocatorInstance.Data;
  local_res18 = (this->InputPins).ArrayNum;
  uVar9 = (ulonglong)(int)local_res18;
  iVar7 = 0;
  local_res20 = pFVar12 + uVar9 * 8;
  while( true ) {
    pFVar5 = local_res20;
    if ((this->InputPins).ArrayNum != (int)uVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar5) break;
    lVar3 = *(longlong *)pFVar12;
    if (lVar3 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputPin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGNode.cpp"
                         ,0x28f,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    puVar10 = *(undefined8 **)(lVar3 + 0x38);
    iVar2 = *(int *)(lVar3 + 0x40);
    puVar1 = puVar10 + iVar2;
    iVar11 = 0;
    while( true ) {
      if (*(int *)(lVar3 + 0x40) != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (puVar10 == puVar1) break;
      bVar6 = UPCGEdge::IsValid((UPCGEdge *)*puVar10);
      iVar8 = iVar11 + 1;
      if (!bVar6) {
        iVar8 = iVar11;
      }
      puVar10 = puVar10 + 1;
      iVar11 = iVar8;
    }
    uVar9 = (ulonglong)local_res18;
    iVar7 = iVar7 + iVar11;
    pFVar12 = pFVar12 + 8;
  }
  return iVar7;
}

// GetInputPin @ 149f4ad20

UPCGPin * __thiscall UPCGNode::GetInputPin(UPCGNode *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->InputPins).AllocatorInstance.Data;
  iVar2 = (this->InputPins).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->InputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(UPCGPin **)pFVar3)->Properties).Label == *param_1) {
      return *(UPCGPin **)pFVar3;
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UPCGPin *)0x0;
}

// GetInputPin @ 149f4ad90

UPCGPin * __thiscall UPCGNode::GetInputPin(UPCGNode *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->InputPins).AllocatorInstance.Data;
  iVar2 = (this->InputPins).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->InputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(UPCGPin **)pFVar3)->Properties).Label == *param_1) {
      return *(UPCGPin **)pFVar3;
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UPCGPin *)0x0;
}

// GetNodeTitle @ 149f4b600

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UPCGNode::GetNodeTitle(UPCGNode *this,FText *__return_storage_ptr__,EPCGNodeTitleType param_1)

{
  FName *this_00;
  UPCGSettingsInterface *pUVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  FString *pFVar11;
  FText *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  int iVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  int iVar19;
  longlong lVar20;
  wchar_t *pwVar21;
  uint uVar22;
  undefined1 local_res8 [8];
  FText local_a8;
  FString local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  pUVar1 = (this->SettingsInterface).field0_0x0.DebugPtr;
  if (((pUVar1 == (UPCGSettingsInterface *)0x0) ||
      (plVar10 = (longlong *)(**(code **)(pUVar1->_padding_ + 0x388))(), plVar10 == (longlong *)0x0)
      ) || (cVar7 = (**(code **)(*plVar10 + 0x3d8))(plVar10), cVar7 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  pUVar1 = (this->SettingsInterface).field0_0x0.DebugPtr;
  this_00 = &this->NodeTitle;
  FVar2 = *this_00;
  if ((pUVar1 == (UPCGSettingsInterface *)0x0) ||
     (plVar10 = (longlong *)(**(code **)(pUVar1->_padding_ + 0x388))(), plVar10 == (longlong *)0x0))
  {
LAB_149f4b6be:
    pFVar12 = FText::GetEmpty();
    local_a8.TextData.Reference = (pFVar12->TextData).Reference;
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                (local_a8.TextData.Reference,local_res8);
    }
    local_a8.Flags = pFVar12->Flags;
  }
  else {
    (**(code **)(*plVar10 + 0x3d0))(plVar10,&local_78);
    if ((int)local_78.Flags < 2) {
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_78.TextData.Reference);
      }
      goto LAB_149f4b6be;
    }
    FText::FromString(&local_a8,(FString *)&local_78);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_78.TextData.Reference);
    }
  }
  pFVar11 = FText::ToString(&local_a8);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = (pFVar11->Data).ArrayNum;
  lVar20 = (longlong)local_88.Data.ArrayNum;
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  if (local_88.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,pFVar3,lVar20 * 2);
  }
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  iVar16 = local_88.Data.ArrayNum;
  pwVar21 = L"";
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  if (((local_88.Data.ArrayNum < 2) || (!bVar4)) || (FVar2 != (FName)0x0)) {
    if (*this_00 == (FName)0x0) {
      FText::AsLocalizable_Advanced_LocText(&local_78,L"PCGNode",L"NodeTitle",L"Unnamed Node");
    }
    else {
      pFVar11 = ::FName::ToString(this_00,(FString *)&local_68);
      pFVar11 = ::FName::NameToDisplayString((FString *)&local_58,pFVar11,false);
      FText::FromString(&local_78,pFVar11);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_58.TextData.Reference);
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
    pFVar11 = FText::ToString(&local_78);
    if (&local_98 == pFVar11) {
LAB_149f4b8f0:
      iVar19 = local_98.Data.ArrayNum;
    }
    else {
      iVar8 = (pFVar11->Data).ArrayNum;
      pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
      local_98.Data.ArrayNum = iVar8;
      if ((iVar8 != 0) || (iVar19 = 0, local_98.Data.ArrayMax != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar8,local_98.Data.ArrayMax,(ForAnyElementType *)&local_98,iVar8,
                   &local_98.Data.ArrayMax);
        if (iVar8 != 0) {
          memcpy(local_98.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar8 * 2);
        }
        goto LAB_149f4b8f0;
      }
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      iVar19 = local_98.Data.ArrayNum;
    }
    iVar8 = iVar19 + -1;
    if (iVar19 == 0) {
      iVar8 = 0;
    }
    if (0x2d < iVar8) {
      FVar18.Data = (FScriptContainerElement *)L"";
      if (iVar19 != 0) {
        FVar18.Data = local_98.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize((FString *)&local_68,(wchar_t *)FVar18.Data,0x2a);
      ::FString::ConcatFC((FString *)&local_a8,(FString *)&local_68,L"...");
      if ((ITextData *)local_98.Data.AllocatorInstance.Data != (ITextData *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_a8.TextData.Reference;
      local_98.Data.ArrayMax = local_a8._12_4_;
      local_98.Data.ArrayNum = local_a8.Flags;
      goto LAB_149f4b805;
    }
  }
  else {
    ::FString::AssignRange
              (&local_98,(wchar_t *)local_88.Data.AllocatorInstance.Data,local_88.Data.ArrayNum - 1)
    ;
    iVar8 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    if (0x2d < iVar8) {
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_98.Data.ArrayNum != 0) {
        FVar18.Data = local_98.Data.AllocatorInstance.Data;
      }
      ::FString::FString((FString *)&local_68,
                         (wchar_t *)((longlong)FVar18.Data + (longlong)iVar8 * 2 + -0x54));
      ::FString::ConcatCF((FString *)&local_a8,L"...",(FString *)&local_68);
      if ((ITextData *)local_98.Data.AllocatorInstance.Data != (ITextData *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_a8.TextData.Reference;
      local_98.Data.ArrayMax = local_a8._12_4_;
      local_98.Data.ArrayNum = local_a8.Flags;
LAB_149f4b805:
      local_a8.Flags = 0;
      local_a8._12_4_ = 0;
      local_a8.TextData.Reference = (ITextData *)0x0;
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
      }
    }
  }
  if (param_1 == FullTitle) {
    local_a8.TextData.Reference = (ITextData *)0x0;
    uVar9 = 0;
    local_a8.Flags = 0;
    local_a8._12_4_ = 0;
    if (1 < iVar16) {
      if (bVar4) {
        if (FVar2 != (FName)0x0) {
          FText::AsLocalizable_Advanced_LocText(&local_78,L"PCGNode",L"NodeTitle",L"Unnamed Node");
          pFVar11 = FText::ToString(&local_78);
          ::FString::FString((FString *)&local_68,pFVar11);
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          iVar16 = 1 - local_68.Flags;
          if (local_68.Flags == 0) {
            iVar16 = 0;
          }
          uVar22 = local_88.Data.ArrayNum - 1;
          if (local_88.Data.ArrayNum == 0) {
            uVar22 = uVar9;
          }
          if (iVar16 + 0x2a < (int)uVar22) {
            if (local_88.Data.ArrayNum != 0) {
              pwVar21 = (wchar_t *)local_88.Data.AllocatorInstance.Data;
            }
            uVar17 = uVar22;
            if ((int)(iVar16 + 0x27U) < (int)uVar22) {
              uVar17 = iVar16 + 0x27U;
            }
            if (0 < (int)uVar17) {
              uVar9 = uVar17;
            }
            ::FString::FString((FString *)&local_58,
                               (wchar_t *)
                               ((longlong)pwVar21 +
                               ((longlong)(int)uVar22 - (longlong)(int)uVar9) * 2));
            ::FString::ConcatCF((FString *)&local_78,L"...",(FString *)&local_58);
            if ((ITextData *)local_88.Data.AllocatorInstance.Data != (ITextData *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            local_88.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)local_78.TextData.Reference;
            local_88.Data.ArrayNum = local_78.Flags;
            local_88.Data.ArrayMax = local_78._12_4_;
            local_78.Flags = 0;
            local_78._12_4_ = 0;
            local_78.TextData.Reference = (ITextData *)0x0;
            if (local_58.TextData.Reference != (ITextData *)0x0) {
              FMemory::Free(local_58.TextData.Reference);
            }
          }
          ::FString::ConcatFC((FString *)&local_58,(FString *)&local_68,L" - ");
          ::FString::ConcatFF((FString *)&local_78,(FString *)&local_58,&local_88);
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_a8.TextData.Reference);
          }
          uVar9 = local_78.Flags;
          local_a8.TextData.Reference = local_78.TextData.Reference;
          local_78.TextData.Reference = (ITextData *)0x0;
          uVar5._0_4_ = local_78.Flags;
          uVar5._4_4_ = local_78._12_4_;
          local_a8.Flags = local_78.Flags;
          local_a8._12_4_ = local_78._12_4_;
          local_78.Flags = 0;
          local_78._12_4_ = 0;
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            local_a8._8_8_ = uVar5;
            FMemory::Free(local_58.TextData.Reference);
            uVar9 = local_a8.Flags;
          }
          goto LAB_149f4bbf2;
        }
        FText::AsLocalizable_Advanced_LocText(&local_68,L"PCGNode",L"NodeTitle",L"Unnamed Node");
        pFVar11 = FText::ToString(&local_68);
        ::FString::operator=((FString *)&local_a8,pFVar11);
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        uVar22 = local_a8.Flags - 1;
        if (local_a8.Flags == 0) {
          uVar22 = uVar9;
        }
        uVar9 = local_a8.Flags;
        if (0x2d < (int)uVar22) {
          if (local_a8.Flags != 0) {
            pwVar21 = (wchar_t *)local_a8.TextData.Reference;
          }
          ::FString::ConstructFromPtrSize((FString *)&local_68,pwVar21,0x2a);
          ::FString::ConcatFC((FString *)&local_78,(FString *)&local_68,L"...");
          goto LAB_149f4b9ff;
        }
      }
      else {
        uVar22 = local_88.Data.ArrayNum - 1;
        if (local_88.Data.ArrayNum == 0) {
          uVar22 = uVar9;
        }
        ::FString::AssignRange
                  ((FString *)&local_a8,(wchar_t *)local_88.Data.AllocatorInstance.Data,uVar22);
        uVar22 = local_a8.Flags - 1;
        if (local_a8.Flags == 0) {
          uVar22 = uVar9;
        }
        uVar9 = local_a8.Flags;
        if (0x2d < (int)uVar22) {
          if (local_a8.Flags != 0) {
            pwVar21 = (wchar_t *)local_a8.TextData.Reference;
          }
          ::FString::FString((FString *)&local_68,
                             (wchar_t *)((longlong)pwVar21 + (longlong)(int)uVar22 * 2 + -0x54));
          ::FString::ConcatCF((FString *)&local_78,L"...",(FString *)&local_68);
LAB_149f4b9ff:
          if (local_a8.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_a8.TextData.Reference);
          }
          uVar5 = local_78._8_8_;
          uVar9 = local_78.Flags;
          local_a8.TextData.Reference = local_78.TextData.Reference;
          local_78.Flags = 0;
          local_78._12_4_ = 0;
          uVar6 = local_78._8_8_;
          local_78.TextData.Reference = (ITextData *)0x0;
          local_78.Flags = (uint)uVar5;
          local_78._12_4_ = SUB84(uVar5,4);
          local_a8.Flags = local_78.Flags;
          local_a8._12_4_ = local_78._12_4_;
          local_78._8_8_ = uVar6;
LAB_149f4bbf2:
          if (local_68.TextData.Reference != (ITextData *)0x0) {
            FMemory::Free(local_68.TextData.Reference);
            uVar9 = local_a8.Flags;
          }
        }
      }
    }
    if (1 < (int)uVar9) {
      pFVar12 = FText::FromString(&local_68,(FString *)&local_a8);
      pFVar13 = FText::FromString(&local_78,&local_98);
      pFVar14 = FText::FromString(&local_58,"{0}\r\n{1}");
      pFVar15 = FTextFormat::FTextFormat(&local_48,pFVar14,Default);
      FText::Format<FText,FText>(__return_storage_ptr__,pFVar15,pFVar13,pFVar12);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_a8.TextData.Reference);
      }
      goto LAB_149f4bc94;
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_a8.TextData.Reference);
    }
  }
  FText::FromString(__return_storage_ptr__,&local_98);
LAB_149f4bc94:
  if ((ITextData *)local_98.Data.AllocatorInstance.Data != (ITextData *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if ((ITextData *)local_88.Data.AllocatorInstance.Data != (ITextData *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOutputPin @ 149f4beb0

UPCGPin * __thiscall UPCGNode::GetOutputPin(UPCGNode *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->OutputPins).AllocatorInstance.Data;
  iVar2 = (this->OutputPins).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->OutputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(UPCGPin **)pFVar3)->Properties).Label == *param_1) {
      return *(UPCGPin **)pFVar3;
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UPCGPin *)0x0;
}

// GetOutputPin @ 149f4bf20

UPCGPin * __thiscall UPCGNode::GetOutputPin(UPCGNode *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->OutputPins).AllocatorInstance.Data;
  iVar2 = (this->OutputPins).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->OutputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (((*(UPCGPin **)pFVar3)->Properties).Label == *param_1) {
      return *(UPCGPin **)pFVar3;
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UPCGPin *)0x0;
}

// GetPassThroughInputPin @ 149f4c570

UPCGPin * __thiscall UPCGNode::GetPassThroughInputPin(UPCGNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UPCGSettingsInterface *pUVar3;
  char cVar4;
  bool bVar5;
  UPCGPin *pUVar6;
  longlong *plVar7;
  FPCGDataTypeIdentifier *this_00;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FPCGDataTypeIdentifier local_68;
  FPCGDataTypeIdentifier local_50;
  FPCGDataTypeIdentifier local_38;
  
  pUVar6 = (UPCGPin *)(**(code **)(this->_padding_ + 0x2b8))();
  if ((((pUVar6 != (UPCGPin *)0x0) && ((this->InputPins).ArrayNum != 0)) &&
      (pUVar3 = (this->SettingsInterface).field0_0x0.DebugPtr,
      pUVar3 != (UPCGSettingsInterface *)0x0)) &&
     (plVar7 = (longlong *)(**(code **)(pUVar3->_padding_ + 0x388))(), plVar7 != (longlong *)0x0)) {
    pFVar8 = (this->InputPins).AllocatorInstance.Data;
    iVar2 = (this->InputPins).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->InputPins).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar1) {
        return (UPCGPin *)0x0;
      }
      cVar4 = (**(code **)(*plVar7 + 0x430))(plVar7,*(undefined8 *)pFVar8);
      if (cVar4 != '\0') break;
      pFVar8 = pFVar8 + 8;
    }
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      UPCGPin::GetCurrentTypesID(*(UPCGPin **)pFVar8,&local_50);
      UPCGPin::GetCurrentTypesID(pUVar6,&local_68);
      this_00 = FPCGDataTypeIdentifier::operator&(&local_50,&local_38,&local_68);
      bVar5 = FPCGDataTypeIdentifier::operator!(this_00);
      if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Ids.AllocatorInstance.Data);
      }
      if (!bVar5) {
        pUVar6 = *(UPCGPin **)pFVar8;
        if (local_68.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Ids.AllocatorInstance.Data);
        }
        if (local_50.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Ids.AllocatorInstance.Data);
          return pUVar6;
        }
        return pUVar6;
      }
      if (local_68.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Ids.AllocatorInstance.Data);
      }
      if (local_50.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Ids.AllocatorInstance.Data);
      }
    }
  }
  return (UPCGPin *)0x0;
}

// GetPassThroughOutputPin @ 149f4c6d0

UPCGPin * __thiscall UPCGNode::GetPassThroughOutputPin(UPCGNode *this)

{
  UPCGPin *pUVar1;
  
  if (0 < (this->OutputPins).ArrayNum) {
    pUVar1 = *(UPCGPin **)(this->OutputPins).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UPCGPin *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UPCGPin *)0x0;
}

// GetPrivateStaticClass @ 149f4da30

UClass * __cdecl UPCGNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGNode",&Z_Registration_Info_UClass_UPCGNode.InnerSingleton,
               StaticRegisterNativesUPCGNode,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGNode>,InternalVTableHelperCtorCaller<UPCGNode>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGNode.InnerSingleton;
}

// GetSettings @ 149f4ed00

UPCGSettings * __thiscall UPCGNode::GetSettings(UPCGNode *this)

{
  UPCGSettingsInterface *pUVar1;
  UPCGSettings *pUVar2;
  
  pUVar1 = (this->SettingsInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGSettingsInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149f4ed0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UPCGSettings *)(**(code **)(pUVar1->_padding_ + 0x388))();
    return pUVar2;
  }
  return (UPCGSettings *)0x0;
}

// HasFlippedTitleLines @ 149f50330

bool __thiscall UPCGNode::HasFlippedTitleLines(UPCGNode *this)

{
  UPCGSettingsInterface *pUVar1;
  char cVar2;
  longlong *plVar3;
  
  pUVar1 = (this->SettingsInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGSettingsInterface *)0x0) {
    plVar3 = (longlong *)(**(code **)(pUVar1->_padding_ + 0x388))();
    if (plVar3 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar3 + 0x3d8))(plVar3);
      if (cVar2 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// HasInboundEdges @ 149f50380

bool __thiscall UPCGNode::HasInboundEdges(UPCGNode *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->InputPins).AllocatorInstance.Data;
  iVar3 = (this->InputPins).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->InputPins).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar5 = *(longlong *)pFVar8;
    puVar7 = *(undefined8 **)(lVar5 + 0x38);
    iVar4 = *(int *)(lVar5 + 0x40);
    puVar2 = puVar7 + iVar4;
    while( true ) {
      if (*(int *)(lVar5 + 0x40) != iVar4) {
        `TCheckedPointerIterator<TObjectPtr<UPCGEdge>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar7 == puVar2) break;
      bVar6 = UPCGEdge::IsValid((UPCGEdge *)*puVar7);
      if (bVar6) {
        return true;
      }
      puVar7 = puVar7 + 1;
    }
    pFVar8 = pFVar8 + 8;
  }
  return false;
}

// InputPinProperties @ 149f51b10

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGNode::InputPinProperties
          (UPCGNode *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  Algo::
  Transform<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGNode::InputPinProperties_::__l2::<lambda_1>_>
            (&this->InputPins,__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// IsEdgeUsedByNodeExecution @ 149f521b0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall UPCGNode::IsEdgeUsedByNodeExecution(UPCGNode *this,UPCGEdge *param_1)

{
  UPCGNode *pUVar1;
  UPCGSettingsInterface *pUVar2;
  UPCGEdge *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  longlong *plVar8;
  UPCGPin *pUVar9;
  UPCGPin *pUVar10;
  
  if ((param_1 == (UPCGEdge *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InEdge",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGNode.cpp"
                         ,0x2e3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pUVar10 = (param_1->InputPin).field0_0x0.DebugPtr;
  pUVar1 = (pUVar10->Node).field0_0x0.DebugPtr;
  if (pUVar1 == (UPCGNode *)0x0) {
    bVar5 = this == (UPCGNode *)0x0;
  }
  else {
    bVar5 = pUVar1 == this;
  }
  if (!bVar5) {
    pUVar10 = (param_1->OutputPin).field0_0x0.DebugPtr;
    pUVar1 = (pUVar10->Node).field0_0x0.DebugPtr;
    if (pUVar1 == (UPCGNode *)0x0) {
      bVar5 = this == (UPCGNode *)0x0;
    }
    else {
      bVar5 = pUVar1 == this;
    }
    if (!bVar5) goto LAB_149f522d1;
  }
  if (pUVar10 == (UPCGPin *)0x0) {
LAB_149f522d1:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1525383761460462320>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGNode.cpp"
                       ,0x2f0,"Pin");
    if (!bVar5) {
      return true;
    }
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pUVar2 = (this->SettingsInterface).field0_0x0.DebugPtr;
  if (pUVar2 == (UPCGSettingsInterface *)0x0) {
    return true;
  }
  plVar8 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x388))();
  if (plVar8 == (longlong *)0x0) {
    return true;
  }
  if ((char)plVar8[9] != '\0') goto LAB_149f522c0;
  pUVar9 = (UPCGPin *)(**(code **)(this->_padding_ + 0x2b0))(this);
  cVar7 = (**(code **)(*plVar8 + 0x428))(plVar8);
  if ((pUVar10->Edges).ArrayNum < 1) {
LAB_149f522ac:
    bVar5 = false;
  }
  else {
    pUVar3 = *(UPCGEdge **)(pUVar10->Edges).AllocatorInstance.Data;
    if (pUVar3 == (UPCGEdge *)0x0) {
      bVar5 = param_1 == (UPCGEdge *)0x0;
    }
    else {
      bVar5 = pUVar3 == param_1;
    }
    if (!bVar5) goto LAB_149f522ac;
    bVar5 = true;
  }
  if ((pUVar10 != pUVar9) || ((cVar7 != '\0' && (!bVar5)))) {
    return false;
  }
LAB_149f522c0:
  uVar6 = (**(code **)(*plVar8 + 0x410))(plVar8,pUVar10);
  return (bool)uVar6;
}

// IsInputPinConnected @ 149f52550

bool __thiscall UPCGNode::IsInputPinConnected(UPCGNode *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->InputPins).AllocatorInstance.Data;
  iVar2 = (this->InputPins).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->InputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (((*(UPCGPin **)pFVar4)->Properties).Label == *param_1) {
      bVar3 = UPCGPin::IsConnected(*(UPCGPin **)pFVar4);
      return bVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return false;
}

// IsInputPinRequiredByExecution @ 149f525c0

bool __thiscall UPCGNode::IsInputPinRequiredByExecution(UPCGNode *this,UPCGPin *param_1)

{
  UPCGSettingsInterface *pUVar1;
  char cVar2;
  longlong *plVar3;
  
  pUVar1 = (this->SettingsInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGSettingsInterface *)0x0) {
    plVar3 = (longlong *)(**(code **)(pUVar1->_padding_ + 0x388))();
    if (plVar3 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar3 + 0x408))(plVar3,param_1);
      if (cVar2 == '\0') {
        return false;
      }
    }
  }
  return true;
}

// IsInstance @ 149f52610

bool __thiscall UPCGNode::IsInstance(UPCGNode *this)

{
  UPCGSettingsInterface *pUVar1;
  UPCGSettingsInterface *pUVar2;
  
  pUVar1 = (this->SettingsInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGSettingsInterface *)0x0) {
    pUVar2 = (UPCGSettingsInterface *)(**(code **)(pUVar1->_padding_ + 0x380))(pUVar1);
    if (pUVar1 != pUVar2) {
      return true;
    }
  }
  return false;
}

// IsOutputPinConnected @ 149f52820

bool __thiscall UPCGNode::IsOutputPinConnected(UPCGNode *this,FName *param_1)

{
  bool bVar1;
  UPCGPin *this_00;
  
  this_00 = GetOutputPin(this,param_1);
  if (this_00 != (UPCGPin *)0x0) {
    bVar1 = UPCGPin::IsConnected(this_00);
    return bVar1;
  }
  return false;
}

// IsPinUsedByNodeExecution @ 149f528f0

bool __thiscall UPCGNode::IsPinUsedByNodeExecution(UPCGNode *this,UPCGPin *param_1)

{
  UPCGSettingsInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  UPCGPin *pUVar6;
  
  if (param_1 == (UPCGPin *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGNode.cpp"
                       ,0x2ce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar1 = (this->SettingsInterface).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGSettingsInterface *)0x0) {
    plVar5 = (longlong *)(**(code **)(pUVar1->_padding_ + 0x388))();
    if (plVar5 != (longlong *)0x0) {
      if ((char)plVar5[9] == '\0') {
        pUVar6 = (UPCGPin *)(**(code **)(this->_padding_ + 0x2b0))(this);
        return param_1 == pUVar6;
      }
                    /* WARNING: Could not recover jumptable at 0x000149f52978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar5 + 0x410))(plVar5,param_1);
      return (bool)uVar4;
    }
  }
  return true;
}

// OutputPinProperties @ 149f57500

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGNode::OutputPinProperties
          (UPCGNode *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  Algo::
  Transform<TArray<TObjectPtr<UPCGPin>,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGNode::OutputPinProperties_::__l2::<lambda_1>_>
            (&this->OutputPins,__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// PostLoad @ 149f57fa0

void __thiscall UPCGNode::PostLoad(UPCGNode *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UPCGNode **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// PropagateDynamicPinTypes @ 149f58a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EPCGChangeType __thiscall
UPCGNode::PropagateDynamicPinTypes
          (UPCGNode *this,
          TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *param_1,
          UPCGNode *param_2)

{
  ForElementType<UPCGNode_*> FVar1;
  int iVar2;
  UPCGSettingsInterface *pUVar3;
  UPCGPin *pUVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  EPCGChangeType EVar8;
  EPCGChangeType EVar9;
  longlong *plVar10;
  UPCGPin *pUVar11;
  ForElementType<UPCGNode_*> FVar12;
  ulonglong uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStack_138 [32];
  TObjectPtr<UPCGNode>_u_0 *local_118;
  ForElementType<UPCGNode_*> local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6 [2];
  EPCGChangeType local_e4;
  TObjectPtr<UPCGNode>_u_0 local_e0;
  uint local_d8;
  FScriptContainerElement *local_d0;
  UPCGNode *local_c8;
  UPCGNode *local_c0;
  TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *local_b8;
  FScriptContainerElement *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  ForElementType<UPCGNode_*> local_98;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar3 = (this->SettingsInterface).field0_0x0.DebugPtr;
  if (((pUVar3 == (UPCGSettingsInterface *)0x0) ||
      (local_b8 = param_1, plVar10 = (longlong *)(**(code **)(pUVar3->_padding_ + 0x388))(),
      plVar10 == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*plVar10 + 0x3a8))(plVar10), cVar6 == '\0')) {
    local_e4 = None;
  }
  else {
    local_a0 = local_e6;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGNode::UpdatePins'::__l2::<lambda_1>,UPCGPin_*,UPCGNode_*>::
               Call;
    local_e4 = UpdatePins(this,(TFunctionRef<UPCGPin_*___cdecl(UPCGNode_*)> *)&local_a8);
    local_c0 = this;
    TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator>::Emplace<UPCGNode_*>
              (param_1,&local_c8,(bool *)&local_c0);
    local_d8 = (this->OutputPins).ArrayNum;
    uVar13 = (ulonglong)(int)local_d8;
    pFVar16 = (this->OutputPins).AllocatorInstance.Data;
    local_98.SecondaryData = (ForElementType<UPCGNode_*>)0x0;
    local_50 = 0;
    local_4c = 8;
    local_b0 = pFVar16 + uVar13 * 8;
    while( true ) {
      pFVar15 = local_b0;
      local_d0 = pFVar16;
      if ((this->OutputPins).ArrayNum != (int)uVar13) {
        local_e8 = 0;
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_e8);
      }
      if (pFVar16 == pFVar15) break;
      pUVar4 = *(UPCGPin **)pFVar16;
      pFVar15 = (pUVar4->Edges).AllocatorInstance.Data;
      iVar2 = (pUVar4->Edges).ArrayNum;
      pFVar16 = pFVar15 + (longlong)iVar2 * 8;
      EVar8 = local_e4;
      while( true ) {
        if ((pUVar4->Edges).ArrayNum != iVar2) {
          local_e7 = 0;
          `TCheckedPointerIterator<TObjectPtr<UPCGEdge>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_e7);
        }
        if (pFVar15 == pFVar16) break;
        pUVar11 = UPCGEdge::GetOtherPin(*(UPCGEdge **)pFVar15,pUVar4);
        if (((pUVar11 != (UPCGPin *)0x0) &&
            (local_e0 = (TObjectPtr<UPCGNode>_u_0)(pUVar11->Node).field0_0x0.DebugPtr,
            local_e0.DebugPtr != (UPCGNode *)0x0)) && (local_e0.DebugPtr != param_2)) {
          FVar12 = (ForElementType<UPCGNode_*>)&local_98;
          if (local_98.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
            FVar12 = local_98.SecondaryData;
          }
          FVar1 = (ForElementType<UPCGNode_*>)((longlong)FVar12 + (longlong)local_50 * 8);
          for (; FVar12 != FVar1; FVar12 = (ForElementType<UPCGNode_*>)((longlong)FVar12 + 8)) {
            if (*(UPCGNode **)FVar12 == local_e0.DebugPtr) goto LAB_149f58d08;
          }
          pUVar3 = ((local_e0.DebugPtr)->SettingsInterface).field0_0x0.DebugPtr;
          if (((pUVar3 != (UPCGSettingsInterface *)0x0) &&
              (plVar10 = (longlong *)(**(code **)(pUVar3->_padding_ + 0x388))(),
              plVar10 != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(*plVar10 + 0x3a8))(plVar10), cVar6 != '\0')) {
            FVar12 = (ForElementType<UPCGNode_*>)&local_98;
            if (local_98.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
              FVar12 = local_98.SecondaryData;
            }
            if ((ulonglong)FVar12 <= &local_e0) {
              FVar12 = (ForElementType<UPCGNode_*>)&local_98;
              if (local_98.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
                FVar12 = local_98.SecondaryData;
              }
              if (&local_e0 <
                  (TObjectPtr<UPCGNode>_u_0 *)((longlong)FVar12 + (longlong)local_4c * 8)) {
                local_100 = (longlong)local_50;
                local_f8 = 8;
                local_118 = &local_e0;
                local_110 = (ForElementType<UPCGNode_*>)&local_98;
                if (local_98.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
                  local_110 = local_98.SecondaryData;
                }
                local_108 = (longlong)local_4c;
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar5 = (code *)swi(3);
                  EVar8 = (*pcVar5)();
                  return EVar8;
                }
              }
            }
            if (local_50 == local_4c) {
              local_50 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UPCGNode_*>_>
                                   (0x808,&local_98,&local_4c);
            }
            FVar12 = (ForElementType<UPCGNode_*>)&local_98;
            if (local_98.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
              FVar12 = local_98.SecondaryData;
            }
            lVar14 = (longlong)local_50;
            local_50 = local_50 + 1;
            ((TObjectPtr<UPCGNode>_u_0 *)((longlong)FVar12 + lVar14 * 8))->DebugPtr =
                 (UPCGNode *)local_e0;
            EVar9 = PropagateDynamicPinTypes(local_e0.DebugPtr,local_b8,this);
            EVar8 = EVar8 | EVar9;
          }
        }
LAB_149f58d08:
        pFVar15 = pFVar15 + 8;
      }
      uVar13 = (ulonglong)local_d8;
      pFVar16 = local_d0 + 8;
      local_e4 = EVar8;
    }
    if (local_98.SecondaryData != (ForElementType<UPCGNode_*>)0x0) {
      FMemory::Free((void *)local_98.SecondaryData);
    }
  }
  return local_e4;
}

// RemoveEdgeTo @ 149f5e1b0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall UPCGNode::RemoveEdgeTo(UPCGNode *this,FName param_1,UPCGNode *param_2,FName param_3)

{
  int iVar1;
  UPCGGraph *this_00;
  bool bVar2;
  UClass *pUVar3;
  FName local_res10;
  FName local_res20;
  
  this_00 = (UPCGGraph *)this->_padding_;
  if (this_00 != (UPCGGraph *)0x0) {
    local_res10 = param_1;
    local_res20 = param_3;
    pUVar3 = Z_Construct_UClass_UPCGGraph_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      bVar2 = UPCGGraph::RemoveEdge(this_00,this,&local_res10,param_2,&local_res20);
      return bVar2;
    }
  }
  return false;
}

// RenameInputPin @ 149f5e240

void __thiscall UPCGNode::RenameInputPin(UPCGNode *this,FName *param_1,FName *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->InputPins).AllocatorInstance.Data;
  iVar2 = (this->InputPins).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->InputPins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UPCGPin>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(FName *)(*(longlong *)pFVar3 + 0x48) == *param_1) {
      *(FName *)(*(longlong *)pFVar3 + 0x48) = *param_2;
      return;
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// RenameOutputPin @ 149f5e2c0

void __thiscall UPCGNode::RenameOutputPin(UPCGNode *this,FName *param_1,FName *param_2,bool param_3)

{
  UPCGPin *pUVar1;
  
  pUVar1 = GetOutputPin(this,param_1);
  if (pUVar1 != (UPCGPin *)0x0) {
    (pUVar1->Properties).Label = *param_2;
  }
  return;
}

// SetSettingsInterface @ 149f62c70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPCGNode::SetSettingsInterface(UPCGNode *this,UPCGSettingsInterface *param_1,bool param_2)

{
  UPCGSettingsInterface *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  uint uVar5;
  undefined1 local_res18 [16];
  code *local_48;
  undefined1 *local_40;
  
  this_00 = (this->SettingsInterface).field0_0x0.DebugPtr;
  if ((this_00 != param_1) && (this_00 != (UPCGSettingsInterface *)0x0)) {
    if ((UPCGNode *)
        (((TNonAccessTrackedObjectPtr<UObject> *)&this_00->_padding_)->ObjectPtr).field0_0x0.
        DebugPtr == this) {
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      if ((((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsRooted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0xb8,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_MirroredGarbage);
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      do {
        lVar1 = (pFVar4->field0_0x0).FlagsAndRefCount;
        uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
        if ((uVar5 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar4 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar3 = lVar1 == (pFVar4->field0_0x0).FlagsAndRefCount;
        if (bVar3) {
          (pFVar4->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar5 << 0x20 | (longlong)(int)lVar1 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar3);
      pFVar4 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar4,Async);
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1525383761460462387>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGNode.cpp"
                         ,0x333,"SettingsInterface->GetOuter() == this");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPCGSettingsInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SettingsInterface).field0_0x0.DebugPtr = param_1;
  if (param_2) {
    local_40 = local_res18;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPCGNode::UpdatePins'::__l2::<lambda_1>,UPCGPin_*,UPCGNode_*>::
               Call;
    UpdatePins(this,(TFunctionRef<UPCGPin_*___cdecl(UPCGNode_*)> *)&local_48);
  }
  return;
}

// StaticRegisterNativesUPCGNode @ 149f63a70

void __cdecl UPCGNode::StaticRegisterNativesUPCGNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UPCGNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateAfterSettingsChangeDuringCreation @ 149f6c8b0

void __thiscall UPCGNode::UpdateAfterSettingsChangeDuringCreation(UPCGNode *this)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGNode::UpdatePins'::__l2::<lambda_1>,UPCGPin_*,UPCGNode_*>::Call
  ;
  UpdatePins(this,(TFunctionRef<UPCGPin_*___cdecl(UPCGNode_*)> *)&local_18);
  return;
}

// UpdatePins @ 149f6d380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGChangeType __thiscall
UPCGNode::UpdatePins(UPCGNode *this,TFunctionRef<UPCGPin_*___cdecl(UPCGNode_*)> *param_1)

{
  UPCGSettingsInterface *pUVar1;
  char cVar2;
  EPCGChangeType EVar3;
  EPCGChangeType EVar4;
  UPCGSettings *this_00;
  FPCGDataTypeIdentifier *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_d0;
  UPCGNode *local_c0;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_b8;
  undefined1 local_a8 [16];
  undefined1 *local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  iVar8 = 0;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  pUVar1 = (this->SettingsInterface).field0_0x0.DebugPtr;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  if ((pUVar1 == (UPCGSettingsInterface *)0x0) ||
     (this_00 = (UPCGSettings *)(**(code **)(pUVar1->_padding_ + 0x388))(),
     this_00 == (UPCGSettings *)0x0)) {
    pFVar9 = (this->InputPins).AllocatorInstance.Data;
    iVar8 = (this->InputPins).ArrayNum;
    pFVar6 = pFVar9 + (longlong)iVar8 * 8;
    while( true ) {
      if ((this->InputPins).ArrayNum != iVar8) {
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (pFVar9 == pFVar6) break;
      if (*(UPCGPin **)pFVar9 != (UPCGPin *)0x0) {
        UPCGPin::BreakAllEdges
                  (*(UPCGPin **)pFVar9,
                   (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_88);
      }
      pFVar9 = pFVar9 + 8;
    }
    pFVar9 = (this->OutputPins).AllocatorInstance.Data;
    iVar8 = (this->OutputPins).ArrayNum;
    pFVar6 = pFVar9 + (longlong)iVar8 * 8;
    while( true ) {
      if ((this->OutputPins).ArrayNum != iVar8) {
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (pFVar9 == pFVar6) break;
      if (*(UPCGPin **)pFVar9 != (UPCGPin *)0x0) {
        UPCGPin::BreakAllEdges
                  (*(UPCGPin **)pFVar9,
                   (TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)local_88);
      }
      pFVar9 = pFVar9 + 8;
    }
    (this->InputPins).ArrayNum = 0;
    if ((this->InputPins).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->InputPins).AllocatorInstance,0,&(this->InputPins).ArrayMax);
    }
    (this->OutputPins).ArrayNum = 0;
    if ((this->OutputPins).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->OutputPins).AllocatorInstance,0,&(this->OutputPins).ArrayMax);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<UPCGNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UPCGNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<UPCGNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    EVar3 = Node|Edge;
  }
  else {
    (**(code **)(this_00->_padding_ + 0x450))(this_00,&local_d0);
    cVar2 = (**(code **)(this_00->_padding_ + 0x4b0))(this_00);
    if (cVar2 != '\0') {
      if (local_d0.ArrayNum == local_d0.ArrayMax) {
        local_d0.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_d0.AllocatorInstance,&local_d0.ArrayMax);
      }
      pFVar9 = local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 0x30;
      local_d0.ArrayNum = local_d0.ArrayNum + 1;
      FText::GetEmpty();
      pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
                         ((FPCGDataTypeIdentifier *)local_a8,Any);
      *(FName *)&pFVar9->field_0x0 = PCGPinConstants::DefaultExecutionDependencyLabel;
      *(undefined8 *)(pFVar9 + 0x10) = 0;
      pFVar9[8] = (FScriptContainerElement)0x0;
      *(FScriptContainerElement **)(pFVar9 + 0x10) = (pFVar5->Ids).AllocatorInstance.Data;
      (pFVar5->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 0x18) = (pFVar5->Ids).ArrayNum;
      *(int *)(pFVar9 + 0x1c) = (pFVar5->Ids).ArrayMax;
      (pFVar5->Ids).ArrayNum = 0;
      (pFVar5->Ids).ArrayMax = 0;
      *(int *)(pFVar9 + 0x20) = pFVar5->CustomSubtype;
      *(undefined2 *)(pFVar9 + 0x29) = 0;
      pFVar9[0x28] = (FScriptContainerElement)0x1;
      pFVar9[0x2b] = (FScriptContainerElement)0x1;
      pFVar6 = (pFVar5->Ids).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      pFVar9[8] = (FScriptContainerElement)0x3;
      pFVar9[0x29] = (FScriptContainerElement)
                     ((this_00->bExecutionDependencyRequired == false) + '\x01');
    }
    UPCGSettings::FillOverridableParamsPins(this_00,&local_d0);
    (**(code **)(this_00->_padding_ + 0x458))(this_00,&local_b8);
    local_c0 = this;
    `UPCGNode::UpdatePins'::__l2::<lambda_1>::operator()(&local_c0,&local_d0);
    `UPCGNode::UpdatePins'::__l2::<lambda_1>::operator()(&local_c0,&local_b8);
    pFVar9 = (this->InputPins).AllocatorInstance.Data;
    local_98 = local_88;
    iVar7 = (this->InputPins).ArrayNum;
    pFVar6 = pFVar9 + (longlong)iVar7 * 8;
    local_a8._0_8_ = this;
    local_a8._8_8_ = param_1;
    while( true ) {
      if ((this->InputPins).ArrayNum != iVar7) {
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (pFVar9 == pFVar6) break;
      pFVar9 = pFVar9 + 8;
    }
    EVar3 = `UPCGNode::UpdatePins'::__l2::<lambda_2>::operator()
                      (local_a8,(TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *)&this->InputPins,
                       &local_d0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pFVar6 = (this->InputPins).AllocatorInstance.Data, iVar7 = iVar8,
       0 < (this->InputPins).ArrayNum)) {
      do {
        if (*(UObject **)pFVar6 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(*(UObject **)pFVar6);
        }
        iVar7 = iVar7 + 1;
        pFVar6 = pFVar6 + 8;
      } while (iVar7 < (this->InputPins).ArrayNum);
    }
    pFVar9 = (this->OutputPins).AllocatorInstance.Data;
    iVar7 = (this->OutputPins).ArrayNum;
    pFVar6 = pFVar9 + (longlong)iVar7 * 8;
    while( true ) {
      if ((this->OutputPins).ArrayNum != iVar7) {
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      if (pFVar9 == pFVar6) break;
      pFVar9 = pFVar9 + 8;
    }
    EVar4 = `UPCGNode::UpdatePins'::__l2::<lambda_2>::operator()
                      (local_a8,(TArray<UPCGPin_*,TSizedDefaultAllocator<32>_> *)&this->OutputPins,
                       &local_b8);
    EVar3 = EVar3 | EVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pFVar6 = (this->OutputPins).AllocatorInstance.Data, 0 < (this->OutputPins).ArrayNum)) {
      do {
        if (*(UObject **)pFVar6 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(*(UObject **)pFVar6);
        }
        iVar8 = iVar8 + 1;
        pFVar6 = pFVar6 + 8;
      } while (iVar8 < (this->OutputPins).ArrayNum);
    }
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FPCGPinProperties *)local_b8.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
    if ((FPCGPinProperties *)local_d0.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    iVar8 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  return EVar3;
}

// UpdatePins @ 149f6d7f0

EPCGChangeType __thiscall UPCGNode::UpdatePins(UPCGNode *this)

{
  EPCGChangeType EVar1;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPCGNode::UpdatePins'::__l2::<lambda_1>,UPCGPin_*,UPCGNode_*>::Call
  ;
  EVar1 = UpdatePins(this,(TFunctionRef<UPCGPin_*___cdecl(UPCGNode_*)> *)&local_18);
  return EVar1;
}

// execAddEdgeTo @ 149f6f630

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl UPCGNode::execAddEdgeTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UPCGGraph *this;
  UClass *pUVar4;
  UPCGNode *pUVar5;
  FName local_res8;
  FName local_res10;
  UPCGNode *local_res18;
  FName local_res20;
  FName local_48 [3];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UPCGNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar5 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UPCGGraph **)&param_1->field_0x20;
  local_res20 = local_res8;
  local_48[0] = local_res10;
  if (this != (UPCGGraph *)0x0) {
    pUVar4 = Z_Construct_UClass_UPCGGraph_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      pUVar5 = UPCGGraph::AddEdge(this,(UPCGNode *)param_1,local_48,pUVar5,&local_res20);
      *(UPCGNode **)param_3 = pUVar5;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetGraph @ 149f711d0

void __cdecl UPCGNode::execGetGraph(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1->field_0x20;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_UPCGGraph_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(longlong *)param_3 = lVar2;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetSettings @ 149f71740

void __cdecl UPCGNode::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong **)&param_1[1].field_0x8 != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)&param_1[1].field_0x8 + 0x388))();
    *(undefined8 *)param_3 = uVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execRemoveEdgeTo @ 149f72240

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __cdecl UPCGNode::execRemoveEdgeTo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UPCGGraph *this;
  UPCGNode *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  FName local_res8;
  FName local_res10;
  UPCGNode *local_res18;
  FName local_res20;
  FName local_48 [3];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UPCGNode *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar4 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UPCGGraph **)&param_1->field_0x20;
  local_res20 = local_res8;
  local_48[0] = local_res10;
  if (this != (UPCGGraph *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGGraph_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar6->_padding_)) {
      bVar5 = UPCGGraph::RemoveEdge(this,(UPCGNode *)param_1,local_48,pUVar4,&local_res20);
      *(bool *)param_3 = bVar5;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

