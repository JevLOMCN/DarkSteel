// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 32

// StaticClass @ 148997230

UClass * __cdecl UVisualLoggerKismetLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VisualLoggerKismetLibrary",
               &Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.InnerSingleton,
               StaticRegisterNativesUVisualLoggerKismetLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UVisualLoggerKismetLibrary>,
               InternalVTableHelperCtorCaller<UVisualLoggerKismetLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.InnerSingleton;
}

// UVisualLoggerKismetLibrary @ 1489b73c0

UVisualLoggerKismetLibrary * __thiscall
UVisualLoggerKismetLibrary::UVisualLoggerKismetLibrary
          (UVisualLoggerKismetLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UVisualLoggerKismetLibrary__6B_;
  return this;
}

// UVisualLoggerKismetLibrary @ 1489b73f0

UVisualLoggerKismetLibrary * __thiscall
UVisualLoggerKismetLibrary::UVisualLoggerKismetLibrary
          (UVisualLoggerKismetLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UVisualLoggerKismetLibrary__6B_;
  return this;
}

// ~UVisualLoggerKismetLibrary @ 1489baaf0

void __thiscall
UVisualLoggerKismetLibrary::~UVisualLoggerKismetLibrary(UVisualLoggerKismetLibrary *this)

{
  *(undefined ***)this = &___7UVisualLoggerKismetLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// EnableRecording @ 1489d9260

void __cdecl UVisualLoggerKismetLibrary::EnableRecording(bool param_1)

{
  FVisualLogger *this;
  
  this = FVisualLogger::Get();
  FVisualLogger::SetIsRecording(this,param_1);
  return;
}

// GetPrivateStaticClass @ 1489ec2e0

UClass * __cdecl UVisualLoggerKismetLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VisualLoggerKismetLibrary",
               &Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.InnerSingleton,
               StaticRegisterNativesUVisualLoggerKismetLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UVisualLoggerKismetLibrary>,
               InternalVTableHelperCtorCaller<UVisualLoggerKismetLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.InnerSingleton;
}

