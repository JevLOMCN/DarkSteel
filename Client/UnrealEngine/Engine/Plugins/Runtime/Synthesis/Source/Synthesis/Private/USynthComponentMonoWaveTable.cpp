// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 103

// StaticClass @ 14f0aa040

UClass * __cdecl USynthComponentMonoWaveTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthComponentMonoWaveTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthComponentMonoWaveTable",
               &Z_Registration_Info_UClass_USynthComponentMonoWaveTable.InnerSingleton,
               StaticRegisterNativesUSynthComponentMonoWaveTable,0x1020,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthComponentMonoWaveTable>,
               InternalVTableHelperCtorCaller<USynthComponentMonoWaveTable>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthComponentMonoWaveTable.InnerSingleton;
}

// <lambda_1> @ 14f0b5250

<lambda_1> * __thiscall
`USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  *(USynthComponentMonoWaveTable **)this = param_1->__this;
  *(int *)((longlong)this + 8) = param_1->Index;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->DestinationTable).ArrayNum;
  _Src = (param_1->DestinationTable).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// USynthComponentMonoWaveTable @ 14f0bbdc0

USynthComponentMonoWaveTable * __thiscall
USynthComponentMonoWaveTable::USynthComponentMonoWaveTable
          (USynthComponentMonoWaveTable *this,FObjectInitializer *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnTableAltered = 0;
  *(undefined8 *)&(this->OnTableAltered).field_0x8 = 0;
  *(undefined8 *)&(this->OnTableAltered).field_0x10 = 0;
  *(undefined8 *)&this->OnNumTablesChanged = 0;
  *(undefined8 *)&(this->OnNumTablesChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnNumTablesChanged).field_0x10 = 0;
  (this->CurrentPreset).field0_0x0.DebugPtr = (UMonoWaveTableSynthPreset *)0x0;
  this->CachedPreset = (UMonoWaveTableSynthPreset *)0x0;
  Audio::FMonoWaveTable::FMonoWaveTable(&this->Synth);
  return this;
}

// USynthComponentMonoWaveTable @ 14f0bbe50

USynthComponentMonoWaveTable * __thiscall
USynthComponentMonoWaveTable::USynthComponentMonoWaveTable
          (USynthComponentMonoWaveTable *this,FVTableHelper *param_1)

{
  USynthComponent::USynthComponent((USynthComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnTableAltered = 0;
  *(undefined8 *)&(this->OnTableAltered).field_0x8 = 0;
  *(undefined8 *)&(this->OnTableAltered).field_0x10 = 0;
  *(undefined8 *)&this->OnNumTablesChanged = 0;
  *(undefined8 *)&(this->OnNumTablesChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnNumTablesChanged).field_0x10 = 0;
  (this->CurrentPreset).field0_0x0.DebugPtr = (UMonoWaveTableSynthPreset *)0x0;
  Audio::FMonoWaveTable::FMonoWaveTable(&this->Synth);
  return this;
}

// operator() @ 14f0c1da0

void __thiscall `USynthComponentMonoWaveTable::NoteOn'::__l2::<lambda_1>::operator()(void *this)

{
  ForAnyElementType *pFVar1;
  float fVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  float local_28 [8];
  
  lVar3 = *(longlong *)this;
  local_28[0] = *(float *)((longlong)this + 8);
  fVar2 = *(float *)((longlong)this + 0xc);
  if (fVar2 < __real_322bcc77) {
    Audio::FMonoWaveTable::NoteOff((FMonoWaveTable *)(lVar3 + 0x900),local_28[0]);
    return;
  }
  pFVar1 = (ForAnyElementType *)(lVar3 + 0xff8);
  *(float *)(lVar3 + 0x908) = local_28[0];
  if (((pFVar1->Data <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 < pFVar1->Data + (longlong)*(int *)(lVar3 + 0x1004) * 4))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(lVar3 + 0x1000);
  if (iVar6 == *(int *)(lVar3 + 0x1004)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)(lVar3 + 0x1004));
  }
  *(int *)(lVar3 + 0x1000) = iVar6 + 1;
  *(float *)(pFVar1->Data + (longlong)iVar6 * 4) = local_28[0];
  (**(code **)(*(longlong *)(lVar3 + 0xac8) + 0x18))((longlong *)(lVar3 + 0xac8),fVar2);
  (**(code **)(*(longlong *)(lVar3 + 0xb78) + 0x10))();
  *(byte *)(lVar3 + 0x1008) = *(byte *)(lVar3 + 0x1008) | 2;
  return;
}

// operator() @ 14f0c1ee0

void __thiscall
`USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.ArrayNum = *(int *)((longlong)this + 0x18);
  lVar2 = (longlong)local_18.ArrayNum;
  lVar1 = *(longlong *)this;
  _Src = *(void **)((longlong)this + 0x10);
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.ArrayNum == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_18.ArrayNum,0,&local_18.AllocatorInstance,local_18.ArrayNum,
               &local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar2 << 2);
  }
  Audio::FMonoWaveTable::UpdateWaveTable
            ((FMonoWaveTable *)(lVar1 + 0x900),*(int *)((longlong)this + 8),&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14f0c3a00

void __thiscall
`USynthComponentMonoWaveTable::SetSynthPreset'::__l11::<lambda_1>::operator()
          (void *this,AssetChangeInfo *param_1)

{
  USynthComponentMonoWaveTable *this_00;
  code *pcVar1;
  bool bVar2;
  int local_res8 [2];
  
  this_00 = *(USynthComponentMonoWaveTable **)this;
  if (this_00->CachedPreset == (UMonoWaveTableSynthPreset *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedPreset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SynthComponentMonoWaveTable.cpp"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->bNeedsFullRebuild != 0) {
    USynthComponentMonoWaveTable::InitSynth(this_00);
    return;
  }
  local_res8[0] = param_1->CurveThatWasAltered;
  if (local_res8[0] != -1) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00->OnTableAltered,
               local_res8);
    USynthComponentMonoWaveTable::RefreshWaveTable(this_00,param_1->CurveThatWasAltered);
  }
  return;
}

// GetCurveTangent @ 14f0d8fa0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
USynthComponentMonoWaveTable::GetCurveTangent(USynthComponentMonoWaveTable *this,int param_1)

