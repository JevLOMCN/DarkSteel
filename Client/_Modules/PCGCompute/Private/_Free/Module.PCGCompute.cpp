// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGCompute
// Functions: 36

// ShaderTypeRegistration'' @ 141196210

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FPCGGrassMapUnpackerCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FPCGGrassMapUnpackerCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FPCGGrassMapUnpackerCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FPCGGrassMapUnpackerCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 141196260

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FPCGSceneWriterCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FPCGSceneWriterCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FPCGSceneWriterCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FPCGSceneWriterCS::ShaderTypeRegistration__);
  return;
}

// ShaderTypeRegistration'' @ 1411962b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl `dynamic_initializer_for_'FPCGTextureReadbackCS::ShaderTypeRegistration__(void)

{
  code *local_18;
  code *local_10;
  
  local_10 = FPCGTextureReadbackCS::GetStaticType;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::Call;
  FShaderTypeRegistration::FShaderTypeRegistration
            (&FPCGTextureReadbackCS::ShaderTypeRegistration,
             (TFunctionRef<FShaderType_&___cdecl(void)> *)&local_18);
  atexit(`dynamic_atexit_destructor_for_'FPCGTextureReadbackCS::ShaderTypeRegistration__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_PCGCompute'' @ 141196300

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_PCGCompute__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_PCGCompute,L"PCGCompute",(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0
             ,None);
  return;
}

// `dynamic_initializer_for_'LogPCGCompute'' @ 141196350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogPCGCompute__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogPCGCompute,L"LogPCGCompute",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogPCGCompute__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantPCGCompute'' @ 141196390

void __cdecl _dynamic_initializer_for__ModuleRegistrantPCGCompute__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "PCGCompute";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"PCGCompute",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FPCGComputeModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 1494b5100

void * __thiscall
FPCGComputeModule::_scalar_deleting_destructor_(FPCGComputeModule *this,uint param_1)

{
  *this = (FPCGComputeModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&> @ 1494b5140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::
operator()<_FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_2>_&>
          (void *this,<lambda_2> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong *plVar5;
  FTSTicker *this_00;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStackY_128 [32];
  TWeakPtr<FTSTicker::FElement,1> local_f8;
  FRHIGPUTextureReadback *local_e8;
  longlong local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  code *local_98 [2];
  longlong local_88 [3];
  longlong *local_70;
  FRHIGPUTextureReadback *local_68;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar4 = IsInActualRenderingThread();
  local_e8 = param_1->GPUTextureReadBackPtr;
  local_d8 = *(longlong *)&param_1->AsyncCallback;
  if (bVar4) {
    local_b0 = (longlong *)0x0;
    if (local_d8 != 0) {
      puVar3 = *(undefined8 **)&(param_1->AsyncCallback).field_0x28;
      puVar7 = (undefined8 *)&(param_1->AsyncCallback).field_0x10;
      if (puVar3 != (undefined8 *)0x0) {
        puVar7 = puVar3;
      }
      (**(code **)*puVar7)(puVar7,local_c8);
    }
    local_98[0] = (code *)0x0;
    plVar5 = FMemory::Malloc(0x60,0x10);
    local_70 = plVar5;
    *plVar5 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_&>'::`5'::<lambda_1>,1,1>
               ::_vftable_;
    plVar5[2] = (longlong)local_e8;
    plVar5[4] = local_d8;
    plVar5[9] = 0;
    if (local_d8 != 0) {
      plVar6 = local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar6 = local_b0;
      }
      (**(code **)*plVar6)();
    }
    if (plVar5 + 2 != (longlong *)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(ActualRenderingThread,(TUniqueFunction<void___cdecl(void)> *)local_98);
    if (local_d8 == 0) {
      return;
    }
    plVar5 = local_c8;
    plVar6 = local_b0;
  }
  else {
    local_30 = (longlong *)0x0;
    local_68 = local_e8;
    local_58 = local_d8;
    if (local_d8 != 0) {
      puVar3 = *(undefined8 **)&(param_1->AsyncCallback).field_0x28;
      puVar7 = (undefined8 *)&(param_1->AsyncCallback).field_0x10;
      if (puVar3 != (undefined8 *)0x0) {
        puVar7 = puVar3;
      }
      (**(code **)*puVar7)(puVar7,local_48);
    }
    this_00 = FTSTicker::GetCoreTicker();
    local_e8 = local_68;
    local_d8 = local_58;
    local_b0 = (longlong *)0x0;
    if (local_58 != 0) {
      plVar5 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar5 = local_30;
      }
      (**(code **)*plVar5)(plVar5,local_c8);
    }
    local_98[0] = (code *)0x0;
    plVar5 = FMemory::Malloc(0x60,0x10);
    local_70 = plVar5;
    *plVar5 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_&>'::`7'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
               ::_vftable_;
    plVar5[2] = (longlong)local_e8;
    plVar5[4] = local_d8;
    plVar5[9] = 0;
    if (local_d8 != 0) {
      plVar6 = local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar6 = local_b0;
      }
      (**(code **)*plVar6)();
    }
    if (plVar5 + 2 != (longlong *)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this_00,&local_f8,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCGCompute\\Private\\PCGTextureReadback.cpp(135)"
               ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_98);
    if (local_f8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_f8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_f8.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_98[0] != (code *)0x0) {
      plVar5 = local_88;
      if (local_70 != (longlong *)0x0) {
        plVar5 = local_70;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_d8 != 0) {
      plVar5 = local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar5 = local_b0;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_58 == 0) {
      return;
    }
    plVar5 = local_48;
    plVar6 = local_30;
  }
  if (plVar6 != (longlong *)0x0) {
    plVar5 = plVar6;
  }
  (**(code **)(*plVar5 + 0x10))();
  return;
}

// operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&> @ 1494b53e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::
operator()<_FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_2>_const_&>
          (void *this,<lambda_2> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong *plVar5;
  FTSTicker *this_00;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStackY_128 [32];
  TWeakPtr<FTSTicker::FElement,1> local_f8;
  FRHIGPUTextureReadback *local_e8;
  longlong local_d8;
  longlong local_c8 [3];
  longlong *local_b0;
  code *local_98 [2];
  longlong local_88 [3];
  longlong *local_70;
  FRHIGPUTextureReadback *local_68;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar4 = IsInActualRenderingThread();
  local_e8 = param_1->GPUTextureReadBackPtr;
  local_d8 = *(longlong *)&param_1->AsyncCallback;
  if (bVar4) {
    local_b0 = (longlong *)0x0;
    if (local_d8 != 0) {
      puVar3 = *(undefined8 **)&(param_1->AsyncCallback).field_0x28;
      puVar7 = (undefined8 *)&(param_1->AsyncCallback).field_0x10;
      if (puVar3 != (undefined8 *)0x0) {
        puVar7 = puVar3;
      }
      (**(code **)*puVar7)(puVar7,local_c8);
    }
    local_98[0] = (code *)0x0;
    plVar5 = FMemory::Malloc(0x60,0x10);
    local_70 = plVar5;
    *plVar5 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_const_&>'::`5'::<lambda_1>,1,1>
               ::_vftable_;
    plVar5[2] = (longlong)local_e8;
    plVar5[4] = local_d8;
    plVar5[9] = 0;
    if (local_d8 != 0) {
      plVar6 = local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar6 = local_b0;
      }
      (**(code **)*plVar6)();
    }
    if (plVar5 + 2 != (longlong *)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l5::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(ActualRenderingThread,(TUniqueFunction<void___cdecl(void)> *)local_98);
    if (local_d8 == 0) {
      return;
    }
    plVar5 = local_c8;
    plVar6 = local_b0;
  }
  else {
    local_30 = (longlong *)0x0;
    local_68 = local_e8;
    local_58 = local_d8;
    if (local_d8 != 0) {
      puVar3 = *(undefined8 **)&(param_1->AsyncCallback).field_0x28;
      puVar7 = (undefined8 *)&(param_1->AsyncCallback).field_0x10;
      if (puVar3 != (undefined8 *)0x0) {
        puVar7 = puVar3;
      }
      (**(code **)*puVar7)(puVar7,local_48);
    }
    this_00 = FTSTicker::GetCoreTicker();
    local_e8 = local_68;
    local_d8 = local_58;
    local_b0 = (longlong *)0x0;
    if (local_58 != 0) {
      plVar5 = local_48;
      if (local_30 != (longlong *)0x0) {
        plVar5 = local_30;
      }
      (**(code **)*plVar5)(plVar5,local_c8);
    }
    local_98[0] = (code *)0x0;
    plVar5 = FMemory::Malloc(0x60,0x10);
    local_70 = plVar5;
    *plVar5 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_const_&>'::`7'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
               ::_vftable_;
    plVar5[2] = (longlong)local_e8;
    plVar5[4] = local_d8;
    plVar5[9] = 0;
    if (local_d8 != 0) {
      plVar6 = local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar6 = local_b0;
      }
      (**(code **)*plVar6)();
    }
    if (plVar5 + 2 != (longlong *)0x0) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this_00,&local_f8,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCGCompute\\Private\\PCGTextureReadback.cpp(135)"
               ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_98);
    if (local_f8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_f8.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_f8.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_98[0] != (code *)0x0) {
      plVar5 = local_88;
      if (local_70 != (longlong *)0x0) {
        plVar5 = local_70;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_d8 != 0) {
      plVar5 = local_c8;
      if (local_b0 != (longlong *)0x0) {
        plVar5 = local_b0;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_58 == 0) {
      return;
    }
    plVar5 = local_48;
    plVar6 = local_30;
  }
  if (plVar6 != (longlong *)0x0) {
    plVar5 = plVar6;
  }
  (**(code **)(*plVar5 + 0x10))();
  return;
}

// operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&> @ 1494b5680

void __thiscall
`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>::
operator()<_FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_2>_const_&>
          (void *this,<lambda_2> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FLLMScope local_res8 [2];
  FName local_res18;
  int local_res20 [2];
  uint local_28 [2];
  int local_20 [2];
  void *local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCGCompute.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_PCGCompute.UniqueName;
  FMemScope::FMemScope(&local_10,&local_res18,true);
  lVar1 = *(longlong *)(*(longlong *)this + 8);
  if (lVar1 == 0) {
LAB_1494b5702:
    local_res20[0] = 0;
    local_res18 = (FName)((ulonglong)local_res18 & 0xffffffff00000000);
    local_18 = FRHIGPUTextureReadback::Lock
                         (*(FRHIGPUTextureReadback **)this,local_res20,(int *)&local_res18);
    local_28[0] = local_res18.ComparisonIndex.Value;
    local_20[0] = local_res20[0];
    UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
    pcVar2 = *(code **)((longlong)this + 0x10);
    plVar5 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar5 = *(longlong **)((longlong)this + 0x38);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,&local_18,local_20,local_28);
    FRHIGPUTextureReadback::Unlock(*(FRHIGPUTextureReadback **)this);
    if (*(FRHIGPUTextureReadback **)this != (FRHIGPUTextureReadback *)0x0) {
      FRHIGPUTextureReadback::_scalar_deleting_destructor_(*(FRHIGPUTextureReadback **)this,1);
    }
  }
  else {
    if (*(int *)(lVar1 + 0x18) == 0) {
      cVar3 = (**(code **)(**(longlong **)(*(longlong *)this + 8) + 0x20))();
      if (cVar3 != '\0') goto LAB_1494b5702;
    }
    __l2::<lambda_1>::
    operator()<_FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_2>_const_&>
              ((void *)((longlong)this + 0x40),param_1);
  }
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// BindForLegacyShaderParameters<FPCGGrassMapUnpackerCS::FParameters> @ 1494b57b0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<FPCGGrassMapUnpackerCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FPCGGrassMapUnpackerCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FPCGSceneWriterCS::FParameters> @ 1494b5810

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<FPCGSceneWriterCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FPCGSceneWriterCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// BindForLegacyShaderParameters<FPCGTextureReadbackCS::FParameters> @ 1494b5870

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
BindForLegacyShaderParameters<FPCGTextureReadbackCS::FParameters>
          (FShader *param_1,int param_2,FShaderParameterMap *param_3,bool param_4)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = FPCGTextureReadbackCS::FParameters::FTypeInfo::GetStructMetadata();
  FShaderParameterBindings::BindForLegacyShaderParameters
            (&param_1->Bindings,param_1,param_2,param_3,pFVar1,param_4);
  return;
}

// Enqueue<TRenderCommandTag<`FPCGTextureReadbackInterface::Dispatch_GameThread'::__l2::TSTR_SceneDrawCompletion167>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1494b5ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FPCGTextureReadbackInterface::Dispatch_GameThread_::__l2::TSTR_SceneDrawCompletion167>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FPCGTextureReadbackInterface::Dispatch_GameThread'::__l2::TSTR_SceneDrawCompletion167>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1494b5c01;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1494b5df5;
  }
LAB_1494b5c01:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1494b5cdf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494b5cdf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1494b5df5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnsetShaderUAVs<FRHIComputeCommandList,FPCGTextureReadbackCS> @ 1494b5e30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UnsetShaderUAVs<FRHIComputeCommandList,FPCGTextureReadbackCS>
          (FRHIComputeCommandList *param_1,
          TShaderRefBase<FPCGTextureReadbackCS,FShaderMapPointerTable> *param_2,
          FRHIComputeShader *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  FPCGTextureReadbackCS *pFVar4;
  longlong lVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  IRHIComputeContext *pIVar9;
  undefined8 *puVar10;
  void *_Dst;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined1 local_res20 [8];
  undefined1 local_78 [16];
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (GRHIGlobals.NeedsShaderUnbinds) {
    if (0 < *(int *)&param_1->field_0xd8) {
      local_res20[0] = 0;
      bVar7 = `FRHICommandListBase::GetScratchShaderUnbinds'::__l3::<lambda_1>::operator()
                        (local_res20);
      if (!bVar7) {
        *(undefined4 *)&param_1->field_0xd8 = 0;
        if (*(int *)&param_1->field_0xdc < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,2,0,(ForAnyElementType *)&param_1->field_0xd0,0,(int *)&param_1->field_0xdc);
        }
      }
    }
    pFVar4 = param_2->ShaderContent;
    puVar1 = &param_1->field_0xd0;
    if ((*(short *)&pFVar4->field_0x54 != -1) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                           ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar11 = *(undefined1 **)&pFVar4->field_0x10;
    if (((ulonglong)puVar11 & 1) != 0) {
      puVar11 = &pFVar4->field_0x10 + ((longlong)puVar11 >> 0x18);
    }
    iVar3 = *(int *)&pFVar4->field_0x18;
    pbVar12 = puVar11 + 2;
    while( true ) {
      if (*(int *)&pFVar4->field_0x18 != iVar3) {
        local_78[0] = 0;
        `TCheckedPointerIterator<FShaderParameterBindings::FResourceParameter_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_78);
      }
      if (pbVar12 + -2 == puVar11 + (longlong)iVar3 * 4) break;
      if ((pbVar12[1] == 7) || ((pbVar12[1] - 0xe & 0xfb) == 0)) {
        iVar8 = *(int *)&param_1->field_0xd8;
        bVar2 = *pbVar12;
        if (iVar8 == *(int *)&param_1->field_0xdc) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x204,(ForAnyElementType *)puVar1,(int *)&param_1->field_0xdc);
        }
        *(int *)&param_1->field_0xd8 = iVar8 + 1;
        lVar5 = *(longlong *)puVar1;
        *(ushort *)(lVar5 + (longlong)iVar8 * 4) = (ushort)bVar2;
        *(undefined1 *)(lVar5 + (longlong)iVar8 * 4 + 2) = 1;
      }
      pbVar12 = pbVar12 + 4;
    }
    iVar3 = *(int *)&param_1->field_0xd8;
    if (0 < iVar3) {
      _Src = *(void **)puVar1;
      local_68 = _Src;
      iStack_60 = iVar3;
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar10;
          *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
          _Dst = FMemStackBase::Alloc((FMemStackBase *)param_1,(longlong)iVar3 << 2,2);
          memcpy(_Dst,_Src,(longlong)iVar3 << 2);
          puVar10[1] = 0;
          *puVar10 = &___7__FRHICommandSetShaderUnbinds_VFRHIComputeShader____6B_;
          puVar10[3] = _Dst;
          puVar10[4] = CONCAT44(uStack_4c,iVar3);
          puVar10[2] = param_3;
          local_58 = _Dst;
          iStack_50 = iVar3;
        }
        else {
          pIVar9 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
          local_48 = (undefined4)local_68;
          uStack_44 = local_68._4_4_;
          iStack_40 = iStack_60;
          uStack_3c = uStack_5c;
          (**(code **)(pIVar9->_padding_ + 0xa8))(pIVar9,param_3,&local_48);
        }
      }
      *(undefined4 *)&param_1->field_0xd8 = 0;
      if (*(int *)&param_1->field_0xdc < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,2,0,(ForAnyElementType *)puVar1,0,(int *)&param_1->field_0xdc);
      }
    }
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1> @ 1494b60f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<__FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_1>::operator()<_FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_2>_&>_::__l7::<lambda_2>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_&>'::`7'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0001494b6113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1> @ 1494b6120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_ExecuteOnGameThread<__FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_1>::operator()<_FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_2>_const_&>_::__l7::<lambda_2>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_const_&>'::`7'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0001494b6143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FPCGTextureReadbackInterface::Dispatch_GameThread'::__l2::<lambda_1>,1,1> @ 1494b6150

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGTextureReadbackInterface::Dispatch_GameThread'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FPCGTextureReadbackInterface::Dispatch_GameThread_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGTextureReadbackInterface::Dispatch_GameThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(FRHIResource **)((longlong)this + 0x18) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x18));
  }
  if (*(FRHIResource **)((longlong)this + 0x10) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x10));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l5::<lambda_1>,1,1> @ 1494b61b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_1>::operator()<_FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_2>_&>_::__l5::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_&>'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0001494b61d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l5::<lambda_1>,1,1> @ 1494b61e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l5::<lambda_1>,1,1>