// LogArrow @ 1489fa950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogArrow
          (UObject *param_1,TVector<double> *param_2,TVector<double> *param_3,FString *param_4,
          FLinearColor *param_5,FName param_6,bool param_7,float param_8)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FMessageLog *this;
  FText *pFVar3;
  FColor local_res10 [2];
  FString local_a8;
  FString local_98;
  FString local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FMessageLog local_58;
  
  FLinearColor::ToFColorSRGB(param_5);
  FVisualLogger::ArrowLineLogfImpl
            (param_1,&param_6,Log,param_2,param_3,local_res10,(ushort)(int)param_8,L"%s");
  if (param_7) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      this = FMessageLog::FMessageLog(&local_58,&param_6);
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_88,L"LogArrow: \'%s\' - SegmentStart: (%s) | SegmentEnd:(%s)");
      pFVar3 = FText::FromString(&local_68,&local_88);
      FMessageLog::Info(this,&local_78,pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_58);
    }
    else {
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x88,&param_6,Log,L"LogArrow: \'%s\' - SegmentStart: (%s) | SegmentEnd:(%s)");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LogBox @ 1489fac10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogBox
          (UObject *param_1,TBox<double> *param_2,FString *param_3,FLinearColor *param_4,
          FName param_5,bool param_6,bool param_7)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FMessageLog *this;
  FText *pFVar3;
  FColor local_c8 [2];
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TSharedRef<FTokenizedMessage,1> local_90;
  FText local_80;
  FMessageLog local_70;
  
  FLinearColor::ToFColorSRGB(param_4);
  FVisualLogger::BoxLogfImpl
            (param_1,&param_5,Log,param_2,&UE::Math::TMatrix<double>::Identity,local_c8,param_7,
             L"%s");
  if (param_6) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      this = FMessageLog::FMessageLog(&local_70,&param_5);
      ::FString::PrintfImpl(&local_b0,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_c0,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_a0,L"LogBox: \'%s\' - BoxMin: (%s) | BoxMax: (%s)");
      pFVar3 = FText::FromString(&local_80,&local_a0);
      FMessageLog::Info(this,&local_90,pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_70);
    }
    else {
      ::FString::PrintfImpl(&local_c0,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_b0,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x71,&param_5,Log,L"LogBox: \'%s\' - BoxMin: (%s) | BoxMax: (%s)");
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LogCapsule @ 1489faec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogCapsule
          (UObject *param_1,TVector<double> *param_2,float param_3,float param_4,
          TQuat<double> *param_5,FString *param_6,FLinearColor *param_7,FName param_8,bool param_9,
          bool param_10)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  bool bVar3;
  FMessageLog *this;
  FText *pFVar4;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FMessageLog local_68;
  
  pFVar2 = param_6;
  FLinearColor::ToFColorSRGB(param_7);
  FVisualLogger::CapsuleLogfImpl
            (param_1,&param_8,Log,param_2,param_3,param_4,param_5,(FColor *)&param_6,param_10,L"%s")
  ;
  if (param_9) {
    bVar3 = IsInGameThread();
    if (bVar3) {
      this = FMessageLog::FMessageLog(&local_68,&param_8);
      ::FString::PrintfImpl(&local_a8,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
      ::FString::PrintfImpl(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl
                (&local_98,
                 L"LogCapsule: \'%s\' - Base: (%s) | HalfHeight: %f | Radius: %f | Rotation: (%s)");
      pFVar4 = FText::FromString(&local_78,&local_98);
      FMessageLog::Info(this,&local_88,pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_68);
    }
    else {
      ::FString::PrintfImpl(&local_b8,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x65,&param_8,Log,
                     L"LogCapsule: \'%s\' - Base: (%s) | HalfHeight: %f | Radius: %f | Rotation: (%s)"
                    );
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LogCircle @ 1489fb1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogCircle
          (UObject *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4,
          FString *param_5,FLinearColor *param_6,float param_7,FName param_8,bool param_9,
          bool param_10)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  bool bVar3;
  FMessageLog *this;
  FText *pFVar4;
  FString local_a8;
  FString local_98;
  FString local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FMessageLog local_58;
  
  pFVar2 = param_5;
  FLinearColor::ToFColorSRGB(param_6);
  FVisualLogger::DiscLogfImpl
            (param_1,&param_8,Log,param_2,param_3,param_4,(FColor *)&param_5,(ushort)(int)param_7,
             param_10,L"%s");
  if (param_9) {
    bVar3 = IsInGameThread();
    if (bVar3) {
      this = FMessageLog::FMessageLog(&local_58,&param_8);
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl
                (&local_88,L"LogCircle: \'%s\' - Center: (%s) | UpAxis: (%s) | Radius: %f");
      pFVar4 = FText::FromString(&local_68,&local_88);
      FMessageLog::Info(this,&local_78,pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_58);
    }
    else {
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x93,&param_8,Log,
                     L"LogCircle: \'%s\' - Center: (%s) | UpAxis: (%s) | Radius: %f");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LogCone @ 1489fb4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogCone
          (UObject *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4,
          float param_5,FString *param_6,FLinearColor *param_7,FName param_8,bool param_9,
          bool param_10)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  bool bVar3;
  FMessageLog *this;
  FText *pFVar4;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FMessageLog local_68;
  
  pFVar2 = param_6;
  FLinearColor::ToFColorSRGB(param_7);
  FVisualLogger::ConeLogfImpl
            (param_1,&param_8,Log,param_2,param_3,param_4,param_5,(FColor *)&param_6,param_10,L"%s")
  ;
  if (param_9) {
    bVar3 = IsInGameThread();
    if (bVar3) {
      this = FMessageLog::FMessageLog(&local_68,&param_8);
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl
                (&local_98,
                 L"LogCone: \'%s\' - Origin: (%s) | Direction: (%s) | Length: %f | Angle: %f");
      pFVar4 = FText::FromString(&local_78,&local_98);
      FMessageLog::Info(this,&local_88,pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_68);
    }
    else {
      ::FString::PrintfImpl(&local_b8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x4e,&param_8,Log,
                     L"LogCone: \'%s\' - Origin: (%s) | Direction: (%s) | Length: %f | Angle: %f");
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LogCylinder @ 1489fb800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogCylinder
          (UObject *param_1,TVector<double> *param_2,TVector<double> *param_3,float param_4,
          FString *param_5,FLinearColor *param_6,FName param_7,bool param_8,bool param_9)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  bool bVar3;
  FMessageLog *this;
  FText *pFVar4;
  FString local_a8;
  FString local_98;
  FString local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FMessageLog local_58;
  
  pFVar2 = param_5;
  FLinearColor::ToFColorSRGB(param_6);
  FVisualLogger::CylinderLogfImpl
            (param_1,&param_7,Log,param_2,param_3,param_4,(FColor *)&param_5,param_9,L"%s");
  if (param_8) {
    bVar3 = IsInGameThread();
    if (bVar3) {
      this = FMessageLog::FMessageLog(&local_58,&param_7);
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_88,L"LogCylinder: \'%s\' - Start: (%s) | End: (%s) | Radius: %f")
      ;
      pFVar4 = FText::FromString(&local_68,&local_88);
      FMessageLog::Info(this,&local_78,pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_58);
    }
    else {
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x59,&param_7,Log,
                     L"LogCylinder: \'%s\' - Start: (%s) | End: (%s) | Radius: %f");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LogLocation @ 1489fbb00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogLocation
          (UObject *param_1,TVector<double> *param_2,FString *param_3,FLinearColor *param_4,
          float param_5,FName param_6,bool param_7)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FMessageLog *this;
  FText *pFVar3;
  FColor local_res10 [2];
  FString local_88;
  FString local_78;
  TSharedRef<FTokenizedMessage,1> local_68;
  FText local_58;
  FMessageLog local_48;
  
  FLinearColor::ToFColorSRGB(param_4);
  FVisualLogger::LocationLogfImpl
            (param_1,&param_6,Log,param_2,(ushort)(int)param_5,local_res10,L"%s");
  if (param_7) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      this = FMessageLog::FMessageLog(&local_48,&param_6);
      ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_78,L"LogLocation: \'%s\' - Location: (%s)");
      pFVar3 = FText::FromString(&local_58,&local_78);
      FMessageLog::Info(this,&local_68,pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_48);
    }
    else {
      ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x36,&param_6,Log,L"LogLocation: \'%s\' - Location: (%s)");
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LogOrientedBox @ 1489fbd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogOrientedBox
          (UObject *param_1,TBox<double> *param_2,TTransform<double> *param_3,FString *param_4,
          FLinearColor *param_5,FName param_6,bool param_7,bool param_8)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  TMatrix<double> *pTVar3;
  FMessageLog *this;
  FText *pFVar4;
  undefined1 auStackY_1b8 [32];
  FColor local_168 [2];
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  TSharedRef<FTokenizedMessage,1> local_120;
  FText local_110;
  FMessageLog local_100;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  FLinearColor::ToFColorSRGB(param_5);
  pTVar3 = UE::Math::TTransform<double>::ToMatrixWithScale(param_3,&local_c8);
  FVisualLogger::BoxLogfImpl(param_1,&param_6,Log,param_2,pTVar3,local_168,param_8,L"%s");
  if (param_7) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      this = FMessageLog::FMessageLog(&local_100,&param_6);
      UE::Math::TTransform<double>::ToString(param_3,&local_140);
      ::FString::PrintfImpl(&local_150,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_160,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl
                (&local_130,
                 L"LogOrientedBox: \'%s\' - BoxMin: (%s) | BoxMax: (%s) | Transform: (%s)");
      pFVar4 = FText::FromString(&local_110,&local_130);
      FMessageLog::Info(this,&local_120,pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_100);
    }
    else {
      UE::Math::TTransform<double>::ToString(param_3,&local_140);
      ::FString::PrintfImpl(&local_160,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_150,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x7d,&param_6,Log,
                     L"LogOrientedBox: \'%s\' - BoxMin: (%s) | BoxMax: (%s) | Transform: (%s)");
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LogSegment @ 1489fc0a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogSegment
          (UObject *param_1,TVector<double> *param_2,TVector<double> *param_3,FString *param_4,
          FLinearColor *param_5,float param_6,FName param_7,bool param_8)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FMessageLog *this;
  FText *pFVar3;
  FColor local_res10 [2];
  FString local_a8;
  FString local_98;
  FString local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FMessageLog local_58;
  
  FLinearColor::ToFColorSRGB(param_5);
  FVisualLogger::SegmentLogfImpl
            (param_1,&param_7,Log,param_2,param_3,local_res10,(ushort)(int)param_6,L"%s");
  if (param_8) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      this = FMessageLog::FMessageLog(&local_58,&param_7);
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_88,L"LogSegment: \'%s\' - SegmentStart: (%s) | SegmentEnd: (%s)")
      ;
      pFVar3 = FText::FromString(&local_68,&local_88);
      FMessageLog::Info(this,&local_78,pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_58);
    }
    else {
      ::FString::PrintfImpl(&local_a8,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x9f,&param_7,Log,
                     L"LogSegment: \'%s\' - SegmentStart: (%s) | SegmentEnd: (%s)");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LogSphere @ 1489fc360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogSphere
          (UObject *param_1,TVector<double> *param_2,float param_3,FString *param_4,
          FLinearColor *param_5,FName param_6,bool param_7,bool param_8)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FMessageLog *this;
  FText *pFVar3;
  FColor local_res10 [2];
  FString local_98;
  FString local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FMessageLog local_58;
  
  FLinearColor::ToFColorSRGB(param_5);
  FVisualLogger::SphereLogfImpl(param_1,&param_6,Log,param_2,param_3,local_res10,param_8,L"%s");
  if (param_7) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      this = FMessageLog::FMessageLog(&local_58,&param_6);
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      ::FString::PrintfImpl(&local_88,L"LogSphere: \'%s\' - Center: (%s) | Radius: %f");
      pFVar3 = FText::FromString(&local_68,&local_88);
      FMessageLog::Info(this,&local_78,pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_58);
    }
    else {
      ::FString::PrintfImpl(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x42,&param_6,Log,L"LogSphere: \'%s\' - Center: (%s) | Radius: %f");
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// LogText @ 1489fc5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UVisualLoggerKismetLibrary::LogText(UObject *param_1,FString *param_2,FName param_3,bool param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FMessageLog *this;
  FText *pFVar3;
  FName local_res18 [2];
  FString local_68;
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  local_res18[0] = param_3;
  FVisualLogger::CategorizedLogfImpl(param_1,local_res18,Log,L"%s");
  if (param_4) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      this = FMessageLog::FMessageLog(&local_38,local_res18);
      ::FString::PrintfImpl(&local_68,L"LogText: \'%s\'");
      pFVar3 = FText::FromString(&local_48,&local_68);
      FMessageLog::Info(this,&local_58,pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_38);
    }
    else {
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x2a,local_res18,Log,L"LogText: \'%s\'");
    }
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// RedirectVislog @ 148a05ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UVisualLoggerKismetLibrary::RedirectVislog(UObject *param_1,UObject *param_2)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  FVisualLogger *this;
  UObject *pUVar3;
  FName FStackX_18;
  FName FStackX_20;
  FString FStack_38;
  FString FStack_28;
  
  if ((param_1 == (UObject *)0x0) || (param_2 == (UObject *)0x0)) {
    return;
  }
  this = FVisualLogger::Get();
  SRWLock = &this->RedirectRWLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pUVar3 = FVisualLogger::RedirectInternal(this,param_1,param_2);
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  if ((((FVisualLogger::bIsRecording != 0) && (param_1 != (UObject *)0x0)) &&
      (pUVar3 != (UObject *)0x0)) && (FVisualLogger::bIsRecording != 0)) {
    FStackX_18.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
    FStackX_18.Number = *(uint *)&pUVar3->field_0x1c;
    ::FName::ToString(&FStackX_18,&FStack_28);
    FStackX_20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    FStackX_20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&FStackX_20,&FStack_38);
    FVisualLogger::CategorizedLogfImpl
              (param_1,(FName *)&LogVisual.field_0x4,Log,L"Redirected \'%s\' to \'%s\'");
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// StaticRegisterNativesUVisualLoggerKismetLibrary @ 148a188e0

void __cdecl UVisualLoggerKismetLibrary::StaticRegisterNativesUVisualLoggerKismetLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEnableRecording @ 148a22740

void __cdecl
UVisualLoggerKismetLibrary::execEnableRecording(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FVisualLogger *this;
  bool bVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FVisualLogger::Get();
  FVisualLogger::SetIsRecording(this,bVar2);
  return;
}

// execLogArrow @ 148a22aa0

void __cdecl
UVisualLoggerKismetLibrary::execLogArrow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName FVar3;
  void *_Src;
  longlong lVar4;
  bool bVar5;
  int local_res10 [4];
  float local_res20 [2];
  FName local_108;
  UObject *local_100;
  void *local_f8;
  undefined8 local_f0;
  FString local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  FLinearColor_u_0 local_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [2];
  
  local_100 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_f8 = (void *)0x0;
  local_f0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  _Src = local_f8;
  FVar3 = local_108;
  fVar2 = local_res20[0];
  lVar4 = (longlong)(int)local_f0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_e8.Data.ArrayNum = (int)local_f0;
  if ((int)local_f0 == 0) {
    local_e8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_f0,0,(ForAnyElementType *)&local_e8,(int)local_f0,
               &local_e8.Data.ArrayMax);
    memcpy(local_e8.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  local_88._s_0.X = local_c8;
  local_88._s_0.Y = dStack_c0;
  local_88._s_0.Z = local_b8;
  local_68[0]._s_0.X = local_b0;
  local_68[0]._s_0.Y = dStack_a8;
  local_98._0_8_ = local_d8;
  local_98._8_8_ = uStack_d0;
  local_68[0]._s_0.Z = local_a0;
  LogArrow(local_100,(TVector<double> *)&local_68[0]._s_0,(TVector<double> *)&local_88._s_0,
           &local_e8,(FLinearColor *)&local_98._s_0,FVar3,bVar5,fVar2);
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  return;
}

// execLogBox @ 148a22dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UVisualLoggerKismetLibrary::execLogBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStackY_148 [32];
  int local_108;
  int local_104;
  FName local_100;
  UObject *local_f8;
  void *local_f0;
  undefined8 local_e8;
  FString local_e0;
  FLinearColor_u_0 local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  TVector<double>_u_0 local_a8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_38 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_f0 = (void *)0x0;
  local_e8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_108 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  bVar4 = local_108 != 0;
  local_104 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  _Src = local_f0;
  FVar2 = local_100;
  bVar5 = local_104 != 0;
  lVar3 = (longlong)(int)local_e8;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8._s_0.R = local_b8;
  local_c8._s_0.G = fStack_b4;
  local_c8._s_0.B = fStack_b0;
  local_c8._s_0.A = fStack_ac;
  local_e0.Data.ArrayNum = (int)local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_e8 == 0) {
    local_e0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_e8,0,(ForAnyElementType *)&local_e0,(int)local_e8,
               &local_e0.Data.ArrayMax);
    memcpy(local_e0.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
    local_b8 = local_c8._s_0.R;
    fStack_b4 = local_c8._s_0.G;
    fStack_b0 = local_c8._s_0.B;
    fStack_ac = local_c8._s_0.A;
  }
  local_a8._s_0.Z = local_58;
  uStack_90 = uStack_50;
  local_78 = CONCAT71(uStack_37,local_38);
  local_a8._s_0.X = local_68;
  local_a8._s_0.Y = dStack_60;
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_c8._s_0.R = local_b8;
  local_c8._s_0.G = fStack_b4;
  local_c8._s_0.B = fStack_b0;
  local_c8._s_0.A = fStack_ac;
  LogBox(local_f8,(TBox<double> *)&local_a8._s_0,&local_e0,(FLinearColor *)&local_c8._s_0,FVar2,
         bVar4,bVar5);
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// execLogCapsule @ 148a230d0

void __cdecl
UVisualLoggerKismetLibrary::execLogCapsule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res20 [2];
  float local_108;
  float local_104;
  FName local_100;
  UObject *local_f8;
  void *local_f0;
  undefined8 local_e8;
  FString local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  FLinearColor_u_0 local_a8;
  TVector<double>_u_0 local_98;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  TQuat<double> local_58;
  
  local_f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_104 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  local_108 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_f0 = (void *)0x0;
  local_e8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  _Src = local_f0;
  FVar2 = local_100;
  bVar5 = local_res20[0] != 0;
  lVar3 = (longlong)(int)local_e8;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = (int)local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_e8 == 0) {
    local_e0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_e8,0,(ForAnyElementType *)&local_e0,(int)local_e8,
               &local_e0.Data.ArrayMax);
    memcpy(local_e0.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  local_58.X = local_78;
  local_58.Y = dStack_70;
  local_58.Z = local_68;
  local_58.W = dStack_60;
  local_a8._0_8_ = local_d0;
  local_a8._8_8_ = uStack_c8;
  local_98._s_0.X = local_c0;
  local_98._s_0.Y = dStack_b8;
  local_98._s_0.Z = local_b0;
  LogCapsule(local_f8,(TVector<double> *)&local_98._s_0,local_104,local_108,&local_58,&local_e0,
             (FLinearColor *)&local_a8._s_0,FVar2,bVar4,bVar5);
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// execLogCircle @ 148a23480

void __cdecl
UVisualLoggerKismetLibrary::execLogCircle(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName FVar3;
  void *_Src;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res20 [2];
  float local_118;
  float local_114;
  FName local_110;
  UObject *local_108;
  void *local_100;
  undefined8 local_f8;
  FString local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  FLinearColor_u_0 local_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [2];
  
  local_108 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_114 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_114,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_114);
  }
  local_100 = (void *)0x0;
  local_f8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_118 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  _Src = local_100;
  FVar3 = local_110;
  fVar2 = local_118;
  bVar6 = local_res20[0] != 0;
  lVar4 = (longlong)(int)local_f8;
  local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.Data.ArrayNum = (int)local_f8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_f8 == 0) {
    local_f0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_f8,0,(ForAnyElementType *)&local_f0,(int)local_f8,
               &local_f0.Data.ArrayMax);
    memcpy(local_f0.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  local_88._s_0.X = local_d0;
  local_88._s_0.Y = dStack_c8;
  local_88._s_0.Z = local_c0;
  local_68[0]._s_0.X = local_b8;
  local_68[0]._s_0.Y = dStack_b0;
  local_98._0_8_ = local_e0;
  local_98._8_8_ = uStack_d8;
  local_68[0]._s_0.Z = local_a8;
  LogCircle(local_108,(TVector<double> *)&local_68[0]._s_0,(TVector<double> *)&local_88._s_0,
            local_114,&local_f0,(FLinearColor *)&local_98._s_0,fVar2,FVar3,bVar5,bVar6);
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  return;
}

// execLogCone @ 148a23850

void __cdecl UVisualLoggerKismetLibrary::execLogCone(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res20 [2];
  float local_108;
  float local_104;
  FName local_100;
  UObject *local_f8;
  void *local_f0;
  undefined8 local_e8;
  FString local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  FLinearColor_u_0 local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [2];
  
  local_f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_104 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_104,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_104);
  }
  local_108 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_f0 = (void *)0x0;
  local_e8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  _Src = local_f0;
  FVar2 = local_100;
  bVar5 = local_res20[0] != 0;
  lVar3 = (longlong)(int)local_e8;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = (int)local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_e8 == 0) {
    local_e0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_e8,0,(ForAnyElementType *)&local_e0,(int)local_e8,
               &local_e0.Data.ArrayMax);
    memcpy(local_e0.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  local_78._s_0.X = local_c0;
  local_78._s_0.Y = dStack_b8;
  local_58[0]._s_0.X = local_a8;
  local_58[0]._s_0.Y = dStack_a0;
  local_78._s_0.Z = local_b0;
  local_88._0_8_ = local_d0;
  local_88._8_8_ = uStack_c8;
  local_58[0]._s_0.Z = local_98;
  LogCone(local_f8,(TVector<double> *)&local_58[0]._s_0,(TVector<double> *)&local_78._s_0,local_104,
          local_108,&local_e0,(FLinearColor *)&local_88._s_0,FVar2,bVar4,bVar5);
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// execLogCylinder @ 148a23c10

void __cdecl
UVisualLoggerKismetLibrary::execLogCylinder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res20 [2];
  float local_108 [2];
  FName local_100;
  UObject *local_f8;
  void *local_f0;
  undefined8 local_e8;
  FString local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  FLinearColor_u_0 local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [2];
  
  local_f8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_108[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_f0 = (void *)0x0;
  local_e8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  _Src = local_f0;
  FVar2 = local_100;
  bVar5 = local_res20[0] != 0;
  lVar3 = (longlong)(int)local_e8;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = (int)local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_e8 == 0) {
    local_e0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_e8,0,(ForAnyElementType *)&local_e0,(int)local_e8,
               &local_e0.Data.ArrayMax);
    memcpy(local_e0.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  local_78._s_0.X = local_c0;
  local_78._s_0.Y = dStack_b8;
  local_78._s_0.Z = local_b0;
  local_58[0]._s_0.X = local_a8;
  local_58[0]._s_0.Y = dStack_a0;
  local_88._0_8_ = local_d0;
  local_88._8_8_ = uStack_c8;
  local_58[0]._s_0.Z = local_98;
  LogCylinder(local_f8,(TVector<double> *)&local_58[0]._s_0,(TVector<double> *)&local_78._s_0,
              local_108[0],&local_e0,(FLinearColor *)&local_88._s_0,FVar2,bVar4,bVar5);
  if (local_f0 != (void *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// execLogLocation @ 148a23f80

void __cdecl
UVisualLoggerKismetLibrary::execLogLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName FVar3;
  void *_Src;
  longlong lVar4;
  bool bVar5;
  int local_res10 [4];
  float local_res20 [2];
  FName local_d8;
  UObject *local_d0;
  void *local_c8;
  undefined8 local_c0;
  FString local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  FLinearColor_u_0 local_78;
  TVector<double>_u_0 local_68 [2];
  
  local_d0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_c8 = (void *)0x0;
  local_c0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_c8;
  FVar3 = local_d8;
  fVar2 = local_res20[0];
  bVar5 = local_res10[0] != 0;
  lVar4 = (longlong)(int)local_c0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = (int)local_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_c0 == 0) {
    local_b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_c0,0,(ForAnyElementType *)&local_b8,(int)local_c0,
               &local_b8.Data.ArrayMax);
    memcpy(local_b8.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  local_68[0]._s_0.X = local_98;
  local_68[0]._s_0.Y = dStack_90;
  local_78._0_8_ = local_a8;
  local_78._8_8_ = uStack_a0;
  local_68[0]._s_0.Z = local_88;
  LogLocation(local_d0,(TVector<double> *)&local_68[0]._s_0,&local_b8,(FLinearColor *)&local_78._s_0
              ,fVar2,FVar3,bVar5);
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}

// execLogOrientedBox @ 148a24240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UVisualLoggerKismetLibrary::execLogOrientedBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStackY_218 [32];
  int local_1d8;
  int local_1d4;
  FName local_1d0;
  UObject *local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  FString local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  FLinearColor_u_0 local_188;
  TVector<double>_u_0 local_178;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  TTransform<double> local_138;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1c8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_48 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  local_1c0 = (void *)0x0;
  local_1b8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  local_1d8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  bVar4 = local_1d8 != 0;
  local_1d4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d4);
  }
  _Src = local_1c0;
  FVar2 = local_1d0;
  bVar5 = local_1d4 != 0;
  lVar3 = (longlong)(int)local_1b8;
  local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.Data.ArrayNum = (int)local_1b8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_1b8 == 0) {
    local_1b0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_1b8,0,(ForAnyElementType *)&local_1b0,(int)local_1b8,
               &local_1b0.Data.ArrayMax);
    memcpy(local_1b0.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  local_138.Rotation.XY.m128d_f64[0] = (double)local_d8._0_8_;
  local_138.Rotation.XY.m128d_f64[1] = (double)local_d8._8_8_;
  local_138.Rotation.ZW.m128d_f64[0] = (double)local_c8._0_8_;
  local_138.Rotation.ZW.m128d_f64[1] = (double)local_c8._8_8_;
  local_138.Translation.XY.m128d_f64[0] = (double)local_b8._0_8_;
  local_138.Translation.XY.m128d_f64[1] = (double)local_b8._8_8_;
  local_138.Translation.ZW.m128d_f64[0] = (double)local_a8._0_8_;
  local_138.Translation.ZW.m128d_f64[1] = (double)local_a8._8_8_;
  local_138.Scale3D.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_138.Scale3D.XY.m128d_f64[1] = (double)local_98._8_8_;
  local_138.Scale3D.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_138.Scale3D.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_178._s_0.X = local_78;
  local_178._s_0.Y = dStack_70;
  local_178._s_0.Z = local_68;
  uStack_160 = uStack_60;
  local_148 = CONCAT71(uStack_47,local_48);
  local_158 = local_58;
  uStack_150 = uStack_50;
  local_188._0_8_ = local_1a0;
  local_188._8_8_ = uStack_198;
  LogOrientedBox(local_1c8,(TBox<double> *)&local_178._s_0,&local_138,&local_1b0,
                 (FLinearColor *)&local_188._s_0,FVar2,bVar4,bVar5);
  if (local_1c0 != (void *)0x0) {
    FMemory::Free(local_1c0);
  }
  return;
}

