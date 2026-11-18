// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// StartupModule @ 14355b490

void __thiscall FGeometryCoreModule::StartupModule(FGeometryCoreModule *this)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  uint uVar7;
  FString local_58;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  ::FString::FString(&local_48,L"MultiSpline");
  ::FString::FString(&local_58,L"Vector");
  uVar6 = 0x811c9dc5;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
  }
  uVar7 = 0x811c9dc5;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  wVar1 = *(wchar_t *)FVar5.Data;
  while (wVar1 != L'\0') {
    FVar5.Data = FVar5.Data + 2;
    uVar7 = ((ushort)wVar1 ^ uVar7) * 0x1000193;
    wVar1 = *(wchar_t *)FVar5.Data;
  }
  wVar1 = *(wchar_t *)FVar4.Data;
  while (wVar1 != L'\0') {
    FVar4.Data = FVar4.Data + 2;
    uVar6 = ((ushort)wVar1 ^ uVar6) * 0x1000193;
    wVar1 = *(wchar_t *)FVar4.Data;
  }
  uVar6 = uVar7 << 0x10 | uVar6 & 0xffff;
  if ((uVar6 != 0x54e3ad22) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3488661381736038359>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\GeometryCoreModule.cpp"
                         ,0x29,"LegacyMultiSplineID == 0x54E3AD22"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VISplineInterface_Spline_Geometry_UE__U__TDefaultDelete_VISplineInterface_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FGeometryCoreModule::RegisterSplineTypes'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
                ::Call;
  UE::Geometry::Spline::FSplineTypeRegistry::RegisterType
            (uVar6,&local_48,&local_58,
             (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
              *)local_38);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UE::Geometry::ExactPredicates::GlobalInit();
  return;
}

// ShutdownModule @ 14355b5e0

void __thiscall FGeometryCoreModule::ShutdownModule(FGeometryCoreModule *this)

{
  return;
}

// <lambda_invoker_cdecl> @ 14355b630

TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
 __cdecl `FGeometryCoreModule::RegisterSplineTypes'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_> *this;
  ISplineInterface IVar1;
  ISplineInterface *in_RCX;
  
  this = ::operator_new(0x100);
  if (this != (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
               *)0x0) {
    memset(this,0,0x100);
    IVar1 = (ISplineInterface)
            UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      (this);
    *in_RCX = IVar1;
    return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
            )in_RCX;
  }
  *in_RCX = (ISplineInterface)0x0;
  return (TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>
          )in_RCX;
}

// RegisterSplineTypes @ 1435be7e0

void __thiscall FGeometryCoreModule::RegisterSplineTypes(FGeometryCoreModule *this)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  uint uVar7;
  FString local_58;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  ::FString::FString(&local_48,L"MultiSpline");
  ::FString::FString(&local_58,L"Vector");
  uVar6 = 0x811c9dc5;
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar4.Data = local_58.Data.AllocatorInstance.Data;
  }
  uVar7 = 0x811c9dc5;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  wVar1 = *(wchar_t *)FVar5.Data;
  while (wVar1 != L'\0') {
    FVar5.Data = FVar5.Data + 2;
    uVar7 = ((ushort)wVar1 ^ uVar7) * 0x1000193;
    wVar1 = *(wchar_t *)FVar5.Data;
  }
  wVar1 = *(wchar_t *)FVar4.Data;
  while (wVar1 != L'\0') {
    FVar4.Data = FVar4.Data + 2;
    uVar6 = ((ushort)wVar1 ^ uVar6) * 0x1000193;
    wVar1 = *(wchar_t *)FVar4.Data;
  }
  uVar6 = uVar7 << 0x10 | uVar6 & 0xffff;
  if ((uVar6 != 0x54e3ad22) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3488661381736038359>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\GeometryCoreModule.cpp"
                         ,0x29,"LegacyMultiSplineID == 0x54E3AD22"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_VISplineInterface_Spline_Geometry_UE__U__TDefaultDelete_VISplineInterface_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `FGeometryCoreModule::RegisterSplineTypes'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
                ::Call;
  UE::Geometry::Spline::FSplineTypeRegistry::RegisterType
            (uVar6,&local_48,&local_58,
             (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
              *)local_38);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

