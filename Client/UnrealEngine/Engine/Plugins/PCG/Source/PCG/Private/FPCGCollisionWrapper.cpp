// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// ~FPCGCollisionWrapper @ 149891140

void __thiscall FPCGCollisionWrapper::~FPCGCollisionWrapper(FPCGCollisionWrapper *this)

{
  FScriptContainerElement *pFVar1;
  
  Uninitialize(this);
  pFVar1 = (this->IndexToBodyInstance).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BodyInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CreateBodyInstances @ 1498acc70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPCGCollisionWrapper::CreateBodyInstances
          (FPCGCollisionWrapper *this,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  FName _Src;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FBodyInstance *this_00;
  FBodyInstance *pFVar11;
  FInitBodySpawnParams *pFVar12;
  UBodySetup *pUVar13;
  FName *pFVar14;
  size_t _Size;
  FName *pFVar15;
  bool bVar16;
  undefined1 local_res18 [8];
  FInitBodySpawnParams local_res20 [2];
  FBodyInstance *local_90;
  FSoftObjectPath local_88;
  TPersistentObjectPtr<FSoftObjectPath> local_68;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId75,"FPCGCollisionWrapper::CreateBodyInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionWrapperData.cpp"
               ,0x4b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId75);
  }
  if (this->bInitialized == false) {
    if (((this->BodyInstances).ArrayNum != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BodyInstances.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionWrapperData.cpp"
                           ,0x51,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar2 = param_1->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &(this->BodyInstances).ArrayMax;
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,(ForAnyElementType *)this,(this->BodyInstances).ArrayNum,piVar1);
    }
    uVar2 = param_1->ArrayNum;
    uVar8 = (ulonglong)(int)uVar2;
    pFVar15 = (FName *)(param_1->AllocatorInstance).Data;
    pFVar14 = pFVar15 + uVar8 * 4;
    while( true ) {
      if (param_1->ArrayNum != (int)uVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar15 == pFVar14) break;
      local_88.SubPathString.Data.ArrayNum = pFVar15[3].ComparisonIndex.Value;
      _Size = (size_t)local_88.SubPathString.Data.ArrayNum;
      _Src = pFVar15[2];
      local_90 = (FBodyInstance *)0x0;
      local_88.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.AssetPath.PackageName = *pFVar15;
      local_88.AssetPath.AssetName = pFVar15[1];
      if (local_88.SubPathString.Data.ArrayNum == 0) {
        local_88.SubPathString.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_88.SubPathString.Data.ArrayNum,0,
                   (ForAnyElementType *)&local_88.SubPathString,local_88.SubPathString.Data.ArrayNum
                   ,&local_88.SubPathString.Data.ArrayMax);
        memcpy(local_88.SubPathString.Data.AllocatorInstance.Data,(void *)_Src,_Size);
      }
      local_68.WeakPtr.ObjectIndex = 0;
      local_68.WeakPtr.ObjectSerialNumber = 0;
      FSoftObjectPath::FSoftObjectPath(&local_68.ObjectID,&local_88);
      if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
      }
      pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_68);
      if (pUVar9 == (UObject *)0x0) {
        if (local_68.ObjectID.AssetPath.PackageName != (FName)0x0) {
          FSoftObjectPath::TryLoad(&local_68.ObjectID,(FUObjectSerializeContext *)0x0);
          pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get(&local_68);
          goto LAB_1498ace71;
        }
      }
      else {
LAB_1498ace71:
        if (pUVar9 != (UObject *)0x0) {
          pUVar10 = Z_Construct_UClass_UStaticMesh_NoRegister();
          iVar7 = (int)pUVar10->_padding_;
          if ((((iVar7 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
                &pUVar10->_padding_)) && (lVar3 = *(longlong *)&pUVar9[0xb].field_0x20, lVar3 != 0))
             && (0 < *(int *)(lVar3 + 0xc0) + *(int *)(lVar3 + 0xb0) + *(int *)(lVar3 + 0xa0) +
                     *(int *)(lVar3 + 0x90) + *(int *)(lVar3 + 0x80) + *(int *)(lVar3 + 0x70) +
                     *(int *)(lVar3 + 0x60) + *(int *)(lVar3 + 0x50) + *(int *)(lVar3 + 0x40))) {
            this_00 = ::operator_new(400);
            pFVar11 = (FBodyInstance *)0x0;
            if (this_00 != (FBodyInstance *)0x0) {
              pFVar11 = FBodyInstance::FBodyInstance(this_00);
            }
            *(byte *)&pFVar11->_padding_ = (byte)pFVar11->_padding_ & 0xdf;
            *(byte *)&pFVar11->_padding_ = (byte)pFVar11->_padding_ & 0xfe;
            pUVar13 = *(UBodySetup **)&pUVar9[0xb].field_0x20;
            local_90 = pFVar11;
            pFVar12 = FInitBodySpawnParams::FInitBodySpawnParams
                                (local_res20,(UPrimitiveComponent *)0x0);
            FBodyInstance::InitBody
                      (pFVar11,pUVar13,&UE::Math::TTransform<double>::Identity,
                       (UPrimitiveComponent *)0x0,(FPhysScene_Chaos *)0x0,pFVar12,
                       (IPhysicsBodyInstanceOwner *)0x0);
            bVar6 = FBodyInstance::IsValidBodyInstance(local_90);
            if (bVar6) {
              pUVar13 = FBodyInstance::GetBodySetup(local_90);
              if (pUVar13 != (UBodySetup *)0x0) goto LAB_1498acfb8;
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<8991894095832023144>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionWrapperData.cpp"
                                 ,0x68,"BodyInstance->GetBodySetup()");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            pFVar11 = local_90;
            if (local_90 != (FBodyInstance *)0x0) {
              FBodyInstance::~FBodyInstance(local_90);
              ::operator_delete(pFVar11,400);
            }
            local_90 = (FBodyInstance *)0x0;
          }
        }
      }
