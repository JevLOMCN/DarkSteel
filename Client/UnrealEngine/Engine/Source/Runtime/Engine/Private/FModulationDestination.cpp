// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// FModulationDestination @ 148692380

FModulationDestination * __thiscall
Audio::FModulationDestination::FModulationDestination
          (FModulationDestination *this,FModulationDestination *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  MakeShared<Audio::FModulationDestination::FModulationDestinationData,1>(&this->DestinationData);
  lpCriticalSection = &((param_1->DestinationData).Object)->HandleCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FModulationDestinationData::operator=
              ((this->DestinationData).Object,(param_1->DestinationData).Object);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FModulationDestination @ 1486923f0

FModulationDestination * __thiscall
Audio::FModulationDestination::FModulationDestination
          (FModulationDestination *this,FModulationDestination *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  MakeShared<Audio::FModulationDestination::FModulationDestinationData,1>(&this->DestinationData);
  lpCriticalSection = &((param_1->DestinationData).Object)->HandleCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FModulationDestinationData::operator=
              ((this->DestinationData).Object,(param_1->DestinationData).Object);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ~<lambda_1> @ 148698bf0

void __thiscall
`Audio::FModulationDestination::UpdateModulatorsInternal'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  DestructItems<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,int>
            (*(TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_> **)
              ((longlong)this + 0x20),*(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  plVar3 = *(longlong **)((longlong)this + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)this + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// operator= @ 14869c980

FModulationDestination * __thiscall
Audio::FModulationDestination::operator=
          (FModulationDestination *this,FModulationDestination *param_1)

{
  FModulationDestinationData::operator=
            ((this->DestinationData).Object,(param_1->DestinationData).Object);
  return this;
}

// operator= @ 14869c9b0

FModulationDestination * __thiscall
Audio::FModulationDestination::operator=
          (FModulationDestination *this,FModulationDestination *param_1)

{
  FModulationDestinationData::operator=
            ((this->DestinationData).Object,(param_1->DestinationData).Object);
  return this;
}

// operator() @ 14869e5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Audio::FModulationDestination::UpdateModulatorsInternal'::__l2::<lambda_1>::operator()(void *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 *puVar1;
  int iVar2;
  FModulationDestinationData *this_00;
  IAudioModulationManager *pIVar3;
  atomic<int> aVar4;
  undefined8 uVar5;
  atomic<int> aVar6;
  FModulatorHandle *pFVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_248 [32];
  undefined1 local_228 [8];
  undefined1 local_220 [24];
  undefined1 local_208 [32];
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  undefined1 local_1b8 [80];
  longlong local_168;
  longlong local_158 [3];
  longlong *local_140;
  longlong local_138;
  longlong local_128 [3];
  longlong *local_110;
  FModulatorHandle local_108;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_248;
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14869e609;
      }
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    this_00 = *(FModulationDestinationData **)this;
    if (this_00 != (FModulationDestinationData *)0x0) {
      local_220._8_8_ = *(longlong *)((longlong)this + 0x18);
      pTVar10 = (TReferenceControllerBase<1> *)local_220._8_8_;
      if ((TReferenceControllerBase<1> *)local_220._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = ((TReferenceControllerBase<1> *)local_220._8_8_)->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14869e677;
          }
          LOCK();
          aVar6 = ((TReferenceControllerBase<1> *)local_220._8_8_)->SharedReferenceCount;
          bVar12 = aVar4 == aVar6;
          if (bVar12) {
            ((TReferenceControllerBase<1> *)local_220._8_8_)->SharedReferenceCount =
                 (atomic<int>)((int)aVar4 + 1);
            aVar6 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar6;
        } while (!bVar12);
        pIVar3 = *(IAudioModulationManager **)((longlong)this + 0x10);
        if (pIVar3 != (IAudioModulationManager *)0x0) {
          puVar11 = *(undefined8 **)((longlong)this + 0x20);
          iVar2 = *(int *)((longlong)this + 0x28);
          local_208._0_8_ = 0;
          local_208._8_8_ = 0;
          local_1e8 = 0;
          local_1e0 = 0;
          puVar1 = puVar11 + iVar2;
          local_1d4 = 0;
          local_1c8 = (ForElementType<FSetElementId>)0x0;
          local_1c0 = 0;
          local_1dc = 0x80;
          local_1d8 = 0xffffffff;
          while( true ) {
            if (*(int *)((longlong)this + 0x28) != iVar2) {
              `TCheckedPointerIterator<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_228);
            }
            uVar5 = local_220._8_8_;
            if (puVar11 == puVar1) break;
            Audio::FModulationParameter::FModulationParameter
                      ((FModulationParameter *)local_1b8,&this_00->Parameter);
            pFVar7 = Audio::FModulatorHandle::FModulatorHandle
                               (&local_108,pIVar3,(IModulatorSettings *)*puVar11,
                                (FModulationParameter *)local_1b8);
            TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
            ::Emplace<Audio::FModulatorHandle>
                      ((TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
                        *)local_208,(FModulatorHandle *)local_220,(bool *)pFVar7);
            Audio::FModulatorHandle::~FModulatorHandle(&local_108);
            if (local_138 != 0) {
              plVar8 = local_128;
              if (local_110 != (longlong *)0x0) {
                plVar8 = local_110;
              }
              (**(code **)(*plVar8 + 0x10))();
            }
            if (local_168 != 0) {
              plVar8 = local_158;
              if (local_140 != (longlong *)0x0) {
                plVar8 = local_140;
              }
              (**(code **)(*plVar8 + 0x10))();
            }
            if (local_1b8._32_8_ != 0) {
              plVar8 = (longlong *)(local_1b8 + 0x30);
              if ((longlong *)local_1b8._72_8_ != (longlong *)0x0) {
                plVar8 = (longlong *)local_1b8._72_8_;
              }
              (**(code **)(*plVar8 + 0x10))();
            }
            puVar11 = puVar11 + 1;
          }
          lpCriticalSection = &this_00->HandleCritSection;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
          ::operator=(&this_00->Handles,
                      (TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
                       *)local_208);
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          local_1c0 = 0;
          if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_1c8);
          }
          TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_208);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)uVar5);
          goto LAB_14869e609;
        }
      }