// execLogSegment @ 148a24630

void __cdecl
UVisualLoggerKismetLibrary::execLogSegment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName FVar3;
  void *_Src;
  longlong lVar4;
  bool bVar5;
  int local_res10 [4];
  float local_res20 [2];
  FName local_108;
  UObject *local_100;
  void *local_f8;
  undefined8 local_f0;
  FString local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  FLinearColor_u_0 local_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [2];
  
  local_100 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_f8 = (void *)0x0;
  local_f0 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_f8;
  FVar3 = local_108;
  fVar2 = local_res20[0];
  bVar5 = local_res10[0] != 0;
  lVar4 = (longlong)(int)local_f0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = (int)local_f0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_f0 == 0) {
    local_e8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_f0,0,(ForAnyElementType *)&local_e8,(int)local_f0,
               &local_e8.Data.ArrayMax);
    memcpy(local_e8.Data.AllocatorInstance.Data,_Src,lVar4 * 2);
  }
  local_88._s_0.X = local_c8;
  local_88._s_0.Y = dStack_c0;
  local_88._s_0.Z = local_b8;
  local_68[0]._s_0.X = local_b0;
  local_68[0]._s_0.Y = dStack_a8;
  local_98._0_8_ = local_d8;
  local_98._8_8_ = uStack_d0;
  local_68[0]._s_0.Z = local_a0;
  LogSegment(local_100,(TVector<double> *)&local_68[0]._s_0,(TVector<double> *)&local_88._s_0,
             &local_e8,(FLinearColor *)&local_98._s_0,fVar2,FVar3,bVar5);
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  return;
}

