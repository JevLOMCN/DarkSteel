// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Transform @ 14ae8cac0

void __thiscall
Metasound::FTransformRegistrationEventsToClasses::Transform
          (FTransformRegistrationEventsToClasses *this,
          TVariant<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>
          *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FNodeClassRegistry *this_00;
  FNodeClassRegistry *pFVar4;
  undefined **local_d8;
  FGuid local_d0;
  FMetasoundFrontendClassMetadata local_c0;
  void *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong lStack_50;
  char local_48 [4];
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  longlong local_2c;
  
  local_d8 = &___7FMetasoundFrontendClass__6B_;
  local_d0 = FrontendInvalidID;
  FMetasoundFrontendClassMetadata::FMetasoundFrontendClassMetadata(&local_c0);
  bVar1 = param_1->TypeIndex;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  lStack_50 = 0;
  if ((4 < (ulonglong)bVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar1) == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2061296453371822269>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendQuerySteps.cpp"
                       ,0xbd,"InValue.IsType<FNodeRegistryTransaction>()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((param_1->TypeIndex != '\x01') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((char)param_1->_padding_ == '\0') {
      pFVar4 = Frontend::FNodeClassRegistry::LazySingleton;
      if ((Frontend::FNodeClassRegistry::LazySingleton == (FNodeClassRegistry *)0x0) &&
         (this_00 = ::operator_new(0x182b0), pFVar4 = (FNodeClassRegistry *)0x0,
         this_00 != (FNodeClassRegistry *)0x0)) {
        pFVar4 = Frontend::FNodeClassRegistry::FNodeClassRegistry(this_00);
      }
      Frontend::FNodeClassRegistry::LazySingleton = pFVar4;
      pFVar4 = Frontend::FNodeClassRegistry::LazySingleton;
      local_48[0] = *(char *)((longlong)&param_1->_padding_ + 4);
      local_34 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
      pcVar2 = *(code **)(*(longlong *)Frontend::FNodeClassRegistry::LazySingleton + 0x68);
      local_2c = param_1->_padding_;
      local_44 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
      uStack_3c = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
      if ((local_48[0] == '\x01') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InClassInfo.Type != EMetasoundFrontendClassType::Graph",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendRegistryKey.cpp"
                             ,0xb8,
                             L"Cannot create key from \'graph\' type. Likely meant to use FNodeClassRegistryKey ctor that is provided FMetasoundFrontendGraphClass"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*pcVar2)(pFVar4,local_48,&local_d8);
    }
  }
  bVar1 = param_1->TypeIndex;
  if ((4 < (ulonglong)bVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMetasoundFrontendVersion,Metasound::Frontend::FNodeClassRegistryTransaction,FMetasoundFrontendClass,Metasound::Frontend::FInterfaceRegistryTransaction,FMetasoundFrontendInterface>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])();
  param_1->_padding_ = (longlong)&___7FMetasoundFrontendClass__6B_;
  param_1->_padding_ = local_d0._0_8_;
  param_1->_padding_ = local_d0._8_8_;
  param_1->_padding_ = (longlong)local_c0.ClassName.Namespace;
  param_1->_padding_ = (longlong)local_c0.ClassName.Name;
  param_1->_padding_ = (longlong)local_c0.ClassName.Variant;
  param_1->_padding_ = (longlong)local_c0.Version;
  param_1->_padding_ = local_c0._32_8_;
  param_1->_padding_ = local_c0.ChangeID._4_8_;
  *(uint *)&param_1->_padding_ = local_c0.ChangeID.D;
  param_1->_padding_ = (longlong)local_88;
  *(undefined4 *)&param_1->_padding_ = (undefined4)local_80;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = local_80._4_4_;
  param_1->_padding_ = local_78;
  *(undefined4 *)&param_1->_padding_ = (undefined4)local_70;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = local_70._4_4_;
  param_1->_padding_ = local_68;
  *(undefined4 *)&param_1->_padding_ = (undefined4)local_60;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) = local_60._4_4_;
  param_1->_padding_ = local_58;
  param_1->_padding_ = lStack_50;
  param_1->TypeIndex = '\x02';
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  DestructItems<FMetasoundFrontendClassInput,int>((FMetasoundFrontendClassInput *)0x0,0);
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}

