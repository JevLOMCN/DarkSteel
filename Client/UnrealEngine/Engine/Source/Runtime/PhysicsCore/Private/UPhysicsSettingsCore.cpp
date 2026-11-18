// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 9

// StaticClass @ 144134e30

UClass * __cdecl UPhysicsSettingsCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsSettingsCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"PhysicsSettingsCore",
               &Z_Registration_Info_UClass_UPhysicsSettingsCore.InnerSingleton,
               StaticRegisterNativesUPhysicsSettingsCore,0x100,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsSettingsCore>,
               InternalVTableHelperCtorCaller<UPhysicsSettingsCore>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsSettingsCore.InnerSingleton;
}

// UPhysicsSettingsCore @ 1441a0cb0

UPhysicsSettingsCore * __thiscall
UPhysicsSettingsCore::UPhysicsSettingsCore(UPhysicsSettingsCore *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPhysicsSettingsCore__6B_;
  FChaosSolverConfiguration::FChaosSolverConfiguration(&this->SolverOptions);
  return this;
}

// UPhysicsSettingsCore @ 1441a0ce0

UPhysicsSettingsCore * __thiscall
UPhysicsSettingsCore::UPhysicsSettingsCore(UPhysicsSettingsCore *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->DefaultGravityZ = -980.0;
  this->_padding_ = (longlong)&___7UPhysicsSettingsCore__6B_;
  this->DefaultTerminalVelocity = 4000.0;
  this->DefaultFluidFriction = 0.3;
  this->SimulateScratchMemorySize = 0x40000;
  this->RagdollAggregateThreshold = 4;
  this->TriangleMeshTriangleMinAreaThreshold = 5.0;
  this->bEnableEnhancedDeterminism = false;
  this->bEnableShapeSharing = false;
  this->bEnablePCM = true;
  this->bEnableStabilization = false;
  this->bWarnMissingLocks = true;
  this->bEnable2DPhysics = false;
  this->bDefaultHasComplexCollision_DEPRECATED = true;
  this->BounceThresholdVelocity = 200.0;
  this->MaxAngularVelocity = 3600.0;
  this->ContactOffsetMultiplier = 0.02;
  this->MinContactOffset = 2.0;
  this->MaxContactOffset = 8.0;
  this->bSimulateSkeletalMeshOnDedicatedServer = true;
  this->DefaultShapeComplexity = 0xff;
  FChaosSolverConfiguration::FChaosSolverConfiguration(&this->SolverOptions);
  ::FName::FName(local_res8,L"Physics");
  this->_padding_ = (longlong)local_res8[0];
  return this;
}

// ~UPhysicsSettingsCore @ 1441a1cb0

void __thiscall UPhysicsSettingsCore::~UPhysicsSettingsCore(UPhysicsSettingsCore *this)

{
  this->_padding_ = (longlong)&___7UPhysicsSettingsCore__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// Get @ 1441ace40

UPhysicsSettingsCore * __cdecl UPhysicsSettingsCore::Get(void)

{
  int iVar1;
  UClass *pUVar2;
  UPhysicsSettingsCore *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar3 = DefaultSettings;
  if (DefaultSettings == (UPhysicsSettingsCore *)0x0) {
    pUVar2 = StaticClass();
    if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar2);
    }
    pUVar3 = (UPhysicsSettingsCore *)(pUVar2->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UPhysicsSettingsCore *)0x0) {
      pFVar4 = GetTypeName<UPhysicsSettingsCore>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UPhysicsSettingsCore>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar3);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 1441af4e0

UClass * __cdecl UPhysicsSettingsCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsSettingsCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"PhysicsSettingsCore",
               &Z_Registration_Info_UClass_UPhysicsSettingsCore.InnerSingleton,
               StaticRegisterNativesUPhysicsSettingsCore,0x100,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsSettingsCore>,
               InternalVTableHelperCtorCaller<UPhysicsSettingsCore>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsSettingsCore.InnerSingleton;
}

// PostInitProperties @ 1441b3190

void __thiscall UPhysicsSettingsCore::PostInitProperties(UPhysicsSettingsCore *this)

{
  UObject::PostInitProperties((UObject *)this);
  if ((this->DefaultShapeComplexity).Value == 0xff) {
    (this->DefaultShapeComplexity).Value =
         (this->bDefaultHasComplexCollision_DEPRECATED == false) + '\x01';
  }
  FChaosSolverConfiguration::MoveRenamedPropertyValues(&this->SolverOptions);
  return;
}

// SetDefaultSettings @ 1441b6a20

void __cdecl UPhysicsSettingsCore::SetDefaultSettings(UPhysicsSettingsCore *param_1)

{
  DefaultSettings = param_1;
  return;
}

// StaticRegisterNativesUPhysicsSettingsCore @ 1441baa00

void __cdecl UPhysicsSettingsCore::StaticRegisterNativesUPhysicsSettingsCore(void)

{
  return;
}

