// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 7

// StaticStruct @ 146327890

UScriptStruct * __cdecl FFieldObjectCommands::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFieldObjectCommands.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_FieldSystemEngine();
    Z_Registration_Info_UScriptStruct_FFieldObjectCommands.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFieldObjectCommands,(UObject *)pUVar1,
                         L"FieldObjectCommands");
  }
  return Z_Registration_Info_UScriptStruct_FFieldObjectCommands.OuterSingleton;
}

// operator= @ 14632bce0

FFieldObjectCommands * __thiscall
FFieldObjectCommands::operator=(FFieldObjectCommands *this,FFieldObjectCommands *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UFieldNodeBase>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UFieldSystemMetaData>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (this != param_1) {
    iVar4 = (param_1->TargetNames).ArrayNum;
    piVar1 = &(this->TargetNames).ArrayMax;
    pFVar5 = (param_1->TargetNames).AllocatorInstance.Data;
    (this->TargetNames).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,*piVar1,(ForAnyElementType *)this,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((this->TargetNames).AllocatorInstance.Data,pFVar5,(longlong)iVar4 << 3);
      }
    }
  }
  pTVar2 = &this->RootNodes;
  if (pTVar2 != &param_1->RootNodes) {
    iVar4 = (param_1->RootNodes).ArrayNum;
    piVar1 = &(this->RootNodes).ArrayMax;
    pFVar5 = (param_1->RootNodes).AllocatorInstance.Data;
    (this->RootNodes).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<TObjectPtr<UFieldNodeBase>,TObjectPtr<UFieldNodeBase>,int>
                ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UFieldNodeBase> *)pFVar5,iVar4);
    }
  }
  pTVar3 = &this->MetaDatas;
  if (pTVar3 != &param_1->MetaDatas) {
    iVar4 = (param_1->MetaDatas).ArrayNum;
    piVar1 = &(this->MetaDatas).ArrayMax;
    pFVar5 = (param_1->MetaDatas).AllocatorInstance.Data;
    (this->MetaDatas).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      ConstructItems<TObjectPtr<UFieldSystemMetaData>,TObjectPtr<UFieldSystemMetaData>,int>
                ((pTVar3->AllocatorInstance).Data,(TObjectPtr<UFieldSystemMetaData> *)pFVar5,iVar4);
    }
  }
  return this;
}

// AddFieldCommand @ 14632d090

void __thiscall
FFieldObjectCommands::AddFieldCommand
          (FFieldObjectCommands *this,FName *param_1,UFieldNodeBase *param_2,
          UFieldSystemMetaData *param_3)

{
  int *piVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UFieldNodeBase *local_18;
  UFieldSystemMetaData *local_10;
  
  pFVar2 = (FName *)(this->TargetNames).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->TargetNames).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->TargetNames).ArrayNum;
  piVar1 = &(this->TargetNames).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,piVar1);
  }
  (this->TargetNames).ArrayNum = iVar6 + 1;
  *(FName *)((this->TargetNames).AllocatorInstance.Data + (longlong)iVar6 * 8) = *param_1;
  local_18 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UFieldNodeBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  pFVar3 = (this->RootNodes).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar3 + (longlong)(this->RootNodes).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->RootNodes).ArrayNum;
  piVar1 = &(this->RootNodes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->RootNodes).AllocatorInstance,piVar1);
  }
  (this->RootNodes).ArrayNum = iVar6 + 1;
  *(UFieldNodeBase **)((this->RootNodes).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UFieldNodeBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18);
  }
  local_10 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_3 != (UFieldSystemMetaData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  pFVar3 = (this->MetaDatas).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_10) &&
     ((FScriptContainerElement *)&local_10 < pFVar3 + (longlong)(this->MetaDatas).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->MetaDatas).ArrayNum;
  piVar1 = &(this->MetaDatas).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->MetaDatas).AllocatorInstance,piVar1);
  }
  (this->MetaDatas).ArrayNum = iVar6 + 1;
  *(UFieldSystemMetaData **)((this->MetaDatas).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_10 != (UFieldSystemMetaData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_10);
  }
  return;
}

// CreateFieldCommand @ 14632e430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FFieldSystemCommand * __cdecl
FFieldObjectCommands::CreateFieldCommand
          (FFieldSystemCommand *__return_storage_ptr__,EFieldPhysicsType param_1,
          FFieldNodeBase *param_2)