::
~TFunction_OwnedObject<__FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_1>::operator()<_FPCGTextureReadbackInterface::Dispatch_RenderThread_::__l2::<lambda_2>_const_&>_::__l5::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_const_&>'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
                    /* WARNING: Could not recover jumptable at 0x0001494b6203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// `scalar_deleting_destructor' @ 1494b6210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_&>'::`7'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494b6270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l7::<lambda_2>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`ExecuteOnGameThread<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_const_&>'::`7'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494b62d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FPCGTextureReadbackInterface::Dispatch_GameThread'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FPCGTextureReadbackInterface::Dispatch_GameThread'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x30) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x40);
    if (*(longlong **)((longlong)this + 0x58) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x58);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(FRHIResource **)((longlong)this + 0x18) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x18));
  }
  if (*(FRHIResource **)((longlong)this + 0x10) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x10));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494b6350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_&>'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_&>'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494b63b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::__l2::<lambda_2>_const_&>'::__l5::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<``FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_1>::operator()<`FPCGTextureReadbackInterface::Dispatch_RenderThread'::`2'::<lambda_2>_const_&>'::`5'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x20) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x30);
    if (*(longlong **)((longlong)this + 0x48) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x48);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// IMPLEMENT_MODULE_PCGCompute @ 1494bade0

void __cdecl IMPLEMENT_MODULE_PCGCompute(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150416270

void __cdecl `dynamic_atexit_destructor_for_'FPCGGrassMapUnpackerCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150416280

void __cdecl `dynamic_atexit_destructor_for_'FPCGSceneWriterCS::ShaderTypeRegistration__(void)

{
  return;
}

// ShaderTypeRegistration'' @ 150416290

void __cdecl `dynamic_atexit_destructor_for_'FPCGTextureReadbackCS::ShaderTypeRegistration__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogPCGCompute'' @ 1504162a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogPCGCompute__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogPCGCompute);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504162c0

void __cdecl
`FPCGGrassMapUnpackerCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGGrassMapUnpackerCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 1504162e0

void __cdecl
`FPCGSceneWriterCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGSceneWriterCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 150416300

void __cdecl
`FPCGTextureReadbackCS::FParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FPCGTextureReadbackCS::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150416320

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FPCGGrassMapUnpackerCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150416340

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FPCGSceneWriterCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150416360

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
`FPCGTextureReadbackCS::GetStaticType'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  FShaderType::~FShaderType((FShaderType *)&::StaticType);
  return;
}