LAB_14869e677:
      Audio::FModulationDestination::FModulationDestinationData::ResetHandles(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
LAB_14869e609:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// ClearModulators @ 1486a8900

void __thiscall Audio::FModulationDestination::ClearModulators(FModulationDestination *this)

{
  FModulationDestinationData::ResetHandles((this->DestinationData).Object);
  return;
}

// Init @ 1486cba90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FModulationDestination::Init
          (FModulationDestination *this,uint param_1,FName param_2,bool param_3,bool param_4)

{
  FModulationDestinationData *pFVar1;
  FModulationParameter *pFVar2;
  IAudioModulationFactory *pIVar3;
  FName local_res18 [2];
  FString local_18;
  
  ((this->DestinationData).Object)->DeviceId = param_1;
  ((this->DestinationData).Object)->bIsBuffered = param_3;
  ((this->DestinationData).Object)->bValueNormalized = param_4;
  pFVar1 = (this->DestinationData).Object;
  (pFVar1->OutputBuffer).ArrayNum = 0;
  local_res18[0] = param_2;
  if ((pFVar1->OutputBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(pFVar1->OutputBuffer).AllocatorInstance,0,&(pFVar1->OutputBuffer).ArrayMax);
  }
  pFVar2 = GetModulationParameterPtr(local_res18[0]);
  if (pFVar2 == (FModulationParameter *)0x0) {
    if (2 < (byte)LogAudio._0_1_) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar3 = AudioPluginUtilities::GetDesiredModulationPlugin();
        bEnabled = pIVar3 != (IAudioModulationFactory *)0x0;
        _Init_thread_footer(&::_TSS0);
      }
      if (bEnabled != false) {
        ::FName::ToString(local_res18,&local_18);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar2 = GetDefaultModulationParameter();
  }
  FModulationParameter::operator=(&((this->DestinationData).Object)->Parameter,pFVar2);
  FModulationDestinationData::ResetHandles((this->DestinationData).Object);
  return;
}

// Init @ 1486cbbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FModulationDestination::Init
          (FModulationDestination *this,uint param_1,bool param_2,bool param_3)

{
  FModulationDestinationData *pFVar1;
  FModulationParameter *pFVar2;
  IAudioModulationFactory *pIVar3;
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  ((this->DestinationData).Object)->DeviceId = param_1;
  ((this->DestinationData).Object)->bIsBuffered = param_2;
  ((this->DestinationData).Object)->bValueNormalized = param_3;
  pFVar1 = (this->DestinationData).Object;
  (pFVar1->OutputBuffer).ArrayNum = 0;
  if ((pFVar1->OutputBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(pFVar1->OutputBuffer).AllocatorInstance,0,&(pFVar1->OutputBuffer).ArrayMax);
  }
  pFVar2 = GetModulationParameterPtr(local_res8[0]);
  if (pFVar2 == (FModulationParameter *)0x0) {
    if (2 < (byte)LogAudio._0_1_) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar3 = AudioPluginUtilities::GetDesiredModulationPlugin();
        bEnabled = pIVar3 != (IAudioModulationFactory *)0x0;
        _Init_thread_footer(&::_TSS0);
      }
      if (bEnabled != false) {
        ::FName::ToString(local_res8,&local_18);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar2 = GetDefaultModulationParameter();
  }
  FModulationParameter::operator=(&((this->DestinationData).Object)->Parameter,pFVar2);
  FModulationDestinationData::ResetHandles((this->DestinationData).Object);
  return;
}

// IsActive @ 1486d0e40

bool __thiscall Audio::FModulationDestination::IsActive(FModulationDestination *this)

{
  bool bVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  <lambda_1> local_res8;
  
  lpCriticalSection = &((this->DestinationData).Object)->HandleCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = Algo::
            NoneOf<TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>,_Audio::FModulationDestination::IsActive_::__l2::<lambda_1>_>
                      (&((this->DestinationData).Object)->Handles,local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ProcessControl @ 1486e2650

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
Audio::FModulationDestination::ProcessControl
          (FModulationDestination *this,float param_1,int param_2)

{
  float *pfVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  FModulationDestinationData *pFVar6;
  code *pcVar7;
  longlong *plVar8;
  FModulationDestinationData *pFVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  ForElementType<unsigned_int> FVar12;
  TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
  *pTVar13;
  TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
  *pTVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar22;
  FModulatorHandle *this_00;
  ForElementType<unsigned_int> FVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 local_res20 [8];
  uint local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168 [2];
  float local_160;
  ForElementType<unsigned_int> local_158;
  TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
  *local_118;
  TSet<Audio::FModulatorHandle,DefaultKeyFuncs<Audio::FModulatorHandle,0>,FDefaultSetAllocator>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FScriptContainerElement *local_d8;
  uint uStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88 [5];
  
  pFVar6 = (this->DestinationData).Object;
  pfVar1 = &pFVar6->ValueTarget;
  pFVar6->bHasProcessed = true;
  local_174 = (pFVar6->Parameter).DefaultValue;
  fVar30 = *pfVar1;
  if ((pFVar6->Parameter).bRequiresConversion != false) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(pFVar6->Parameter).NormalizedFunction);
    pcVar7 = *(code **)&(pFVar6->Parameter).NormalizedFunction;
    plVar8 = *(longlong **)&(pFVar6->Parameter).NormalizedFunction.field_0x28;
    plVar20 = (longlong *)&(pFVar6->Parameter).NormalizedFunction.field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar20 = plVar8;
    }
    uVar18 = (**(code **)(*plVar20 + 8))();
    (*pcVar7)(uVar18,&local_174);
  }
  lpCriticalSection = &((this->DestinationData).Object)->HandleCritSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar9 = (this->DestinationData).Object;
  iStack_148 = 0;
  local_158 = (ForElementType<unsigned_int>)&(pFVar9->Handles).Elements.field_0x10;
  local_130 = 0;
  uStack_144 = 1;
  local_118 = &pFVar9->Handles;
  iVar22 = *(int *)&(pFVar9->Handles).Elements.field_0x28;
  iVar21 = 0;
  iStack_134 = 0;
  if (iVar22 != 0) {
    puVar24 = *(uint **)&(pFVar9->Handles).Elements.field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)local_158;
    }
    uVar26 = *puVar24;
    while (uVar26 == 0) {
      lVar19 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      if ((int)(iVar22 + -1 + (iVar22 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) {
        iVar21 = *(int *)&(pFVar9->Handles).Elements.field_0x28;
        iStack_134 = iVar22;
        goto LAB_1486e27aa;
      }
      uVar26 = (puVar24 + 1)[lVar19];
    }
    iVar21 = *(int *)&(pFVar9->Handles).Elements.field_0x28;
    uStack_144 = -uVar26 & uVar26;
    uVar27 = (ulonglong)uStack_144 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_120 = (int)lVar19;
    iStack_134 = local_120 + -1 + local_130;
    if (iVar21 < iStack_134) {
      iStack_134 = iVar22;
    }
  }
LAB_1486e27aa:
  local_150 = &pFVar9->Handles;
  iStack_128 = *(int *)&(pFVar9->Handles).Elements.field_0x8 -
               *(int *)&(pFVar9->Handles).Elements.field_0x34;
  local_178 = *(uint *)&(pFVar9->Handles).Elements.field_0x28;
  uStack_138 = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uStack_144,iStack_148);
  uVar26 = local_178 & 0xffffffe0;
  TStack_108.CurrentBitIndex = iStack_134;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)local_178 >> 5;
  TStack_108._28_4_ = iStack_134;
  TStack_108.BaseBitIndex = local_130;
  uStack_e8 = CONCAT44(uStack_124,iStack_128);
  local_140 = (undefined1 *)local_158;
  iStack_12c = iStack_134;
  local_110 = local_150;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_158;
  if ((((int)local_178 < 0) || (iVar21 < (int)local_178)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    uVar16 = (*pcVar7)();
    return (bool)uVar16;
  }
  pTVar13 = local_118;
  FVar12 = local_158;
  fVar31 = __real_3f800000;
  uVar17 = *(int *)((longlong)local_158 + 0x18);
  if (local_178 != uVar17) {
    FVar23 = *(ForElementType<unsigned_int> *)((longlong)local_158 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_158 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar23 = local_158;
    }
    uVar25 = -1 << ((byte)local_178 & 0x1f) & *(uint *)((longlong)FVar23 + (longlong)iVar22 * 4);
    while (uVar25 == 0) {
      lVar19 = (longlong)iVar22;
      uVar26 = uVar26 + 0x20;
      iVar22 = iVar22 + 1;
      local_178 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_1486e28e0;
      uVar25 = *(uint *)((undefined1 *)((longlong)FVar23 + 4) + lVar19 * 4);
    }
    uVar27 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_11c = (int)lVar19;
    local_178 = local_11c + -1 + uVar26;
    if ((int)uVar17 < (int)local_178) {
      local_178 = uVar17;
    }
  }
LAB_1486e28e0:
  while( true ) {
    pTVar14 = local_110;
    if (*(int *)&(local_110->Elements).field_0x8 - *(int *)&(local_110->Elements).field_0x34 !=
        (int)uStack_e8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<Audio::FModulatorHandle>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_108.CurrentBitIndex == local_178) &&
        ((ForElementType<unsigned_int>)TStack_108.Array == FVar12)) && (pTVar14 == pTVar13)) break;
    this_00 = (FModulatorHandle *)
              (*(longlong *)&pTVar14->Elements + (longlong)TStack_108.CurrentBitIndex * 0xe0);
    bVar15 = FModulatorHandle::IsValid(this_00);
    if (bVar15) {
      local_170 = 1.0;
      FModulatorHandle::GetValue(this_00,&local_170);
      local_168[0] = local_170;
      UE::Core::Private::Function::CheckCallable(*(void **)&(pFVar6->Parameter).MixFunction);
      plVar8 = *(longlong **)&(pFVar6->Parameter).MixFunction.field_0x28;
      pcVar7 = *(code **)&(pFVar6->Parameter).MixFunction;
      plVar20 = (longlong *)&(pFVar6->Parameter).MixFunction.field_0x10;
      if (plVar8 != (longlong *)0x0) {
        plVar20 = plVar8;
      }
      uVar18 = (**(code **)(*plVar20 + 8))();
      (*pcVar7)(uVar18,&local_174,local_168);
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  pTVar2 = &pFVar6->OutputBuffer;
  local_16c = param_1;
  if ((pFVar6->Parameter).bRequiresConversion != false) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(pFVar6->Parameter).NormalizedFunction);
    pcVar7 = *(code **)&(pFVar6->Parameter).NormalizedFunction;
    plVar8 = *(longlong **)&(pFVar6->Parameter).NormalizedFunction.field_0x28;
    plVar20 = (longlong *)&(pFVar6->Parameter).NormalizedFunction.field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar20 = plVar8;
    }
    uVar18 = (**(code **)(*plVar20 + 8))();
    (*pcVar7)(uVar18,&local_16c);
  }
  local_160 = local_16c;
  UE::Core::Private::Function::CheckCallable(*(void **)&(pFVar6->Parameter).MixFunction);
  pcVar7 = *(code **)&(pFVar6->Parameter).MixFunction;
  plVar8 = *(longlong **)&(pFVar6->Parameter).MixFunction.field_0x28;
  plVar20 = (longlong *)&(pFVar6->Parameter).MixFunction.field_0x10;
  if (plVar8 != (longlong *)0x0) {
    plVar20 = plVar8;
  }
  uVar18 = (**(code **)(*plVar20 + 8))();
  (*pcVar7)(uVar18,&local_174);
  *pfVar1 = local_174;
  if (((pFVar6->Parameter).bRequiresConversion != false) &&
     (((this->DestinationData).Object)->bValueNormalized == false)) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(pFVar6->Parameter).UnitFunction);
    pcVar7 = *(code **)&(pFVar6->Parameter).UnitFunction;
    plVar8 = *(longlong **)&(pFVar6->Parameter).UnitFunction.field_0x28;
    plVar20 = (longlong *)&(pFVar6->Parameter).UnitFunction.field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar20 = plVar8;
    }
    uVar18 = (**(code **)(*plVar20 + 8))();
    (*pcVar7)(uVar18,pfVar1);
  }
  uVar27 = 0;
  if (((this->DestinationData).Object)->bIsBuffered != false) {
    piVar3 = &(pFVar6->OutputBuffer).ArrayNum;
    if (*piVar3 != param_2) {
      piVar4 = &(pFVar6->OutputBuffer).ArrayMax;
      *piVar3 = 0;
      if ((pFVar6->OutputBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&pTVar2->AllocatorInstance,0,piVar4);
      }
      iVar22 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                         (4,4,param_2,&pTVar2->AllocatorInstance,piVar3,piVar4);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar22 * 4,0,(longlong)param_2 << 2);
    }
  }
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar11 = __real_322bcc77;
  uVar26 = (pFVar6->OutputBuffer).ArrayNum;
  if (uVar26 != 0) {
    fVar5 = *pfVar1;
    fVar29 = (float)((uint)(fVar30 - fVar5) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    uVar25 = uVar26 & 0x80000003;
    if ((int)uVar25 < 0) {
      uVar25 = (uVar25 - 1 | 0xfffffffc) + 1;
    }
    if (uVar25 == 0) {
      pFVar10 = (pTVar2->AllocatorInstance).Data;
      if (__real_322bcc77 < fVar29) {
        local_c8 = pFVar10;
        if (((int)uVar26 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          uVar16 = (*pcVar7)();
          return (bool)uVar16;
        }
        local_98._12_4_ = uStack_bc;
        local_98.ArrayNum = uVar26;
        local_98.DataPtr = (float *)local_c8;
        uStack_c0 = uVar26;
        ArraySetToConstantInplace(&local_98,fVar31);
        local_b8 = (pTVar2->AllocatorInstance).Data;
        iStack_b0 = (pFVar6->OutputBuffer).ArrayNum;
        fVar31 = *pfVar1;
        if ((iStack_b0 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          uVar16 = (*pcVar7)();
          return (bool)uVar16;
        }
        local_88[0]._12_4_ = uStack_ac;
        local_88[0].ArrayNum = iStack_b0;
        local_88[0].DataPtr = (float *)local_b8;
        ArrayFade(local_88,fVar30,fVar31);
        fVar30 = (float)((uint)(fVar30 - *pfVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      }
      else {
        local_d8 = pFVar10;
        if (((int)uVar26 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          uVar16 = (*pcVar7)();
          return (bool)uVar16;
        }
        local_a8._12_4_ = uStack_cc;
        local_a8.ArrayNum = uVar26;
        local_a8.DataPtr = (float *)local_d8;
        uStack_d0 = uVar26;
        ArraySetToConstantInplace(&local_a8,fVar5);
        fVar30 = (float)((uint)(fVar30 - *pfVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      }
      goto LAB_1486e2d61;
    }
    if (__real_322bcc77 < fVar29) {
      fVar29 = (float)(int)uVar26;
      uVar28 = uVar27;
      fVar31 = fVar30;
      if (0 < (int)uVar26) {
        do {
          uVar25 = (uint)uVar28;
          uVar17 = 0;
          if ((int)uVar25 < (int)uVar26) {
            uVar17 = ~uVar25 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar7 = (code *)swi(3);
            uVar16 = (*pcVar7)();
            return (bool)uVar16;
          }
          *(float *)((pTVar2->AllocatorInstance).Data + uVar27) = fVar31;
          uVar27 = uVar27 + 4;
          uVar26 = (pFVar6->OutputBuffer).ArrayNum;
          uVar28 = (ulonglong)(uVar25 + 1);
          fVar31 = fVar31 + (fVar5 - fVar30) / fVar29;
        } while ((int)(uVar25 + 1) < (int)uVar26);
        fVar30 = (float)((uint)(fVar30 - *pfVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff);
        goto LAB_1486e2d61;
      }
    }
    else {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
      piVar3 = &(pFVar6->OutputBuffer).ArrayMax;
      (pFVar6->OutputBuffer).ArrayNum = 0;
      if (*piVar3 != param_2) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,param_2,&pTVar2->AllocatorInstance,0,piVar3);
        uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      }
      if (0 < param_2) {
        uVar27 = (ulonglong)(uint)param_2;
        do {
          pFVar10 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar10 <= pfVar1) && (pfVar1 < pFVar10 + (longlong)*piVar3 * 4)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar7 = (code *)swi(3);
            uVar16 = (*pcVar7)();
            return (bool)uVar16;
          }
          iVar22 = (pFVar6->OutputBuffer).ArrayNum;
          if (iVar22 == *piVar3) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,piVar3);
          }
          (pFVar6->OutputBuffer).ArrayNum = iVar22 + 1;
          *(float *)((pTVar2->AllocatorInstance).Data + (longlong)iVar22 * 4) = *pfVar1;
          uVar27 = uVar27 - 1;
          uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        } while (uVar27 != 0);
      }
    }
  }
  fVar30 = (float)((uint)(fVar30 - *pfVar1) & uVar17);
LAB_1486e2d61:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return fVar11 < fVar30;
}

// UpdateModulator @ 1486f5bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Audio::FModulationDestination::UpdateModulator
          (FModulationDestination *this,USoundModulatorBase *param_1)

{
  undefined1 auStack_b8 [32];
  <lambda_1> local_98;
  undefined1 local_88 [8];
  USoundModulatorBase **local_80;
  USoundModulatorBase *local_78;
  USoundModulatorBase *local_70;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = (undefined1  [8])&local_78;
  local_80 = &local_70;
  local_78 = param_1;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&local_68,(initializer_list<USoundModulatorBase_const_*> *)local_88);
  local_88 = (undefined1  [8])0x0;
  local_80 = (USoundModulatorBase **)0x0;
  Algo::
  TransformIf<TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>,TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>_&,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_1>,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_2>_>
            (&local_68,
             (TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>
              *)local_88,local_98,(<lambda_2>)local_98);
  UpdateModulatorsInternal
            (this,(TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>
                   *)local_88);
  DestructItems<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,int>
            ((TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_> *)
             local_88,(int)local_80);
  if (local_88 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_88);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// UpdateModulators @ 1486f5cb0

void __thiscall
Audio::FModulationDestination::UpdateModulators
          (FModulationDestination *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  <lambda_1> local_res18;
  TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  Algo::
  TransformIf<TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>,TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>_&,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_1>,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_2>_>
            (param_1,&local_18,local_res18,(<lambda_2>)local_res18);
  UpdateModulatorsInternal(this,&local_18);
  DestructItems<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,int>
            ((TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_> *)
             local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// UpdateModulators @ 1486f5d20

void __thiscall
Audio::FModulationDestination::UpdateModulators
          (FModulationDestination *this,
          TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
          *param_1)

{
  <lambda_1> local_res18;
  TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  Algo::
  TransformIf<TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>,TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>_&,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_1>,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_2>_>
            (param_1,&local_18,local_res18,(<lambda_2>)local_res18);
  UpdateModulatorsInternal(this,&local_18);
  DestructItems<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,int>
            ((TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_> *)
             local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// UpdateModulators @ 1486f5d90

void __thiscall
Audio::FModulationDestination::UpdateModulators
          (FModulationDestination *this,
          TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
          *param_1)

{
  <lambda_1> local_res18;
  TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  Algo::
  TransformIf<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>_&,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_1>,_Audio::FModulationDestination::UpdateModulators_::__l2::<lambda_2>_>
            (param_1,&local_18,local_res18,(<lambda_2>)local_res18);
  UpdateModulatorsInternal(this,&local_18);
  DestructItems<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,int>
            ((TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_> *)
             local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// UpdateModulatorsInternal @ 1486f5e00

void __thiscall
Audio::FModulationDestination::UpdateModulatorsInternal
          (FModulationDestination *this,
          TArray<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  int iVar2;
  FModulationDestinationData *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  IAudioModulationManager *pIVar6;
  FScriptContainerElement *pFVar7;
  FAudioDeviceManager *this_00;
  FAudioDevice *pFVar8;
  code *local_58 [5];
  undefined8 *local_30;
  
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    pFVar8 = FAudioDeviceManager::GetAudioDeviceRaw
                       (this_00,((this->DestinationData).Object)->DeviceId);
    if (((pFVar8 != (FAudioDevice *)0x0) && (pFVar8->bModulationInterfaceEnabled != '\0')) &&
       ((pFVar8->ModulationInterface).Object != (IAudioModulationManager *)0x0)) {
      pFVar3 = (this->DestinationData).Object;
      pTVar4 = (this->DestinationData).SharedReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar5 = (pFVar8->ModulationInterface).SharedReferenceCount.ReferenceController;
      pIVar6 = (pFVar8->ModulationInterface).Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar1 = param_1->ArrayNum;
      iVar2 = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
      local_58[0] = (code *)0x0;
      local_30 = FMemory::Malloc(0x38,8);
      local_30[1] = pFVar3;
      *local_30 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FModulationDestination::UpdateModulatorsInternal'::`2'::<lambda_1>,1,1>
                   ::_vftable_;
      local_30[3] = pIVar6;
      local_30[4] = pTVar5;
      local_30[5] = pFVar7;
      local_30[2] = pTVar4;
      *(int *)(local_30 + 6) = iVar1;
      *(int *)((longlong)local_30 + 0x34) = iVar2;
      if (local_30 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_58[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Audio::FModulationDestination::UpdateModulatorsInternal'::__l2::<lambda_1>,void>
                      ::Call;
      }
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)local_58,(TStatId)0x154f11430);
      DestructItems<TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_>,int>
                ((TUniquePtr<Audio::IModulatorSettings,TDefaultDelete<Audio::IModulatorSettings>_> *
                 )0x0,0);
    }
  }
  return;
}