{
  code *pcVar1;
  bool bVar2;
  FFieldSystemCommand *pFVar3;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [192];
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (param_2 == (FFieldNodeBase *)0x0) {
    FFieldSystemCommand::FFieldSystemCommand(__return_storage_ptr__);
  }
  else {
    FFieldSystemCommand::FFieldSystemCommand((FFieldSystemCommand *)local_e8,param_1,param_2);
    if (local_e8._88_4_ == Field_None) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3461585877837282326>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\FieldSystem\\Source\\FieldSystemEngine\\Public\\Field\\FieldSystemObjects.h"
                         ,0x3ea,"Command.PhysicsType != EFieldPhysicsType::Field_None");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FFieldSystemCommand *)(*pcVar1)();
        return pFVar3;
      }
    }
    UPhysicsFieldComponent::BuildCommandBounds((FFieldSystemCommand *)local_e8);
    FFieldSystemCommand::FFieldSystemCommand(__return_storage_ptr__,(FFieldSystemCommand *)local_e8)
    ;
    local_28 = 0;
    if ((void *)local_e8._184_8_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._184_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_e8 + 0x78);
    if ((FFieldNodeBase *)local_e8._8_8_ != (FFieldNodeBase *)0x0) {
      (**(code **)*(longlong *)local_e8._8_8_)(local_e8._8_8_,1);
    }
  }
  return __return_storage_ptr__;
}