{
  UMonoWaveTableSynthPreset *pUVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  pUVar1 = this->CachedPreset;
  if (pUVar1 == (UMonoWaveTableSynthPreset *)0x0) {
    if (2 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
      return 0.0;
    }
  }
  else {
    if (((param_1 < (pUVar1->WaveTable).ArrayNum) &&
        (param_1 < (pUVar1->CurveBiDirTangents).ArrayNum)) && (__real_bf800000 < (float)param_1)) {
      if (param_1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          fVar4 = (float)(*pcVar2)();
          return fVar4;
        }
      }
      return *(float *)((pUVar1->CurveBiDirTangents).AllocatorInstance.Data + (longlong)param_1 * 4)
      ;
    }
    if (2 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
  }
  return 0.0;
}

// GetKeyFrameValuesForTable @ 14f0d9600

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
USynthComponentMonoWaveTable::GetKeyFrameValuesForTable
          (USynthComponentMonoWaveTable *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,float param_1)

{
  int *piVar1;
  UMonoWaveTableSynthPreset *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  uint uVar10;
  FRichCurve *pFVar11;
  uint uVar12;
  uint uVar13;
  FIndexedCurve *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_88;
  uint local_84;
  FIndexedCurve *local_80;
  FIndexedCurve *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  
  uVar15 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  pUVar2 = this->CachedPreset;
  if (pUVar2 == (UMonoWaveTableSynthPreset *)0x0) {
    if (2 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
  }
  else {
    uVar7 = (pUVar2->WaveTable).ArrayNum;
    if (((float)(int)uVar7 <= param_1) || (param_1 < 0.0)) {
      if (2 < (byte)LogSynthesis._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
      }
    }
    else {
      uVar12 = (int)ROUND((param_1 + param_1) - __real_3f000000) >> 1;
      uVar9 = ~uVar12;
      uVar10 = 0;
      if (uVar12 + 1 != uVar7) {
        uVar10 = uVar12 + 1;
      }
      uVar13 = 0;
      if ((int)uVar12 < (int)uVar7) {
        uVar13 = uVar9 >> 0x1f;
      }
      local_84 = uVar12;
      if ((uVar13 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      local_70 = (longlong)(int)uVar12 * 0x88;
      pFVar14 = (FIndexedCurve *)((pUVar2->WaveTable).AllocatorInstance.Data + local_70);
      local_80 = pFVar14;
      iVar6 = (**(code **)(pFVar14->_padding_ + 8))(pFVar14);
      FIndexedCurve::EnsureAllIndicesHaveHandles_Internal(pFVar14,iVar6);
      uVar7 = 0;
      if ((int)uVar10 < (pUVar2->WaveTable).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      local_68 = (longlong)(int)uVar10;
      local_60 = local_68 * 0x88;
      pFVar14 = (FIndexedCurve *)((pUVar2->WaveTable).AllocatorInstance.Data + local_60);
      local_78 = pFVar14;
      iVar6 = (**(code **)(pFVar14->_padding_ + 8))(pFVar14);
      FIndexedCurve::EnsureAllIndicesHaveHandles_Internal(pFVar14,iVar6);
      fVar17 = FGenericPlatformMath::Fmod(param_1,__real_3f800000);
      if (((pUVar2->WaveTable).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      uVar7 = *(uint *)((pUVar2->WaveTable).AllocatorInstance.Data + 0x78);
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (*piVar1 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar7,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,piVar1);
      }
      uVar16 = uVar15;
      if (0 < (int)uVar7) {
        do {
          uVar13 = 0;
          if ((int)uVar12 < (pUVar2->WaveTable).ArrayNum) {
            uVar13 = uVar9 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          uVar13 = (uint)uVar15;
          pFVar11 = (FRichCurve *)((pUVar2->WaveTable).AllocatorInstance.Data + local_70);
          uVar12 = 0;
          if ((int)uVar13 < (local_80->KeyHandlesToIndices).KeyHandles.ArrayNum) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          fVar18 = FRichCurve::GetKeyValue
                             (pFVar11,(FKeyHandle)
                                      *(uint *)((local_80->KeyHandlesToIndices).KeyHandles.
                                                AllocatorInstance.Data + uVar16 * 4));
          uVar12 = 0;
          if ((int)uVar10 < (pUVar2->WaveTable).ArrayNum) {
            uVar12 = ~uVar10 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          pFVar11 = (FRichCurve *)((pUVar2->WaveTable).AllocatorInstance.Data + local_60);
          uVar12 = 0;
          if ((int)uVar13 < (local_78->KeyHandlesToIndices).KeyHandles.ArrayNum) {
            uVar12 = ~uVar13 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          fVar19 = FRichCurve::GetKeyValue
                             (pFVar11,(FKeyHandle)
                                      *(uint *)((local_78->KeyHandlesToIndices).KeyHandles.
                                                AllocatorInstance.Data + uVar16 * 4));
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_88 = (fVar19 - fVar18) * fVar17 + fVar18;
          if (((pFVar3 <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 < pFVar3 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          uVar15 = (ulonglong)(uVar13 + 1);
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
               local_88;
          uVar16 = uVar16 + 1;
          uVar12 = local_84;
        } while ((int)(uVar13 + 1) < (int)uVar7);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetNumTableEntries @ 14f0da230

int __thiscall USynthComponentMonoWaveTable::GetNumTableEntries(USynthComponentMonoWaveTable *this)

{
  if (this->CachedPreset == (UMonoWaveTableSynthPreset *)0x0) {
    return 0;
  }
  return (this->CachedPreset->WaveTable).ArrayNum;
}

// GetPrivateStaticClass @ 14f0dd5c0

UClass * __cdecl USynthComponentMonoWaveTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynthComponentMonoWaveTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SynthComponentMonoWaveTable",
               &Z_Registration_Info_UClass_USynthComponentMonoWaveTable.InnerSingleton,
               StaticRegisterNativesUSynthComponentMonoWaveTable,0x1020,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<USynthComponentMonoWaveTable>,
               InternalVTableHelperCtorCaller<USynthComponentMonoWaveTable>,local_res8,
               USynthComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynthComponentMonoWaveTable.InnerSingleton;
}

// Init @ 14f0e64a0

bool __thiscall USynthComponentMonoWaveTable::Init(USynthComponentMonoWaveTable *this,int *param_1)

{
  UMonoWaveTableSynthPreset *pUVar1;
  UMonoWaveTableSynthPreset *pUVar2;
  undefined ***pppuVar3;
  uint uVar4;
  uint uVar5;
  uint local_res8 [4];
  uint *local_58;
  undefined1 *local_50;
  undefined1 local_48 [16];
  undefined **local_38;
  USynthComponentMonoWaveTable *local_30;
  undefined ***local_20;
  
  uVar5 = 0;
  pUVar1 = (this->CurrentPreset).field0_0x0.DebugPtr;
  this->SampleRate = *param_1;
  pUVar2 = this->CachedPreset;
  if (pUVar2 != pUVar1) {
    if (pUVar2 != (UMonoWaveTableSynthPreset *)0x0) {
      local_res8[0] = *(uint *)&this->field_0xc;
      if (*(int *)&(pUVar2->PropertyChangedCallbacks).field_0x8 !=
          *(int *)&(pUVar2->PropertyChangedCallbacks).field_0x34) {
        TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned_int>
                  ((TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
                    *)&pUVar2->PropertyChangedCallbacks,local_res8[0],local_res8);
      }
    }
    this->CachedPreset = pUVar1;
    if (pUVar1 != (UMonoWaveTableSynthPreset *)0x0) {
      local_20 = (undefined ***)0x0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::`11'::<lambda_1>,0,0>
                  ::_vftable_;
      local_48._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`USynthComponentMonoWaveTable::SetSynthPreset'::__l11::<lambda_1>,void,AssetChangeInfo_const_&>
           ::Call;
      local_res8[0] = *(uint *)&this->field_0xc;
      local_58 = local_res8;
      local_50 = local_48;
      local_30 = this;
      TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned_int_const_&,TFunction<void___cdecl(AssetChangeInfo_const_&)>_&&>_>
                ((TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
                  *)&pUVar1->PropertyChangedCallbacks,
                 (TPairInitializer<unsigned_int_const_&,TFunction<void___cdecl(AssetChangeInfo_const_&)>_&&>
                  *)(local_res8 + 2),(bool *)&local_58);
      if ((code *)local_48._0_8_ != (code *)0x0) {
        pppuVar3 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar3 = local_20;
        }
        (*(code *)(*pppuVar3)[2])();
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnNumTablesChanged,
                 (void *)0x0);
      uVar4 = uVar5;
      if (0 < (this->CachedPreset->WaveTable).ArrayNum) {
        do {
          local_res8[0] = uVar4;
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTableAltered,
                     local_res8);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (this->CachedPreset->WaveTable).ArrayNum);
      }
    }
    InitSynth(this);
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::Init'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`USynthComponentMonoWaveTable::Init'::__l2::<lambda_1>,void>::Call;
  local_30 = this;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_48);
  if ((this->CachedPreset != (UMonoWaveTableSynthPreset *)0x0) &&
     (UMonoWaveTableSynthPreset::CacheAssetData(this->CachedPreset),
     0 < (this->CachedPreset->WaveTable).ArrayNum)) {
    do {
      RefreshWaveTable(this,uVar5);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->CachedPreset->WaveTable).ArrayNum);
  }
  return true;
}

// InitSynth @ 14f0e6d50

void __thiscall USynthComponentMonoWaveTable::InitSynth(USynthComponentMonoWaveTable *this)

{
  int iVar1;
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  int local_18;
  undefined8 local_10;
  
  if (this->CachedPreset != (UMonoWaveTableSynthPreset *)0x0) {
    local_18 = (this->CachedPreset->WaveTable).ArrayNum;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USynthComponentMonoWaveTable::InitSynth'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    iVar1 = 0;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USynthComponentMonoWaveTable::InitSynth'::__l2::<lambda_1>,void>
                  ::Call;
    local_10 = 0;
    local_20 = this;
    USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38)
    ;
    if (0 < (this->CachedPreset->WaveTable).ArrayNum) {
      do {
        RefreshWaveTable(this,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < (this->CachedPreset->WaveTable).ArrayNum);
    }
  }
  return;
}

// NoteOff @ 14f0e88f0

void __thiscall
USynthComponentMonoWaveTable::NoteOff(USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_20 = this;
  local_18 = powf(__real_40000000,(param_1 - __real_428a0000) * __real_3daaaaab);
  local_18 = local_18 * __real_43dc0000;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::NoteOff'::__l2::<lambda_1>,void>::
                Call;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// NoteOn @ 14f0e91b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USynthComponentMonoWaveTable::NoteOn(USynthComponentMonoWaveTable *this,float param_1,float param_2)

{
  code *local_48 [2];
  undefined **local_38;
  USynthComponentMonoWaveTable *local_30;
  float local_28;
  float local_24;
  undefined8 local_20;
  
  local_28 = powf(__real_40000000,(param_1 - __real_428a0000) * __real_3daaaaab);
  local_28 = local_28 * __real_43dc0000;
  local_24 = 0.0;
  if (param_2 != 0.0) {
    local_24 = param_2 * param_2 * ___real_38820610;
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::NoteOn'::__l2::<lambda_1>,void>::
                Call;
  local_20 = 0;
  local_30 = this;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_48);
  return;
}

// OnGenerateAudio @ 14f0e9fe0

int __thiscall
USynthComponentMonoWaveTable::OnGenerateAudio
          (USynthComponentMonoWaveTable *this,float *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = Audio::FMonoWaveTable::OnGenerateAudio(&this->Synth,param_1,param_2);
  return iVar1;
}

// ReactToAssetChange @ 14f0f4760

void __thiscall
USynthComponentMonoWaveTable::ReactToAssetChange
          (USynthComponentMonoWaveTable *this,AssetChangeInfo *param_1)

{
  code *pcVar1;
  bool bVar2;
  int local_res8 [2];
  
  if (this->CachedPreset == (UMonoWaveTableSynthPreset *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedPreset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SynthComponentMonoWaveTable.cpp"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1->bNeedsFullRebuild != 0) {
    InitSynth(this);
    return;
  }
  local_res8[0] = param_1->CurveThatWasAltered;
  if (local_res8[0] != -1) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTableAltered,
               local_res8);
    RefreshWaveTable(this,param_1->CurveThatWasAltered);
  }
  return;
}

// RefreshAllWaveTables @ 14f0f60e0

void __thiscall
USynthComponentMonoWaveTable::RefreshAllWaveTables(USynthComponentMonoWaveTable *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < (this->CachedPreset->WaveTable).ArrayNum) {
    do {
      RefreshWaveTable(this,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->CachedPreset->WaveTable).ArrayNum);
  }
  return;
}

// RefreshWaveTable @ 14f0f6130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
USynthComponentMonoWaveTable::RefreshWaveTable(USynthComponentMonoWaveTable *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UMonoWaveTableSynthPreset *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  FRichCurve *pFVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong local_1c0;
  TArray<float,TSizedDefaultAllocator<32>_> local_1b8;
  undefined1 local_1a8 [16];
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TArrayView<float,int> local_188;
  TArrayView<float,int> local_178;
  code *local_168 [5];
  undefined8 *local_140;
  undefined1 local_138 [72];
  void *local_f0;
  undefined4 local_e8;
  void *local_e0;
  ForAnyElementType local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (((this->CachedPreset->WaveTable).ArrayNum <= param_1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index < CachedPreset->WaveTable.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SynthComponentMonoWaveTable.cpp"
                          ,0x181,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar4 = this->CachedPreset;
  uVar15 = 0;
  iVar2 = (pUVar4->WaveTable).ArrayNum;
  iVar3 = pUVar4->WaveTableResolution;
  uVar13 = 0;
  if (param_1 < iVar2) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (local_1c8 = (longlong)param_1, local_1c0 = (longlong)iVar2,
     bVar11 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar12 = FRuntimeFloatCurve::GetRichCurve
                      ((FRuntimeFloatCurve *)
                       ((pUVar4->WaveTable).AllocatorInstance.Data + (longlong)param_1 * 0x88));
  if ((pFVar12 == (FRichCurve *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("PointerToCurve",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SynthComponentMonoWaveTable.cpp"
                          ,0x187,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FRichCurve::FRichCurve((FRichCurve *)local_138,pFVar12);
  fVar9 = __real_3f800000;
  FRichCurve::BakeCurve((FRichCurve *)local_138,(float)iVar3,0.0,__real_3f800000);
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_1b8,iVar3,Default);
  dVar6 = 0.0;
  fVar20 = 0.0;
  fVar19 = 0.0;
  dVar7 = __real_3ff0000000000000 / (double)this->CachedPreset->WaveTableResolution;
  uVar17 = uVar15;
  if (0 < iVar3) {
    do {
      fVar18 = FRichCurve::Eval((FRichCurve *)local_138,(float)dVar6,0.0);
      uVar14 = (uint)uVar15;
      uVar13 = 0;
      if ((int)uVar14 < local_1b8.ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_1c8 = (longlong)(int)uVar14;
        local_1c0 = (longlong)local_1b8.ArrayNum;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(float *)(local_1b8.AllocatorInstance.Data + uVar17 * 4) = fVar18;
      uVar13 = 0;
      if ((int)uVar14 < local_1b8.ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_1c8 = (longlong)(int)uVar14;
        local_1c0 = (longlong)local_1b8.ArrayNum;
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      dVar6 = dVar6 + dVar7;
      uVar15 = (ulonglong)(uVar14 + 1);
      fVar18 = *(float *)(local_1b8.AllocatorInstance.Data + uVar17 * 4);
      uVar17 = uVar17 + 1;
      fVar10 = fVar18;
      if (fVar19 <= fVar18) {
        fVar10 = fVar19;
      }
      fVar19 = fVar10;
      if (fVar18 <= fVar20) {
        fVar18 = fVar20;
      }
      fVar20 = fVar18;
    } while ((longlong)uVar17 < (longlong)iVar3);
  }
  local_198 = local_1b8.AllocatorInstance.Data;
  fVar18 = ((float)((uint)fVar20 & __xmm_7fffffff7fffffff7fffffff7fffffff) -
           (float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff)) * __real_bf000000;
  iStack_190 = iVar3;
  if ((iVar3 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar1 = local_198;
  uVar8._4_4_ = uStack_18c;
  uVar8._0_4_ = iStack_190;
  if (__real_322bcc77 < (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_188.DataPtr = (float *)local_198;
    local_188._8_8_ = uVar8;
    Audio::ArrayAddConstantInplace(&local_188,fVar18);
  }
  fVar10 = __real_bf800000;
  if (this->CachedPreset->bNormalizeWaveTables == 0) {
    iVar2 = local_1b8.ArrayNum;
    pFVar1 = local_1b8.AllocatorInstance.Data + (longlong)local_1b8.ArrayNum * 4;
    FVar16.Data = local_1b8.AllocatorInstance.Data;
    while( true ) {
      if (local_1b8.ArrayNum != iVar2) {
        `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      if (FVar16.Data == pFVar1) break;
      fVar19 = *(float *)FVar16.Data;
      if (fVar9 <= *(float *)FVar16.Data) {
        fVar19 = fVar9;
      }
      if (fVar19 <= fVar10) {
        fVar19 = fVar10;
      }
      *(float *)FVar16.Data = fVar19;
      FVar16.Data = FVar16.Data + 4;
    }
  }
  else {
    fVar19 = (float)((uint)(fVar19 + fVar18) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    local_178.DataPtr = (float *)pFVar1;
    fVar20 = (float)((uint)(fVar20 + fVar18) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if (fVar19 <= fVar20) {
      fVar19 = fVar20;
    }
    local_178._8_8_ = uVar8;
    Audio::ArrayMultiplyByConstantInPlace(&local_178,fVar9 / fVar19);
  }
  FVar16.Data = local_1b8.AllocatorInstance.Data;
  iVar2 = local_1b8.ArrayNum;
  iVar3 = local_1b8.ArrayMax;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  local_168[0] = (code *)0x0;
  local_140 = FMemory::Malloc(0x28,8);
  local_140[1] = this;
  *(int *)(local_140 + 2) = param_1;
  *local_140 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USynthComponentMonoWaveTable::RefreshWaveTable'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  local_140[3] = FVar16.Data;
  *(int *)(local_140 + 4) = iVar2;
  *(int *)((longlong)local_140 + 0x24) = iVar3;
  if (local_140 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_168[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>,void>
                   ::Call;
  }
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_168);
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  local_138._0_8_ = &___7FIndexedCurve__6B_;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  local_e8 = 0;
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_138 + 8));
  return;
}

// ResetCurve @ 14f0f7ed0

void __thiscall
USynthComponentMonoWaveTable::ResetCurve(USynthComponentMonoWaveTable *this,int param_1)

{
  UMonoWaveTableSynthPreset *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (this->CachedPreset != (UMonoWaveTableSynthPreset *)0x0) {
    if ((this->CachedPreset->WaveTable).ArrayNum <= param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < CachedPreset->WaveTable.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Synthesis\\Source\\Synthesis\\Private\\SynthComponentMonoWaveTable.cpp"
                         ,0x3fd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar1 = this->CachedPreset;
    uVar4 = 0;
    if (param_1 < (pUVar1->WaveTable).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FRuntimeFloatCurve::operator=
              ((FRuntimeFloatCurve *)
               ((pUVar1->WaveTable).AllocatorInstance.Data + (longlong)param_1 * 0x88),
               &pUVar1->DefaultCurve);
  }
  return;
}

// SetAmpEnvelopeAttackTime @ 14f0f8bb0

void __thiscall
USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetAmpEnvelopeBiasDepth @ 14f0f8c20

void __thiscall
USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetAmpEnvelopeBiasInvert @ 14f0f8c90

void __thiscall
USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert
          (USynthComponentMonoWaveTable *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetAmpEnvelopeDecayTime @ 14f0f8d10

void __thiscall
USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetAmpEnvelopeDepth @ 14f0f8d80

void __thiscall
USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetAmpEnvelopeInvert @ 14f0f8df0

void __thiscall
USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(USynthComponentMonoWaveTable *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetAmpEnvelopeReleaseTime @ 14f0f8e70

void __thiscall
USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetAmpEnvelopeSustainGain @ 14f0f8ed0

void __thiscall
USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetCurveInterpolationType @ 14f0f96b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USynthComponentMonoWaveTable::SetCurveInterpolationType
          (USynthComponentMonoWaveTable *this,CurveInterpolationType param_1,int param_2)

{
  UMonoWaveTableSynthPreset *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FRichCurve *this_00;
  ERichCurveInterpMode EVar8;
  
  pUVar1 = this->CachedPreset;
  if (pUVar1 == (UMonoWaveTableSynthPreset *)0x0) {
    if (2 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
      return false;
    }
  }
  else {
    if (param_2 < (pUVar1->WaveTable).ArrayNum) {
      if ((param_2 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      this_00 = (FRichCurve *)
                ((pUVar1->WaveTable).AllocatorInstance.Data + (longlong)param_2 * 0x88);
      iVar5 = (**(code **)(this_00->_padding_ + 8))(this_00);
      FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this_00,iVar5);
      uVar7 = 0;
      if (param_1 == AUTOINTERP) {
        EVar8 = RCIM_Cubic;
      }
      else if ((param_1 == LINEAR) || (param_1 != CONSTANT)) {
        EVar8 = RCIM_Linear;
      }
      else {
        EVar8 = RCIM_Constant;
      }
      if (0 < (this_00->Keys).ArrayNum) {
        do {
          uVar6 = 0;
          if ((int)uVar7 < (int)this_00->_padding_) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          FRichCurve::SetKeyInterpMode
                    (this_00,(FKeyHandle)*(uint *)(this_00->_padding_ + (longlong)(int)uVar7 * 4),
                     EVar8);
          uVar6 = 0;
          if ((int)uVar7 < (int)this_00->_padding_) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          FRichCurve::SetKeyTangentMode
                    (this_00,(FKeyHandle)*(uint *)(this_00->_padding_ + (longlong)(int)uVar7 * 4),
                     RCTM_Auto,true);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (this_00->Keys).ArrayNum);
      }
      UMonoWaveTableSynthPreset::EditChangeInternal(this->CachedPreset);
      return true;
    }
    if (2 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
  }
  return false;
}

// SetCurveTangent @ 14f0f98c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USynthComponentMonoWaveTable::SetCurveTangent
          (USynthComponentMonoWaveTable *this,int param_1,float param_2)

{
  int iVar1;
  UMonoWaveTableSynthPreset *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FRichCurve *this_00;
  
  pUVar2 = this->CachedPreset;
  if (pUVar2 == (UMonoWaveTableSynthPreset *)0x0) {
    if (2 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
      return false;
    }
  }
  else {
    if (param_1 < (pUVar2->WaveTable).ArrayNum) {
      if ((param_1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      this_00 = (FRichCurve *)
                ((pUVar2->WaveTable).AllocatorInstance.Data + (longlong)param_1 * 0x88);
      iVar6 = (**(code **)(this_00->_padding_ + 8))(this_00);
      FIndexedCurve::EnsureAllIndicesHaveHandles_Internal((FIndexedCurve *)this_00,iVar6);
      uVar8 = 0;
      if (0 < (this_00->Keys).ArrayNum) {
        do {
          uVar7 = 0;
          if ((int)uVar8 < (int)this_00->_padding_) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          FRichCurve::SetKeyInterpMode
                    (this_00,(FKeyHandle)*(uint *)(this_00->_padding_ + (longlong)(int)uVar8 * 4),
                     RCIM_Cubic);
          uVar7 = 0;
          if ((int)uVar8 < (int)this_00->_padding_) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          FRichCurve::SetKeyTangentMode
                    (this_00,(FKeyHandle)*(uint *)(this_00->_padding_ + (longlong)(int)uVar8 * 4),
                     RCTM_Auto,true);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (this_00->Keys).ArrayNum);
      }
      pUVar2 = this->CachedPreset;
      iVar6 = (pUVar2->WaveTable).ArrayNum;
      iVar1 = (pUVar2->CurveBiDirTangents).ArrayNum;
      if (iVar1 < iVar6) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar6 - iVar1,&(pUVar2->CurveBiDirTangents).AllocatorInstance,
                   &(pUVar2->CurveBiDirTangents).ArrayNum,&(pUVar2->CurveBiDirTangents).ArrayMax);
      }
      pUVar2 = this->CachedPreset;
      uVar8 = 0;
      if (param_1 < (pUVar2->CurveBiDirTangents).ArrayNum) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      *(float *)((pUVar2->CurveBiDirTangents).AllocatorInstance.Data + (longlong)param_1 * 4) =
           param_2;
      UMonoWaveTableSynthPreset::EditChangeInternal(this->CachedPreset);
      return true;
    }
    if (2 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
  }
  return false;
}

// SetCurveValue @ 14f0f9b80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
USynthComponentMonoWaveTable::SetCurveValue
          (USynthComponentMonoWaveTable *this,int param_1,int param_2,float param_3)

{
  UMonoWaveTableSynthPreset *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FIndexedCurve *this_00;
  longlong lVar9;
  
  pUVar1 = this->CachedPreset;
  if (pUVar1 == (UMonoWaveTableSynthPreset *)0x0) {
    if (2 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
      return false;
    }
  }
  else if (param_1 < (pUVar1->WaveTable).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
    if ((param_1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    lVar9 = (longlong)param_1 * 0x88;
    if (param_2 < *(int *)((pUVar1->WaveTable).AllocatorInstance.Data + lVar9 + 0x78)) {
      pUVar1 = this->CachedPreset;
      uVar7 = 0;
      if (param_1 < (pUVar1->WaveTable).ArrayNum) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      this_00 = (FIndexedCurve *)((pUVar1->WaveTable).AllocatorInstance.Data + lVar9);
      iVar6 = (**(code **)(this_00->_padding_ + 8))(this_00);
      FIndexedCurve::EnsureAllIndicesHaveHandles_Internal(this_00,iVar6);
      uVar7 = 0;
      if (param_1 < (pUVar1->WaveTable).ArrayNum) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (pUVar1->WaveTable).AllocatorInstance.Data;
      uVar8 = 0;
      if (param_2 < (this_00->KeyHandlesToIndices).KeyHandles.ArrayNum) {
        uVar8 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      FRichCurve::SetKeyValue
                ((FRichCurve *)(pFVar2 + lVar9),
                 (FKeyHandle)
                 *(uint *)((this_00->KeyHandlesToIndices).KeyHandles.AllocatorInstance.Data +
                          (longlong)param_2 * 4),param_3,true);
      UMonoWaveTableSynthPreset::EditChangeInternal(this->CachedPreset);
      return true;
    }
    if (2 < (byte)LogSynthesis._0_1_) {
      uVar7 = 0;
      if (param_1 < (this->CachedPreset->WaveTable).ArrayNum) {
        uVar7 = uVar8;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
  }
  else if (2 < (byte)LogSynthesis._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    return false;
  }
  return false;
}

// SetFilterEnvelopeAttackTime @ 14f0fb5a0

void __thiscall
USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterEnvelopeBiasDepth @ 14f0fb610

void __thiscall
USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterEnvelopeBiasInvert @ 14f0fb680

void __thiscall
USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert
          (USynthComponentMonoWaveTable *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterEnvelopeDepth @ 14f0fb700

void __thiscall
USynthComponentMonoWaveTable::SetFilterEnvelopeDepth
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterEnvelopeInvert @ 14f0fb770

void __thiscall
USynthComponentMonoWaveTable::SetFilterEnvelopeInvert
          (USynthComponentMonoWaveTable *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterEnvelopeReleaseTime @ 14f0fb7f0

void __thiscall
USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterEnvelopeSustainGain @ 14f0fb860

void __thiscall
USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFilterEnvelopenDecayTime @ 14f0fb8d0

void __thiscall
USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFrequency @ 14f0fc0c0

void __thiscall
USynthComponentMonoWaveTable::SetFrequency(USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFrequencyPitchBend @ 14f0fc2c0

void __thiscall
USynthComponentMonoWaveTable::SetFrequencyPitchBend
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetFrequencyWithMidiNote @ 14f0fc310

void __thiscall
USynthComponentMonoWaveTable::SetFrequencyWithMidiNote
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = this;
  local_18 = powf(__real_40000000,(param_1 - __real_428a0000) * __real_3daaaaab);
  local_18 = local_18 * __real_43dc0000;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,void>
                ::Call;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetLowPassFilterFrequency @ 14f0fdcf0

void __thiscall
USynthComponentMonoWaveTable::SetLowPassFilterFrequency
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  if (param_1 <= __real_40a00000) {
    param_1 = __real_40a00000;
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetLowPassFilterResonance @ 14f0fdd50

void __thiscall
USynthComponentMonoWaveTable::SetLowPassFilterResonance
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPosLfoDepth @ 14f0ffed0

void __thiscall
USynthComponentMonoWaveTable::SetPosLfoDepth(USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPosLfoDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPosLfoFrequency @ 14f0fff20

void __thiscall
USynthComponentMonoWaveTable::SetPosLfoFrequency(USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPosLfoType @ 14f0fff70

void __thiscall
USynthComponentMonoWaveTable::SetPosLfoType
          (USynthComponentMonoWaveTable *this,ESynthLFOType param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  ESynthLFOType local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPosLfoType'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPositionEnvelopeAttackTime @ 14f0ffff0

void __thiscall
USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPositionEnvelopeBiasDepth @ 14f100060

void __thiscall
USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPositionEnvelopeBiasInvert @ 14f1000d0

void __thiscall
USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert
          (USynthComponentMonoWaveTable *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPositionEnvelopeDecayTime @ 14f100150

void __thiscall
USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPositionEnvelopeDepth @ 14f1001c0

void __thiscall
USynthComponentMonoWaveTable::SetPositionEnvelopeDepth
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPositionEnvelopeInvert @ 14f100230

void __thiscall
USynthComponentMonoWaveTable::SetPositionEnvelopeInvert
          (USynthComponentMonoWaveTable *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPositionEnvelopeReleaseTime @ 14f1002b0

void __thiscall
USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetPositionEnvelopeSustainGain @ 14f100320

void __thiscall
USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain
          (USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetSustainPedalState @ 14f102810

void __thiscall
USynthComponentMonoWaveTable::SetSustainPedalState(USynthComponentMonoWaveTable *this,bool param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetSustainPedalState'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// SetSynthPreset @ 14f102930

void __thiscall
USynthComponentMonoWaveTable::SetSynthPreset
          (USynthComponentMonoWaveTable *this,UMonoWaveTableSynthPreset *param_1)

{
  UMonoWaveTableSynthPreset *pUVar1;
  undefined ***pppuVar2;
  uint uVar3;
  uint local_res8 [4];
  uint *local_48;
  code **local_40;
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  undefined ***local_10;
  
  pUVar1 = this->CachedPreset;
  if (pUVar1 != param_1) {
    if (pUVar1 != (UMonoWaveTableSynthPreset *)0x0) {
      local_res8[0] = *(uint *)&this->field_0xc;
      if (*(int *)&(pUVar1->PropertyChangedCallbacks).field_0x8 !=
          *(int *)&(pUVar1->PropertyChangedCallbacks).field_0x34) {
        TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned_int>
                  ((TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
                    *)&pUVar1->PropertyChangedCallbacks,local_res8[0],local_res8);
      }
    }
    this->CachedPreset = param_1;
    if (param_1 != (UMonoWaveTableSynthPreset *)0x0) {
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::`11'::<lambda_1>,0,0>
                  ::_vftable_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USynthComponentMonoWaveTable::SetSynthPreset'::__l11::<lambda_1>,void,AssetChangeInfo_const_&>
                    ::Call;
      local_res8[0] = *(uint *)&this->field_0xc;
      uVar3 = 0;
      local_48 = local_res8;
      local_10 = (undefined ***)0x0;
      local_40 = local_38;
      local_20 = this;
      TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned_int_const_&,TFunction<void___cdecl(AssetChangeInfo_const_&)>_&&>_>
                ((TSet<TTuple<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<void___cdecl(AssetChangeInfo_const_&)>,0>,FDefaultSetAllocator>
                  *)&param_1->PropertyChangedCallbacks,
                 (TPairInitializer<unsigned_int_const_&,TFunction<void___cdecl(AssetChangeInfo_const_&)>_&&>
                  *)(local_res8 + 2),(bool *)&local_48);
      if (local_38[0] != (code *)0x0) {
        pppuVar2 = &local_28;
        if (local_10 != (undefined ***)0x0) {
          pppuVar2 = local_10;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnNumTablesChanged,
                 (void *)0x0);
      if (0 < (this->CachedPreset->WaveTable).ArrayNum) {
        do {
          local_res8[0] = uVar3;
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTableAltered,
                     local_res8);
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < (this->CachedPreset->WaveTable).ArrayNum);
      }
    }
    InitSynth(this);
  }
  return;
}

// SetWaveTablePosition @ 14f103050

void __thiscall
USynthComponentMonoWaveTable::SetWaveTablePosition(USynthComponentMonoWaveTable *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USynthComponentMonoWaveTable *local_20;
  float local_18;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetWaveTablePosition'::__l2::<lambda_1>,void>
                ::Call;
  local_10 = 0;
  local_20 = this;
  local_18 = param_1;
  USynthComponent::SynthCommand((USynthComponent *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// StaticRegisterNativesUSynthComponentMonoWaveTable @ 14f103c80

void __cdecl USynthComponentMonoWaveTable::StaticRegisterNativesUSynthComponentMonoWaveTable(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x2c;
  local_18.DataPtr = Z_Construct_UClass_USynthComponentMonoWaveTable_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCurveTangent @ 14f10bdb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
USynthComponentMonoWaveTable::execGetCurveTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = *(longlong *)&param_1[0x39].field_0x10;
  lVar5 = (longlong)(int)local_res8[0];
  if (lVar2 == 0) {
    if (2 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
  }
  else {
    if ((int)local_res8[0] < *(int *)(lVar2 + 0x50)) {
      if (((int)local_res8[0] < *(int *)(lVar2 + 0xb8)) &&
         (__real_bf800000 < (float)(int)local_res8[0])) {
        uVar6 = 0;
        if ((int)local_res8[0] < *(int *)(lVar2 + 0xb8)) {
          uVar6 = ~local_res8[0] >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        uVar7 = *(undefined4 *)(*(longlong *)(lVar2 + 0xb0) + lVar5 * 4);
        goto LAB_14f10beeb;
      }
    }
    if (2 < (byte)LogSynthesis._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSynthesis);
    }
  }
  uVar7 = 0;
LAB_14f10beeb:
  *(undefined4 *)param_3 = uVar7;
  return;
}

// execGetKeyFrameValuesForTable @ 14f10bf10

void __cdecl
USynthComponentMonoWaveTable::execGetKeyFrameValuesForTable
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  float local_res10 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0.0;
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
  pTVar2 = GetKeyFrameValuesForTable
                     ((USynthComponentMonoWaveTable *)param_1,&local_18,local_res10[0]);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetMaxTableIndex @ 14f10c590

void __cdecl
USynthComponentMonoWaveTable::execGetMaxTableIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x39].field_0x10 != 0) {
    *(int *)param_3 = *(int *)(*(longlong *)&param_1[0x39].field_0x10 + 0x50) + -1;
    return;
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetNumTableEntries @ 14f10c5d0

void __cdecl
USynthComponentMonoWaveTable::execGetNumTableEntries(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x39].field_0x10 == 0) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[0x39].field_0x10 + 0x50);
  return;
}

// execNoteOff @ 14f10cdb0

void __cdecl
USynthComponentMonoWaveTable::execNoteOff(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float _X;
  float fVar2;
  float local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  float local_18;
  undefined8 local_10;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  _X = __real_40000000;
  fVar2 = local_res8[0] - __real_428a0000;
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_20 = param_1;
  local_18 = powf(_X,fVar2 * __real_3daaaaab);
  local_18 = local_18 * __real_43dc0000;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::NoteOff'::__l2::<lambda_1>,void>::
                Call;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execNoteOn @ 14f10d220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USynthComponentMonoWaveTable::execNoteOn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float _X;
  float fVar2;
  float fVar3;
  float local_res8 [2];
  float local_res10 [2];
  code *local_48 [2];
  undefined **local_38;
  UObject *local_30;
  float local_28;
  float local_24;
  undefined8 local_20;
  
  fVar3 = 0.0;
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _X = __real_40000000;
  fVar2 = local_res8[0] - __real_428a0000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = powf(_X,fVar2 * __real_3daaaaab);
  local_28 = local_28 * __real_43dc0000;
  if (local_res10[0] != 0.0) {
    fVar3 = local_res10[0] * local_res10[0] * ___real_38820610;
  }
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::NoteOn'::__l2::<lambda_1>,void>::
                Call;
  local_20 = 0;
  local_30 = param_1;
  local_24 = fVar3;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_48);
  return;
}

// execRefreshAllWaveTables @ 14f10d370

void __cdecl
USynthComponentMonoWaveTable::execRefreshAllWaveTables
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (0 < *(int *)(*(longlong *)&param_1[0x39].field_0x10 + 0x50)) {
    do {
      RefreshWaveTable((USynthComponentMonoWaveTable *)param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*(longlong *)&param_1[0x39].field_0x10 + 0x50));
  }
  return;
}

// execRefreshWaveTable @ 14f10d3d0

void __cdecl
USynthComponentMonoWaveTable::execRefreshWaveTable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
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
  RefreshWaveTable((USynthComponentMonoWaveTable *)param_1,local_res10[0]);
  return;
}

// execSetAmpEnvelopeAttackTime @ 14f10d800

void __cdecl
USynthComponentMonoWaveTable::execSetAmpEnvelopeAttackTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetAmpEnvelopeBiasDepth @ 14f10d8c0

void __cdecl
USynthComponentMonoWaveTable::execSetAmpEnvelopeBiasDepth
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetAmpEnvelopeBiasInvert @ 14f10d980

void __cdecl
USynthComponentMonoWaveTable::execSetAmpEnvelopeBiasInvert
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetAmpEnvelopeDecayTime @ 14f10da50

void __cdecl
USynthComponentMonoWaveTable::execSetAmpEnvelopeDecayTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetAmpEnvelopeDepth @ 14f10db10

void __cdecl
USynthComponentMonoWaveTable::execSetAmpEnvelopeDepth
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetAmpEnvelopeInvert @ 14f10dbd0

void __cdecl
USynthComponentMonoWaveTable::execSetAmpEnvelopeInvert
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetAmpEnvelopeReleaseTime @ 14f10dca0

void __cdecl
USynthComponentMonoWaveTable::execSetAmpEnvelopeReleaseTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetAmpEnvelopeSustainGain @ 14f10dd60

void __cdecl
USynthComponentMonoWaveTable::execSetAmpEnvelopeSustainGain
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetCurveInterpolationType @ 14f10e6e0

void __cdecl
USynthComponentMonoWaveTable::execSetCurveInterpolationType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  CurveInterpolationType local_res10 [8];
  int local_res18 [4];
  
  local_res10[0] = AUTOINTERP;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SetCurveInterpolationType
                    ((USynthComponentMonoWaveTable *)param_1,local_res10[0],local_res18[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCurveTangent @ 14f10e7b0

void __cdecl
USynthComponentMonoWaveTable::execSetCurveTangent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
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
  bVar2 = SetCurveTangent((USynthComponentMonoWaveTable *)param_1,local_res18[0],local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetCurveValue @ 14f10e880

void __cdecl
USynthComponentMonoWaveTable::execSetCurveValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  
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
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
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
  bVar2 = SetCurveValue((USynthComponentMonoWaveTable *)param_1,local_res20[0],local_res18[0],
                        local_res10[0]);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetFilterEnvelopeAttackTime @ 14f110090

void __cdecl
USynthComponentMonoWaveTable::execSetFilterEnvelopeAttackTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterEnvelopeBiasDepth @ 14f110150

void __cdecl
USynthComponentMonoWaveTable::execSetFilterEnvelopeBiasDepth
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterEnvelopeBiasInvert @ 14f110210

void __cdecl
USynthComponentMonoWaveTable::execSetFilterEnvelopeBiasInvert
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterEnvelopeDepth @ 14f1102e0

void __cdecl
USynthComponentMonoWaveTable::execSetFilterEnvelopeDepth
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterEnvelopeInvert @ 14f1103a0

void __cdecl
USynthComponentMonoWaveTable::execSetFilterEnvelopeInvert
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterEnvelopeReleaseTime @ 14f110470

void __cdecl
USynthComponentMonoWaveTable::execSetFilterEnvelopeReleaseTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterEnvelopeSustainGain @ 14f110530

void __cdecl
USynthComponentMonoWaveTable::execSetFilterEnvelopeSustainGain
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFilterEnvelopenDecayTime @ 14f1105f0

void __cdecl
USynthComponentMonoWaveTable::execSetFilterEnvelopenDecayTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFrequency @ 14f110d70

void __cdecl
USynthComponentMonoWaveTable::execSetFrequency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFrequencyPitchBend @ 14f111130

void __cdecl
USynthComponentMonoWaveTable::execSetFrequencyPitchBend
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetFrequencyWithMidiNote @ 14f1111f0

void __cdecl
USynthComponentMonoWaveTable::execSetFrequencyWithMidiNote
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float _X;
  float fVar2;
  float local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  float local_18;
  undefined8 local_10;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  _X = __real_40000000;
  fVar2 = local_res8[0] - __real_428a0000;
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = param_1;
  local_18 = powf(_X,fVar2 * __real_3daaaaab);
  local_18 = local_18 * __real_43dc0000;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,void>
                ::Call;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetLowPassFilterResonance @ 14f112a90

void __cdecl
USynthComponentMonoWaveTable::execSetLowPassFilterResonance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPosLfoDepth @ 14f114660

void __cdecl
USynthComponentMonoWaveTable::execSetPosLfoDepth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPosLfoDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPosLfoFrequency @ 14f114720

void __cdecl
USynthComponentMonoWaveTable::execSetPosLfoFrequency(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPosLfoType @ 14f1147e0

void __cdecl
USynthComponentMonoWaveTable::execSetPosLfoType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_18 = local_res8[0];
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPosLfoType'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPositionEnvelopeAttackTime @ 14f1148b0

void __cdecl
USynthComponentMonoWaveTable::execSetPositionEnvelopeAttackTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPositionEnvelopeBiasDepth @ 14f114970

void __cdecl
USynthComponentMonoWaveTable::execSetPositionEnvelopeBiasDepth
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPositionEnvelopeBiasInvert @ 14f114a30

void __cdecl
USynthComponentMonoWaveTable::execSetPositionEnvelopeBiasInvert
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPositionEnvelopeDecayTime @ 14f114b00

void __cdecl
USynthComponentMonoWaveTable::execSetPositionEnvelopeDecayTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPositionEnvelopeDepth @ 14f114bc0

void __cdecl
USynthComponentMonoWaveTable::execSetPositionEnvelopeDepth
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPositionEnvelopeInvert @ 14f114c80

void __cdecl
USynthComponentMonoWaveTable::execSetPositionEnvelopeInvert
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPositionEnvelopeReleaseTime @ 14f114d50

void __cdecl
USynthComponentMonoWaveTable::execSetPositionEnvelopeReleaseTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetPositionEnvelopeSustainGain @ 14f114e10

void __cdecl
USynthComponentMonoWaveTable::execSetPositionEnvelopeSustainGain
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetSustainPedalState @ 14f117d00

void __cdecl
USynthComponentMonoWaveTable::execSetSustainPedalState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_18 = local_res8[0] != 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetSustainPedalState'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// execSetWaveTablePosition @ 14f1183d0

void __cdecl
USynthComponentMonoWaveTable::execSetWaveTablePosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  UObject *local_20;
  undefined4 local_18;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_18 = local_res8[0];
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USynthComponentMonoWaveTable::SetWaveTablePosition'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = param_1;
  USynthComponent::SynthCommand
            ((USynthComponent *)param_1,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

