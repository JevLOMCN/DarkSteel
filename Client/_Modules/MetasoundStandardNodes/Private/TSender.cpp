// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 76

// PushLiteral @ 14afcf220

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Audio::EBiquadFilter::Type,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::IsParsable(param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Audio::EBiquadFilter::Type,0> *)CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14afcf2f0

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14afd1b60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::EBandSplitterFilterOrder,1> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::EBandSplitterFilterOrder,1> *)
                    CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14afd1c30

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_> @ 14aff5fe0

TSender<Metasound::TEnum<Metasound::EBandSplitterFilterOrder,1>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::
TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>()
  ;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4EBandSplitterFilterOrder_Metasound___00_Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_> @ 14aff61c0

TSender<Metasound::TEnum<Audio::EBiquadFilter::Type,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::
TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4Type_EBiquadFilter_Audio___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// Push @ 14b02ebd0

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>::Push
          (void *this,TEnum<Metasound::EBandSplitterFilterOrder,1> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::EBandSplitterFilterOrder,1> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(EBandSplitterFilterOrder *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,16>
              ::Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,16>
              ::Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b02ed34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b02ed50

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>::Push
          (void *this,TEnum<Audio::EBiquadFilter::Type,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Audio::EBiquadFilter::Type,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(Type *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) = param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b02eeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// PushLiteral @ 14b03fb60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Audio::EDynamicFilterType,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::IsParsable(param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Audio::EDynamicFilterType,0> *)CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b03fc30

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_> @ 14b051340

TSender<Metasound::TEnum<Audio::EDynamicFilterType,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::
TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4EDynamicFilterType_Audio___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// Push @ 14b079a70

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>::Push
          (void *this,TEnum<Audio::EDynamicFilterType,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Audio::EDynamicFilterType,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(EDynamicFilterType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b079bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// PushLiteral @ 14b082fe0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::ELowFrequencyNoiseInterpType,2> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
          IsParsable(param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                  ();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::ELowFrequencyNoiseInterpType,2> *)
                    CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b0830b0

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b086a10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::EKneeMode,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::IsParsable(param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::EKneeMode,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EKneeMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::EKneeMode,0> *)CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b086ae0

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b089850

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Audio::Grain::EEnvelope,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::IsParsable(param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Audio::Grain::EEnvelope,0> *)CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b089970

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b08d320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::EEnvelopePeakMode,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::EEnvelopePeakMode,0> *)CONCAT44(extraout_var,TVar2.EnumValue))
  ;
  return bVar1;
}

// GetPayloadID @ 14b08d3f0

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_> @ 14b0b11a0

TSender<Metasound::TEnum<Audio::Grain::EEnvelope,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::
TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4EEnvelope_Grain_Audio___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_> @ 14b0b1380

TSender<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::
TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_> @ 14b0b1560

TSender<Metasound::TEnum<Metasound::EKneeMode,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::
TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4EKneeMode_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_> @ 14b0b1740

TSender<Metasound::TEnum<Metasound::ELowFrequencyNoiseInterpType,2>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::
TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>
                     ();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &
       ___7__TSender_V__TEnum_W4ELowFrequencyNoiseInterpType_Metasound___01_Metasound___Metasound__6B_
  ;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// Push @ 14b0e4440

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>::Push
          (void *this,TEnum<Audio::Grain::EEnvelope,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Audio::Grain::EEnvelope,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(EEnvelope *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) = param_1->EnumValue
    ;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b0e45a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b0e45c0

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>::Push
          (void *this,TEnum<Metasound::EEnvelopePeakMode,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::EEnvelopePeakMode,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(EEnvelopePeakMode *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,16>
              ::Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,16>
              ::Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b0e4724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b0e4740

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>::Push
          (void *this,TEnum<Metasound::EKneeMode,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::EKneeMode,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(EKneeMode *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) = param_1->EnumValue
    ;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EKneeMode,0>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EKneeMode,0>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b0e48a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b0e48c0

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>::Push
          (void *this,TEnum<Metasound::ELowFrequencyNoiseInterpType,2> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::ELowFrequencyNoiseInterpType,2> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(ELowFrequencyNoiseInterpType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,16>
              ::Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,16>
              ::Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b0e4a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// PushLiteral @ 14b0eaff0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::ESquareGenerationType,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::ESquareGenerationType,0> *)
                    CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b0eb100

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b0f0c30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::ESawGenerationType,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::ESawGenerationType,0> *)CONCAT44(extraout_var,TVar2.EnumValue)
              );
  return bVar1;
}

// GetPayloadID @ 14b0f0d00

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b0f8270

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::ESineGenerationType,3> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::ESineGenerationType,3> *)
                    CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b0f83d0

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b0fc5c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::ENoiseType,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::IsParsable(param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::ENoiseType,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ENoiseType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::ENoiseType,0> *)CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b0fc6c0

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b105d70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Audio::EMusicalScale::Scale,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::IsParsable(param_1)
  ;
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Audio::EMusicalScale::Scale,0> *)CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b105e40

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b10c880

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::ELfoWaveshapeType,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::ELfoWaveshapeType,0> *)CONCAT44(extraout_var,TVar2.EnumValue))
  ;
  return bVar1;
}