// CreateFieldCommand @ 14632e520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FFieldSystemCommand * __cdecl
FFieldObjectCommands::CreateFieldCommand
          (FFieldSystemCommand *__return_storage_ptr__,EFieldPhysicsType param_1,
          UFieldNodeBase *param_2,UFieldSystemMetaData *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FFieldNodeBase *pFVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  FFieldSystemCommand *pFVar11;
  longlong lVar12;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [4];
  undefined4 local_154;
  TKeyInitializer<FFieldSystemMetaData::EMetaType_&&> local_150;
  TKeyInitializer<FFieldSystemMetaData::EMetaType_&&> local_148;
  TKeyInitializer<FFieldSystemMetaData::EMetaType_&&> local_140;
  void *local_138;
  undefined8 local_130;
  undefined4 *local_128;
  undefined4 *local_120;
  undefined4 *local_118 [2];
  undefined1 local_108 [192];
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (param_2 == (UFieldNodeBase *)0x0) {
    FFieldSystemCommand::FFieldSystemCommand(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  puVar10 = (undefined8 *)0x0;
  local_138 = (void *)0x0;
  local_130 = 0;
  pFVar8 = (FFieldNodeBase *)(**(code **)(*(longlong *)param_2 + 0x508))(param_2,&local_138);
  FFieldSystemCommand::FFieldSystemCommand((FFieldSystemCommand *)local_108,param_1,pFVar8);
  if ((FFieldNodeBase *)local_108._8_8_ == (FFieldNodeBase *)0x0) {
    local_158[0] = 0;
    bVar6 = `FFieldObjectCommands::CreateFieldCommand'::__l6::<lambda_1>::operator()(local_158);
    if (!bVar6) goto LAB_14632e75b;
  }
  if (param_3 != (UFieldSystemMetaData *)0x0) {
    iVar7 = (**(code **)(*(longlong *)param_3 + 0x4f8))(param_3);
    if (iVar7 == 1) {
      local_118[0] = (undefined4 *)((longlong)&local_148.Key + 4);
      local_148.Key._4_4_ = 1;
      TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_FFieldSystemMetaData::EMetaType_&&>_>
                (local_108 + 0x78,&local_140,(bool *)local_118);
      lVar12 = local_108._120_8_ + (longlong)(int)local_140.Key * 0x18;
      puVar9 = ::operator_new(0x10);
      if (puVar9 != (undefined8 *)0x0) {
        bVar1 = *(byte *)(param_3 + 1);
        *puVar9 = &___7FFieldSystemMetaDataProcessingResolution__6B_;
        *(uint *)(puVar9 + 1) = (uint)bVar1;
        puVar10 = puVar9;
      }
    }
    else if (iVar7 == 3) {
      local_120 = (undefined4 *)((longlong)&local_150.Key + 4);
      local_150.Key._4_4_ = 3;
      TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_FFieldSystemMetaData::EMetaType_&&>_>
                (local_108 + 0x78,&local_148,(bool *)&local_120);
      lVar12 = local_108._120_8_ + (longlong)(int)local_148.Key * 0x18;
      puVar9 = ::operator_new(0x10);
      if (puVar9 != (undefined8 *)0x0) {
        uVar4 = *(undefined4 *)(param_3 + 1);
        *puVar9 = &___7FFieldSystemMetaDataIteration__6B_;
        *(undefined4 *)(puVar9 + 1) = uVar4;
        puVar10 = puVar9;
      }
    }
    else {
      if (iVar7 != 5) goto LAB_14632e728;
      local_128 = &local_154;
      local_154 = 5;
      TSet<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>,TDefaultMapHashableKeyFuncs<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<enum_FFieldSystemMetaData::EMetaType_&&>_>
                (local_108 + 0x78,&local_150,(bool *)&local_128);
      lVar12 = local_108._120_8_ + (longlong)(int)local_150.Key * 0x18;
      puVar9 = ::operator_new(0x18);
      if (puVar9 != (undefined8 *)0x0) {
        bVar1 = param_3[1].field_0x2;
        bVar2 = param_3[1].field_0x1;
        bVar3 = *(byte *)(param_3 + 1);
        *puVar9 = &___7FFieldSystemMetaDataFilter__6B_;
        *(uint *)(puVar9 + 1) = (uint)bVar3;
        *(uint *)((longlong)puVar9 + 0xc) = (uint)bVar2;
        *(uint *)(puVar9 + 2) = (uint)bVar1;
        puVar10 = puVar9;
      }
    }
    puVar9 = *(undefined8 **)(lVar12 + 8);
    if ((puVar9 != puVar10) && (*(undefined8 **)(lVar12 + 8) = puVar10, puVar9 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar9)();
    }
  }
LAB_14632e728:
  if ((local_108._88_4_ == Field_None) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3461585877837282343>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\FieldSystem\\Source\\FieldSystemEngine\\Public\\Field\\FieldSystemObjects.h"
                         ,0x3d9,"Command.PhysicsType != EFieldPhysicsType::Field_None"), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FFieldSystemCommand *)(*pcVar5)();
    return pFVar11;
  }
LAB_14632e75b:
  UPhysicsFieldComponent::BuildCommandBounds((FFieldSystemCommand *)local_108);
  FFieldSystemCommand::FFieldSystemCommand(__return_storage_ptr__,(FFieldSystemCommand *)local_108);
  local_48 = 0;
  if ((void *)local_108._184_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._184_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_FFieldSystemMetaData::EMetaType,TUniquePtr<FFieldSystemMetaData,TDefaultDelete<FFieldSystemMetaData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_108 + 0x78);
  if ((FFieldNodeBase *)local_108._8_8_ != (FFieldNodeBase *)0x0) {
    (**(code **)*(longlong *)local_108._8_8_)(local_108._8_8_,1);
  }
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  return __return_storage_ptr__;
}

// ResetFieldCommands @ 1463336b0

void __thiscall FFieldObjectCommands::ResetFieldCommands(FFieldObjectCommands *this)

{
  (this->TargetNames).ArrayNum = 0;
  if ((this->TargetNames).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,&(this->TargetNames).ArrayMax);
  }
  (this->RootNodes).ArrayNum = 0;
  if ((this->RootNodes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RootNodes).AllocatorInstance,0,&(this->RootNodes).ArrayMax);
  }
  (this->MetaDatas).ArrayNum = 0;
  if ((this->MetaDatas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->MetaDatas).AllocatorInstance,0,&(this->MetaDatas).ArrayMax);
  }
  return;
}

// operator() @ 1504e9e40

bool __thiscall `FFieldObjectCommands::CreateFieldCommand'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3461585877837282361>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3461585877837282361>,
                       &`public:___cdecl_`public:_static_class_FFieldSystemCommand___cdecl_FFieldObjectCommands::CreateFieldCommand(EFieldPhysicsType,UFieldNodeBase*___ptr64,UFieldSystemMetaData*___ptr64)'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