LAB_1498acfb8:
      pFVar4 = (this->BodyInstances).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (this->BodyInstances).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,piVar1);
      }
      (this->BodyInstances).ArrayNum = iVar7 + 1;
      *(FBodyInstance **)((this->BodyInstances).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           local_90;
      if (local_68.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.ObjectID.SubPathString.Data.AllocatorInstance.Data);
      }
      uVar8 = (ulonglong)uVar2;
      pFVar15 = pFVar15 + 4;
    }
    this->bInitialized = param_1->ArrayNum != 0;
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8991894095832023116>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionWrapperData.cpp"
                       ,0x4c,"!bInitialized");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetBodyInstance @ 1498b5300

FBodyInstance * __thiscall
FPCGCollisionWrapper::GetBodyInstance(FPCGCollisionWrapper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBodyInstance *pFVar4;
  uint uVar5;
  
  pFVar4 = (FBodyInstance *)0x0;
  if (this->bInitialized != false) {
    uVar5 = 0;
    uVar3 = uVar5;
    if (param_1 < (this->IndexToBodyInstance).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBodyInstance *)(*pcVar1)();
      return pFVar4;
    }
    if (*(int *)((this->IndexToBodyInstance).AllocatorInstance.Data + (longlong)param_1 * 4) != -1)
    {
      uVar3 = uVar5;
      if (param_1 < (this->IndexToBodyInstance).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBodyInstance *)(*pcVar1)();
        return pFVar4;
      }
      uVar3 = *(uint *)((this->IndexToBodyInstance).AllocatorInstance.Data + (longlong)param_1 * 4);
      if ((int)uVar3 < (this->BodyInstances).ArrayNum) {
        uVar5 = ~uVar3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FBodyInstance *)(*pcVar1)();
        return pFVar4;
      }
      pFVar4 = *(FBodyInstance **)
                ((this->BodyInstances).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    }
  }
  return pFVar4;
}

// GetShapeArray @ 1498c61e0