// GetPayloadID @ 14b10c970

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b111920

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::ETriangleGenerationType,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::ETriangleGenerationType,0> *)
                    CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b111a40

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_> @ 14b13bbc0

TSender<Metasound::TEnum<Metasound::ELfoWaveshapeType,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::
TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4ELfoWaveshapeType_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_> @ 14b13bda0

TSender<Metasound::TEnum<Metasound::ENoiseType,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::
TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4ENoiseType_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_> @ 14b13bf80

TSender<Metasound::TEnum<Metasound::ESawGenerationType,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::
TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4ESawGenerationType_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_> @ 14b13c160

TSender<Metasound::TEnum<Metasound::ESineGenerationType,3>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::
TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4ESineGenerationType_Metasound___02_Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_> @ 14b13c340

TSender<Metasound::TEnum<Metasound::ESquareGenerationType,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::
TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4ESquareGenerationType_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_> @ 14b13c520

TSender<Metasound::TEnum<Metasound::ETriangleGenerationType,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::
TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4ETriangleGenerationType_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_> @ 14b13c700

TSender<Metasound::TEnum<Audio::EMusicalScale::Scale,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::
TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4Scale_EMusicalScale_Audio___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// Push @ 14b1a33c0

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>::Push
          (void *this,TEnum<Metasound::ELfoWaveshapeType,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::ELfoWaveshapeType,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(ELfoWaveshapeType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,16>
              ::Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,16>
              ::Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b1a3524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b1a3540

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>::Push
          (void *this,TEnum<Metasound::ENoiseType,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::ENoiseType,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(ENoiseType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ENoiseType,0>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ENoiseType,0>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b1a36a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b1a36c0

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>::Push
          (void *this,TEnum<Metasound::ESawGenerationType,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::ESawGenerationType,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(ESawGenerationType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,16>
              ::Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,16>
              ::Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b1a3824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b1a3840

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>::Push
          (void *this,TEnum<Metasound::ESineGenerationType,3> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::ESineGenerationType,3> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(ESineGenerationType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b1a39a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b1a39c0

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>::Push
          (void *this,TEnum<Metasound::ESquareGenerationType,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::ESquareGenerationType,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(ESquareGenerationType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b1a3b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b1a3b40

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>::Push
          (void *this,TEnum<Metasound::ETriangleGenerationType,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::ETriangleGenerationType,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(ETriangleGenerationType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b1a3ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b1a3cc0

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>::Push
          (void *this,TEnum<Audio::EMusicalScale::Scale,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Audio::EMusicalScale::Scale,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(Scale *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) = param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b1a3e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// PushLiteral @ 14b1b2c10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::EPanningLaw,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::IsParsable(param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::EPanningLaw,0> *)CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b1b2ce0

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b1b3e30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::EStereoDelayMode,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::IsParsable(param_1)
  ;
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::EStereoDelayMode,0> *)CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b1b3f00

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_> @ 14b1cc970

TSender<Metasound::TEnum<Metasound::EPanningLaw,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::
TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4EPanningLaw_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_> @ 14b1ccb50

TSender<Metasound::TEnum<Metasound::EStereoDelayMode,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::
TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4EStereoDelayMode_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// Push @ 14b1e9590

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>::Push
          (void *this,TEnum<Metasound::EPanningLaw,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::EPanningLaw,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(EPanningLaw *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b1e96f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b1e9710

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>::Push
          (void *this,TEnum<Metasound::EStereoDelayMode,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::EStereoDelayMode,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(EStereoDelayMode *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b1e9874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// PushLiteral @ 14b1ec450

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Audio::EWaveShaperType,1> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::IsParsable(param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Audio::EWaveShaperType,1> *)CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b1ec670

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::GetPayloadID(void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b1f2950

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::EBufferTriggerType,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::EBufferTriggerType,0> *)CONCAT44(extraout_var,TVar2.EnumValue)
              );
  return bVar1;
}

// GetPayloadID @ 14b1f2a20

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// PushLiteral @ 14b1f7990

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::PushLiteral
          (void *this,FLiteral *param_1)

{
  bool bVar1;
  TEnum<Metasound::ETriggerComparisonType,0> TVar2;
  undefined4 extraout_var;
  FOperatorSettings local_res18;
  FString local_18;
  
  bVar1 = TLiteralTraits<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::IsParsable
                    (param_1);
  if (!bVar1) {
    if (*(char *)((longlong)this + 0x20) != '\0') {
      if (1 < (byte)LogMetaSound._0_1_) {
        ::LexToString(&local_18,param_1);
        GetMetasoundDataTypeString<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
        UE::Logging::Private::BasicLog<2>
                  (&`public:_virtual_bool___cdecl_Metasound::TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_>::PushLiteral(Metasound::FLiteral_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)((longlong)this + 0x20) = 0;
    }
    return false;
  }
  TVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,Metasound::DataFactoryPrivate::TDataTypeCreator<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>
          ::CreateExplicitArgs(&local_res18,(FLiteral *)((longlong)this + 0x58));
  bVar1 = Push(this,(TEnum<Metasound::ETriggerComparisonType,0> *)
                    CONCAT44(extraout_var,TVar2.EnumValue));
  return bVar1;
}

// GetPayloadID @ 14b1f7a60

long64 __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::GetPayloadID
          (void *this)

{
  return *(long64 *)((longlong)this + 0x48);
}

// TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_> @ 14b22eb80

TSender<Metasound::TEnum<Metasound::EBufferTriggerType,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::
TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4EBufferTriggerType_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_> @ 14b22ed60

TSender<Metasound::TEnum<Metasound::ETriggerComparisonType,0>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::
TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4ETriggerComparisonType_Metasound___0A__Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_> @ 14b22ef40

TSender<Metasound::TEnum<Audio::EWaveShaperType,1>_> * __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::
TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>
          (void *this,FSenderInitParams *param_1,TSharedPtr<Metasound::IDataChannel,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IDataChannel *pIVar5;
  FName FVar6;
  undefined8 uVar7;
  int iVar8;
  FName *pFVar9;
  
  pFVar9 = GetMetasoundDataTypeName<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>();
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar5 = param_2->Object;
  FVar6 = *pFVar9;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(undefined8 *)((longlong)this + 0x18) = 0;
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    *(FName *)((longlong)this + 8) = FVar6;
    *(undefined ***)this = &___7ISender_Metasound__6B_;
    *(IDataChannel **)((longlong)this + 0x10) = pIVar5;
    *(TReferenceControllerBase<1> **)((longlong)this + 0x18) = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  *(undefined1 *)((longlong)this + 0x20) = 1;
  *(undefined ***)this =
       &___7__TSender_V__TEnum_W4EWaveShaperType_Audio___00_Metasound___Metasound__6B_;
  piVar1 = (int *)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x28) = 0;
  piVar2 = (int *)((longlong)this + 0x34);
  *piVar1 = 0;
  *piVar2 = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 1;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  uVar7 = *(undefined8 *)&(param_1->OperatorSettings).ActualBlockRate;
  *(undefined8 *)((longlong)this + 0x58) = *(undefined8 *)&param_1->OperatorSettings;
  *(undefined8 *)((longlong)this + 0x60) = uVar7;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  *(float *)((longlong)this + 0x68) = param_1->DelayTimeInSeconds;
  *(undefined4 *)((longlong)this + 0x38) = 3;
  LOCK();
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)((longlong)this + 0x40) = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)this + 0x28),0,piVar2);
  }
  iVar3 = *(int *)((longlong)this + 0x38);
  iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar3,(ForAnyElementType *)((longlong)this + 0x28),piVar1,piVar2);
  memset((void *)(*(longlong *)((longlong)this + 0x28) + (longlong)iVar8 * 4),0,(longlong)iVar3 << 2
        );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// Push @ 14b289dc0

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>::Push
          (void *this,TEnum<Metasound::EBufferTriggerType,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::EBufferTriggerType,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(EBufferTriggerType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,16>
              ::Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,16>
              ::Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b289f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b289f40

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>::Push
          (void *this,TEnum<Metasound::ETriggerComparisonType,0> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Metasound::ETriggerComparisonType,0> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(ETriggerComparisonType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::
              TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,16>::
              Pop((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b28a0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

// Push @ 14b28a0c0

bool __thiscall
Metasound::TSender<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>::Push
          (void *this,TEnum<Audio::EWaveShaperType,1> *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TEnum<Audio::EWaveShaperType,1> TVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  undefined4 *puVar8;
  undefined4 extraout_var_00;
  uint uVar9;
  undefined8 local_28 [2];
  
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (~uVar9 + *(int *)((longlong)this + 0x38) != 0) {
    uVar9 = *(uint *)((longlong)this + 0x40);
    *(EWaveShaperType *)(*(longlong *)((longlong)this + 0x28) + (ulonglong)uVar9 * 4) =
         param_1->EnumValue;
    LOCK();
    *(uint *)((longlong)this + 0x40) = (uVar9 + 1) % *(uint *)((longlong)this + 0x38);
    UNLOCK();
  }
  uVar9 = *(int *)((longlong)this + 0x40) - *(int *)((longlong)this + 0x3c);
  if (*(int *)((longlong)this + 0x40) < *(int *)((longlong)this + 0x3c)) {
    uVar9 = uVar9 + *(int *)((longlong)this + 0x38);
  }
  if (*(uint *)((longlong)this + 0x6c) <= uVar9) {
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x10))();
    puVar1 = (undefined8 *)((longlong)this + 0x50);
    *(undefined8 *)((longlong)this + 0x48) = uVar7;
    if (*(longlong *)((longlong)this + 0x50) == 0) {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      puVar8 = ::operator_new(4);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = *(undefined4 *)CONCAT44(extraout_var,TVar6.EnumValue);
      }
      if (puVar1 != local_28) {
        pvVar2 = (void *)*puVar1;
        *puVar1 = puVar8;
        puVar8 = (undefined4 *)0x0;
        ::operator_delete(pvVar2,4);
      }
      ::operator_delete(puVar8,4);
    }
    else {
      TVar6 = Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,16>::Pop
                        ((void *)((longlong)this + 0x28));
      *(undefined4 *)*puVar1 = *(undefined4 *)CONCAT44(extraout_var_00,TVar6.EnumValue);
    }
    if (*(longlong *)((longlong)this + 0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00014b28a224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
                      (*(longlong **)((longlong)this + 0x10),this);
    return (bool)uVar5;
  }
  return true;
}

