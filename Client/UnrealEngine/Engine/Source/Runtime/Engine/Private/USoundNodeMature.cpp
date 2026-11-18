// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 148676c60

UClass * __cdecl USoundNodeMature::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeMature.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeMature",
               &Z_Registration_Info_UClass_USoundNodeMature.InnerSingleton,
               StaticRegisterNativesUSoundNodeMature,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<USoundNodeMature>,
               InternalVTableHelperCtorCaller<USoundNodeMature>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeMature.InnerSingleton;
}

// USoundNodeMature @ 148697790

USoundNodeMature * __thiscall
USoundNodeMature::USoundNodeMature(USoundNodeMature *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &___7USoundNodeMature__6B_;
  return this;
}

// USoundNodeMature @ 1486977d0

USoundNodeMature * __thiscall
USoundNodeMature::USoundNodeMature(USoundNodeMature *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  *(undefined ***)this = &___7USoundNodeMature__6B_;
  return this;
}

// ~USoundNodeMature @ 14869bb40

void __thiscall USoundNodeMature::~USoundNodeMature(USoundNodeMature *this)

{
  *(undefined ***)this = &___7USoundNode__6B_;
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateStartingConnectors @ 1486af4d0

void __thiscall USoundNodeMature::CreateStartingConnectors(USoundNodeMature *this)

{
  (**(code **)(*(longlong *)this + 800))(this,*(undefined4 *)&this->field_0x30);
                    /* WARNING: Could not recover jumptable at 0x0001486af4f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 800))(this,*(undefined4 *)&this->field_0x30);
  return;
}

// GetMaxChildNodes @ 1486c1250

int __thiscall USoundNodeMature::GetMaxChildNodes(USoundNodeMature *this)

{
  return 0x20;
}

// GetPrivateStaticClass @ 1486c4f30

UClass * __cdecl USoundNodeMature::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeMature.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeMature",
               &Z_Registration_Info_UClass_USoundNodeMature.InnerSingleton,
               StaticRegisterNativesUSoundNodeMature,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<USoundNodeMature>,
               InternalVTableHelperCtorCaller<USoundNodeMature>,local_res8,USoundNode::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeMature.InnerSingleton;
}

// ParseNodes @ 1486dd5b0

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
USoundNodeMature::ParseNodes
          (USoundNodeMature *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  EMaturityChildType EVar7;
  uint *puVar8;
  ulong64 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  ulong64 local_res18;
  FActiveSound *local_res20;
  uint local_98;
  uint local_94;
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_90;
  int local_80;
  int local_7c;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  ulong64 *local_68;
  uint *local_60;
  FString local_58;
  FString local_48;
  
  local_res18 = param_2;
  local_res20 = param_3;
  puVar8 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_3->SoundNodeOffsetMap,param_2);
  pTVar2 = &param_3->SoundNodeData;
  piVar1 = &(param_3->SoundNodeData).ArrayNum;
  if (puVar8 == (uint *)0x0) {
    local_94 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,8,&pTVar2->AllocatorInstance,piVar1,&(param_3->SoundNodeData).ArrayMax
                         );
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (int)local_94) = 0;
    local_68 = &local_res18;
    local_60 = &local_94;
    TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                *)&param_3->SoundNodeOffsetMap,&local_90,(bool *)&local_68);
    lVar12 = (longlong)(int)local_94;
    uVar10 = 0;
    if ((int)local_94 < *piVar1) {
      uVar10 = ~local_94 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar13 = (pTVar2->AllocatorInstance).Data + lVar12;
    *(int *)pFVar13 = 1;
  }
  else {
    uVar10 = *puVar8;
    uVar11 = 0;
    if ((int)uVar10 < *piVar1) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_94 = *puVar8;
    pFVar13 = (pTVar2->AllocatorInstance).Data + (int)uVar10;
  }
  uVar11 = local_94 + 4;
  uVar10 = 0;
  if ((int)uVar11 < *piVar1) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  local_94 = uVar11;
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar14 = (pTVar2->AllocatorInstance).Data + (int)uVar11;
  uVar10 = 0;
  if (*(int *)pFVar13 != 0) {
    *(int *)pFVar13 = 0;
    uVar11 = *(uint *)&this->field_0x30;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_6c = 0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    local_70 = 0;
    if (uVar11 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,&local_78,0,&local_6c);
    }
    uVar11 = *(uint *)&this->field_0x30;
    local_90.Value = (uint *)0x0;
    local_7c = 0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    local_80 = 0;
    if (uVar11 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar11,(ForAnyElementType *)&local_90.Value,0,&local_7c);
    }
    local_98 = 0;
    if (0 < *(int *)&this->field_0x30) {
      do {
        uVar11 = local_98;
        uVar6 = uVar10;
        if ((int)local_98 < *(int *)&this->field_0x30) {
          uVar6 = ~local_98 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)(*(longlong *)&this->field_0x28 + (longlong)(int)uVar11 * 8) != 0) {
          lVar12 = (longlong)(int)local_98;
          uVar11 = uVar10;
          if ((int)local_98 < *(int *)&this->field_0x30) {
            uVar11 = ~local_98 >> 0x1f;
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
          EVar7 = GetMaturityTypeForChild
                            (*(USoundNode **)(*(longlong *)&this->field_0x28 + lVar12 * 8));
          if (EVar7 == ChildType_Mature) {
            if (((local_78.Data <= (FScriptContainerElement *)&local_98) &&
                ((FScriptContainerElement *)&local_98 < local_78.Data + (longlong)local_6c * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (local_70 == local_6c) {
              local_70 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&local_78,&local_6c);
            }
            *(uint *)(local_78.Data + (longlong)local_70 * 4) = local_98;
            local_70 = local_70 + 1;
          }
          else if (EVar7 == ChildType_NonMature) {
            if (((local_90.Value <= &local_98) && (&local_98 < local_90.Value + local_7c)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (local_80 == local_7c) {
              local_80 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,(ForAnyElementType *)&local_90.Value,&local_7c);
            }
            local_90.Value[local_80] = local_98;
            local_80 = local_80 + 1;
          }
          else if (2 < (byte)LogAudio._0_1_) {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
          }
        }
        local_98 = local_98 + 1;
      } while ((int)local_98 < *(int *)&this->field_0x30);
    }
    *(uint *)pFVar14 = 0xffffffff;
    if (GEngine->bAllowMatureLanguage == 0) {
      if (local_80 < 1) {
        if (2 < (byte)LogAudio._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        *(uint *)pFVar14 = *local_90.Value;
      }
    }
    else if (local_70 < 1) {
      if (0 < local_80) {
        *(uint *)pFVar14 = *local_90.Value;
      }
    }
    else {
      *(uint *)pFVar14 = *(uint *)local_78.Data;
    }
    if (local_90.Value != (uint *)0x0) {
      FMemory::Free(local_90.Value);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
  }
  uVar11 = *(uint *)pFVar14;
  if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&this->field_0x30)) {
    if (((int)uVar11 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)(*(longlong *)&this->field_0x28 + (longlong)(int)uVar11 * 8) != 0) {
      uVar11 = *(uint *)pFVar14;
      uVar6 = uVar10;
      if ((int)uVar11 < *(int *)&this->field_0x30) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)(*(longlong *)&this->field_0x28 + (longlong)(int)uVar11 * 8);
      uVar11 = *(uint *)pFVar14;
      pcVar4 = *(code **)(*plVar3 + 0x2f0);
      if ((int)uVar11 < *(int *)&this->field_0x30) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = USoundNode::GetNodeWaveInstanceHash
                        (local_res18,
                         *(USoundNode **)
                          (*(longlong *)&this->field_0x28 + (longlong)(int)uVar11 * 8),uVar11);
      (*pcVar4)(plVar3,param_1,uVar9,local_res20,param_4,param_5);
    }
  }
  return;
}

// PostLoad @ 1486e0840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall USoundNodeMature::PostLoad(USoundNodeMature *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  uint uVar7;
  longlong lVar8;
  FObjectPtr_u_0 *this_00;
  
  UObject::PostLoad((UObject *)this);
  if (((GEngine != (UEngine *)0x0) &&
      (pFVar5 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
      ((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0)) &&
     (1 < *(int *)&this->field_0x30)) {
    UObject::ConditionalPostLoad(*(UObject **)&this->field_0x20);
    uVar7 = *(int *)&this->field_0x30 - 1;
    if (-1 < (int)uVar7) {
      lVar8 = (longlong)(int)uVar7 * 8;
      do {
        uVar4 = 0;
        if ((int)uVar7 < *(int *)&this->field_0x30) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FObjectPtr_u_0 *)(*(longlong *)&this->field_0x28 + lVar8);
        if (this_00->Handle != (UObject *)0x0) {
          pUVar6 = USoundNodeWavePlayer::StaticClass();
          bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
          if (((bVar3) && (this_00->Handle != (UObject *)0x0)) &&
             ((lVar1 = *(longlong *)&this_00->Handle[2].field_0x20, lVar1 != 0 &&
              ((((uint)(*(byte *)(lVar1 + 0x364) >> 5) ^ GEngine->bAllowMatureLanguage) & 1) != 0)))
             ) {
            TArray<TObjectPtr<USoundNode>,TSizedDefaultAllocator<32>_>::RemoveAt
                      ((TArray<TObjectPtr<USoundNode>,TSizedDefaultAllocator<32>_> *)
                       &this->field_0x28,uVar7,Default);
          }
        }
        lVar8 = lVar8 + -8;
        uVar7 = uVar7 - 1;
      } while (-1 < (int)uVar7);
    }
  }
  return;
}

// StaticRegisterNativesUSoundNodeMature @ 1486f1970

void __cdecl USoundNodeMature::StaticRegisterNativesUSoundNodeMature(void)

{
  return;
}