void __thiscall
FPCGCollisionWrapper::GetShapeArray
          (FPCGCollisionWrapper *this,int param_1,EPCGCollisionQueryFlag param_2,
          TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FBodyInstance *pFVar5;
  
  pFVar5 = (FBodyInstance *)0x0;
  if (this->bInitialized != false) {
    uVar4 = 0;
    uVar3 = uVar4;
    if (param_1 < (this->IndexToBodyInstance).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(int *)((this->IndexToBodyInstance).AllocatorInstance.Data + (longlong)param_1 * 4) != -1)
    {
      uVar3 = uVar4;
      if (param_1 < (this->IndexToBodyInstance).ArrayNum) {
        uVar3 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = *(uint *)((this->IndexToBodyInstance).AllocatorInstance.Data + (longlong)param_1 * 4);
      if ((int)uVar3 < (this->BodyInstances).ArrayNum) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = *(FBodyInstance **)
                ((this->BodyInstances).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
    }
  }
  GetShapeArray(pFVar5,param_2,param_3);
  return;
}

// GetShapeArray @ 1498c6340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPCGCollisionWrapper::GetShapeArray
          (FBodyInstance *param_1,EPCGCollisionQueryFlag param_2,
          TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ForElementType<FPhysicsShapeReference_Chaos> FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FCollisionFilterData *pFVar9;
  ForElementType<FPhysicsShapeReference_Chaos> FVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ForElementType<FPhysicsShapeReference_Chaos> FVar14;
  ForElementType<FPhysicsShapeReference_Chaos> FVar15;
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [8];
  FSingleParticlePhysicsProxy *local_260;
  TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_258;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  piVar1 = &param_3->ArrayMax;
  param_3->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeReference_Chaos>_>
              (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
  }
  if (param_1 == (FBodyInstance *)0x0) {
    return true;
  }
  local_258.AllocatorInstance.SecondaryData = (ForElementType<FPhysicsShapeReference_Chaos>)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0x20;
  local_260 = FBodyInstance::GetPhysicsActor(param_1);
  FillInlineShapeArray_AssumesLocked(&local_258,&local_260);
  iVar12 = local_258.ArrayNum;
  uVar13 = (ulonglong)local_258.ArrayNum;
  FVar14 = (ForElementType<FPhysicsShapeReference_Chaos>)&local_258;
  if (local_258.AllocatorInstance.SecondaryData != (ForElementType<FPhysicsShapeReference_Chaos>)0x0
     ) {
    FVar14 = local_258.AllocatorInstance.SecondaryData;
  }
  FVar15 = (ForElementType<FPhysicsShapeReference_Chaos>)(uVar13 * 0x10 + (longlong)FVar14);
  while( true ) {
    if ((uint)uVar13 != iVar12) {
      local_268[0] = 0;
      `TCheckedPointerIterator<FPhysicsShapeReference_Chaos,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_268);
      uVar13 = (ulonglong)(uint)local_258.ArrayNum;
    }
    if (FVar14 == FVar15) break;
    lVar3 = *(longlong *)FVar14;
    if (lVar3 != 0) {
      lVar11 = 0x50;
      if ((*(byte *)(lVar3 + 8) & 3) != 0) {
        lVar11 = 0x48;
      }
      pFVar9 = Chaos::FCollisionData::GetQueryData((FCollisionData *)(lVar11 + lVar3));
      uVar13._0_4_ = pFVar9->Word2;
      uVar13._4_4_ = pFVar9->Word3;
      if ((((uVar13 >> 0x20 & 1) != 0) && ((param_2 & ~SimpleFirst) == Simple)) ||
         (((uVar13 & 0x200000000) != 0 && ((param_2 - Complex & 0xfd) == 0)))) {
        FVar4 = (param_3->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<FPhysicsShapeReference_Chaos>)param_3;
        if (FVar4 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
          FVar10 = FVar4;
        }
        if ((ulonglong)FVar10 <= (ulonglong)FVar14) {
          FVar10 = (ForElementType<FPhysicsShapeReference_Chaos>)param_3;
          if (FVar4 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
            FVar10 = FVar4;
          }
          if (((ulonglong)FVar14 < (ulonglong)((longlong)*piVar1 * 0x10 + (longlong)FVar10)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        iVar8 = param_3->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeReference_Chaos>_>
                            (0x810,&param_3->AllocatorInstance,piVar1);
        }
        param_3->ArrayNum = iVar8 + 1;
        FVar4 = (param_3->AllocatorInstance).SecondaryData;
        lVar3 = *(longlong *)((longlong)FVar14 + 8);
        FVar10 = (ForElementType<FPhysicsShapeReference_Chaos>)param_3;
        if (FVar4 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
          FVar10 = FVar4;
        }
        plVar2 = (longlong *)((longlong)FVar10 + (longlong)iVar8 * 0x10);
        *plVar2 = *(longlong *)FVar14;
        plVar2[1] = lVar3;
      }
      uVar13 = (ulonglong)(uint)local_258.ArrayNum;
    }
    FVar14 = (ForElementType<FPhysicsShapeReference_Chaos>)((longlong)FVar14 + 0x10);
  }
  if ((param_3->ArrayNum == 0) && (Complex < param_2)) {
    if (param_3 != &local_258) {
      iVar12 = (int)uVar13;
      param_3->ArrayNum = iVar12;
      FVar14 = (ForElementType<FPhysicsShapeReference_Chaos>)&local_258;
      if (local_258.AllocatorInstance.SecondaryData !=
          (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
        FVar14 = local_258.AllocatorInstance.SecondaryData;
      }
      if ((iVar12 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0x20;
        bVar6 = false;
        goto LAB_1498c663a;
      }
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FPhysicsShapeReference_Chaos>_>
                (0x10,8,iVar12,*piVar1,&param_3->AllocatorInstance,iVar12,piVar1);
      FVar15 = (param_3->AllocatorInstance).SecondaryData;
      if (FVar15 != (ForElementType<FPhysicsShapeReference_Chaos>)0x0) {
        param_3 = (TArray<FPhysicsShapeReference_Chaos,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar15;
      }
      if (iVar12 != 0) {
        memcpy(param_3,(void *)FVar14,(longlong)iVar12 << 4);
      }
    }
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
LAB_1498c663a:
  if (local_258.AllocatorInstance.SecondaryData != (ForElementType<FPhysicsShapeReference_Chaos>)0x0
     ) {
    FMemory::Free((void *)local_258.AllocatorInstance.SecondaryData);
  }
  return bVar6;
}

// Initialize @ 1498cac90

bool __thiscall
FPCGCollisionWrapper::Initialize
          (FPCGCollisionWrapper *this,IPCGAttributeAccessor *param_1,
          IPCGAttributeAccessorKeys *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->bInitialized == false) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    bVar2 = Prepare(this,param_1,param_2,&local_18);
    if (bVar2) {
      CreateBodyInstances(this,&local_18);
    }
    DestructItems<FSoftObjectPath,int>
              ((FSoftObjectPath *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((FSoftObjectPath *)local_18.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    return bVar2;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8991894095832023160>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionWrapperData.cpp"
                     ,0x78,"!bInitialized");
  if (!bVar2) {
    return true;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// Prepare @ 1498d2bb0

bool __thiscall
FPCGCollisionWrapper::Prepare
          (FPCGCollisionWrapper *this,IPCGAttributeAccessor *param_1,
          IPCGAttributeAccessorKeys *param_2,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_3)

{
  FSoftObjectPath *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  <lambda_1> local_28;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId45,"FPCGCollisionWrapper::Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionWrapperData.cpp"
               ,0x2d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId45);
  }
  pFVar1 = (FSoftObjectPath *)(param_3->AllocatorInstance).Data;
  if (param_3->ArrayMax < 0) {
    DestructItems<FSoftObjectPath,int>(pFVar1,param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
  }
  else {
    DestructItems<FSoftObjectPath,int>(pFVar1,param_3->ArrayNum);
    param_3->ArrayNum = 0;
  }
  if (this->bInitialized == false) {
    (this->IndexToBodyInstance).ArrayNum = 0;
    if ((this->IndexToBodyInstance).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->IndexToBodyInstance).AllocatorInstance,0,
                 &(this->IndexToBodyInstance).ArrayMax);
    }
    if ((param_1 == (IPCGAttributeAccessor *)0x0) || (param_2 == (IPCGAttributeAccessorKeys *)0x0))
    {
      bVar3 = false;
    }
    else {
      local_28.__this = this;
      local_28.MeshPathsToLoad = param_3;
      PCGMetadataElementCommon::
      ApplyOnAccessorRange<FSoftObjectPath,_FPCGCollisionWrapper::Prepare_::__l2::<lambda_1>_&>
                (param_2,param_1,&local_28,AllowBroadcastAndConstructible,0x100,-1);
      bVar3 = true;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8991894095832023088>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGCollisionWrapperData.cpp"
                       ,0x30,"!bInitialized");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = true;
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// Uninitialize @ 1498f9440

void __thiscall FPCGCollisionWrapper::Uninitialize(FPCGCollisionWrapper *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FBodyInstance *this_00;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->BodyInstances).AllocatorInstance.Data;
  iVar2 = (this->BodyInstances).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BodyInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    this_00 = *(FBodyInstance **)pFVar4;
    if (this_00 != (FBodyInstance *)0x0) {
      bVar3 = FBodyInstance::IsValidBodyInstance(this_00);
      if (bVar3) {
        FBodyInstance::TermBody(this_00,false);
      }
      FBodyInstance::~FBodyInstance(this_00);
      ::operator_delete(this_00,400);
    }
    pFVar4 = pFVar4 + 8;
  }
  (this->BodyInstances).ArrayNum = 0;
  if ((this->BodyInstances).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,&(this->BodyInstances).ArrayMax);
  }
  (this->IndexToBodyInstance).ArrayNum = 0;
  if ((this->IndexToBodyInstance).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->IndexToBodyInstance).AllocatorInstance,0,
               &(this->IndexToBodyInstance).ArrayMax);
  }
  this->bInitialized = false;
  return;
}