// execLogSphere @ 148a24950

void __cdecl
UVisualLoggerKismetLibrary::execLogSphere(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res20 [2];
  float local_c8 [2];
  FName local_c0;
  UObject *local_b8;
  void *local_b0;
  undefined8 local_a8;
  FString local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  FLinearColor_u_0 local_68;
  TVector<double>_u_0 local_58 [2];
  
  local_b8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_c8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_b0 = (void *)0x0;
  local_a8 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  _Src = local_b0;
  FVar2 = local_c0;
  bVar5 = local_res20[0] != 0;
  lVar3 = (longlong)(int)local_a8;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = (int)local_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_a8 == 0) {
    local_a0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_a8,0,(ForAnyElementType *)&local_a0,(int)local_a8,
               &local_a0.Data.ArrayMax);
    memcpy(local_a0.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  local_58[0]._s_0.X = local_80;
  local_58[0]._s_0.Y = dStack_78;
  local_68._0_8_ = local_90;
  local_68._8_8_ = uStack_88;
  local_58[0]._s_0.Z = local_70;
  LogSphere(local_b8,(TVector<double> *)&local_58[0]._s_0,local_c8[0],&local_a0,
            (FLinearColor *)&local_68._s_0,FVar2,bVar4,bVar5);
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  return;
}

