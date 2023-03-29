#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs>
struct Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735;
// System.Action`1<Vpsimage.AvailableAreaResponse>
struct Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29;
// System.Action`1<Solver.CheckResponse>
struct Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4;
// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// System.Action`1<Vpsimage.ImageResponse>
struct Action_1_t2D3C9BD26A7E7218D1B29458189507B68AB1DC83;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>
struct Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB;
// System.Collections.Generic.EqualityComparer`1<Solver.Coordinate>
struct EqualityComparer_1_t878A39BE51D43324ED7E43636550BA108516F896;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
// Google.Protobuf.FieldCodec`1<Solver.Coordinate>
struct FieldCodec_1_tCD2410E5727EFA4A4CC556BB12B1B441E85503A6;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Int64,UnityEngine.Graffity.ARCloud.Pose>
struct Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50;
// System.Collections.Generic.ICollection`1<UnityEngine.Graffity.ARCloud.Pose>
struct ICollection_1_t835C9DC885C6A679B137C8D0C5F6205A6991592F;
// System.Collections.Generic.IEnumerable`1<System.Int64>
struct IEnumerable_1_t8C657FE14F31902C20E001F3F10A922428229A2F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Graffity.ARCloud.Pose>
struct IEnumerable_1_tA8F12BA9C8E676E81F8370558C493A373DF4E3AE;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tDBA96AAC21C7C21D26B68A9F19E6AE4E015D2316;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>
struct KeyCollection_tDAFCA6B6D51C8EF95326403E6E93B67920B53F34;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A;
// System.Collections.Generic.List`1<UnityEngine.Graffity.ARCloud.Pose>
struct List_1_t381AF9ACFD03E4363D5EB0EC6244D03DBA2E797D;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystem>
struct List_1_t1C988AEFF3BCCFEF103EACA601923CD56DBB593C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor>
struct List_1_tB62E7DBB1A743CF013D1542F79F59C2BB105B7AC;
// Google.Protobuf.MessageParser`1<Vpsimage.AvailableAreaRequest>
struct MessageParser_1_t3D9073D4DF41B3AEE38418D140E11297F71BE156;
// Google.Protobuf.MessageParser`1<Vpsimage.AvailableAreaResponse>
struct MessageParser_1_t5844C854AE2BE4EEBDC9324A8F9EA6B9D6B35FCC;
// Google.Protobuf.MessageParser`1<Solver.CheckResponse>
struct MessageParser_1_t14ABC6B6B4E8793F00A0986B37FD4D6819564EA8;
// Google.Protobuf.MessageParser`1<Vpsimage.ColmapCoordinate>
struct MessageParser_1_t678F016DAF94A08D5856F2E79F12BC330878AB6C;
// Google.Protobuf.MessageParser`1<Solver.Empty>
struct MessageParser_1_tC244DE61B4C06607458C97E0958F382719654BCD;
// Google.Protobuf.MessageParser`1<Vpsimage.ImageRequest>
struct MessageParser_1_tAB9C22340F57A906F86DCE179DC5BAD7A5D98134;
// Google.Protobuf.MessageParser`1<Vpsimage.ImageResponse>
struct MessageParser_1_tD4679208F95544EFF6E356BD486D4E3A28B81015;
// Google.Protobuf.MessageParser`1<Vpsimage.Position>
struct MessageParser_1_t94FAD5C425A2FB4B3EBA7B61F1E7A42438F302DE;
// Google.Protobuf.MessageParser`1<Solver.SolveRequest>
struct MessageParser_1_tD36462651A4041936A463C1583640E8D1BACF789;
// Google.Protobuf.MessageParser`1<Solver.SolveResponse>
struct MessageParser_1_tF2729BE2E55D1D3887FB0985F21FCBC2986E57AF;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// Google.Protobuf.Collections.RepeatedField`1<Solver.Coordinate>
struct RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7;
// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9;
// System.Threading.Tasks.TaskFactory`1<Vpsimage.ImageResponse>
struct TaskFactory_1_t7BD6B4C1EEB93D92F3FC83BCA6B6296223244C01;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<UnityEngine.Graffity.ARCloud.SolveTransformation>
struct TaskFactory_1_t89DD1FBC83ADD7AA229197C36C9F1EC7A0F137F2;
// System.Threading.Tasks.Task`1<Vpsimage.AvailableAreaResponse>
struct Task_1_tA3D517520202438EAAED3E01A9FEF70D417CBEB5;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<Vpsimage.ImageResponse>
struct Task_1_t400931BEF248D0789656315BC2B275046563B1B2;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Solver.SolveResponse>
struct Task_1_t6CA038AD86556412E03BB9782104F126BFDFC145;
// System.Threading.Tasks.Task`1<UnityEngine.Graffity.ARCloud.SolveTransformation>
struct Task_1_tA575208D79C57DC22CA17768D44003736616AD67;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>
struct ValueCollection_t44BE2CF05383F06D438A50D5A92BD6C388A6E621;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>[]
struct EntryU5BU5D_tE1E9D361CCFAB76452F021543136B42DF6623535;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// Solver.Coordinate[]
struct CoordinateU5BU5D_t0ADD9A429415CB158B308E51DAA1EADF2B00D4FA;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Graffity.ARCloud.Pose[]
struct PoseU5BU5D_tAC10CE9E608BA0F7284FF2C9AD05AC48D212D075;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.Graffity.ARCloud.ARCloudException
struct ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA;
// UnityEngine.Graffity.ARCloud.ARCloudSession
struct ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Graffity.ARCloud.ApiCredConfig
struct ApiCredConfig_t54CD755981E9C89F23E6F97DE86A258F406F8C43;
// Vpsimage.AvailableAreaRequest
struct AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156;
// Vpsimage.AvailableAreaResponse
struct AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794;
// Google.Protobuf.ByteString
struct ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Vpsimage.CameraInfo
struct CameraInfo_tCB13659A83D6AB9BE64DBDF9AFFC6E01259BE8E4;
// Grpc.Core.Channel
struct Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA;
// Solver.CheckResponse
struct CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895;
// Vpsimage.ColmapCoordinate
struct ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Solver.Empty
struct Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// UnityEngine.Graffity.ARCloud.GrpcClientAvailableArea
struct GrpcClientAvailableArea_t51ED733BD27732977A5B03C8BF3D72BF6BE12C8D;
// UnityEngine.Graffity.ARCloud.GrpcClientImage
struct GrpcClientImage_t1A24ED33890C4048683D6BD6A1A8C9DDA3C3606F;
// UnityEngine.Graffity.ARCloud.GrpcClientSolver
struct GrpcClientSolver_tE33337C3A9DFD1DBA5928B010F13684B05EAC1C3;
// UnityEngine.Graffity.ARCloud.GrpcClientSolverCheck
struct GrpcClientSolverCheck_t74E1CC080FF407D1C6122A0AB71403350BD9AE97;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Google.Protobuf.IMessage
struct IMessage_t9ECCC3E84D1F213AF8837852FA69082DD564B940;
// Vpsimage.ImageRequest
struct ImageRequest_tAA708603C66E39E706697BB63EE4884D0BD80487;
// Vpsimage.ImageResponse
struct ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A;
// UnityEngine.Graffity.ARCloud.LocalizeTask
struct LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1;
// Grpc.Core.Metadata
struct Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Vpsimage.Position
struct Position_t5EFB72224816362168402AE4A20F22140F6E60E1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Solver.SolveRequest
struct SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3;
// Solver.SolveResponse
struct SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C;
// Grpc.Core.SslCredentials
struct SslCredentials_t70CEB9A0802464F4BB5240810E249248CC1C1CD3;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Solver.Transformation
struct Transformation_t82F78E18161DCF88DC0A0E57A2A574B246824157;
// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Graffity.ARCloud.VpsGrpcManager
struct VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23;
// Vpsimage.WorldCoordinate
struct WorldCoordinate_tDB0620E56450791F9C988ABB37CC8A05353F235C;
// UnityEngine.XR.ARSubsystems.XRCameraSubsystem
struct XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c
struct U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855;

IL2CPP_EXTERN_C RuntimeClass* ARCloudConstant_tCFB958CE0A6A3084C3EE9CFDFD8DB99568405D93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HiResDateTime_t691B6949F5355CF8A40D590F45E3644EC9F8B55C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalizeStrategy_t9E9CAE2FB10E44B887A9EEEF90131D6AB1B9930F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AB0AD4A18475A1E300B5E030CA3BC8665919C20;
IL2CPP_EXTERN_C String_t* _stringLiteral13ECEE2B0A7FDF622036A0C91C9B4CBC7B2EEAF6;
IL2CPP_EXTERN_C String_t* _stringLiteral18CF6AC493C19D286170FE5196EAAD5DA86A3FBA;
IL2CPP_EXTERN_C String_t* _stringLiteral55406E2F4EC0C5CBB1F52553660274380E65F6A4;
IL2CPP_EXTERN_C String_t* _stringLiteral74663B51542FC30B5B360D40296102DCD0F7D07D;
IL2CPP_EXTERN_C String_t* _stringLiteral7D114A5DC4560728C8DB574E13F047E4AA2DBAC8;
IL2CPP_EXTERN_C String_t* _stringLiteral9CF04897371BB1F422FED6407E339890E826DE1B;
IL2CPP_EXTERN_C String_t* _stringLiteralAA9446695F33C09817546ABB19229619B279A02B;
IL2CPP_EXTERN_C String_t* _stringLiteralB15B9998F1572316EC36EA072CF46727FAE91BDB;
IL2CPP_EXTERN_C String_t* _stringLiteralC7C785A7C65C5F29E0E97F71CAC51301F420ECF3;
IL2CPP_EXTERN_C String_t* _stringLiteralF6222AC766C9283BAB1A1B290BDF0EBE7C5F9B84;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220_m54A355B5EE9ABD41A6329996FD636DC59AAAD2C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6_m1259FDD3D5A0BF6B56ED84609A895FA2DCACBF89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE_mEDF385DBD05EA5BE5EB042709E4FF13B9230E8B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m19DBC8DE0E1078D248D03DAA10643F2B4B240135_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m730107C98B9097A1A3C0ABD6EC1312208FE00673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m26E420B62B960F380A05F7C010D94F078FBC9AD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mFAF0D9A2DA8E1BFA0BE9C53BC1F87D48471E6FBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9B6DA723374DCBF5F14B54780C00ED5B5E380DDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mA724B261F99C088B0720868C312049EECBF1F40A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043_m4ECB5B90AC4D3BB9B48C097A9FFA004885463F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F_m8A45D8D4BB099EC296496E547F2734FF6CF83099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B_m4043DCC28FC0699905D081206AC2F98F3961E3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEE93B598CA13CF11D72271189BAE99D8FFD47BAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEB0EA2BBE983136F6791C3F0D10CFCC17359D4F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mACA2CB40E87BD03BC4BF723CD26BA39A82883A7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8240DBC024E29AC7826F19DAF31134AC215338A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF80E0A91721EE2D5E90FB4D3C176622AB3DF22AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m0F210E1345E50F25D1159666250DF7D773E829A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mDD91B85F4B5DC8920FD3108B8DADA789E784E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m546EA9831F9C2585CD9897D892429A2138622F29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m634D3F5704F1C810B8409160B31168D38DD6BBFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m673052E6541E6C2BAD15848C5919FA7ABE28E199_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcClientBase_SendGrpcAsync_TisAvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156_m2D7CFA3DF391C1DD18D232D5B996EDABAC12C606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcClientBase_SendGrpcAsync_TisEmpty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD_m68783AA7DD9960C7269F74240D193FF52C5C852E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcClientBase_SendGrpcAsync_TisImageRequest_tAA708603C66E39E706697BB63EE4884D0BD80487_m3EC561AA0763D171F853336771F3B3D5BC1532CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrpcClientBase_SendGrpcAsync_TisSolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3_m37A157D354F9D1E7C75C888A3A5106AE647C65F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m091544127A5F15E5CF46D6AA25BE292CAA2C03A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalizeTask_U3CAddPointU3Eb__19_0_m1A78C62E29D49BD8A72DEAFA229FAE07ECA8815C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalizeTask_U3CAddPointU3Eb__19_1_mB482E1BFA40AE462043747F3EC627FB640B56816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_get_Count_m1941C5017D14256A385D5228C4B0FF5666F82D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m7F22B91191ACFE50AEDDD367567BC507C4654D27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mF58E20C7EB4C001CC19D2325A468521598FB651D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m41062D028F29BBD031ED26F0D3AF61448A09E1C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m81357A2AD4696C6CE7E42ABFC869E59F17B8F296_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m9BD89CA9119167EACC1D3A1EA77DE06744821077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mCE334F7A8E6E9468EFAE0A80355EDAF8AA946829_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRequestSolveAsyncU3Ed__9_MoveNext_mC2FF68F0209B1A9F4D31A0342B939B9AB572F721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CValidateConnectionsU3Eb__7_0_mDEB30B007E304A78F6801D28F6D087FDDBC0358F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CValidateConnectionsU3Eb__7_1_mB203C6C412267B54D577918584A217DA837FED16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CValidateConnectionsU3Eb__7_2_mDFEF542D13ABD2122CB63037F289E0157D529517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CValidateConnectionsU3Eb__7_3_m0D2A608C975D4CAB405FC2466566B81E2B298486_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>
struct Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE1E9D361CCFAB76452F021543136B42DF6623535* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tDAFCA6B6D51C8EF95326403E6E93B67920B53F34* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t44BE2CF05383F06D438A50D5A92BD6C388A6E621* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>
struct KeyCollection_tDAFCA6B6D51C8EF95326403E6E93B67920B53F34  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Int64>
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.Graffity.ARCloud.Pose>
struct List_1_t381AF9ACFD03E4363D5EB0EC6244D03DBA2E797D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PoseU5BU5D_tAC10CE9E608BA0F7284FF2C9AD05AC48D212D075* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Google.Protobuf.Collections.RepeatedField`1<Solver.Coordinate>
struct RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	CoordinateU5BU5D_t0ADD9A429415CB158B308E51DAA1EADF2B00D4FA* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9  : public RuntimeObject
{
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array_3;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_4;
};

// Vpsimage.AvailableAreaRequest
struct AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Vpsimage.AvailableAreaRequest::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// Vpsimage.Position Vpsimage.AvailableAreaRequest::gpsPosition_
	Position_t5EFB72224816362168402AE4A20F22140F6E60E1* ___gpsPosition__3;
	// System.Int32 Vpsimage.AvailableAreaRequest::maxDistance_
	int32_t ___maxDistance__5;
	// System.Int32 Vpsimage.AvailableAreaRequest::minDistance_
	int32_t ___minDistance__7;
};

// Vpsimage.AvailableAreaResponse
struct AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Vpsimage.AvailableAreaResponse::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Vpsimage.AvailableAreaResponse::message_
	String_t* ___message__3;
	// System.Boolean Vpsimage.AvailableAreaResponse::isAvailable_
	bool ___isAvailable__5;
	// Vpsimage.Position Vpsimage.AvailableAreaResponse::gpsPosition_
	Position_t5EFB72224816362168402AE4A20F22140F6E60E1* ___gpsPosition__7;
};

// Solver.CheckResponse
struct CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Solver.CheckResponse::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Solver.CheckResponse::message_
	String_t* ___message__3;
	// System.Boolean Solver.CheckResponse::status_
	bool ___status__5;
};

// Vpsimage.ColmapCoordinate
struct ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Vpsimage.ColmapCoordinate::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Double Vpsimage.ColmapCoordinate::qw_
	double ___qw__3;
	// System.Double Vpsimage.ColmapCoordinate::qx_
	double ___qx__5;
	// System.Double Vpsimage.ColmapCoordinate::qy_
	double ___qy__7;
	// System.Double Vpsimage.ColmapCoordinate::qz_
	double ___qz__9;
	// System.Double Vpsimage.ColmapCoordinate::tx_
	double ___tx__11;
	// System.Double Vpsimage.ColmapCoordinate::ty_
	double ___ty__13;
	// System.Double Vpsimage.ColmapCoordinate::tz_
	double ___tz__15;
	// System.Double Vpsimage.ColmapCoordinate::px_
	double ___px__17;
	// System.Double Vpsimage.ColmapCoordinate::py_
	double ___py__19;
	// System.Double Vpsimage.ColmapCoordinate::pz_
	double ___pz__21;
};

// Solver.Empty
struct Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Solver.Empty::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
};

// UnityEngine.Graffity.ARCloud.GrpcClientBase
struct GrpcClientBase_tF53A37781CE82FB8C6067D316D416E5E88AFC961  : public RuntimeObject
{
	// Grpc.Core.SslCredentials UnityEngine.Graffity.ARCloud.GrpcClientBase::sslCredentials
	SslCredentials_t70CEB9A0802464F4BB5240810E249248CC1C1CD3* ___sslCredentials_0;
	// Grpc.Core.Channel UnityEngine.Graffity.ARCloud.GrpcClientBase::grpcChannel
	Channel_t62B003838F86A69A9AD0937C2572F25CE667BFDA* ___grpcChannel_1;
	// Grpc.Core.Metadata UnityEngine.Graffity.ARCloud.GrpcClientBase::grpcHeader
	Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___grpcHeader_2;
	// System.String UnityEngine.Graffity.ARCloud.GrpcClientBase::host
	String_t* ___host_3;
};

// Vpsimage.ImageRequest
struct ImageRequest_tAA708603C66E39E706697BB63EE4884D0BD80487  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Vpsimage.ImageRequest::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Vpsimage.ImageRequest::message_
	String_t* ___message__3;
	// Google.Protobuf.ByteString Vpsimage.ImageRequest::bytesImage_
	ByteString_t8A201B9CD5DEB1EDE24A5A988934C6A340761592* ___bytesImage__5;
	// Vpsimage.Position Vpsimage.ImageRequest::gpsPosition_
	Position_t5EFB72224816362168402AE4A20F22140F6E60E1* ___gpsPosition__7;
	// Vpsimage.CameraInfo Vpsimage.ImageRequest::cameraInfo_
	CameraInfo_tCB13659A83D6AB9BE64DBDF9AFFC6E01259BE8E4* ___cameraInfo__9;
};

// Vpsimage.ImageResponse
struct ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Vpsimage.ImageResponse::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Vpsimage.ImageResponse::message_
	String_t* ___message__3;
	// System.Single Vpsimage.ImageResponse::accuracy_
	float ___accuracy__5;
	// Vpsimage.WorldCoordinate Vpsimage.ImageResponse::worldCoor_
	WorldCoordinate_tDB0620E56450791F9C988ABB37CC8A05353F235C* ___worldCoor__7;
	// Vpsimage.ColmapCoordinate Vpsimage.ImageResponse::colmapCoor_
	ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* ___colmapCoor__9;
};

// Vpsimage.Position
struct Position_t5EFB72224816362168402AE4A20F22140F6E60E1  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Vpsimage.Position::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.Double Vpsimage.Position::latitude_
	double ___latitude__3;
	// System.Double Vpsimage.Position::longitude_
	double ___longitude__5;
	// System.Double Vpsimage.Position::altitude_
	double ___altitude__7;
};

// Solver.SolveRequest
struct SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Solver.SolveRequest::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Solver.SolveRequest::message_
	String_t* ___message__3;
	// Google.Protobuf.Collections.RepeatedField`1<Solver.Coordinate> Solver.SolveRequest::arCoordinate_
	RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* ___arCoordinate__6;
	// Google.Protobuf.Collections.RepeatedField`1<Solver.Coordinate> Solver.SolveRequest::vpsCoordinate_
	RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* ___vpsCoordinate__9;
	// Solver.Transformation Solver.SolveRequest::refTransform_
	Transformation_t82F78E18161DCF88DC0A0E57A2A574B246824157* ___refTransform__11;
};

