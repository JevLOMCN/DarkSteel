// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 6

// CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<TArray<float,TSizedDefaultAllocator<32>_>_>,0> @ 14afe2c80

TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::DataFactoryPrivate::
TDataFactoryInternal<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::
CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<TArray<float,TSizedDefaultAllocator<32>_>_>,0>
          (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  puVar3 = ::operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<TArray<float,TSizedDefaultAllocator<32>_>_>,TArray<float,TSizedDefaultAllocator<32>_>,0> @ 14afe2d40

TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __cdecl
Metasound::DataFactoryPrivate::
TDataFactoryInternal<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
::
CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<TArray<float,TSizedDefaultAllocator<32>_>_>,TArray<float,TSizedDefaultAllocator<32>_>,0>
          (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__,
          FOperatorSettings *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  puVar3 = ::operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TArray_MV__TSizedDefaultAllocator__0CA______0A__SharedPointerInternals__6B_
    ;
    puVar3[2] = 0;
    puVar3[2] = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar3 + 3) = param_2->ArrayNum;
    *(int *)((longlong)puVar3 + 0x1c) = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>,0> @ 14b0460d0

TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> * __cdecl
Metasound::DataFactoryPrivate::
TDataFactoryInternal<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,Metasound::TDataReadReference<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>
::
CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>,0>
          (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_>
           *__return_storage_ptr__,FOperatorSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___0A__SharedPointerInternals__6B_
    ;
    TEnum<enum_Metasound::EEnvelopePeakMode,0>::TEnum<enum_Metasound::EEnvelopePeakMode,0>
              (puVar3 + 2,Peak);
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::EEnvelopePeakMode,0>_> *)
                 (*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4EEnvelopePeakMode_Metasound___0A__Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::FTrigger>,0> @ 14b09e360

TDataReadReference<Metasound::FTrigger> * __cdecl
Metasound::DataFactoryPrivate::
TDataFactoryInternal<Metasound::FTrigger,Metasound::TDataReadReference<Metasound::FTrigger>_>::
CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::FTrigger>,0>
          (TDataReadReference<Metasound::FTrigger> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReadReference<Metasound::FTrigger> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  puVar3 = ::operator_new(0x30);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &
              ___7__TIntrusiveReferenceController_VFTrigger_Metasound___0A__SharedPointerInternals__6B_
    ;
    FTrigger::FTrigger((FTrigger *)(puVar3 + 2),param_1);
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<bool>,0> @ 14b09e430

TDataReadReference<bool> * __cdecl
Metasound::DataFactoryPrivate::TDataFactoryInternal<bool,Metasound::TDataReadReference<bool>_>::
CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<bool>,0>
          (TDataReadReference<bool> *__return_storage_ptr__,FOperatorSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  TDataReadReference<bool> *pTVar4;
  
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference__N_Metasound__6B_;
  puVar3 = ::operator_new(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &___7__TIntrusiveReferenceController__N_0A__SharedPointerInternals__6B_;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar3 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar3;
    if (puVar3 + 2 == (undefined8 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TDataReadReference<bool> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference__N_Metasound__6B_;
  return __return_storage_ptr__;
}

// CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::FAudioBuffer>,0> @ 14b294990

TDataReadReference<Metasound::FAudioBuffer> * __cdecl
Metasound::DataFactoryPrivate::
TDataFactoryInternal<Metasound::FAudioBuffer,Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
::
CreateNew<Metasound::DataFactoryPrivate::TExplicitArgsConstructorForwarding<Metasound::FAudioBuffer>,0>
          (TDataReadReference<Metasound::FAudioBuffer> *__return_storage_ptr__,
          FOperatorSettings *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar6;
  
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  puVar5 = ::operator_new(0x28);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0x10;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
    *puVar5 = &
              ___7__TIntrusiveReferenceController_VFAudioBuffer_Metasound___0A__SharedPointerInternals__6B_
    ;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    iVar1 = param_1->NumFramesPerBlock;
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar1,(ForAnyElementType *)(puVar5 + 2),(int *)(puVar5 + 3),
                       (int *)((longlong)puVar5 + 0x1c));
    memset((void *)(puVar5[2] + (longlong)iVar4 * 4),0,(longlong)iVar1 << 2);
    *(int *)(puVar5 + 4) = *(int *)(puVar5 + 3);
    *(undefined8 **)&__return_storage_ptr__->field_0x8 = puVar5 + 2;
    *(undefined8 **)&__return_storage_ptr__->field_0x10 = puVar5;
    if (puVar5 + 2 == (undefined8 *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