// execLogText @ 148a24c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UVisualLoggerKismetLibrary::execLogText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  void *_Src;
  FMessageLog *this;
  FText *pFVar3;
  longlong lVar4;
  bool bVar5;
  int local_res10 [4];
  FName local_res20;
  ForAnyElementType local_b8;
  int local_b0;
  int local_ac;
  UObject *local_a8;
  FName local_a0;
  void *local_98;
  undefined8 local_90;
  FString local_88;
  TSharedRef<FTokenizedMessage,1> local_78;
  FText local_68;
  FMessageLog local_58;
  
  local_a8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  _Src = local_98;
  FVar2 = local_res20;
  bVar5 = local_res10[0] != 0;
  lVar4 = (longlong)(int)local_90;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = (int)local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((int)local_90 == 0) {
    local_ac = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_90,0,&local_b8,(int)local_90,&local_ac);
    memcpy(local_b8.Data,_Src,lVar4 * 2);
  }
  local_a0 = FVar2;
  FVisualLogger::CategorizedLogfImpl(local_a8,&local_a0,Log,L"%s");
  if (bVar5) {
    bVar5 = IsInGameThread();
    if (bVar5) {
      this = FMessageLog::FMessageLog(&local_58,&local_a0);
      ::FString::PrintfImpl(&local_88,L"LogText: \'%s\'");
      pFVar3 = FText::FromString(&local_68,&local_88);
      FMessageLog::Info(this,&local_78,pFVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_58);
    }
    else {
      FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VisualLogger\\VisualLoggerKismetLibrary.cpp"
                     ,0x2a,&local_a0,Log,L"LogText: \'%s\'");
    }
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  return;
}

// execRedirectVislog @ 148a24f10

void __cdecl
UVisualLoggerKismetLibrary::execRedirectVislog(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res10 [2];
  UObject *local_res20;
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] != (UObject *)0x0) && (local_res20 != (UObject *)0x0)) {
    FVisualLogger::Redirect(local_res10[0],local_res20);
  }
  return;
}