// Solver.SolveResponse
struct SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C  : public RuntimeObject
{
	// Google.Protobuf.UnknownFieldSet Solver.SolveResponse::_unknownFields
	UnknownFieldSet_t5ED5C86160FCBB24A3AD04CB9E37F0811D9BFA26* ____unknownFields_1;
	// System.String Solver.SolveResponse::message_
	String_t* ___message__3;
	// Solver.Transformation Solver.SolveResponse::transform_
	Transformation_t82F78E18161DCF88DC0A0E57A2A574B246824157* ___transform__5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.Graffity.ARCloud.VpsGrpcManager
struct VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23  : public RuntimeObject
{
	// UnityEngine.Graffity.ARCloud.GrpcClientAvailableArea UnityEngine.Graffity.ARCloud.VpsGrpcManager::availableAreaClient
	GrpcClientAvailableArea_t51ED733BD27732977A5B03C8BF3D72BF6BE12C8D* ___availableAreaClient_0;
	// UnityEngine.Graffity.ARCloud.GrpcClientImage UnityEngine.Graffity.ARCloud.VpsGrpcManager::imageClient
	GrpcClientImage_t1A24ED33890C4048683D6BD6A1A8C9DDA3C3606F* ___imageClient_1;
	// UnityEngine.Graffity.ARCloud.GrpcClientSolver UnityEngine.Graffity.ARCloud.VpsGrpcManager::solverClient
	GrpcClientSolver_tE33337C3A9DFD1DBA5928B010F13684B05EAC1C3* ___solverClient_2;
	// UnityEngine.Graffity.ARCloud.GrpcClientSolverCheck UnityEngine.Graffity.ARCloud.VpsGrpcManager::solverCheckClient
	GrpcClientSolverCheck_t74E1CC080FF407D1C6122A0AB71403350BD9AE97* ___solverCheckClient_3;
	// UnityEngine.Graffity.ARCloud.ApiCredConfig UnityEngine.Graffity.ARCloud.VpsGrpcManager::apiCredConfig
	ApiCredConfig_t54CD755981E9C89F23E6F97DE86A258F406F8C43* ___apiCredConfig_4;
};

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c
struct U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Vpsimage.ImageResponse>
struct TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t400931BEF248D0789656315BC2B275046563B1B2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Graffity.ARCloud.SolveTransformation>
struct TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA575208D79C57DC22CA17768D44003736616AD67* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Vpsimage.ImageResponse>
struct Task_1_t400931BEF248D0789656315BC2B275046563B1B2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.Graffity.ARCloud.GrpcClientAvailableArea
struct GrpcClientAvailableArea_t51ED733BD27732977A5B03C8BF3D72BF6BE12C8D  : public GrpcClientBase_tF53A37781CE82FB8C6067D316D416E5E88AFC961
{
};

// UnityEngine.Graffity.ARCloud.GrpcClientImage
struct GrpcClientImage_t1A24ED33890C4048683D6BD6A1A8C9DDA3C3606F  : public GrpcClientBase_tF53A37781CE82FB8C6067D316D416E5E88AFC961
{
	// System.Action`1<Vpsimage.ImageResponse> UnityEngine.Graffity.ARCloud.GrpcClientImage::callBackActionReply
	Action_1_t2D3C9BD26A7E7218D1B29458189507B68AB1DC83* ___callBackActionReply_4;
};

// UnityEngine.Graffity.ARCloud.GrpcClientSolver
struct GrpcClientSolver_tE33337C3A9DFD1DBA5928B010F13684B05EAC1C3  : public GrpcClientBase_tF53A37781CE82FB8C6067D316D416E5E88AFC961
{
};

// UnityEngine.Graffity.ARCloud.GrpcClientSolverCheck
struct GrpcClientSolverCheck_t74E1CC080FF407D1C6122A0AB71403350BD9AE97  : public GrpcClientBase_tF53A37781CE82FB8C6067D316D416E5E88AFC961
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Graffity.ARCloud.PositionGps
struct PositionGps_tFB2DA59D84E5433CECBBA039CF1CAB367624A944 
{
	// System.Double UnityEngine.Graffity.ARCloud.PositionGps::Latitude
	double ___Latitude_0;
	// System.Double UnityEngine.Graffity.ARCloud.PositionGps::Longitude
	double ___Longitude_1;
	// System.Double UnityEngine.Graffity.ARCloud.PositionGps::Altitude
	double ___Altitude_2;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Grpc.Core.Status
struct Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642 
{
	// Grpc.Core.StatusCode Grpc.Core.Status::statusCode
	int32_t ___statusCode_2;
	// System.String Grpc.Core.Status::detail
	String_t* ___detail_3;
};
// Native definition for P/Invoke marshalling of Grpc.Core.Status
struct Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642_marshaled_pinvoke
{
	int32_t ___statusCode_2;
	char* ___detail_3;
};
// Native definition for COM marshalling of Grpc.Core.Status
struct Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642_marshaled_com
{
	int32_t ___statusCode_2;
	Il2CppChar* ___detail_3;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Vpsimage.AvailableAreaResponse>
struct AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tA3D517520202438EAAED3E01A9FEF70D417CBEB5* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solver.SolveResponse>
struct AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t6CA038AD86556412E03BB9782104F126BFDFC145* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// UnityEngine.Graffity.ARCloud.ARCloudConstant
struct ARCloudConstant_tCFB958CE0A6A3084C3EE9CFDFD8DB99568405D93  : public RuntimeObject
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Graffity.ARCloud.LocalizeTask
struct LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1  : public RuntimeObject
{
	// UnityEngine.Graffity.ARCloud.LocalizeStrategy UnityEngine.Graffity.ARCloud.LocalizeTask::strategy
	int32_t ___strategy_3;
	// System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair> UnityEngine.Graffity.ARCloud.LocalizeTask::localizeData
	Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* ___localizeData_4;
	// System.Int64 UnityEngine.Graffity.ARCloud.LocalizeTask::_lastKey
	int64_t ____lastKey_5;
	// System.Int32 UnityEngine.Graffity.ARCloud.LocalizeTask::pendingRequestCount
	int32_t ___pendingRequestCount_6;
	// System.Int32 UnityEngine.Graffity.ARCloud.LocalizeTask::requirePoint
	int32_t ___requirePoint_7;
	// UnityEngine.Graffity.ARCloud.LocalizeTaskState UnityEngine.Graffity.ARCloud.LocalizeTask::state
	int32_t ___state_8;
	// UnityEngine.Vector3 UnityEngine.Graffity.ARCloud.LocalizeTask::lastArPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastArPosition_9;
	// UnityEngine.Quaternion UnityEngine.Graffity.ARCloud.LocalizeTask::lastArRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lastArRotation_10;
	// System.String UnityEngine.Graffity.ARCloud.LocalizeTask::solverGuideMessage
	String_t* ___solverGuideMessage_11;
	// System.Int32 UnityEngine.Graffity.ARCloud.LocalizeTask::missPoint
	int32_t ___missPoint_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Graffity.ARCloud.Pose
struct Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 
{
	// UnityEngine.Vector3 UnityEngine.Graffity.ARCloud.Pose::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_0;
	// UnityEngine.Quaternion UnityEngine.Graffity.ARCloud.Pose::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_1;
};

// UnityEngine.Graffity.ARCloud.SolveTransformation
struct SolveTransformation_tE7B6CA4252B48F404EE209AE5825F5B6DBCC7EBA 
{
	// UnityEngine.Vector3 UnityEngine.Graffity.ARCloud.SolveTransformation::Translation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Translation_0;
	// UnityEngine.Vector3 UnityEngine.Graffity.ARCloud.SolveTransformation::Scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Scale_1;
	// UnityEngine.Quaternion UnityEngine.Graffity.ARCloud.SolveTransformation::Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rotation_2;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// System.Threading.Tasks.Task`1<UnityEngine.Graffity.ARCloud.SolveTransformation>
struct Task_1_tA575208D79C57DC22CA17768D44003736616AD67  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	SolveTransformation_tE7B6CA4252B48F404EE209AE5825F5B6DBCC7EBA ___m_result_38;
};

// UnityEngine.Graffity.ARCloud.ARCloudException
struct ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA  : public Exception_t
{
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Graffity.ARCloud.PosePair
struct PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA 
{
	// UnityEngine.Graffity.ARCloud.Pose UnityEngine.Graffity.ARCloud.PosePair::AR
	Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 ___AR_0;
	// UnityEngine.Graffity.ARCloud.Pose UnityEngine.Graffity.ARCloud.PosePair::VPS
	Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 ___VPS_1;
};

// Grpc.Core.RpcException
struct RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72  : public Exception_t
{
	// Grpc.Core.Status Grpc.Core.RpcException::status
	Status_t06BFA824ACD77ABBCF5193ACF5C25E9C4EDF6642 ___status_18;
	// Grpc.Core.Metadata Grpc.Core.RpcException::trailers
	Metadata_tDFD6D82DBE7D557D3971013D7803AA27C8514F06* ___trailers_19;
};

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12
struct U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220 
{
	// System.Int32 UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Vpsimage.AvailableAreaResponse> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12::<>t__builder
	AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3 ___U3CU3Et__builder_1;
	// UnityEngine.Graffity.ARCloud.VpsGrpcManager UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12::<>4__this
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* ___U3CU3E4__this_2;
	// Vpsimage.AvailableAreaRequest UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12::info
	AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* ___info_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12::<>u__1
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA ___U3CU3Eu__1_4;
};

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9
struct U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6 
{
	// System.Int32 UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solver.SolveResponse> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9::<>t__builder
	AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802 ___U3CU3Et__builder_1;
	// Solver.SolveRequest UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9::info
	SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3* ___info_2;
	// UnityEngine.Graffity.ARCloud.VpsGrpcManager UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9::<>4__this
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9::<>u__1
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA ___U3CU3Eu__1_4;
};

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7
struct U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE 
{
	// System.Int32 UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// UnityEngine.Graffity.ARCloud.VpsGrpcManager UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7::<>4__this
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.Action`1<Vpsimage.AvailableAreaResponse>
struct Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29  : public MulticastDelegate_t
{
};

// System.Action`1<Solver.CheckResponse>
struct Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4  : public MulticastDelegate_t
{
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};

// System.Action`1<Vpsimage.ImageResponse>
struct Action_1_t2D3C9BD26A7E7218D1B29458189507B68AB1DC83  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`2<System.Int64,UnityEngine.Graffity.ARCloud.Pose>
struct Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19
struct U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA 
{
	// System.Int32 UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// UnityEngine.Graffity.ARCloud.LocalizeTask UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::<>4__this
	LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* ___U3CU3E4__this_2;
	// UnityEngine.Graffity.ARCloud.Pose UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::arPose
	Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 ___arPose_3;
	// System.Threading.Tasks.Task`1<Vpsimage.ImageResponse> UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::vpsReqTask
	Task_1_t400931BEF248D0789656315BC2B275046563B1B2* ___vpsReqTask_4;
	// System.Int64 UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::<key>5__2
	int64_t ___U3CkeyU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Vpsimage.ImageResponse> UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::<>u__1
	TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72 ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Graffity.ARCloud.SolveTransformation> UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::<>u__2
	TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80 ___U3CU3Eu__2_7;
};

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13
struct U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043 
{
	// System.Int32 UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// UnityEngine.Graffity.ARCloud.VpsGrpcManager UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::<>4__this
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* ___U3CU3E4__this_2;
	// Vpsimage.AvailableAreaRequest UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::info
	AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* ___info_3;
	// System.Action`1<Vpsimage.AvailableAreaResponse> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::onSuccessCb
	Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* ___onSuccessCb_4;
	// System.Action`1<System.Exception> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::onErrorCb
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onErrorCb_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::<>u__1
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA ___U3CU3Eu__1_6;
};

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14
struct U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F 
{
	// System.Int32 UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// UnityEngine.Graffity.ARCloud.VpsGrpcManager UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::<>4__this
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* ___U3CU3E4__this_2;
	// Vpsimage.ImageRequest UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::info
	ImageRequest_tAA708603C66E39E706697BB63EE4884D0BD80487* ___info_3;
	// System.Action`1<Vpsimage.ImageResponse> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::onSuccessCb
	Action_1_t2D3C9BD26A7E7218D1B29458189507B68AB1DC83* ___onSuccessCb_4;
	// System.Action`1<System.Exception> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::onErrorCb
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onErrorCb_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::<>u__1
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA ___U3CU3Eu__1_6;
};

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10
struct U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B 
{
	// System.Int32 UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// UnityEngine.Graffity.ARCloud.VpsGrpcManager UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::<>4__this
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* ___U3CU3E4__this_2;
	// Solver.Empty UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::info
	Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD* ___info_3;
	// System.Action`1<Solver.CheckResponse> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::onSuccessCb
	Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* ___onSuccessCb_4;
	// System.Action`1<System.Exception> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::onErrorCb
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___onErrorCb_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::<>u__1
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA ___U3CU3Eu__1_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRCameraSubsystem,UnityEngine.XR.ARSubsystems.XRCameraSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRCameraSubsystem/Provider>
struct SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRCameraSubsystem_t1F15E4BAEF03223F63AB57E49D1B5DE06749D140* ___U3CsubsystemU3Ek__BackingField_4;
};

// UnityEngine.Graffity.ARCloud.ARCloudSession
struct ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Graffity.ARCloud.ApiCredConfig UnityEngine.Graffity.ARCloud.ARCloudSession::apiCredConfig
	ApiCredConfig_t54CD755981E9C89F23E6F97DE86A258F406F8C43* ___apiCredConfig_5;
	// UnityEngine.Transform UnityEngine.Graffity.ARCloud.ARCloudSession::refPointCloudTf
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___refPointCloudTf_6;
	// UnityEngine.Graffity.ARCloud.ARCloudSessionStatus UnityEngine.Graffity.ARCloud.ARCloudSession::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_7;
	// UnityEngine.Graffity.ARCloud.VpsGrpcManager UnityEngine.Graffity.ARCloud.ARCloudSession::grpcManager
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* ___grpcManager_8;
	// UnityEngine.XR.ARFoundation.ARCameraManager UnityEngine.Graffity.ARCloud.ARCloudSession::cameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___cameraManager_9;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.Graffity.ARCloud.ARCloudSession::arSessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___arSessionOrigin_10;
	// UnityEngine.Graffity.ARCloud.PositionGps UnityEngine.Graffity.ARCloud.ARCloudSession::refModelPositionGps
	PositionGps_tFB2DA59D84E5433CECBBA039CF1CAB367624A944 ___refModelPositionGps_11;
	// Vpsimage.CameraInfo UnityEngine.Graffity.ARCloud.ARCloudSession::cameraInfo
	CameraInfo_tCB13659A83D6AB9BE64DBDF9AFFC6E01259BE8E4* ___cameraInfo_12;
	// UnityEngine.Graffity.ARCloud.LocalizeTask UnityEngine.Graffity.ARCloud.ARCloudSession::currentLocalizeTask
	LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* ___currentLocalizeTask_13;
};

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F  : public SubsystemLifecycleManager_3_t2810F2EBBCBEAEE830830E20CF311EBAD8EA983B
{
	// UnityEngine.XR.ARSubsystems.CameraFocusMode UnityEngine.XR.ARFoundation.ARCameraManager::m_FocusMode
	int32_t ___m_FocusMode_7;
	// UnityEngine.XR.ARSubsystems.LightEstimationMode UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimationMode
	int32_t ___m_LightEstimationMode_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_AutoFocus
	bool ___m_AutoFocus_9;
	// UnityEngine.XR.ARFoundation.LightEstimation UnityEngine.XR.ARFoundation.ARCameraManager::m_LightEstimation
	int32_t ___m_LightEstimation_10;
	// UnityEngine.XR.ARFoundation.CameraFacingDirection UnityEngine.XR.ARFoundation.ARCameraManager::m_FacingDirection
	int32_t ___m_FacingDirection_11;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARCameraFrameEventArgs> UnityEngine.XR.ARFoundation.ARCameraManager::frameReceived
	Action_1_t54327BAFA15E24E002EFAE48D1AFFC020D368735* ___frameReceived_12;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.ARCameraManager::m_TextureInfos
	List_1_tBEE41A3C84ED348850866AD76B66E9D9B19767FF* ___m_TextureInfos_15;
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARCameraManager::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_16;
	// System.Boolean UnityEngine.XR.ARFoundation.ARCameraManager::m_PreRenderInvertCullingValue
	bool ___m_PreRenderInvertCullingValue_17;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.ARCameraManager::m_CameraGrainInfo
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 ___m_CameraGrainInfo_18;
};

// System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>

// System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>

// System.Collections.Generic.List`1<System.Int64>
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int64>

// System.Collections.Generic.List`1<UnityEngine.Graffity.ARCloud.Pose>
struct List_1_t381AF9ACFD03E4363D5EB0EC6244D03DBA2E797D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PoseU5BU5D_tAC10CE9E608BA0F7284FF2C9AD05AC48D212D075* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Graffity.ARCloud.Pose>

// Google.Protobuf.Collections.RepeatedField`1<Solver.Coordinate>
struct RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t878A39BE51D43324ED7E43636550BA108516F896* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	CoordinateU5BU5D_t0ADD9A429415CB158B308E51DAA1EADF2B00D4FA* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<Solver.Coordinate>

// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___EmptyArray_1;
};

// Google.Protobuf.Collections.RepeatedField`1<System.Object>

// Vpsimage.AvailableAreaRequest
struct AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156_StaticFields
{
	// Google.Protobuf.MessageParser`1<Vpsimage.AvailableAreaRequest> Vpsimage.AvailableAreaRequest::_parser
	MessageParser_1_t3D9073D4DF41B3AEE38418D140E11297F71BE156* ____parser_0;
};

// Vpsimage.AvailableAreaRequest

// Vpsimage.AvailableAreaResponse
struct AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794_StaticFields
{
	// Google.Protobuf.MessageParser`1<Vpsimage.AvailableAreaResponse> Vpsimage.AvailableAreaResponse::_parser
	MessageParser_1_t5844C854AE2BE4EEBDC9324A8F9EA6B9D6B35FCC* ____parser_0;
};

// Vpsimage.AvailableAreaResponse

// Solver.CheckResponse
struct CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895_StaticFields
{
	// Google.Protobuf.MessageParser`1<Solver.CheckResponse> Solver.CheckResponse::_parser
	MessageParser_1_t14ABC6B6B4E8793F00A0986B37FD4D6819564EA8* ____parser_0;
};

// Solver.CheckResponse

// Vpsimage.ColmapCoordinate
struct ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13_StaticFields
{
	// Google.Protobuf.MessageParser`1<Vpsimage.ColmapCoordinate> Vpsimage.ColmapCoordinate::_parser
	MessageParser_1_t678F016DAF94A08D5856F2E79F12BC330878AB6C* ____parser_0;
};

// Vpsimage.ColmapCoordinate

// Solver.Empty
struct Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD_StaticFields
{
	// Google.Protobuf.MessageParser`1<Solver.Empty> Solver.Empty::_parser
	MessageParser_1_tC244DE61B4C06607458C97E0958F382719654BCD* ____parser_0;
};

// Solver.Empty

// UnityEngine.Graffity.ARCloud.GrpcClientBase

// UnityEngine.Graffity.ARCloud.GrpcClientBase

// Vpsimage.ImageRequest
struct ImageRequest_tAA708603C66E39E706697BB63EE4884D0BD80487_StaticFields
{
	// Google.Protobuf.MessageParser`1<Vpsimage.ImageRequest> Vpsimage.ImageRequest::_parser
	MessageParser_1_tAB9C22340F57A906F86DCE179DC5BAD7A5D98134* ____parser_0;
};

// Vpsimage.ImageRequest

// Vpsimage.ImageResponse
struct ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A_StaticFields
{
	// Google.Protobuf.MessageParser`1<Vpsimage.ImageResponse> Vpsimage.ImageResponse::_parser
	MessageParser_1_tD4679208F95544EFF6E356BD486D4E3A28B81015* ____parser_0;
};

// Vpsimage.ImageResponse

// Vpsimage.Position
struct Position_t5EFB72224816362168402AE4A20F22140F6E60E1_StaticFields
{
	// Google.Protobuf.MessageParser`1<Vpsimage.Position> Vpsimage.Position::_parser
	MessageParser_1_t94FAD5C425A2FB4B3EBA7B61F1E7A42438F302DE* ____parser_0;
};

// Vpsimage.Position

// Solver.SolveRequest
struct SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3_StaticFields
{
	// Google.Protobuf.MessageParser`1<Solver.SolveRequest> Solver.SolveRequest::_parser
	MessageParser_1_tD36462651A4041936A463C1583640E8D1BACF789* ____parser_0;
	// Google.Protobuf.FieldCodec`1<Solver.Coordinate> Solver.SolveRequest::_repeated_arCoordinate_codec
	FieldCodec_1_tCD2410E5727EFA4A4CC556BB12B1B441E85503A6* ____repeated_arCoordinate_codec_5;
	// Google.Protobuf.FieldCodec`1<Solver.Coordinate> Solver.SolveRequest::_repeated_vpsCoordinate_codec
	FieldCodec_1_tCD2410E5727EFA4A4CC556BB12B1B441E85503A6* ____repeated_vpsCoordinate_codec_8;
};

// Solver.SolveRequest

// Solver.SolveResponse
struct SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C_StaticFields
{
	// Google.Protobuf.MessageParser`1<Solver.SolveResponse> Solver.SolveResponse::_parser
	MessageParser_1_tF2729BE2E55D1D3887FB0985F21FCBC2986E57AF* ____parser_0;
};

// Solver.SolveResponse

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// UnityEngine.Graffity.ARCloud.VpsGrpcManager

// UnityEngine.Graffity.ARCloud.VpsGrpcManager

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c
struct U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields
{
	// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::<>9
	U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* ___U3CU3E9_0;
	// System.Action`1<Vpsimage.AvailableAreaResponse> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::<>9__7_0
	Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* ___U3CU3E9__7_0_1;
	// System.Action`1<System.Exception> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::<>9__7_1
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___U3CU3E9__7_1_2;
	// System.Action`1<Solver.CheckResponse> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::<>9__7_2
	Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* ___U3CU3E9__7_2_3;
	// System.Action`1<System.Exception> UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::<>9__7_3
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___U3CU3E9__7_3_4;
};

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c

// System.Runtime.CompilerServices.TaskAwaiter`1<Vpsimage.ImageResponse>

// System.Runtime.CompilerServices.TaskAwaiter`1<Vpsimage.ImageResponse>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Graffity.ARCloud.SolveTransformation>

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Graffity.ARCloud.SolveTransformation>

// System.Threading.Tasks.Task`1<Vpsimage.ImageResponse>
struct Task_1_t400931BEF248D0789656315BC2B275046563B1B2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7BD6B4C1EEB93D92F3FC83BCA6B6296223244C01* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Vpsimage.ImageResponse>

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// UnityEngine.Graffity.ARCloud.GrpcClientAvailableArea

// UnityEngine.Graffity.ARCloud.GrpcClientAvailableArea

// UnityEngine.Graffity.ARCloud.GrpcClientImage

// UnityEngine.Graffity.ARCloud.GrpcClientImage

// UnityEngine.Graffity.ARCloud.GrpcClientSolver

// UnityEngine.Graffity.ARCloud.GrpcClientSolver

// UnityEngine.Graffity.ARCloud.GrpcClientSolverCheck

// UnityEngine.Graffity.ARCloud.GrpcClientSolverCheck

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Graffity.ARCloud.PositionGps

// UnityEngine.Graffity.ARCloud.PositionGps

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Vpsimage.AvailableAreaResponse>
struct AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tA3D517520202438EAAED3E01A9FEF70D417CBEB5* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Vpsimage.AvailableAreaResponse>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solver.SolveResponse>
struct AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t6CA038AD86556412E03BB9782104F126BFDFC145* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solver.SolveResponse>

// UnityEngine.Graffity.ARCloud.ARCloudConstant
struct ARCloudConstant_tCFB958CE0A6A3084C3EE9CFDFD8DB99568405D93_StaticFields
{
	// UnityEngine.Graffity.ARCloud.PositionGps UnityEngine.Graffity.ARCloud.ARCloudConstant::VALIDATE_CONNECTION_POSITION_GPS
	PositionGps_tFB2DA59D84E5433CECBBA039CF1CAB367624A944 ___VALIDATE_CONNECTION_POSITION_GPS_0;
};

// UnityEngine.Graffity.ARCloud.ARCloudConstant

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Graffity.ARCloud.LocalizeTask

// UnityEngine.Graffity.ARCloud.LocalizeTask

// UnityEngine.Graffity.ARCloud.Pose

// UnityEngine.Graffity.ARCloud.Pose

// UnityEngine.Graffity.ARCloud.SolveTransformation

// UnityEngine.Graffity.ARCloud.SolveTransformation

// System.Threading.Tasks.Task`1<UnityEngine.Graffity.ARCloud.SolveTransformation>
struct Task_1_tA575208D79C57DC22CA17768D44003736616AD67_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t89DD1FBC83ADD7AA229197C36C9F1EC7A0F137F2* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<UnityEngine.Graffity.ARCloud.SolveTransformation>

// UnityEngine.Graffity.ARCloud.ARCloudException

// UnityEngine.Graffity.ARCloud.ARCloudException

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Graffity.ARCloud.PosePair

// UnityEngine.Graffity.ARCloud.PosePair

// Grpc.Core.RpcException

// Grpc.Core.RpcException

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7

// System.Action`1<Vpsimage.AvailableAreaResponse>

// System.Action`1<Vpsimage.AvailableAreaResponse>

// System.Action`1<Solver.CheckResponse>

// System.Action`1<Solver.CheckResponse>

// System.Action`1<System.Exception>

// System.Action`1<System.Exception>

// System.Action`1<Vpsimage.ImageResponse>

// System.Action`1<Vpsimage.ImageResponse>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`2<System.Int64,UnityEngine.Graffity.ARCloud.Pose>

// System.Func`2<System.Int64,UnityEngine.Graffity.ARCloud.Pose>

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19

// UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10

// UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10

// UnityEngine.Graffity.ARCloud.ARCloudSession
struct ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D_StaticFields
{
	// UnityEngine.Graffity.ARCloud.ARCloudSession UnityEngine.Graffity.ARCloud.ARCloudSession::<instance>k__BackingField
	ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D* ___U3CinstanceU3Ek__BackingField_4;
};

// UnityEngine.Graffity.ARCloud.ARCloudSession

// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.ARCameraManager::s_Textures
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ___s_Textures_13;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.ARCameraManager::s_PropertyIds
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_PropertyIds_14;
};

// UnityEngine.XR.ARFoundation.ARCameraManager
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* m_Items[1];

	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE_mEDF385DBD05EA5BE5EB042709E4FF13B9230E8B8_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6_m9837AABBA4F84D7E186AF6718ACECAB2FEE84836_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B_m4043DCC28FC0699905D081206AC2F98F3961E3E1_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220_mF4AF6FF9618F697EB3E510CE6B7F6CA925E665EF_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043_m4ECB5B90AC4D3BB9B48C097A9FFA004885463F51_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F_m8A45D8D4BB099EC296496E547F2734FF6CF83099_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D_gshared (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF80E0A91721EE2D5E90FB4D3C176622AB3DF22AF_gshared (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mACA2CB40E87BD03BC4BF723CD26BA39A82883A7D_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* ___0_stateMachine, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA Dictionary_2_get_Item_m0F210E1345E50F25D1159666250DF7D773E829A9_gshared (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* __this, int64_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_m77AD0FBAAE42DB5E72F0C439C11BE7F2DBC56FCD_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m8240DBC024E29AC7826F19DAF31134AC215338A3_gshared (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* __this, int64_t ___0_key, PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tDAFCA6B6D51C8EF95326403E6E93B67920B53F34* Dictionary_2_get_Keys_mDD91B85F4B5DC8920FD3108B8DADA789E784E802_gshared (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int64>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* Enumerable_ToList_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m634D3F5704F1C810B8409160B31168D38DD6BBFB_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m091544127A5F15E5CF46D6AA25BE292CAA2C03A7_gshared (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Int64,UnityEngine.Graffity.ARCloud.Pose>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m20FE9B74BA9287440CF655FAAB4123525511066C_gshared (Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Int64,UnityEngine.Graffity.ARCloud.Pose>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m546EA9831F9C2585CD9897D892429A2138622F29_gshared (RuntimeObject* ___0_source, Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50* ___1_selector, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.Graffity.ARCloud.Pose>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t381AF9ACFD03E4363D5EB0EC6244D03DBA2E797D* Enumerable_ToList_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m673052E6541E6C2BAD15848C5919FA7ABE28E199_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.Graffity.ARCloud.SolveTransformation>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80 Task_1_GetAwaiter_m9BD89CA9119167EACC1D3A1EA77DE06744821077_gshared (Task_1_tA575208D79C57DC22CA17768D44003736616AD67* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Graffity.ARCloud.SolveTransformation>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m81357A2AD4696C6CE7E42ABFC869E59F17B8F296_gshared (TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Graffity.ARCloud.SolveTransformation>,UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEB0EA2BBE983136F6791C3F0D10CFCC17359D4F0_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80* ___0_awaiter, U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Graffity.ARCloud.SolveTransformation>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SolveTransformation_tE7B6CA4252B48F404EE209AE5825F5B6DBCC7EBA TaskAwaiter_1_GetResult_m7F22B91191ACFE50AEDDD367567BC507C4654D27_gshared (TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01CB1A83779D7AEB5800ACCB885B358E67BB9E1F (U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Vpsimage.AvailableAreaResponse::get_IsAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AvailableAreaResponse_get_IsAvailable_mB71C52035AE046B9A1C13286989625EF30B73EF6_inline (AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graffity.ARCloud.ARCloudException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudException__ctor_m5D0E2B73B6AC547546A2F954FA9B89C994A9C678 (ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Solver.CheckResponse::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CheckResponse_get_Status_m6E5D920D1C2DD4F23A16A2F181FBB659EEB95ABF_inline (CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895* __this, const RuntimeMethod* method) ;
// System.Void Vpsimage.AvailableAreaRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvailableAreaRequest__ctor_mA08DAEAF066A9BA879FF54B732166C5C673D945B (AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* __this, const RuntimeMethod* method) ;
// Vpsimage.Position UnityEngine.Graffity.ARCloud.PositionGps::op_Explicit(UnityEngine.Graffity.ARCloud.PositionGps)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Position_t5EFB72224816362168402AE4A20F22140F6E60E1* PositionGps_op_Explicit_m47068C34BA7411BBE1A63850C9734C052DE0D8A1 (PositionGps_tFB2DA59D84E5433CECBBA039CF1CAB367624A944 ___0_positionGps, const RuntimeMethod* method) ;
// System.Void Vpsimage.AvailableAreaRequest::set_GpsPosition(Vpsimage.Position)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AvailableAreaRequest_set_GpsPosition_mCE63DB26BE89D183E4B3E39191890370CEF8EE03_inline (AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* __this, Position_t5EFB72224816362168402AE4A20F22140F6E60E1* ___0_value, const RuntimeMethod* method) ;
// System.Void Vpsimage.AvailableAreaRequest::set_MinDistance(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AvailableAreaRequest_set_MinDistance_mA401C3C9C95345A1892601F52E45698C24DD8B08_inline (AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Vpsimage.AvailableAreaRequest::set_MaxDistance(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AvailableAreaRequest_set_MaxDistance_m4F51E81C1932545104AAE27B54F24FACEF1479C8_inline (AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<Vpsimage.AvailableAreaResponse>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8EDCF5E4A706C6464CC2AE2A9F96493AD3209D62 (Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task UnityEngine.Graffity.ARCloud.VpsGrpcManager::CheckAvailableAreaAsync(Vpsimage.AvailableAreaRequest,System.Action`1<Vpsimage.AvailableAreaResponse>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* VpsGrpcManager_CheckAvailableAreaAsync_m5CB98BEA1231E10F4FBB15224C6DDEAFF7B9616C (VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* __this, AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* ___0_info, Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* ___1_onSuccessCb, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___2_onErrorCb, const RuntimeMethod* method) ;
// System.Void Solver.Empty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Empty__ctor_m79B19DC9863025E66E4786A506716079E1BDA851 (Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Solver.CheckResponse>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m70273F7EC84C11A50FB8AA17C96C0CE257B7C38D (Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task UnityEngine.Graffity.ARCloud.VpsGrpcManager::SolverStatusCheckAsync(Solver.Empty,System.Action`1<Solver.CheckResponse>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* VpsGrpcManager_SolverStatusCheckAsync_m5ADF285155749FE4272783BEF0AA28B6DB0E5B12 (VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* __this, Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD* ___0_info, Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* ___1_onSuccessCb, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___2_onErrorCb, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Threading.Tasks.Task[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_WhenAll_mF5EC0950A443287DF9B67B00EF56977149429342 (TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* ___0_tasks, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE_mEDF385DBD05EA5BE5EB042709E4FF13B9230E8B8 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE_mEDF385DBD05EA5BE5EB042709E4FF13B9230E8B8_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___0_result, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValidateConnectionsU3Ed__7_MoveNext_m139C4C00E0666CCAA2871CEC5173B35AAEC8B11F (U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared)(__this, ___0_stateMachine, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValidateConnectionsU3Ed__7_SetStateMachine_m47D097B7BC8E65A5DDD693F35A5A926E347D74B0 (U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// Google.Protobuf.Collections.RepeatedField`1<Solver.Coordinate> Solver.SolveRequest::get_ArCoordinate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* SolveRequest_get_ArCoordinate_mDEC9A51BA9147086DEDBA435DDEE4FB0A7E61801_inline (SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3* __this, const RuntimeMethod* method) ;
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Solver.Coordinate>::get_Count()
inline int32_t RepeatedField_1_get_Count_m1941C5017D14256A385D5228C4B0FF5666F82D93_inline (RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7*, const RuntimeMethod*))RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline)(__this, method);
}
// Google.Protobuf.Collections.RepeatedField`1<Solver.Coordinate> Solver.SolveRequest::get_VpsCoordinate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* SolveRequest_get_VpsCoordinate_m18DFB991C35957E300F7173B7BCA5DAA21A57E7F_inline (SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
inline TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54 (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solver.SolveResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6_m1259FDD3D5A0BF6B56ED84609A895FA2DCACBF89 (AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802*, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6_m9837AABBA4F84D7E186AF6718ACECAB2FEE84836_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solver.SolveResponse>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m19DBC8DE0E1078D248D03DAA10643F2B4B240135 (AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solver.SolveResponse>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m26E420B62B960F380A05F7C010D94F078FBC9AD5 (AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802* __this, SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802*, SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestSolveAsyncU3Ed__9_MoveNext_mC2FF68F0209B1A9F4D31A0342B939B9AB572F721 (U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Solver.SolveResponse>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9B6DA723374DCBF5F14B54780C00ED5B5E380DDC (AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestSolveAsyncU3Ed__9_SetStateMachine_m78E9A88980BD057D2466FA2E5921D39D785C6761 (U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B_m4043DCC28FC0699905D081206AC2F98F3961E3E1 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B_m4043DCC28FC0699905D081206AC2F98F3961E3E1_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Action`1<Solver.CheckResponse>::Invoke(T)
inline void Action_1_Invoke_m7FF3A2C22CF935CA82E13EA4400B8B8FCC99378C_inline (Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* __this, CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4*, CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Action`1<System.Exception>::Invoke(T)
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSolverStatusCheckAsyncU3Ed__10_MoveNext_m2219475A793F1E0E0D9DBB85D865F9892DEA7ACB (U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSolverStatusCheckAsyncU3Ed__10_SetStateMachine_m88659672621D86D710AB51ACE5F52B73BE5AD6C7 (U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Vpsimage.AvailableAreaResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220_m54A355B5EE9ABD41A6329996FD636DC59AAAD2C9 (AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3*, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220_mF4AF6FF9618F697EB3E510CE6B7F6CA925E665EF_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Vpsimage.AvailableAreaResponse>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m730107C98B9097A1A3C0ABD6EC1312208FE00673 (AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Vpsimage.AvailableAreaResponse>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mFAF0D9A2DA8E1BFA0BE9C53BC1F87D48471E6FBB (AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3* __this, AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3*, AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailableAreaAsyncU3Ed__12_MoveNext_mEC013B9B8CBB6DBB317DD91BC4C6085D219325D3 (U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Vpsimage.AvailableAreaResponse>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mA724B261F99C088B0720868C312049EECBF1F40A (AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailableAreaAsyncU3Ed__12_SetStateMachine_mA884B31CD465ADB9EEDBBD0C11D51BDA981D68A7 (U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043_m4ECB5B90AC4D3BB9B48C097A9FFA004885463F51 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043_m4ECB5B90AC4D3BB9B48C097A9FFA004885463F51_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Action`1<Vpsimage.AvailableAreaResponse>::Invoke(T)
inline void Action_1_Invoke_mF71BFC07F56214EA7DABFA49CC96AABAB5019D22_inline (Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* __this, AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29*, AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailableAreaAsyncU3Ed__13_MoveNext_m61AC9E8BA09B8C17AA33890C2CF4C2D375A3DE9E (U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailableAreaAsyncU3Ed__13_SetStateMachine_mC651000AA071239F7640D00BA6EC2063452D4D39 (U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F_m8A45D8D4BB099EC296496E547F2734FF6CF83099 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F_m8A45D8D4BB099EC296496E547F2734FF6CF83099_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Action`1<Vpsimage.ImageResponse>::Invoke(T)
inline void Action_1_Invoke_m893A314912C952E7F5F8339E2FD915F7BAAEDC7E_inline (Action_1_t2D3C9BD26A7E7218D1B29458189507B68AB1DC83* __this, ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2D3C9BD26A7E7218D1B29458189507B68AB1DC83*, ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendImageAsyncU3Ed__14_MoveNext_mBF4DDFB0B84CE09AB7845844179EF29A449CE7A1 (U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendImageAsyncU3Ed__14_SetStateMachine_m6E6FA9CA1661DCEFF8432249B07B7BF92BD2D4C7 (U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>::get_Count()
inline int32_t Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB*, const RuntimeMethod*))Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D_gshared)(__this, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>::.ctor()
inline void Dictionary_2__ctor_mF80E0A91721EE2D5E90FB4D3C176622AB3DF22AF (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB*, const RuntimeMethod*))Dictionary_2__ctor_mF80E0A91721EE2D5E90FB4D3C176622AB3DF22AF_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_negativeInfinity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_negativeInfinity_mAE9CF7FAC4027EC241B939EDC4E954C1241799CB_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Graffity.ARCloud.ARCloudSession UnityEngine.Graffity.ARCloud.ARCloudSession::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D* ARCloudSession_get_instance_m6710CBAEEC05142E2DB7A4657218E030CE3B76E6_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mACA2CB40E87BD03BC4BF723CD26BA39A82883A7D (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mACA2CB40E87BD03BC4BF723CD26BA39A82883A7D_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>::get_Item(TKey)
inline PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA Dictionary_2_get_Item_m0F210E1345E50F25D1159666250DF7D773E829A9 (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* __this, int64_t ___0_key, const RuntimeMethod* method)
{
	return ((  PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA (*) (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB*, int64_t, const RuntimeMethod*))Dictionary_2_get_Item_m0F210E1345E50F25D1159666250DF7D773E829A9_gshared)(__this, ___0_key, method);
}
// System.Int64 UnityEngine.Graffity.ARCloud.HiResDateTime::get_UtcNowTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HiResDateTime_get_UtcNowTicks_mA2BE5C6659B7DCB0B74366C887DF26F7EAA0F227 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Vpsimage.ImageResponse>::GetAwaiter()
inline TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72 Task_1_GetAwaiter_mCE334F7A8E6E9468EFAE0A80355EDAF8AA946829 (Task_1_t400931BEF248D0789656315BC2B275046563B1B2* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72 (*) (Task_1_t400931BEF248D0789656315BC2B275046563B1B2*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Vpsimage.ImageResponse>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m41062D028F29BBD031ED26F0D3AF61448A09E1C8 (TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Vpsimage.ImageResponse>,UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEE93B598CA13CF11D72271189BAE99D8FFD47BAB (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72* ___0_awaiter, U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72*, U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_m77AD0FBAAE42DB5E72F0C439C11BE7F2DBC56FCD_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Vpsimage.ImageResponse>::GetResult()
inline ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* TaskAwaiter_1_GetResult_mF58E20C7EB4C001CC19D2325A468521598FB651D (TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72* __this, const RuntimeMethod* method)
{
	return ((  ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* (*) (TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Google.Protobuf.MessageExtensions::IsInitialized(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessageExtensions_IsInitialized_mA64F91B3D7F0825C5A1134447495A459C82D64AA (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Single Vpsimage.ImageResponse::get_Accuracy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ImageResponse_get_Accuracy_mBF8214D53E8AE72579389027FD6AAE2D9C7D5A59_inline (ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* __this, const RuntimeMethod* method) ;
// Vpsimage.ColmapCoordinate Vpsimage.ImageResponse::get_ColmapCoor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* ImageResponse_get_ColmapCoor_mD3E95E8EF1CAB8D0DF892E93CF76239342FE1909_inline (ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* __this, const RuntimeMethod* method) ;
// System.Double Vpsimage.ColmapCoordinate::get_Px()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Px_mCBD155E018B65CB36F3C9CF412CFF50769AC4F2A_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) ;
// System.Double Vpsimage.ColmapCoordinate::get_Py()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Py_m94C6A63A089603CB2FF81E8829BBCCC473728853_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) ;
// System.Double Vpsimage.ColmapCoordinate::get_Pz()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Pz_mEF1009115E92E7ED93CCD9BE6474A47772C8FA5D_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Double Vpsimage.ColmapCoordinate::get_Qx()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Qx_m06A0DAA6F83C64D5DAF5E61950DAAE673454D124_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) ;
// System.Double Vpsimage.ColmapCoordinate::get_Qy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Qy_m5E08B80A6EDDCC0DD1E75A2E480B43A8B772DA39_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) ;
// System.Double Vpsimage.ColmapCoordinate::get_Qz()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Qz_mA1F100FDC96433CBA6C0A0A74D2B22104B436153_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) ;
// System.Double Vpsimage.ColmapCoordinate::get_Qw()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Qw_m0C599A15C8752A0A999F047FF70EAF442396DF17_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8240DBC024E29AC7826F19DAF31134AC215338A3 (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* __this, int64_t ___0_key, PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB*, int64_t, PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA, const RuntimeMethod*))Dictionary_2_Add_m8240DBC024E29AC7826F19DAF31134AC215338A3_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Graffity.ARCloud.PosePair>::get_Keys()
inline KeyCollection_tDAFCA6B6D51C8EF95326403E6E93B67920B53F34* Dictionary_2_get_Keys_mDD91B85F4B5DC8920FD3108B8DADA789E784E802 (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tDAFCA6B6D51C8EF95326403E6E93B67920B53F34* (*) (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB*, const RuntimeMethod*))Dictionary_2_get_Keys_mDD91B85F4B5DC8920FD3108B8DADA789E784E802_gshared)(__this, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int64>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* Enumerable_ToList_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m634D3F5704F1C810B8409160B31168D38DD6BBFB (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m634D3F5704F1C810B8409160B31168D38DD6BBFB_gshared)(___0_source, method);
}
// System.Void System.Collections.Generic.List`1<System.Int64>::Sort()
inline void List_1_Sort_m091544127A5F15E5CF46D6AA25BE292CAA2C03A7 (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A*, const RuntimeMethod*))List_1_Sort_m091544127A5F15E5CF46D6AA25BE292CAA2C03A7_gshared)(__this, method);
}
// System.Void System.Func`2<System.Int64,UnityEngine.Graffity.ARCloud.Pose>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m20FE9B74BA9287440CF655FAAB4123525511066C (Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m20FE9B74BA9287440CF655FAAB4123525511066C_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Int64,UnityEngine.Graffity.ARCloud.Pose>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m546EA9831F9C2585CD9897D892429A2138622F29 (RuntimeObject* ___0_source, Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50*, const RuntimeMethod*))Enumerable_Select_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m546EA9831F9C2585CD9897D892429A2138622F29_gshared)(___0_source, ___1_selector, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.Graffity.ARCloud.Pose>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t381AF9ACFD03E4363D5EB0EC6244D03DBA2E797D* Enumerable_ToList_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m673052E6541E6C2BAD15848C5919FA7ABE28E199 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t381AF9ACFD03E4363D5EB0EC6244D03DBA2E797D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m673052E6541E6C2BAD15848C5919FA7ABE28E199_gshared)(___0_source, method);
}
// System.Threading.Tasks.Task`1<UnityEngine.Graffity.ARCloud.SolveTransformation> UnityEngine.Graffity.ARCloud.ARCloudSession::RequestSolveTransformationAsync(System.Collections.Generic.ICollection`1<UnityEngine.Graffity.ARCloud.Pose>,System.Collections.Generic.ICollection`1<UnityEngine.Graffity.ARCloud.Pose>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA575208D79C57DC22CA17768D44003736616AD67* ARCloudSession_RequestSolveTransformationAsync_mD92029FBE4BAFE246182DC93726D67CFB45A3CC4 (ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D* __this, RuntimeObject* ___0_arPoses, RuntimeObject* ___1_vpsPoses, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<UnityEngine.Graffity.ARCloud.SolveTransformation>::GetAwaiter()
inline TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80 Task_1_GetAwaiter_m9BD89CA9119167EACC1D3A1EA77DE06744821077 (Task_1_tA575208D79C57DC22CA17768D44003736616AD67* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80 (*) (Task_1_tA575208D79C57DC22CA17768D44003736616AD67*, const RuntimeMethod*))Task_1_GetAwaiter_m9BD89CA9119167EACC1D3A1EA77DE06744821077_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Graffity.ARCloud.SolveTransformation>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m81357A2AD4696C6CE7E42ABFC869E59F17B8F296 (TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m81357A2AD4696C6CE7E42ABFC869E59F17B8F296_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Graffity.ARCloud.SolveTransformation>,UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEB0EA2BBE983136F6791C3F0D10CFCC17359D4F0 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80* ___0_awaiter, U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80*, U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEB0EA2BBE983136F6791C3F0D10CFCC17359D4F0_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.Graffity.ARCloud.SolveTransformation>::GetResult()
inline SolveTransformation_tE7B6CA4252B48F404EE209AE5825F5B6DBCC7EBA TaskAwaiter_1_GetResult_m7F22B91191ACFE50AEDDD367567BC507C4654D27 (TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80* __this, const RuntimeMethod* method)
{
	return ((  SolveTransformation_tE7B6CA4252B48F404EE209AE5825F5B6DBCC7EBA (*) (TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80*, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7F22B91191ACFE50AEDDD367567BC507C4654D27_gshared)(__this, method);
}
// System.Void UnityEngine.Graffity.ARCloud.ARCloudSession::AdjustOriginPose(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCloudSession_AdjustOriginPose_m7605EB0336DD061063648BDE3C81D4A95D1F334F (ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_Scale, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_Rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddPointU3Ed__19_MoveNext_m9ED86B7819E77596DBE717F51F82550574E62883 (U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddPointU3Ed__19_SetStateMachine_mF5E6F0178DF78C68B6EB47A1C5262A94EA6166D1 (U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9C55DD3BE478433E5F8BBC46F6CF9749E9768ED9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* L_0 = (U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855*)il2cpp_codegen_object_new(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m01CB1A83779D7AEB5800ACCB885B358E67BB9E1F(L_0, NULL);
		((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m01CB1A83779D7AEB5800ACCB885B358E67BB9E1F (U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::<ValidateConnections>b__7_0(Vpsimage.AvailableAreaResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CValidateConnectionsU3Eb__7_0_mDEB30B007E304A78F6801D28F6D087FDDBC0358F (U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* __this, AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794* ___0_response, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AB0AD4A18475A1E300B5E030CA3BC8665919C20);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!response.IsAvailable)
		AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794* L_0 = ___0_response;
		NullCheck(L_0);
		bool L_1;
		L_1 = AvailableAreaResponse_get_IsAvailable_mB71C52035AE046B9A1C13286989625EF30B73EF6_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ARCloudException("Image server validate response is not valid");
		ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA* L_2 = (ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ARCloudException__ctor_m5D0E2B73B6AC547546A2F954FA9B89C994A9C678(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CF04897371BB1F422FED6407E339890E826DE1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CValidateConnectionsU3Eb__7_0_mDEB30B007E304A78F6801D28F6D087FDDBC0358F_RuntimeMethod_var)));
	}

IL_0013:
	{
		// Debug.Log("Image server validate response is valid");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0AB0AD4A18475A1E300B5E030CA3BC8665919C20, NULL);
		// }, (err) =>
		return;
	}
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::<ValidateConnections>b__7_1(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CValidateConnectionsU3Eb__7_1_mB203C6C412267B54D577918584A217DA837FED16 (U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* __this, Exception_t* ___0_err, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CF04897371BB1F422FED6407E339890E826DE1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Image server validate response is not valid");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9CF04897371BB1F422FED6407E339890E826DE1B, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::<ValidateConnections>b__7_2(Solver.CheckResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CValidateConnectionsU3Eb__7_2_mDFEF542D13ABD2122CB63037F289E0157D529517 (U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* __this, CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895* ___0_response, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6222AC766C9283BAB1A1B290BDF0EBE7C5F9B84);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!response.Status)
		CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895* L_0 = ___0_response;
		NullCheck(L_0);
		bool L_1;
		L_1 = CheckResponse_get_Status_m6E5D920D1C2DD4F23A16A2F181FBB659EEB95ABF_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// throw new ARCloudException("Solver server validate response is not valid");
		ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA* L_2 = (ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ARCloudException__ctor_m5D0E2B73B6AC547546A2F954FA9B89C994A9C678(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA9446695F33C09817546ABB19229619B279A02B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CValidateConnectionsU3Eb__7_2_mDFEF542D13ABD2122CB63037F289E0157D529517_RuntimeMethod_var)));
	}

IL_0013:
	{
		// Debug.Log("Solver server validate response is valid");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF6222AC766C9283BAB1A1B290BDF0EBE7C5F9B84, NULL);
		// }, (err) =>
		return;
	}
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<>c::<ValidateConnections>b__7_3(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CValidateConnectionsU3Eb__7_3_m0D2A608C975D4CAB405FC2466566B81E2B298486 (U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* __this, Exception_t* ___0_err, const RuntimeMethod* method) 
{
	{
		// Debug.Log("Solver server validate response is not valid");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA9446695F33C09817546ABB19229619B279A02B)), NULL);
		// throw new ARCloudException("Solver server validate response is not valid");
		ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA* L_0 = (ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ARCloudException__ctor_m5D0E2B73B6AC547546A2F954FA9B89C994A9C678(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA9446695F33C09817546ABB19229619B279A02B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CValidateConnectionsU3Eb__7_3_m0D2A608C975D4CAB405FC2466566B81E2B298486_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValidateConnectionsU3Ed__7_MoveNext_m139C4C00E0666CCAA2871CEC5173B35AAEC8B11F (U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCloudConstant_tCFB958CE0A6A3084C3EE9CFDFD8DB99568405D93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE_mEDF385DBD05EA5BE5EB042709E4FF13B9230E8B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CValidateConnectionsU3Eb__7_0_mDEB30B007E304A78F6801D28F6D087FDDBC0358F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CValidateConnectionsU3Eb__7_1_mB203C6C412267B54D577918584A217DA837FED16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CValidateConnectionsU3Eb__7_2_mDFEF542D13ABD2122CB63037F289E0157D529517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CValidateConnectionsU3Eb__7_3_m0D2A608C975D4CAB405FC2466566B81E2B298486_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* V_1 = NULL;
	bool V_2 = false;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_3 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_4 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* G_B4_0 = NULL;
	AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* G_B4_1 = NULL;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* G_B4_2 = NULL;
	Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* G_B3_0 = NULL;
	AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* G_B3_1 = NULL;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* G_B3_2 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B6_0 = NULL;
	Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* G_B6_1 = NULL;
	AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* G_B6_2 = NULL;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* G_B6_3 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B5_0 = NULL;
	Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* G_B5_1 = NULL;
	AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* G_B5_2 = NULL;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* G_B5_3 = NULL;
	Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* G_B8_0 = NULL;
	Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD* G_B8_1 = NULL;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* G_B8_2 = NULL;
	Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* G_B7_0 = NULL;
	Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD* G_B7_1 = NULL;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* G_B7_2 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B10_0 = NULL;
	Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* G_B10_1 = NULL;
	Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD* G_B10_2 = NULL;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* G_B10_3 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B9_0 = NULL;
	Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* G_B9_1 = NULL;
	Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD* G_B9_2 = NULL;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* G_B9_3 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00cb_1;
			}
		}
		{
			// var checkImageTask = CheckAvailableAreaAsync(new AvailableAreaRequest()
			//     {
			//         GpsPosition = (Position) VALIDATE_CONNECTION_POSITION_GPS,
			//         MinDistance = 0,
			//         MaxDistance = 500
			//     }, (response) =>
			// {
			//     if (!response.IsAvailable)
			//         throw new ARCloudException("Image server validate response is not valid");
			//     Debug.Log("Image server validate response is valid");
			// }, (err) =>
			//     {
			//         Debug.Log("Image server validate response is not valid");
			//         // throw new ARCloudException("Image server validate response is not valid");
			//     }
			//     );
			VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_3 = V_1;
			AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* L_4 = (AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156*)il2cpp_codegen_object_new(AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			AvailableAreaRequest__ctor_mA08DAEAF066A9BA879FF54B732166C5C673D945B(L_4, NULL);
			AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* L_5 = L_4;
			il2cpp_codegen_runtime_class_init_inline(ARCloudConstant_tCFB958CE0A6A3084C3EE9CFDFD8DB99568405D93_il2cpp_TypeInfo_var);
			PositionGps_tFB2DA59D84E5433CECBBA039CF1CAB367624A944 L_6 = ((ARCloudConstant_tCFB958CE0A6A3084C3EE9CFDFD8DB99568405D93_StaticFields*)il2cpp_codegen_static_fields_for(ARCloudConstant_tCFB958CE0A6A3084C3EE9CFDFD8DB99568405D93_il2cpp_TypeInfo_var))->___VALIDATE_CONNECTION_POSITION_GPS_0;
			Position_t5EFB72224816362168402AE4A20F22140F6E60E1* L_7;
			L_7 = PositionGps_op_Explicit_m47068C34BA7411BBE1A63850C9734C052DE0D8A1(L_6, NULL);
			NullCheck(L_5);
			AvailableAreaRequest_set_GpsPosition_mCE63DB26BE89D183E4B3E39191890370CEF8EE03_inline(L_5, L_7, NULL);
			AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* L_8 = L_5;
			NullCheck(L_8);
			AvailableAreaRequest_set_MinDistance_mA401C3C9C95345A1892601F52E45698C24DD8B08_inline(L_8, 0, NULL);
			AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* L_9 = L_8;
			NullCheck(L_9);
			AvailableAreaRequest_set_MaxDistance_m4F51E81C1932545104AAE27B54F24FACEF1479C8_inline(L_9, ((int32_t)500), NULL);
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
			Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* L_10 = ((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
			Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* L_11 = L_10;
			G_B3_0 = L_11;
			G_B3_1 = L_9;
			G_B3_2 = L_3;
			if (L_11)
			{
				G_B4_0 = L_11;
				G_B4_1 = L_9;
				G_B4_2 = L_3;
				goto IL_005b_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
			U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* L_12 = ((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* L_13 = (Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29*)il2cpp_codegen_object_new(Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29_il2cpp_TypeInfo_var);
			NullCheck(L_13);
			Action_1__ctor_m8EDCF5E4A706C6464CC2AE2A9F96493AD3209D62(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3CValidateConnectionsU3Eb__7_0_mDEB30B007E304A78F6801D28F6D087FDDBC0358F_RuntimeMethod_var), NULL);
			Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* L_14 = L_13;
			((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_14);
			G_B4_0 = L_14;
			G_B4_1 = G_B3_1;
			G_B4_2 = G_B3_2;
		}

IL_005b_1:
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
			Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_15 = ((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2;
			Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_16 = L_15;
			G_B5_0 = L_16;
			G_B5_1 = G_B4_0;
			G_B5_2 = G_B4_1;
			G_B5_3 = G_B4_2;
			if (L_16)
			{
				G_B6_0 = L_16;
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				G_B6_3 = G_B4_2;
				goto IL_007a_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
			U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* L_17 = ((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_18 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)il2cpp_codegen_object_new(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E(L_18, L_17, (intptr_t)((void*)U3CU3Ec_U3CValidateConnectionsU3Eb__7_1_mB203C6C412267B54D577918584A217DA837FED16_RuntimeMethod_var), NULL);
			Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_19 = L_18;
			((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2 = L_19;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_1_2), (void*)L_19);
			G_B6_0 = L_19;
			G_B6_1 = G_B5_1;
			G_B6_2 = G_B5_2;
			G_B6_3 = G_B5_3;
		}

IL_007a_1:
		{
			NullCheck(G_B6_3);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_20;
			L_20 = VpsGrpcManager_CheckAvailableAreaAsync_m5CB98BEA1231E10F4FBB15224C6DDEAFF7B9616C(G_B6_3, G_B6_2, G_B6_1, G_B6_0, NULL);
			V_3 = L_20;
			// var checkSolverTask = SolverStatusCheckAsync(new Empty(),
			//     (response) =>
			//     {
			//         if (!response.Status)
			//             throw new ARCloudException("Solver server validate response is not valid");
			//         Debug.Log("Solver server validate response is valid");
			//     }, (err) =>
			//     {
			//         Debug.Log("Solver server validate response is not valid");
			//         throw new ARCloudException("Solver server validate response is not valid");
			//     });
			VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_21 = V_1;
			Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD* L_22 = (Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD*)il2cpp_codegen_object_new(Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD_il2cpp_TypeInfo_var);
			NullCheck(L_22);
			Empty__ctor_m79B19DC9863025E66E4786A506716079E1BDA851(L_22, NULL);
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
			Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* L_23 = ((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_2_3;
			Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* L_24 = L_23;
			G_B7_0 = L_24;
			G_B7_1 = L_22;
			G_B7_2 = L_21;
			if (L_24)
			{
				G_B8_0 = L_24;
				G_B8_1 = L_22;
				G_B8_2 = L_21;
				goto IL_00a5_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
			U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* L_25 = ((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* L_26 = (Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4*)il2cpp_codegen_object_new(Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4_il2cpp_TypeInfo_var);
			NullCheck(L_26);
			Action_1__ctor_m70273F7EC84C11A50FB8AA17C96C0CE257B7C38D(L_26, L_25, (intptr_t)((void*)U3CU3Ec_U3CValidateConnectionsU3Eb__7_2_mDFEF542D13ABD2122CB63037F289E0157D529517_RuntimeMethod_var), NULL);
			Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* L_27 = L_26;
			((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_2_3 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_2_3), (void*)L_27);
			G_B8_0 = L_27;
			G_B8_1 = G_B7_1;
			G_B8_2 = G_B7_2;
		}

IL_00a5_1:
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
			Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_28 = ((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_3_4;
			Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_29 = L_28;
			G_B9_0 = L_29;
			G_B9_1 = G_B8_0;
			G_B9_2 = G_B8_1;
			G_B9_3 = G_B8_2;
			if (L_29)
			{
				G_B10_0 = L_29;
				G_B10_1 = G_B8_0;
				G_B10_2 = G_B8_1;
				G_B10_3 = G_B8_2;
				goto IL_00c4_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var);
			U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855* L_30 = ((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_31 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)il2cpp_codegen_object_new(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
			NullCheck(L_31);
			Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E(L_31, L_30, (intptr_t)((void*)U3CU3Ec_U3CValidateConnectionsU3Eb__7_3_m0D2A608C975D4CAB405FC2466566B81E2B298486_RuntimeMethod_var), NULL);
			Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_32 = L_31;
			((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_3_4 = L_32;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t10A85B371E06E9453BF5275C6153F515BC815855_il2cpp_TypeInfo_var))->___U3CU3E9__7_3_4), (void*)L_32);
			G_B10_0 = L_32;
			G_B10_1 = G_B9_1;
			G_B10_2 = G_B9_2;
			G_B10_3 = G_B9_3;
		}

IL_00c4_1:
		{
			NullCheck(G_B10_3);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_33;
			L_33 = VpsGrpcManager_SolverStatusCheckAsync_m5ADF285155749FE4272783BEF0AA28B6DB0E5B12(G_B10_3, G_B10_2, G_B10_1, G_B10_0, NULL);
			V_4 = L_33;
		}

IL_00cb_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_34 = V_0;
				if (!L_34)
				{
					goto IL_0114_2;
				}
			}
			{
				// await Task.WhenAll(checkImageTask, checkSolverTask);
				TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_35 = (TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3*)(TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3*)SZArrayNew(TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3_il2cpp_TypeInfo_var, (uint32_t)2);
				TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_36 = L_35;
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_37 = V_3;
				NullCheck(L_36);
				ArrayElementTypeCheck (L_36, L_37);
				(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_37);
				TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* L_38 = L_36;
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_39 = V_4;
				NullCheck(L_38);
				ArrayElementTypeCheck (L_38, L_39);
				(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_39);
				il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_40;
				L_40 = Task_WhenAll_mF5EC0950A443287DF9B67B00EF56977149429342(L_38, NULL);
				NullCheck(L_40);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_41;
				L_41 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_40, NULL);
				V_5 = L_41;
				bool L_42;
				L_42 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_5), NULL);
				if (L_42)
				{
					goto IL_0131_2;
				}
			}
			{
				int32_t L_43 = 0;
				V_0 = L_43;
				__this->___U3CU3E1__state_0 = L_43;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_44 = V_5;
				__this->___U3CU3Eu__1_3 = L_44;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_45 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE_mEDF385DBD05EA5BE5EB042709E4FF13B9230E8B8(L_45, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE_mEDF385DBD05EA5BE5EB042709E4FF13B9230E8B8_RuntimeMethod_var);
				goto IL_016e;
			}

IL_0114_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_46 = __this->___U3CU3Eu__1_3;
				V_5 = L_46;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_47 = (&__this->___U3CU3Eu__1_3);
				il2cpp_codegen_initobj(L_47, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_48 = (-1);
				V_0 = L_48;
				__this->___U3CU3E1__state_0 = L_48;
			}

IL_0131_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_5), NULL);
				// return true;
				V_2 = (bool)1;
				goto IL_015a;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_013c_1;
			}
			throw e;
		}

CATCH_013c_1:
		{// begin catch(System.Exception)
			// catch (Exception e)
			// return false;
			V_2 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_015a;
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0141;
		}
		throw e;
	}

CATCH_0141:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_49 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_50 = V_6;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_49, L_50, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_016e;
	}// end catch (depth: 1)

IL_015a:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_51 = (&__this->___U3CU3Et__builder_1);
		bool L_52 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_51, L_52, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_016e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CValidateConnectionsU3Ed__7_MoveNext_m139C4C00E0666CCAA2871CEC5173B35AAEC8B11F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE*>(__this + _offset);
	U3CValidateConnectionsU3Ed__7_MoveNext_m139C4C00E0666CCAA2871CEC5173B35AAEC8B11F(_thisAdjusted, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<ValidateConnections>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValidateConnectionsU3Ed__7_SetStateMachine_m47D097B7BC8E65A5DDD693F35A5A926E347D74B0 (U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CValidateConnectionsU3Ed__7_SetStateMachine_m47D097B7BC8E65A5DDD693F35A5A926E347D74B0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CValidateConnectionsU3Ed__7_t3752DECA2C3267E289A72EAD9629B79BD7EF31CE*>(__this + _offset);
	U3CValidateConnectionsU3Ed__7_SetStateMachine_m47D097B7BC8E65A5DDD693F35A5A926E347D74B0(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestSolveAsyncU3Ed__9_MoveNext_mC2FF68F0209B1A9F4D31A0342B939B9AB572F721 (U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6_m1259FDD3D5A0BF6B56ED84609A895FA2DCACBF89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m26E420B62B960F380A05F7C010D94F078FBC9AD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcClientBase_SendGrpcAsync_TisSolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3_m37A157D354F9D1E7C75C888A3A5106AE647C65F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatedField_1_get_Count_m1941C5017D14256A385D5228C4B0FF5666F82D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* V_1 = NULL;
	SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C* V_2 = NULL;
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_003e_1;
			}
		}
		{
			// if (info.ArCoordinate.Count != info.VpsCoordinate.Count)
			SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3* L_3 = __this->___info_2;
			NullCheck(L_3);
			RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* L_4;
			L_4 = SolveRequest_get_ArCoordinate_mDEC9A51BA9147086DEDBA435DDEE4FB0A7E61801_inline(L_3, NULL);
			NullCheck(L_4);
			int32_t L_5;
			L_5 = RepeatedField_1_get_Count_m1941C5017D14256A385D5228C4B0FF5666F82D93_inline(L_4, RepeatedField_1_get_Count_m1941C5017D14256A385D5228C4B0FF5666F82D93_RuntimeMethod_var);
			SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3* L_6 = __this->___info_2;
			NullCheck(L_6);
			RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* L_7;
			L_7 = SolveRequest_get_VpsCoordinate_m18DFB991C35957E300F7173B7BCA5DAA21A57E7F_inline(L_6, NULL);
			NullCheck(L_7);
			int32_t L_8;
			L_8 = RepeatedField_1_get_Count_m1941C5017D14256A385D5228C4B0FF5666F82D93_inline(L_7, RepeatedField_1_get_Count_m1941C5017D14256A385D5228C4B0FF5666F82D93_RuntimeMethod_var);
			if ((((int32_t)L_5) == ((int32_t)L_8)))
			{
				goto IL_003e_1;
			}
		}
		{
			// throw new ARCloudException("Length of ArCoordinate points not equal length of VpsCoordinate points");
			ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA* L_9 = (ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARCloudException_t2B57B253242FACB4FD6CA83A4CE47545E11905DA_il2cpp_TypeInfo_var)));
			NullCheck(L_9);
			ARCloudException__ctor_m5D0E2B73B6AC547546A2F954FA9B89C994A9C678(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D114A5DC4560728C8DB574E13F047E4AA2DBAC8)), NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRequestSolveAsyncU3Ed__9_MoveNext_mC2FF68F0209B1A9F4D31A0342B939B9AB572F721_RuntimeMethod_var)));
		}

IL_003e_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_10 = V_0;
				if (!L_10)
				{
					goto IL_0082_2;
				}
			}
			{
				// var res = await solverClient.SendGrpcAsync(info) as SolveResponse;
				VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_11 = V_1;
				NullCheck(L_11);
				GrpcClientSolver_tE33337C3A9DFD1DBA5928B010F13684B05EAC1C3* L_12 = L_11->___solverClient_2;
				SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3* L_13 = __this->___info_2;
				NullCheck(L_12);
				Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_14;
				L_14 = GenericVirtualFuncInvoker1< Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3* >::Invoke(GrpcClientBase_SendGrpcAsync_TisSolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3_m37A157D354F9D1E7C75C888A3A5106AE647C65F4_RuntimeMethod_var, L_12, L_13);
				NullCheck(L_14);
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_15;
				L_15 = Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3(L_14, Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
				V_3 = L_15;
				bool L_16;
				L_16 = TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54((&V_3), TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_009e_2;
				}
			}
			{
				int32_t L_17 = 0;
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_18 = V_3;
				__this->___U3CU3Eu__1_4 = L_18;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802* L_19 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6_m1259FDD3D5A0BF6B56ED84609A895FA2DCACBF89(L_19, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6_m1259FDD3D5A0BF6B56ED84609A895FA2DCACBF89_RuntimeMethod_var);
				goto IL_00e3;
			}

IL_0082_2:
			{
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_20 = __this->___U3CU3Eu__1_4;
				V_3 = L_20;
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* L_21 = (&__this->___U3CU3Eu__1_4);
				il2cpp_codegen_initobj(L_21, sizeof(TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA));
				int32_t L_22 = (-1);
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
			}

IL_009e_2:
			{
				RuntimeObject* L_23;
				L_23 = TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B((&V_3), TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
				// return res;
				V_2 = ((SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C*)IsInstSealed((RuntimeObject*)L_23, SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C_il2cpp_TypeInfo_var));
				goto IL_00cf;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00ad_1;
			}
			throw e;
		}

CATCH_00ad_1:
		{// begin catch(System.Exception)
			// Debug.Log(e);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
			// return null;
			V_2 = (SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00cf;
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b6;
		}
		throw e;
	}

CATCH_00b6:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802* L_24 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_25 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m19DBC8DE0E1078D248D03DAA10643F2B4B240135(L_24, L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m19DBC8DE0E1078D248D03DAA10643F2B4B240135_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e3;
	}// end catch (depth: 1)

IL_00cf:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802* L_26 = (&__this->___U3CU3Et__builder_1);
		SolveResponse_t721E1C08D11D9E57EDAA9D209DA8C52D03FD801C* L_27 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m26E420B62B960F380A05F7C010D94F078FBC9AD5(L_26, L_27, AsyncTaskMethodBuilder_1_SetResult_m26E420B62B960F380A05F7C010D94F078FBC9AD5_RuntimeMethod_var);
	}

IL_00e3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestSolveAsyncU3Ed__9_MoveNext_mC2FF68F0209B1A9F4D31A0342B939B9AB572F721_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6*>(__this + _offset);
	U3CRequestSolveAsyncU3Ed__9_MoveNext_mC2FF68F0209B1A9F4D31A0342B939B9AB572F721(_thisAdjusted, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<RequestSolveAsync>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestSolveAsyncU3Ed__9_SetStateMachine_m78E9A88980BD057D2466FA2E5921D39D785C6761 (U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9B6DA723374DCBF5F14B54780C00ED5B5E380DDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t134646EB8F38BD258DB3F99F5E84C531AA4AE802* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9B6DA723374DCBF5F14B54780C00ED5B5E380DDC(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9B6DA723374DCBF5F14B54780C00ED5B5E380DDC_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestSolveAsyncU3Ed__9_SetStateMachine_m78E9A88980BD057D2466FA2E5921D39D785C6761_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestSolveAsyncU3Ed__9_tA69FCB6051379F0BF2287371481DC263CE28D9F6*>(__this + _offset);
	U3CRequestSolveAsyncU3Ed__9_SetStateMachine_m78E9A88980BD057D2466FA2E5921D39D785C6761(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSolverStatusCheckAsyncU3Ed__10_MoveNext_m2219475A793F1E0E0D9DBB85D865F9892DEA7ACB (U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B_m4043DCC28FC0699905D081206AC2F98F3961E3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcClientBase_SendGrpcAsync_TisEmpty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD_m68783AA7DD9960C7269F74240D193FF52C5C852E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA V_3;
	memset((&V_3), 0, sizeof(V_3));
	RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72* V_4 = NULL;
	Exception_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B9_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B8_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B13_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B12_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0057_2;
				}
			}
			{
				// var response = await solverCheckClient.SendGrpcAsync(info);
				VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_4 = V_1;
				NullCheck(L_4);
				GrpcClientSolverCheck_t74E1CC080FF407D1C6122A0AB71403350BD9AE97* L_5 = L_4->___solverCheckClient_3;
				Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD* L_6 = __this->___info_3;
				NullCheck(L_5);
				Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_7;
				L_7 = GenericVirtualFuncInvoker1< Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, Empty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD* >::Invoke(GrpcClientBase_SendGrpcAsync_TisEmpty_t6B76930A96D99B5B89EE7308F60EAE1D4D20C1DD_m68783AA7DD9960C7269F74240D193FF52C5C852E_RuntimeMethod_var, L_5, L_6);
				NullCheck(L_7);
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_8;
				L_8 = Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3(L_7, Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
				V_3 = L_8;
				bool L_9;
				L_9 = TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54((&V_3), TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0073_2;
				}
			}
			{
				int32_t L_10 = 0;
				V_0 = L_10;
				__this->___U3CU3E1__state_0 = L_10;
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_11 = V_3;
				__this->___U3CU3Eu__1_6 = L_11;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_12 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B_m4043DCC28FC0699905D081206AC2F98F3961E3E1(L_12, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B_m4043DCC28FC0699905D081206AC2F98F3961E3E1_RuntimeMethod_var);
				goto IL_00ea;
			}

IL_0057_2:
			{
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_13 = __this->___U3CU3Eu__1_6;
				V_3 = L_13;
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* L_14 = (&__this->___U3CU3Eu__1_6);
				il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA));
				int32_t L_15 = (-1);
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
			}

IL_0073_2:
			{
				RuntimeObject* L_16;
				L_16 = TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B((&V_3), TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
				V_2 = L_16;
				// onSuccessCb(response as CheckResponse);
				Action_1_t0F5F6411F3B0BA81B40373C7E16DE5530264EBA4* L_17 = __this->___onSuccessCb_4;
				RuntimeObject* L_18 = V_2;
				NullCheck(L_17);
				Action_1_Invoke_m7FF3A2C22CF935CA82E13EA4400B8B8FCC99378C_inline(L_17, ((CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895*)IsInstSealed((RuntimeObject*)L_18, CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895_il2cpp_TypeInfo_var)), NULL);
				// }
				goto IL_00bc_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_008e_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00a5_1;
			}
			throw e;
		}

CATCH_008e_1:
		{// begin catch(Grpc.Core.RpcException)
			{
				// catch (RpcException rpcException)
				V_4 = ((RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72*)IL2CPP_GET_ACTIVE_EXCEPTION(RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72*));
				// onErrorCb?.Invoke(rpcException);
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_19 = __this->___onErrorCb_5;
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_20 = L_19;
				G_B8_0 = L_20;
				if (L_20)
				{
					G_B9_0 = L_20;
					goto IL_009c_1;
				}
			}
			{
				goto IL_00a3_1;
			}

IL_009c_1:
			{
				RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72* L_21 = V_4;
				NullCheck(G_B9_0);
				Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(G_B9_0, L_21, NULL);
			}

IL_00a3_1:
			{
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00bc_1;
			}
		}// end catch (depth: 2)

CATCH_00a5_1:
		{// begin catch(System.Exception)
			{
				// catch (Exception e)
				V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// onErrorCb?.Invoke(e);
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_22 = __this->___onErrorCb_5;
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_23 = L_22;
				G_B12_0 = L_23;
				if (L_23)
				{
					G_B13_0 = L_23;
					goto IL_00b3_1;
				}
			}
			{
				goto IL_00ba_1;
			}

IL_00b3_1:
			{
				Exception_t* L_24 = V_5;
				NullCheck(G_B13_0);
				Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(G_B13_0, L_24, NULL);
			}

IL_00ba_1:
			{
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00bc_1;
			}
		}// end catch (depth: 2)

IL_00bc_1:
		{
			goto IL_00d7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00be;
		}
		throw e;
	}

CATCH_00be:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_25 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_26 = V_6;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ea;
	}// end catch (depth: 1)

IL_00d7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_27, NULL);
	}

IL_00ea:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSolverStatusCheckAsyncU3Ed__10_MoveNext_m2219475A793F1E0E0D9DBB85D865F9892DEA7ACB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B*>(__this + _offset);
	U3CSolverStatusCheckAsyncU3Ed__10_MoveNext_m2219475A793F1E0E0D9DBB85D865F9892DEA7ACB(_thisAdjusted, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SolverStatusCheckAsync>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSolverStatusCheckAsyncU3Ed__10_SetStateMachine_m88659672621D86D710AB51ACE5F52B73BE5AD6C7 (U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSolverStatusCheckAsyncU3Ed__10_SetStateMachine_m88659672621D86D710AB51ACE5F52B73BE5AD6C7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSolverStatusCheckAsyncU3Ed__10_tA4C4FDDEC078F46CC8B0FDF1D40E9365C3ABDB6B*>(__this + _offset);
	U3CSolverStatusCheckAsyncU3Ed__10_SetStateMachine_m88659672621D86D710AB51ACE5F52B73BE5AD6C7(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailableAreaAsyncU3Ed__12_MoveNext_mEC013B9B8CBB6DBB317DD91BC4C6085D219325D3 (U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220_m54A355B5EE9ABD41A6329996FD636DC59AAAD2C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mFAF0D9A2DA8E1BFA0BE9C53BC1F87D48471E6FBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcClientBase_SendGrpcAsync_TisAvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156_m2D7CFA3DF391C1DD18D232D5B996EDABAC12C606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* V_1 = NULL;
	AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794* V_2 = NULL;
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0051_1;
			}
		}
		{
			// var response = await availableAreaClient.SendGrpcAsync(info);
			VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_3 = V_1;
			NullCheck(L_3);
			GrpcClientAvailableArea_t51ED733BD27732977A5B03C8BF3D72BF6BE12C8D* L_4 = L_3->___availableAreaClient_0;
			AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* L_5 = __this->___info_3;
			NullCheck(L_4);
			Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_6;
			L_6 = GenericVirtualFuncInvoker1< Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* >::Invoke(GrpcClientBase_SendGrpcAsync_TisAvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156_m2D7CFA3DF391C1DD18D232D5B996EDABAC12C606_RuntimeMethod_var, L_4, L_5);
			NullCheck(L_6);
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_7;
			L_7 = Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3(L_6, Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
			V_3 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54((&V_3), TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_006d_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_10 = V_3;
			__this->___U3CU3Eu__1_4 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3* L_11 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220_m54A355B5EE9ABD41A6329996FD636DC59AAAD2C9(L_11, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220_m54A355B5EE9ABD41A6329996FD636DC59AAAD2C9_RuntimeMethod_var);
			goto IL_00a9;
		}

IL_0051_1:
		{
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_12 = __this->___U3CU3Eu__1_4;
			V_3 = L_12;
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* L_13 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_006d_1:
		{
			RuntimeObject* L_15;
			L_15 = TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B((&V_3), TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
			// return response as AvailableAreaResponse;
			V_2 = ((AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794*)IsInstSealed((RuntimeObject*)L_15, AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794_il2cpp_TypeInfo_var));
			goto IL_0095;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007c;
		}
		throw e;
	}

CATCH_007c:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m730107C98B9097A1A3C0ABD6EC1312208FE00673(L_16, L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m730107C98B9097A1A3C0ABD6EC1312208FE00673_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a9;
	}// end catch (depth: 1)

IL_0095:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3* L_18 = (&__this->___U3CU3Et__builder_1);
		AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794* L_19 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mFAF0D9A2DA8E1BFA0BE9C53BC1F87D48471E6FBB(L_18, L_19, AsyncTaskMethodBuilder_1_SetResult_mFAF0D9A2DA8E1BFA0BE9C53BC1F87D48471E6FBB_RuntimeMethod_var);
	}

IL_00a9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCheckAvailableAreaAsyncU3Ed__12_MoveNext_mEC013B9B8CBB6DBB317DD91BC4C6085D219325D3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220*>(__this + _offset);
	U3CCheckAvailableAreaAsyncU3Ed__12_MoveNext_mEC013B9B8CBB6DBB317DD91BC4C6085D219325D3(_thisAdjusted, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailableAreaAsyncU3Ed__12_SetStateMachine_mA884B31CD465ADB9EEDBBD0C11D51BDA981D68A7 (U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mA724B261F99C088B0720868C312049EECBF1F40A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t3B12FEB061031A40A73C7E60364A9BDEFFF596D3* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_mA724B261F99C088B0720868C312049EECBF1F40A(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mA724B261F99C088B0720868C312049EECBF1F40A_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCheckAvailableAreaAsyncU3Ed__12_SetStateMachine_mA884B31CD465ADB9EEDBBD0C11D51BDA981D68A7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCheckAvailableAreaAsyncU3Ed__12_t7578E11F437493803C1B6C74CF818CB7C4E39220*>(__this + _offset);
	U3CCheckAvailableAreaAsyncU3Ed__12_SetStateMachine_mA884B31CD465ADB9EEDBBD0C11D51BDA981D68A7(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailableAreaAsyncU3Ed__13_MoveNext_m61AC9E8BA09B8C17AA33890C2CF4C2D375A3DE9E (U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043_m4ECB5B90AC4D3BB9B48C097A9FFA004885463F51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcClientBase_SendGrpcAsync_TisAvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156_m2D7CFA3DF391C1DD18D232D5B996EDABAC12C606_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA V_3;
	memset((&V_3), 0, sizeof(V_3));
	RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72* V_4 = NULL;
	Exception_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B9_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B8_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B13_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B12_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0057_2;
				}
			}
			{
				// var response = await availableAreaClient.SendGrpcAsync(info);
				VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_4 = V_1;
				NullCheck(L_4);
				GrpcClientAvailableArea_t51ED733BD27732977A5B03C8BF3D72BF6BE12C8D* L_5 = L_4->___availableAreaClient_0;
				AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* L_6 = __this->___info_3;
				NullCheck(L_5);
				Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_7;
				L_7 = GenericVirtualFuncInvoker1< Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* >::Invoke(GrpcClientBase_SendGrpcAsync_TisAvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156_m2D7CFA3DF391C1DD18D232D5B996EDABAC12C606_RuntimeMethod_var, L_5, L_6);
				NullCheck(L_7);
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_8;
				L_8 = Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3(L_7, Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
				V_3 = L_8;
				bool L_9;
				L_9 = TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54((&V_3), TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0073_2;
				}
			}
			{
				int32_t L_10 = 0;
				V_0 = L_10;
				__this->___U3CU3E1__state_0 = L_10;
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_11 = V_3;
				__this->___U3CU3Eu__1_6 = L_11;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_12 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043_m4ECB5B90AC4D3BB9B48C097A9FFA004885463F51(L_12, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043_m4ECB5B90AC4D3BB9B48C097A9FFA004885463F51_RuntimeMethod_var);
				goto IL_00ea;
			}

IL_0057_2:
			{
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_13 = __this->___U3CU3Eu__1_6;
				V_3 = L_13;
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* L_14 = (&__this->___U3CU3Eu__1_6);
				il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA));
				int32_t L_15 = (-1);
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
			}

IL_0073_2:
			{
				RuntimeObject* L_16;
				L_16 = TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B((&V_3), TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
				V_2 = L_16;
				// onSuccessCb(response as AvailableAreaResponse);
				Action_1_t421A234A991E379B7E37C6DB9D306211E951DD29* L_17 = __this->___onSuccessCb_4;
				RuntimeObject* L_18 = V_2;
				NullCheck(L_17);
				Action_1_Invoke_mF71BFC07F56214EA7DABFA49CC96AABAB5019D22_inline(L_17, ((AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794*)IsInstSealed((RuntimeObject*)L_18, AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794_il2cpp_TypeInfo_var)), NULL);
				// }
				goto IL_00bc_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_008e_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00a5_1;
			}
			throw e;
		}

CATCH_008e_1:
		{// begin catch(Grpc.Core.RpcException)
			{
				// catch (RpcException rpcException)
				V_4 = ((RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72*)IL2CPP_GET_ACTIVE_EXCEPTION(RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72*));
				// onErrorCb?.Invoke(rpcException);
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_19 = __this->___onErrorCb_5;
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_20 = L_19;
				G_B8_0 = L_20;
				if (L_20)
				{
					G_B9_0 = L_20;
					goto IL_009c_1;
				}
			}
			{
				goto IL_00a3_1;
			}

IL_009c_1:
			{
				RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72* L_21 = V_4;
				NullCheck(G_B9_0);
				Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(G_B9_0, L_21, NULL);
			}

IL_00a3_1:
			{
				// throw;
				IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			}
		}// end catch (depth: 2)

CATCH_00a5_1:
		{// begin catch(System.Exception)
			{
				// catch (Exception e)
				V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// onErrorCb?.Invoke(e);
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_22 = __this->___onErrorCb_5;
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_23 = L_22;
				G_B12_0 = L_23;
				if (L_23)
				{
					G_B13_0 = L_23;
					goto IL_00b3_1;
				}
			}
			{
				goto IL_00ba_1;
			}

IL_00b3_1:
			{
				Exception_t* L_24 = V_5;
				NullCheck(G_B13_0);
				Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(G_B13_0, L_24, NULL);
			}

IL_00ba_1:
			{
				// throw;
				IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			}
		}// end catch (depth: 2)

IL_00bc_1:
		{
			goto IL_00d7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00be;
		}
		throw e;
	}

CATCH_00be:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_25 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_26 = V_6;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ea;
	}// end catch (depth: 1)

IL_00d7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_27, NULL);
	}

IL_00ea:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCheckAvailableAreaAsyncU3Ed__13_MoveNext_m61AC9E8BA09B8C17AA33890C2CF4C2D375A3DE9E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043*>(__this + _offset);
	U3CCheckAvailableAreaAsyncU3Ed__13_MoveNext_m61AC9E8BA09B8C17AA33890C2CF4C2D375A3DE9E(_thisAdjusted, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<CheckAvailableAreaAsync>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckAvailableAreaAsyncU3Ed__13_SetStateMachine_mC651000AA071239F7640D00BA6EC2063452D4D39 (U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CCheckAvailableAreaAsyncU3Ed__13_SetStateMachine_mC651000AA071239F7640D00BA6EC2063452D4D39_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CCheckAvailableAreaAsyncU3Ed__13_tBA6ECD04CFE0B8F093FDB9DB5A0F47BA3597C043*>(__this + _offset);
	U3CCheckAvailableAreaAsyncU3Ed__13_SetStateMachine_mC651000AA071239F7640D00BA6EC2063452D4D39(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendImageAsyncU3Ed__14_MoveNext_mBF4DDFB0B84CE09AB7845844179EF29A449CE7A1 (U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F_m8A45D8D4BB099EC296496E547F2734FF6CF83099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrpcClientBase_SendGrpcAsync_TisImageRequest_tAA708603C66E39E706697BB63EE4884D0BD80487_m3EC561AA0763D171F853336771F3B3D5BC1532CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA V_3;
	memset((&V_3), 0, sizeof(V_3));
	RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72* V_4 = NULL;
	Exception_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B9_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B8_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B13_0 = NULL;
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* G_B12_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_3 = V_0;
				if (!L_3)
				{
					goto IL_0057_2;
				}
			}
			{
				// var response = await imageClient.SendGrpcAsync(info);
				VpsGrpcManager_t35B7AA94CF38F78E961DC0B29C8016915F801B23* L_4 = V_1;
				NullCheck(L_4);
				GrpcClientImage_t1A24ED33890C4048683D6BD6A1A8C9DDA3C3606F* L_5 = L_4->___imageClient_1;
				ImageRequest_tAA708603C66E39E706697BB63EE4884D0BD80487* L_6 = __this->___info_3;
				NullCheck(L_5);
				Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_7;
				L_7 = GenericVirtualFuncInvoker1< Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, ImageRequest_tAA708603C66E39E706697BB63EE4884D0BD80487* >::Invoke(GrpcClientBase_SendGrpcAsync_TisImageRequest_tAA708603C66E39E706697BB63EE4884D0BD80487_m3EC561AA0763D171F853336771F3B3D5BC1532CE_RuntimeMethod_var, L_5, L_6);
				NullCheck(L_7);
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_8;
				L_8 = Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3(L_7, Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
				V_3 = L_8;
				bool L_9;
				L_9 = TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54((&V_3), TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0073_2;
				}
			}
			{
				int32_t L_10 = 0;
				V_0 = L_10;
				__this->___U3CU3E1__state_0 = L_10;
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_11 = V_3;
				__this->___U3CU3Eu__1_6 = L_11;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_12 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F_m8A45D8D4BB099EC296496E547F2734FF6CF83099(L_12, (&V_3), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F_m8A45D8D4BB099EC296496E547F2734FF6CF83099_RuntimeMethod_var);
				goto IL_00ea;
			}

IL_0057_2:
			{
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_13 = __this->___U3CU3Eu__1_6;
				V_3 = L_13;
				TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* L_14 = (&__this->___U3CU3Eu__1_6);
				il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA));
				int32_t L_15 = (-1);
				V_0 = L_15;
				__this->___U3CU3E1__state_0 = L_15;
			}

IL_0073_2:
			{
				RuntimeObject* L_16;
				L_16 = TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B((&V_3), TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
				V_2 = L_16;
				// onSuccessCb(response as ImageResponse);
				Action_1_t2D3C9BD26A7E7218D1B29458189507B68AB1DC83* L_17 = __this->___onSuccessCb_4;
				RuntimeObject* L_18 = V_2;
				NullCheck(L_17);
				Action_1_Invoke_m893A314912C952E7F5F8339E2FD915F7BAAEDC7E_inline(L_17, ((ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A*)IsInstSealed((RuntimeObject*)L_18, ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A_il2cpp_TypeInfo_var)), NULL);
				// }
				goto IL_00bc_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_008e_1;
			}
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00a5_1;
			}
			throw e;
		}

CATCH_008e_1:
		{// begin catch(Grpc.Core.RpcException)
			{
				// catch (RpcException rpcException)
				V_4 = ((RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72*)IL2CPP_GET_ACTIVE_EXCEPTION(RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72*));
				// onErrorCb?.Invoke(rpcException);
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_19 = __this->___onErrorCb_5;
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_20 = L_19;
				G_B8_0 = L_20;
				if (L_20)
				{
					G_B9_0 = L_20;
					goto IL_009c_1;
				}
			}
			{
				goto IL_00a3_1;
			}

IL_009c_1:
			{
				RpcException_tA6335FD6A3ABCA08A5A51D7C3740BFAA176C5A72* L_21 = V_4;
				NullCheck(G_B9_0);
				Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(G_B9_0, L_21, NULL);
			}

IL_00a3_1:
			{
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00bc_1;
			}
		}// end catch (depth: 2)

CATCH_00a5_1:
		{// begin catch(System.Exception)
			{
				// catch (Exception e)
				V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// onErrorCb?.Invoke(e);
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_22 = __this->___onErrorCb_5;
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_23 = L_22;
				G_B12_0 = L_23;
				if (L_23)
				{
					G_B13_0 = L_23;
					goto IL_00b3_1;
				}
			}
			{
				goto IL_00ba_1;
			}

IL_00b3_1:
			{
				Exception_t* L_24 = V_5;
				NullCheck(G_B13_0);
				Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(G_B13_0, L_24, NULL);
			}

IL_00ba_1:
			{
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_00bc_1;
			}
		}// end catch (depth: 2)

IL_00bc_1:
		{
			goto IL_00d7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00be;
		}
		throw e;
	}

CATCH_00be:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_25 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_26 = V_6;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_25, L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ea;
	}// end catch (depth: 1)

IL_00d7:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_27, NULL);
	}

IL_00ea:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendImageAsyncU3Ed__14_MoveNext_mBF4DDFB0B84CE09AB7845844179EF29A449CE7A1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F*>(__this + _offset);
	U3CSendImageAsyncU3Ed__14_MoveNext_mBF4DDFB0B84CE09AB7845844179EF29A449CE7A1(_thisAdjusted, method);
}
// System.Void UnityEngine.Graffity.ARCloud.VpsGrpcManager/<SendImageAsync>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendImageAsyncU3Ed__14_SetStateMachine_m6E6FA9CA1661DCEFF8432249B07B7BF92BD2D4C7 (U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendImageAsyncU3Ed__14_SetStateMachine_m6E6FA9CA1661DCEFF8432249B07B7BF92BD2D4C7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendImageAsyncU3Ed__14_t24BE9F00A89B47EC5A690573F414C506C3955A7F*>(__this + _offset);
	U3CSendImageAsyncU3Ed__14_SetStateMachine_m6E6FA9CA1661DCEFF8432249B07B7BF92BD2D4C7(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Graffity.ARCloud.LocalizeTask::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocalizeTask_get_progress_mBB4C3EE6E851FE061FF017808250F21A067FEE72 (LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float progress => (float)localizeData.Count / requirePoint;
		Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* L_0 = __this->___localizeData_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D(L_0, Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D_RuntimeMethod_var);
		int32_t L_2 = __this->___requirePoint_7;
		return ((float)(((float)L_1)/((float)L_2)));
	}
}
// System.String UnityEngine.Graffity.ARCloud.LocalizeTask::get_progressMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalizeTask_get_progressMessage_m4B5D340FCAD5EF42690CCD3A3EAD5E16D6FB4EA7 (LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizeStrategy_t9E9CAE2FB10E44B887A9EEEF90131D6AB1B9930F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB15B9998F1572316EC36EA072CF46727FAE91BDB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string progressMessage => $"{localizeData.Count} / {requirePoint} : {pendingRequestCount} x {missPoint} || {strategy.ToString()}";
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* L_2 = __this->___localizeData_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D(L_2, Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D_RuntimeMethod_var);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_1;
		int32_t L_7 = __this->___requirePoint_7;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		int32_t L_11 = __this->___pendingRequestCount_6;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		int32_t L_15 = __this->___missPoint_12;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		int32_t* L_19 = (&__this->___strategy_3);
		Il2CppFakeBox<int32_t> L_20(LocalizeStrategy_t9E9CAE2FB10E44B887A9EEEF90131D6AB1B9930F_il2cpp_TypeInfo_var, L_19);
		String_t* L_21;
		L_21 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_20), NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_21);
		String_t* L_22;
		L_22 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralB15B9998F1572316EC36EA072CF46727FAE91BDB, L_18, NULL);
		return L_22;
	}
}
// System.Void UnityEngine.Graffity.ARCloud.LocalizeTask::.ctor(UnityEngine.Graffity.ARCloud.LocalizeStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizeTask__ctor_mDC61B520D02F32C00E7A6A557C4167ED79961A17 (LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* __this, int32_t ___0_strategy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF80E0A91721EE2D5E90FB4D3C176622AB3DF22AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13ECEE2B0A7FDF622036A0C91C9B4CBC7B2EEAF6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LocalizeTask(LocalizeStrategy strategy)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.strategy = strategy;
		int32_t L_0 = ___0_strategy;
		__this->___strategy_3 = L_0;
		// localizeData = new Dictionary<long, PosePair>();
		Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* L_1 = (Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB*)il2cpp_codegen_object_new(Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mF80E0A91721EE2D5E90FB4D3C176622AB3DF22AF(L_1, Dictionary_2__ctor_mF80E0A91721EE2D5E90FB4D3C176622AB3DF22AF_RuntimeMethod_var);
		__this->___localizeData_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizeData_4), (void*)L_1);
		// _lastKey = -1;
		__this->____lastKey_5 = ((int64_t)(-1));
		// pendingRequestCount = 0;
		__this->___pendingRequestCount_6 = 0;
		int32_t L_2 = ___0_strategy;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0053;
			}
			case 3:
			{
				goto IL_005d;
			}
		}
	}
	{
		goto IL_0072;
	}

IL_003f:
	{
		// requirePoint = 10;
		__this->___requirePoint_7 = ((int32_t)10);
		// break;
		goto IL_007a;
	}

IL_0049:
	{
		// requirePoint = 20;
		__this->___requirePoint_7 = ((int32_t)20);
		// break;
		goto IL_007a;
	}

IL_0053:
	{
		// requirePoint = 50;
		__this->___requirePoint_7 = ((int32_t)50);
		// break;
		goto IL_007a;
	}

IL_005d:
	{
		// requirePoint = 10;
		__this->___requirePoint_7 = ((int32_t)10);
		// solverGuideMessage = "ANGLE_SOLVER";
		__this->___solverGuideMessage_11 = _stringLiteral13ECEE2B0A7FDF622036A0C91C9B4CBC7B2EEAF6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___solverGuideMessage_11), (void*)_stringLiteral13ECEE2B0A7FDF622036A0C91C9B4CBC7B2EEAF6);
		// break;
		goto IL_007a;
	}

IL_0072:
	{
		// requirePoint = 10;
		__this->___requirePoint_7 = ((int32_t)10);
	}

IL_007a:
	{
		// this.requirePoint = requirePoint;
		int32_t L_3 = __this->___requirePoint_7;
		__this->___requirePoint_7 = L_3;
		// state = LocalizeTaskState.CollectingPoint;
		__this->___state_8 = 0;
		// lastArPosition = Vector3.negativeInfinity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_negativeInfinity_mAE9CF7FAC4027EC241B939EDC4E954C1241799CB_inline(NULL);
		__this->___lastArPosition_9 = L_4;
		// lastArRotation = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___lastArRotation_10 = L_5;
		// }
		return;
	}
}
// System.Boolean UnityEngine.Graffity.ARCloud.LocalizeTask::ShouldAddPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalizeTask_ShouldAddPoint_m5ABF1491CA25D857678DE572F94D51799EDE1A2D (LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (pendingRequestCount >= MAX_PENDING_REQUEST)
		int32_t L_0 = __this->___pendingRequestCount_6;
		if ((((int32_t)L_0) < ((int32_t)4)))
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// if (lastArPosition == Vector3.negativeInfinity)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___lastArPosition_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_negativeInfinity_mAE9CF7FAC4027EC241B939EDC4E954C1241799CB_inline(NULL);
		bool L_3;
		L_3 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_001f:
	{
		// var arLocalPosition = ARCloudSession.instance.cameraManager.transform.localPosition;
		ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D* L_4;
		L_4 = ARCloudSession_get_instance_m6710CBAEEC05142E2DB7A4657218E030CE3B76E6_inline(NULL);
		NullCheck(L_4);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_5 = L_4->___cameraManager_9;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_6, NULL);
		// var arLocalRotation = ARCloudSession.instance.cameraManager.transform.localRotation;
		ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D* L_8;
		L_8 = ARCloudSession_get_instance_m6710CBAEEC05142E2DB7A4657218E030CE3B76E6_inline(NULL);
		NullCheck(L_8);
		ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* L_9 = L_8->___cameraManager_9;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_10, NULL);
		V_0 = L_11;
		// var localDist = Vector3.Distance(arLocalPosition, lastArPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___lastArPosition_9;
		float L_13;
		L_13 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_7, L_12, NULL);
		// if (localDist >= UPDATE_DISTANCE_THRESH)
		if ((!(((float)L_13) >= ((float)(0.5f)))))
		{
			goto IL_005c;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_005c:
	{
		// if (strategy == LocalizeStrategy.ANGLE_SOLVER)
		int32_t L_14 = __this->___strategy_3;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_007a;
		}
	}
	{
		// var localRotDist = Quaternion.Dot(lastArRotation, arLocalRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = __this->___lastArRotation_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_0;
		float L_17;
		L_17 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_15, L_16, NULL);
		// if (localRotDist >= UPDATE_ROT_THRESH)
		if ((!(((float)L_17) >= ((float)(0.628318548f)))))
		{
			goto IL_007a;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_007a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Threading.Tasks.Task UnityEngine.Graffity.ARCloud.LocalizeTask::AddPoint(UnityEngine.Graffity.ARCloud.Pose,System.Threading.Tasks.Task`1<Vpsimage.ImageResponse>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* LocalizeTask_AddPoint_m8F20F5A8B638B36C3AC91DAEBB04184538FB31C8 (LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* __this, Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 ___0_arPose, Task_1_t400931BEF248D0789656315BC2B275046563B1B2* ___1_vpsReqTask, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mACA2CB40E87BD03BC4BF723CD26BA39A82883A7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 L_1 = ___0_arPose;
		(&V_0)->___arPose_3 = L_1;
		Task_1_t400931BEF248D0789656315BC2B275046563B1B2* L_2 = ___1_vpsReqTask;
		(&V_0)->___vpsReqTask_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___vpsReqTask_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mACA2CB40E87BD03BC4BF723CD26BA39A82883A7D(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mACA2CB40E87BD03BC4BF723CD26BA39A82883A7D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// UnityEngine.Graffity.ARCloud.Pose UnityEngine.Graffity.ARCloud.LocalizeTask::<AddPoint>b__19_0(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 LocalizeTask_U3CAddPointU3Eb__19_0_m1A78C62E29D49BD8A72DEAFA229FAE07ECA8815C (LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* __this, int64_t ___0_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0F210E1345E50F25D1159666250DF7D773E829A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keys.Select(k => localizeData[k].AR).ToList(),
		Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* L_0 = __this->___localizeData_4;
		int64_t L_1 = ___0_k;
		NullCheck(L_0);
		PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA L_2;
		L_2 = Dictionary_2_get_Item_m0F210E1345E50F25D1159666250DF7D773E829A9(L_0, L_1, Dictionary_2_get_Item_m0F210E1345E50F25D1159666250DF7D773E829A9_RuntimeMethod_var);
		Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 L_3 = L_2.___AR_0;
		return L_3;
	}
}
// UnityEngine.Graffity.ARCloud.Pose UnityEngine.Graffity.ARCloud.LocalizeTask::<AddPoint>b__19_1(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 LocalizeTask_U3CAddPointU3Eb__19_1_mB482E1BFA40AE462043747F3EC627FB640B56816 (LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* __this, int64_t ___0_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m0F210E1345E50F25D1159666250DF7D773E829A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// keys.Select(k => localizeData[k].VPS).ToList(),
		Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* L_0 = __this->___localizeData_4;
		int64_t L_1 = ___0_k;
		NullCheck(L_0);
		PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA L_2;
		L_2 = Dictionary_2_get_Item_m0F210E1345E50F25D1159666250DF7D773E829A9(L_0, L_1, Dictionary_2_get_Item_m0F210E1345E50F25D1159666250DF7D773E829A9_RuntimeMethod_var);
		Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 L_3 = L_2.___VPS_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddPointU3Ed__19_MoveNext_m9ED86B7819E77596DBE717F51F82550574E62883 (U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEE93B598CA13CF11D72271189BAE99D8FFD47BAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEB0EA2BBE983136F6791C3F0D10CFCC17359D4F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8240DBC024E29AC7826F19DAF31134AC215338A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mDD91B85F4B5DC8920FD3108B8DADA789E784E802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m546EA9831F9C2585CD9897D892429A2138622F29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m634D3F5704F1C810B8409160B31168D38DD6BBFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m673052E6541E6C2BAD15848C5919FA7ABE28E199_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HiResDateTime_t691B6949F5355CF8A40D590F45E3644EC9F8B55C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m091544127A5F15E5CF46D6AA25BE292CAA2C03A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizeTask_U3CAddPointU3Eb__19_0_m1A78C62E29D49BD8A72DEAFA229FAE07ECA8815C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizeTask_U3CAddPointU3Eb__19_1_mB482E1BFA40AE462043747F3EC627FB640B56816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m7F22B91191ACFE50AEDDD367567BC507C4654D27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mF58E20C7EB4C001CC19D2325A468521598FB651D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m41062D028F29BBD031ED26F0D3AF61448A09E1C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m81357A2AD4696C6CE7E42ABFC869E59F17B8F296_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m9BD89CA9119167EACC1D3A1EA77DE06744821077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mCE334F7A8E6E9468EFAE0A80355EDAF8AA946829_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18CF6AC493C19D286170FE5196EAAD5DA86A3FBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55406E2F4EC0C5CBB1F52553660274380E65F6A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7C785A7C65C5F29E0E97F71CAC51301F420ECF3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* V_1 = NULL;
	ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* V_2 = NULL;
	Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 V_6;
	memset((&V_6), 0, sizeof(V_6));
	PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA V_7;
	memset((&V_7), 0, sizeof(V_7));
	List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* V_8 = NULL;
	SolveTransformation_tE7B6CA4252B48F404EE209AE5825F5B6DBCC7EBA V_9;
	memset((&V_9), 0, sizeof(V_9));
	TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Exception_t* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0045_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_02bf_1;
			}
		}
		{
			// var key = HiResDateTime.UtcNowTicks;
			il2cpp_codegen_runtime_class_init_inline(HiResDateTime_t691B6949F5355CF8A40D590F45E3644EC9F8B55C_il2cpp_TypeInfo_var);
			int64_t L_4;
			L_4 = HiResDateTime_get_UtcNowTicks_mA2BE5C6659B7DCB0B74366C887DF26F7EAA0F227(NULL);
			__this->___U3CkeyU3E5__2_5 = L_4;
			// lastArPosition = arPose.Position;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_5 = V_1;
			Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973* L_6 = (&__this->___arPose_3);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___Position_0;
			NullCheck(L_5);
			L_5->___lastArPosition_9 = L_7;
			// lastArRotation = arPose.Rotation;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_8 = V_1;
			Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973* L_9 = (&__this->___arPose_3);
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = L_9->___Rotation_1;
			NullCheck(L_8);
			L_8->___lastArRotation_10 = L_10;
		}

IL_0045_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00e0_1:
				{// begin finally (depth: 2)
					{
						int32_t L_11 = V_0;
						if ((((int32_t)L_11) >= ((int32_t)0)))
						{
							goto IL_00f2_1;
						}
					}
					{
						// pendingRequestCount -= 1;
						LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_12 = V_1;
						LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_13 = V_1;
						NullCheck(L_13);
						int32_t L_14 = L_13->___pendingRequestCount_6;
						NullCheck(L_12);
						L_12->___pendingRequestCount_6 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
					}

IL_00f2_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				try
				{// begin try (depth: 3)
					{
						int32_t L_15 = V_0;
						if (!L_15)
						{
							goto IL_0091_3;
						}
					}
					{
						// pendingRequestCount += 1;
						LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_16 = V_1;
						LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_17 = V_1;
						NullCheck(L_17);
						int32_t L_18 = L_17->___pendingRequestCount_6;
						NullCheck(L_16);
						L_16->___pendingRequestCount_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
						// response = await vpsReqTask;
						Task_1_t400931BEF248D0789656315BC2B275046563B1B2* L_19 = __this->___vpsReqTask_4;
						NullCheck(L_19);
						TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72 L_20;
						L_20 = Task_1_GetAwaiter_mCE334F7A8E6E9468EFAE0A80355EDAF8AA946829(L_19, Task_1_GetAwaiter_mCE334F7A8E6E9468EFAE0A80355EDAF8AA946829_RuntimeMethod_var);
						V_4 = L_20;
						bool L_21;
						L_21 = TaskAwaiter_1_get_IsCompleted_m41062D028F29BBD031ED26F0D3AF61448A09E1C8((&V_4), TaskAwaiter_1_get_IsCompleted_m41062D028F29BBD031ED26F0D3AF61448A09E1C8_RuntimeMethod_var);
						if (L_21)
						{
							goto IL_00ae_3;
						}
					}
					{
						int32_t L_22 = 0;
						V_0 = L_22;
						__this->___U3CU3E1__state_0 = L_22;
						TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72 L_23 = V_4;
						__this->___U3CU3Eu__1_6 = L_23;
						Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
						AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (&__this->___U3CU3Et__builder_1);
						AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEE93B598CA13CF11D72271189BAE99D8FFD47BAB(L_24, (&V_4), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEE93B598CA13CF11D72271189BAE99D8FFD47BAB_RuntimeMethod_var);
						goto IL_0342;
					}

IL_0091_3:
					{
						TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72 L_25 = __this->___U3CU3Eu__1_6;
						V_4 = L_25;
						TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72* L_26 = (&__this->___U3CU3Eu__1_6);
						il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_t747237776A7EFEFEC599EFF91E6A4BF1D5BA0C72));
						int32_t L_27 = (-1);
						V_0 = L_27;
						__this->___U3CU3E1__state_0 = L_27;
					}

IL_00ae_3:
					{
						ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_28;
						L_28 = TaskAwaiter_1_GetResult_mF58E20C7EB4C001CC19D2325A468521598FB651D((&V_4), TaskAwaiter_1_GetResult_mF58E20C7EB4C001CC19D2325A468521598FB651D_RuntimeMethod_var);
						V_2 = L_28;
						// }
						goto IL_00de_2;
					}
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00b8_2;
					}
					throw e;
				}

CATCH_00b8_2:
				{// begin catch(System.Exception)
					// catch (Exception e)
					V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					// missPoint += 1;
					LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_29 = V_1;
					LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_30 = V_1;
					NullCheck(L_30);
					int32_t L_31 = L_30->___missPoint_12;
					NullCheck(L_29);
					L_29->___missPoint_12 = ((int32_t)il2cpp_codegen_add(L_31, 1));
					// Debug.LogWarning($"miss point exception {e}");
					Exception_t* L_32 = V_5;
					String_t* L_33;
					L_33 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74663B51542FC30B5B360D40296102DCD0F7D07D)), L_32, NULL);
					il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
					Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_33, NULL);
					// return;
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_032f;
				}// end catch (depth: 3)

IL_00de_2:
				{
					goto IL_00f3_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00f3_1:
		{
			// if (response == null)
			ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_34 = V_2;
			if (L_34)
			{
				goto IL_0113_1;
			}
		}
		{
			// Debug.LogWarning("miss point response null");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralC7C785A7C65C5F29E0E97F71CAC51301F420ECF3, NULL);
			// missPoint += 1;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_35 = V_1;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_36 = V_1;
			NullCheck(L_36);
			int32_t L_37 = L_36->___missPoint_12;
			NullCheck(L_35);
			L_35->___missPoint_12 = ((int32_t)il2cpp_codegen_add(L_37, 1));
			// return;
			goto IL_032f;
		}

IL_0113_1:
		{
			// if (!response.IsInitialized())
			ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_38 = V_2;
			bool L_39;
			L_39 = MessageExtensions_IsInitialized_mA64F91B3D7F0825C5A1134447495A459C82D64AA(L_38, NULL);
			if (L_39)
			{
				goto IL_0138_1;
			}
		}
		{
			// Debug.LogWarning("miss point response not initialized");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral55406E2F4EC0C5CBB1F52553660274380E65F6A4, NULL);
			// missPoint += 1;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_40 = V_1;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_41 = V_1;
			NullCheck(L_41);
			int32_t L_42 = L_41->___missPoint_12;
			NullCheck(L_40);
			L_40->___missPoint_12 = ((int32_t)il2cpp_codegen_add(L_42, 1));
			// return;
			goto IL_032f;
		}

IL_0138_1:
		{
			// if (response.Accuracy == 0f)
			ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_43 = V_2;
			NullCheck(L_43);
			float L_44;
			L_44 = ImageResponse_get_Accuracy_mBF8214D53E8AE72579389027FD6AAE2D9C7D5A59_inline(L_43, NULL);
			if ((!(((float)L_44) == ((float)(0.0f)))))
			{
				goto IL_0162_1;
			}
		}
		{
			// Debug.LogWarning("miss point response accuracy 0");
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral18CF6AC493C19D286170FE5196EAAD5DA86A3FBA, NULL);
			// missPoint += 1;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_45 = V_1;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_46 = V_1;
			NullCheck(L_46);
			int32_t L_47 = L_46->___missPoint_12;
			NullCheck(L_45);
			L_45->___missPoint_12 = ((int32_t)il2cpp_codegen_add(L_47, 1));
			// return;
			goto IL_032f;
		}

IL_0162_1:
		{
			// var vpsPose = new Pose()
			// {
			//     Position = new Vector3(
			//         (float)response.ColmapCoor.Px,
			//         (float)response.ColmapCoor.Py,
			//         (float)response.ColmapCoor.Pz),
			//     Rotation = new Quaternion(
			//         (float)response.ColmapCoor.Qx,
			//         (float)response.ColmapCoor.Qy,
			//         (float)response.ColmapCoor.Qz,
			//         (float)response.ColmapCoor.Qw)
			// };
			il2cpp_codegen_initobj((&V_6), sizeof(Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973));
			ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_48 = V_2;
			NullCheck(L_48);
			ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* L_49;
			L_49 = ImageResponse_get_ColmapCoor_mD3E95E8EF1CAB8D0DF892E93CF76239342FE1909_inline(L_48, NULL);
			NullCheck(L_49);
			double L_50;
			L_50 = ColmapCoordinate_get_Px_mCBD155E018B65CB36F3C9CF412CFF50769AC4F2A_inline(L_49, NULL);
			ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_51 = V_2;
			NullCheck(L_51);
			ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* L_52;
			L_52 = ImageResponse_get_ColmapCoor_mD3E95E8EF1CAB8D0DF892E93CF76239342FE1909_inline(L_51, NULL);
			NullCheck(L_52);
			double L_53;
			L_53 = ColmapCoordinate_get_Py_m94C6A63A089603CB2FF81E8829BBCCC473728853_inline(L_52, NULL);
			ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_54 = V_2;
			NullCheck(L_54);
			ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* L_55;
			L_55 = ImageResponse_get_ColmapCoor_mD3E95E8EF1CAB8D0DF892E93CF76239342FE1909_inline(L_54, NULL);
			NullCheck(L_55);
			double L_56;
			L_56 = ColmapCoordinate_get_Pz_mEF1009115E92E7ED93CCD9BE6474A47772C8FA5D_inline(L_55, NULL);
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
			memset((&L_57), 0, sizeof(L_57));
			Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_57), ((float)L_50), ((float)L_53), ((float)L_56), /*hidden argument*/NULL);
			(&V_6)->___Position_0 = L_57;
			ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_58 = V_2;
			NullCheck(L_58);
			ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* L_59;
			L_59 = ImageResponse_get_ColmapCoor_mD3E95E8EF1CAB8D0DF892E93CF76239342FE1909_inline(L_58, NULL);
			NullCheck(L_59);
			double L_60;
			L_60 = ColmapCoordinate_get_Qx_m06A0DAA6F83C64D5DAF5E61950DAAE673454D124_inline(L_59, NULL);
			ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_61 = V_2;
			NullCheck(L_61);
			ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* L_62;
			L_62 = ImageResponse_get_ColmapCoor_mD3E95E8EF1CAB8D0DF892E93CF76239342FE1909_inline(L_61, NULL);
			NullCheck(L_62);
			double L_63;
			L_63 = ColmapCoordinate_get_Qy_m5E08B80A6EDDCC0DD1E75A2E480B43A8B772DA39_inline(L_62, NULL);
			ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_64 = V_2;
			NullCheck(L_64);
			ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* L_65;
			L_65 = ImageResponse_get_ColmapCoor_mD3E95E8EF1CAB8D0DF892E93CF76239342FE1909_inline(L_64, NULL);
			NullCheck(L_65);
			double L_66;
			L_66 = ColmapCoordinate_get_Qz_mA1F100FDC96433CBA6C0A0A74D2B22104B436153_inline(L_65, NULL);
			ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* L_67 = V_2;
			NullCheck(L_67);
			ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* L_68;
			L_68 = ImageResponse_get_ColmapCoor_mD3E95E8EF1CAB8D0DF892E93CF76239342FE1909_inline(L_67, NULL);
			NullCheck(L_68);
			double L_69;
			L_69 = ColmapCoordinate_get_Qw_m0C599A15C8752A0A999F047FF70EAF442396DF17_inline(L_68, NULL);
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
			memset((&L_70), 0, sizeof(L_70));
			Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_70), ((float)L_60), ((float)L_63), ((float)L_66), ((float)L_69), /*hidden argument*/NULL);
			(&V_6)->___Rotation_1 = L_70;
			Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 L_71 = V_6;
			V_3 = L_71;
			// localizeData.Add(key, new PosePair()
			// {
			//     AR = arPose,
			//     VPS = vpsPose
			// });
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_72 = V_1;
			NullCheck(L_72);
			Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* L_73 = L_72->___localizeData_4;
			int64_t L_74 = __this->___U3CkeyU3E5__2_5;
			il2cpp_codegen_initobj((&V_7), sizeof(PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA));
			Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 L_75 = __this->___arPose_3;
			(&V_7)->___AR_0 = L_75;
			Pose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973 L_76 = V_3;
			(&V_7)->___VPS_1 = L_76;
			PosePair_tF57F187CA16D4B11A1965B783FD9D086C2A798BA L_77 = V_7;
			NullCheck(L_73);
			Dictionary_2_Add_m8240DBC024E29AC7826F19DAF31134AC215338A3(L_73, L_74, L_77, Dictionary_2_Add_m8240DBC024E29AC7826F19DAF31134AC215338A3_RuntimeMethod_var);
			// _lastKey = key;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_78 = V_1;
			int64_t L_79 = __this->___U3CkeyU3E5__2_5;
			NullCheck(L_78);
			L_78->____lastKey_5 = L_79;
			// if (localizeData.Count >= requirePoint)
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_80 = V_1;
			NullCheck(L_80);
			Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* L_81 = L_80->___localizeData_4;
			NullCheck(L_81);
			int32_t L_82;
			L_82 = Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D(L_81, Dictionary_2_get_Count_m06C930F9B0D7615AF7410271817A3866B8C7DD9D_RuntimeMethod_var);
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_83 = V_1;
			NullCheck(L_83);
			int32_t L_84 = L_83->___requirePoint_7;
			if ((((int32_t)L_82) < ((int32_t)L_84)))
			{
				goto IL_0314_1;
			}
		}
		{
			// state = LocalizeTaskState.CollectingPointFinish;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_85 = V_1;
			NullCheck(L_85);
			L_85->___state_8 = 1;
			// var keys = localizeData.Keys.ToList();
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_86 = V_1;
			NullCheck(L_86);
			Dictionary_2_t75D659273704F926A632B9C56596FCC902566CBB* L_87 = L_86->___localizeData_4;
			NullCheck(L_87);
			KeyCollection_tDAFCA6B6D51C8EF95326403E6E93B67920B53F34* L_88;
			L_88 = Dictionary_2_get_Keys_mDD91B85F4B5DC8920FD3108B8DADA789E784E802(L_87, Dictionary_2_get_Keys_mDD91B85F4B5DC8920FD3108B8DADA789E784E802_RuntimeMethod_var);
			List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_89;
			L_89 = Enumerable_ToList_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m634D3F5704F1C810B8409160B31168D38DD6BBFB(L_88, Enumerable_ToList_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m634D3F5704F1C810B8409160B31168D38DD6BBFB_RuntimeMethod_var);
			V_8 = L_89;
			// keys.Sort();
			List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_90 = V_8;
			NullCheck(L_90);
			List_1_Sort_m091544127A5F15E5CF46D6AA25BE292CAA2C03A7(L_90, List_1_Sort_m091544127A5F15E5CF46D6AA25BE292CAA2C03A7_RuntimeMethod_var);
			// var solveTf = await ARCloudSession.instance.RequestSolveTransformationAsync(
			//     keys.Select(k => localizeData[k].AR).ToList(),
			//     keys.Select(k => localizeData[k].VPS).ToList(),
			//     solverGuideMessage
			// );
			ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D* L_91;
			L_91 = ARCloudSession_get_instance_m6710CBAEEC05142E2DB7A4657218E030CE3B76E6_inline(NULL);
			List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_92 = V_8;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_93 = V_1;
			Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50* L_94 = (Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50*)il2cpp_codegen_object_new(Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50_il2cpp_TypeInfo_var);
			NullCheck(L_94);
			Func_2__ctor_m20FE9B74BA9287440CF655FAAB4123525511066C(L_94, L_93, (intptr_t)((void*)LocalizeTask_U3CAddPointU3Eb__19_0_m1A78C62E29D49BD8A72DEAFA229FAE07ECA8815C_RuntimeMethod_var), NULL);
			RuntimeObject* L_95;
			L_95 = Enumerable_Select_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m546EA9831F9C2585CD9897D892429A2138622F29(L_92, L_94, Enumerable_Select_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m546EA9831F9C2585CD9897D892429A2138622F29_RuntimeMethod_var);
			List_1_t381AF9ACFD03E4363D5EB0EC6244D03DBA2E797D* L_96;
			L_96 = Enumerable_ToList_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m673052E6541E6C2BAD15848C5919FA7ABE28E199(L_95, Enumerable_ToList_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m673052E6541E6C2BAD15848C5919FA7ABE28E199_RuntimeMethod_var);
			List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_97 = V_8;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_98 = V_1;
			Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50* L_99 = (Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50*)il2cpp_codegen_object_new(Func_2_tB680B76FA78842A55D19DDAF031E69F969E0DB50_il2cpp_TypeInfo_var);
			NullCheck(L_99);
			Func_2__ctor_m20FE9B74BA9287440CF655FAAB4123525511066C(L_99, L_98, (intptr_t)((void*)LocalizeTask_U3CAddPointU3Eb__19_1_mB482E1BFA40AE462043747F3EC627FB640B56816_RuntimeMethod_var), NULL);
			RuntimeObject* L_100;
			L_100 = Enumerable_Select_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m546EA9831F9C2585CD9897D892429A2138622F29(L_97, L_99, Enumerable_Select_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m546EA9831F9C2585CD9897D892429A2138622F29_RuntimeMethod_var);
			List_1_t381AF9ACFD03E4363D5EB0EC6244D03DBA2E797D* L_101;
			L_101 = Enumerable_ToList_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m673052E6541E6C2BAD15848C5919FA7ABE28E199(L_100, Enumerable_ToList_TisPose_t833E97C448E1E52C03FA7EB3FEECA53867E9A973_m673052E6541E6C2BAD15848C5919FA7ABE28E199_RuntimeMethod_var);
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_102 = V_1;
			NullCheck(L_102);
			String_t* L_103 = L_102->___solverGuideMessage_11;
			NullCheck(L_91);
			Task_1_tA575208D79C57DC22CA17768D44003736616AD67* L_104;
			L_104 = ARCloudSession_RequestSolveTransformationAsync_mD92029FBE4BAFE246182DC93726D67CFB45A3CC4(L_91, L_96, L_101, L_103, NULL);
			NullCheck(L_104);
			TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80 L_105;
			L_105 = Task_1_GetAwaiter_m9BD89CA9119167EACC1D3A1EA77DE06744821077(L_104, Task_1_GetAwaiter_m9BD89CA9119167EACC1D3A1EA77DE06744821077_RuntimeMethod_var);
			V_10 = L_105;
			bool L_106;
			L_106 = TaskAwaiter_1_get_IsCompleted_m81357A2AD4696C6CE7E42ABFC869E59F17B8F296((&V_10), TaskAwaiter_1_get_IsCompleted_m81357A2AD4696C6CE7E42ABFC869E59F17B8F296_RuntimeMethod_var);
			if (L_106)
			{
				goto IL_02dc_1;
			}
		}
		{
			int32_t L_107 = 1;
			V_0 = L_107;
			__this->___U3CU3E1__state_0 = L_107;
			TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80 L_108 = V_10;
			__this->___U3CU3Eu__2_7 = L_108;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_109 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEB0EA2BBE983136F6791C3F0D10CFCC17359D4F0(L_109, (&V_10), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80_TisU3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA_mEB0EA2BBE983136F6791C3F0D10CFCC17359D4F0_RuntimeMethod_var);
			goto IL_0342;
		}

IL_02bf_1:
		{
			TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80 L_110 = __this->___U3CU3Eu__2_7;
			V_10 = L_110;
			TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80* L_111 = (&__this->___U3CU3Eu__2_7);
			il2cpp_codegen_initobj(L_111, sizeof(TaskAwaiter_1_t92308ABF76534F588826FD66D28FDD5F847B0C80));
			int32_t L_112 = (-1);
			V_0 = L_112;
			__this->___U3CU3E1__state_0 = L_112;
		}

IL_02dc_1:
		{
			SolveTransformation_tE7B6CA4252B48F404EE209AE5825F5B6DBCC7EBA L_113;
			L_113 = TaskAwaiter_1_GetResult_m7F22B91191ACFE50AEDDD367567BC507C4654D27((&V_10), TaskAwaiter_1_GetResult_m7F22B91191ACFE50AEDDD367567BC507C4654D27_RuntimeMethod_var);
			V_9 = L_113;
			// if (state != LocalizeTaskState.Expire)
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_114 = V_1;
			NullCheck(L_114);
			int32_t L_115 = L_114->___state_8;
			if ((((int32_t)L_115) == ((int32_t)2)))
			{
				goto IL_030d_1;
			}
		}
		{
			// ARCloudSession.instance.AdjustOriginPose(solveTf.Translation, solveTf.Scale, solveTf.Rotation);
			ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D* L_116;
			L_116 = ARCloudSession_get_instance_m6710CBAEEC05142E2DB7A4657218E030CE3B76E6_inline(NULL);
			SolveTransformation_tE7B6CA4252B48F404EE209AE5825F5B6DBCC7EBA L_117 = V_9;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = L_117.___Translation_0;
			SolveTransformation_tE7B6CA4252B48F404EE209AE5825F5B6DBCC7EBA L_119 = V_9;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = L_119.___Scale_1;
			SolveTransformation_tE7B6CA4252B48F404EE209AE5825F5B6DBCC7EBA L_121 = V_9;
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_122 = L_121.___Rotation_2;
			NullCheck(L_116);
			ARCloudSession_AdjustOriginPose_m7605EB0336DD061063648BDE3C81D4A95D1F334F(L_116, L_118, L_120, L_122, NULL);
		}

IL_030d_1:
		{
			// state = LocalizeTaskState.Expire;
			LocalizeTask_t6BF24EB3115681DADFB4442ED06ECF40DE5EB9F1* L_123 = V_1;
			NullCheck(L_123);
			L_123->___state_8 = 2;
		}

IL_0314_1:
		{
			goto IL_032f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0316;
		}
		throw e;
	}

CATCH_0316:
	{// begin catch(System.Exception)
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_124 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_125 = V_11;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_124, L_125, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0342;
	}// end catch (depth: 1)

IL_032f:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_126 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_126, NULL);
	}

IL_0342:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAddPointU3Ed__19_MoveNext_m9ED86B7819E77596DBE717F51F82550574E62883_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA*>(__this + _offset);
	U3CAddPointU3Ed__19_MoveNext_m9ED86B7819E77596DBE717F51F82550574E62883(_thisAdjusted, method);
}
// System.Void UnityEngine.Graffity.ARCloud.LocalizeTask/<AddPoint>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAddPointU3Ed__19_SetStateMachine_mF5E6F0178DF78C68B6EB47A1C5262A94EA6166D1 (U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CAddPointU3Ed__19_SetStateMachine_mF5E6F0178DF78C68B6EB47A1C5262A94EA6166D1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CAddPointU3Ed__19_t9D4D60506785EA69E0326DD01702E8892D373FAA*>(__this + _offset);
	U3CAddPointU3Ed__19_SetStateMachine_mF5E6F0178DF78C68B6EB47A1C5262A94EA6166D1(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AvailableAreaResponse_get_IsAvailable_mB71C52035AE046B9A1C13286989625EF30B73EF6_inline (AvailableAreaResponse_t11E68DE0AE287D0814DF555848F424A71A9A9794* __this, const RuntimeMethod* method) 
{
	{
		// get { return isAvailable_; }
		bool L_0 = __this->___isAvailable__5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CheckResponse_get_Status_m6E5D920D1C2DD4F23A16A2F181FBB659EEB95ABF_inline (CheckResponse_tD3604237E71841394B17B84FD92DBD22A25E3895* __this, const RuntimeMethod* method) 
{
	{
		// get { return status_; }
		bool L_0 = __this->___status__5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AvailableAreaRequest_set_GpsPosition_mCE63DB26BE89D183E4B3E39191890370CEF8EE03_inline (AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* __this, Position_t5EFB72224816362168402AE4A20F22140F6E60E1* ___0_value, const RuntimeMethod* method) 
{
	{
		// gpsPosition_ = value;
		Position_t5EFB72224816362168402AE4A20F22140F6E60E1* L_0 = ___0_value;
		__this->___gpsPosition__3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gpsPosition__3), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AvailableAreaRequest_set_MinDistance_mA401C3C9C95345A1892601F52E45698C24DD8B08_inline (AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// minDistance_ = value;
		int32_t L_0 = ___0_value;
		__this->___minDistance__7 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AvailableAreaRequest_set_MaxDistance_m4F51E81C1932545104AAE27B54F24FACEF1479C8_inline (AvailableAreaRequest_t2CF2F2C47DDB007BAA569C9EEC4A406DBF58A156* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// maxDistance_ = value;
		int32_t L_0 = ___0_value;
		__this->___maxDistance__5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* SolveRequest_get_ArCoordinate_mDEC9A51BA9147086DEDBA435DDEE4FB0A7E61801_inline (SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3* __this, const RuntimeMethod* method) 
{
	{
		// get { return arCoordinate_; }
		RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* L_0 = __this->___arCoordinate__6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* SolveRequest_get_VpsCoordinate_m18DFB991C35957E300F7173B7BCA5DAA21A57E7F_inline (SolveRequest_t48D0BB572322153A19214CBC29D88FCA2BAA9AF3* __this, const RuntimeMethod* method) 
{
	{
		// get { return vpsCoordinate_; }
		RepeatedField_1_t98FC74EBB70B3DBCCE31B0EB23A8C766578947E7* L_0 = __this->___vpsCoordinate__9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_negativeInfinity_mAE9CF7FAC4027EC241B939EDC4E954C1241799CB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___negativeInfinityVector_14;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D* ARCloudSession_get_instance_m6710CBAEEC05142E2DB7A4657218E030CE3B76E6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ARCloudSession instance { get; protected set; }
		ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D* L_0 = ((ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D_StaticFields*)il2cpp_codegen_static_fields_for(ARCloudSession_t8D0DC07EBDA0CDCDD45822038AB538B9F31EA47D_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_a;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_b;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_a;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_b;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ImageResponse_get_Accuracy_mBF8214D53E8AE72579389027FD6AAE2D9C7D5A59_inline (ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* __this, const RuntimeMethod* method) 
{
	{
		// get { return accuracy_; }
		float L_0 = __this->___accuracy__5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* ImageResponse_get_ColmapCoor_mD3E95E8EF1CAB8D0DF892E93CF76239342FE1909_inline (ImageResponse_tB1CF55E639340BC5467D0A3561AACD19A6BEBA1A* __this, const RuntimeMethod* method) 
{
	{
		// get { return colmapCoor_; }
		ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* L_0 = __this->___colmapCoor__9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Px_mCBD155E018B65CB36F3C9CF412CFF50769AC4F2A_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return px_; }
		double L_0 = __this->___px__17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Py_m94C6A63A089603CB2FF81E8829BBCCC473728853_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return py_; }
		double L_0 = __this->___py__19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Pz_mEF1009115E92E7ED93CCD9BE6474A47772C8FA5D_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return pz_; }
		double L_0 = __this->___pz__21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Qx_m06A0DAA6F83C64D5DAF5E61950DAAE673454D124_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return qx_; }
		double L_0 = __this->___qx__5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Qy_m5E08B80A6EDDCC0DD1E75A2E480B43A8B772DA39_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return qy_; }
		double L_0 = __this->___qy__7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Qz_mA1F100FDC96433CBA6C0A0A74D2B22104B436153_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return qz_; }
		double L_0 = __this->___qz__9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ColmapCoordinate_get_Qw_m0C599A15C8752A0A999F047FF70EAF442396DF17_inline (ColmapCoordinate_tAC39B4D5CFF1436510AA924993D891200BCCCD13* __this, const RuntimeMethod* method) 
{
	{
		// get { return qw_; }
		double L_0 = __this->___qw__3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RepeatedField_1_get_Count_m27D2CA123A5BB11C5CB1AB34412C327A00FAB882_gshared_inline (RepeatedField_1_t9D56278C8E96FE81D8E75B66681CE2EAC61C01C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___count_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
